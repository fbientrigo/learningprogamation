import matplotlib.pyplot as plt
import numpy as np
import seaborn as sns
import pandas as pd
from sklearn.linear_model import LinearRegression
df = pd.read_csv('SDSS_notOutliers.csv', index_col=0) # dataframe

'''
count   0
mean    1
std     2
min     3
25%     4
50%     5
75%     6
max     7
'''

print('\subsection{Descripcion de variables.}')
print('A continuacion se presenta la descripcion de cada variable almacenada en la base de datos junto con un resumen estadistico de esta, donde se incluyen en orden los valores: total de datos, promedio, media, moda, desviacion estandar, valor minimo, primer, segundo y tercer percentil, y valor maximo.\n')
for i in df.columns.values:
    if i != 'SDSS':
        des = df[i].describe()
        #print(len(des))
        print('''\subsubsection{''',i,'''}
        \nDESCRIPCION, HACER MATRIZ DE DESCRIPCIONES\n
        \\begin{center}
        \\begin{tabular}{ |c|c|c|c|c| }
        \hline

        count & mean & med & mode & std \\\\
        ''',round(des[0],3) ,''' & ''',round(des[1],3) ,''' & ''', round(df[i][(len(df[i])-1)/2],3),''' & ''',round(df[i].mode()[0],3),''' & ''',round(des[2],3),''' \\\\
        \n\hline
        min & 25\% & 50\% & 75\% & max\\\\
        ''',round(des[3],3) ,''' & ''',round(des[4],3) ,''' & ''',round(des[5],3) ,''' & ''',round(des[6],3) ,''' & ''',round(des[7],3) ,''' \\\\
        \n\hline
        \end{tabular}
        \end{center}''')




