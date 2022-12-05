import matplotlib.pyplot as plt
import numpy as np
import seaborn as sns
import pandas as pd
from sklearn.linear_model import LinearRegression
df = pd.read_csv('SDSS_QSO.csv', index_col=0) # dataframe
print(df.shape) #(observaciones, variables)
df.describe()

############# COVARIANZA #####################33333333333
cov = df.corr()
print(cov)
print(cov.shape)
sns.heatmap(cov, cmap = 'gray')
plt.scatter(np.where(cov > 0.75 )[0],np.where(cov > 0.75 )[1],color='red')

def nombre(x):
    return df.columns.values[x]

positiva = [] 
negativa = []
x = nombre(np.where(cov >= 0.8 )[0])
xn =nombre(np.where(cov <= -0.8 )[0])
y = nombre(np.where(cov >= 0.8 )[1]) 
yn = nombre(np.where(cov <= -0.8 )[1])
correlaciones = []
print('Correlacion directa.')
for i in range(len(x)): 

    if x[i] != y[i]:
        correlaciones.append([x[i],y[i]])
        print(x[i],',',y[i])
print('\nCorrelacion inversa.')
correlaciones_n = []
for i in range(len(xn)): 

    if xn[i] != yn[i]:
        correlaciones_n.append([xn[i],yn[i]])
        print(xn[i],',',yn[i])


############### REGREION ###############

z_mag = [1,2,3,4,5,6]#np.array(df['z_mag']).reshape((-1,1))
i_mag = [4,7.2,11,12.9,14.7,18.2]#np.array(df['i_mag'])
print(i_mag)
model = LinearRegression
model.fit(z_mag,i_mag)
R_sq = model.score(z_mag,i_mag)

pritn('Coeficiente de determinacion: ',R_sq)
pritn('Intercepto (b0): ',model.intercept_)
pritn('Pendiente (b1): ',model.coef_)
