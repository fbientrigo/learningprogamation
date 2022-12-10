import numpy as np
import pandas as pd
df = pd.read_csv('SDSS_QSO.csv', index_col=0)

############# COVARIANZA #####################
cov = df.corr()
print(cov)

def nombre(x):
    return df.columns.values[x]

def remp(xxx,l,ll): # remplaza un caracter o mas de un string por otro/os
  out = ''
  for i in xxx:
    if i == l:
      out += ll
    else:
      out += i
  return out
      
cota = 0.7
correlaciones = []

for i in cov:
  for j in cov[i]:
    if abs(j) >= cota and i != nombre(np.where(cov[i] == j)[0][0]+1):
      correlaciones.append([j,i,nombre(np.where(cov[i] == j)[0][0]+1)])

for i in correlaciones:
  for j in correlaciones:
    if i[1]+i[2] == j[2]+j[1]:
      correlaciones.remove(j)    


