import numpy as np
import pandas as pd


def init_centroids(k, dset):
    '''
    entrega una cantidad de centroides
    (eligiendo puntos aleatorios para comenzar)
    k: numero de centroides
    dset: pandas datafrmae
    '''
    centroids = dset.sample(k)
    return centroids

def rsserr(a,b):
    '''
    a,b son arreglos numpy
    calcula la suma de la diferencia de sus cuadrados
    '''
    return np.sum( (a-b)**2 )

def indexofminimum(a):
    '''
    -> (index, value)
    Retorna el index de un arreglo de numpy a,
    donde se encuentra el minimo, y el valor de ese minimo
    '''
    minimo =  np.amin(a)
    return list(np.where( a == minimo)[0])[0], minimo

def centroid_assignation(dset, centroids):
    '''
    Dado un dataframe y un set de centroides, se asigna
    a cada punto de dset a un centroide
    - dset - pandas dataframe with observations
    - centroids - pandas dataframe with centroids
    '''
    import numpy as np
    import pandas as pd 
    
    k = centroids.shape[0]
    n = dset.shape[0]
    assignation = []
    assign_errors = []

    for obs in range(n):
        # estima el error de cada centroide
        error_array = np.array([])
        for centroid in range(k):
            err = rsserr(centroids.iloc[centroid, :], dset.iloc[obs,:])
            error_array = np.append(error_array, err) #arreglo numpy con error por centroid

        # nr_cntr : nearest centroid
        nr_cntr, nr_cntr_error = indexofminimum( error_array )

        # agrega el valor a la lista correspondiente
        assignation.append(nr_cntr)
        assign_errors.append(nr_cntr_error)

    return assignation, assign_errors

















def kmeans(dset, k=2, tol=1e-4):
    '''
    Implementacion K-Means
    `dset`:  DataFrame with observations
    `k`: number of clusters, default k=2
    `tol`: tolerance=1E-4
    '''
    # Partimos trabajnado con una copia
    working_dset = dset.copy()
    # Variable para mantener el error total de la iteracion
    # señal de loop y counter de iteración
    err = []
    keeploop = True
    j = 0
    
    # Step 2: Initiate clusters by defining centroids 
    centroids = dset.sample(k)

    while(keeploop):
        # Step 3 and 4 - Assign centroids and calculate error
        working_dset['centroid'], j_err = centroid_assignation(working_dset, centroids) 
        err.append(sum(j_err))
        
        # Step 5 - Update centroid position
        centroids = working_dset.groupby('centroid').agg('mean').reset_index(drop = True)

        # Step 6 - Restart the iteration
        if j>0:
            # El error de la iteración acutal es menor? (1E-4)
            if err[j-1]-err[j]<=tol: # se compara a la anterior
                keeploop = False #en el momento en que el error no varia mucho
        j+=1

    working_dset['centroid'], j_err = centroid_assignation(working_dset, centroids)
    centroids = working_dset.groupby('centroid').agg('mean').reset_index(drop = True)
    return working_dset['centroid'], j_err, centroids


