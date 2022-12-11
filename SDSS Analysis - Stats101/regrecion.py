########### REGRECION ######################

import matplotlib.pyplot as plt
import numpy as np
import pandas as pd
from sklearn.linear_model import LinearRegression

df = pd.read_csv('SDSS_QSO.csv', index_col=0) # dataframe

z_mag = np.array(df['z_mag']).reshape((-1,1))
i_mag = np.array(df['i_mag'])

model = LinearRegression().fit(z_mag,i_mag)
R_sq = model.score(z_mag,i_mag)

def reg(x):
    return (model.coef_ * x) + model.intercept_
    
print('Coeficiente de determinacion: ',R_sq)
print('Intercepto (b0): ',model.intercept_)
print('Pendiente (b1): ',model.coef_)

xl = [min(z_mag)*1.2-1,max(z_mag)*1.2+1]
yl = reg(xl)
plt.scatter(df['z_mag'],df['i_mag'])
plt.plot(xl,yl, 'k')
plt.title('Regrecion lineal para z_mag Vs i_mag')
plt.xlabel('z_mag')
plt.ylabel('i_mag')
#plt.savefig("regrecion.png")
plt.show()

