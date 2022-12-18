import numpy as np
import pandas as pd
df = pd.read_csv('SDSS_QSO.csv', index_col=0)

############# COVARIANZA #####################
cov = df.corr()

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
cota2 = 0.9
correlaciones = []
correlaciones2 = []

for i in cov:
  for j in cov[i]:
    if abs(j) >= cota and i != nombre(np.where(cov[i] == j)[0][0]+1):
      correlaciones.append([j,i,nombre(np.where(cov[i] == j)[0][0]+1)])
  for k in cov[i]:
    if abs(k) >= cota2 and i != nombre(np.where(cov[i] == k)[0][0]+1):
      correlaciones2.append([k,i,nombre(np.where(cov[i] == j)[0][0]+1)])      
      
      
      

for i in correlaciones:
  for j in correlaciones:
    if i[1]+i[2] == j[2]+j[1]:
      correlaciones.remove(j)    

print('Se genero una matriz de covarianzas donde se cruzaron todas las variables en estudio de la cual luego se generaron los coeficientes r de Pearson para los mismos cruces. Todos los valores de r superiores a ',cota,'se consideraron como correlaciones y los superiores a ',cota2,'fueron conciderados como correlaciones fuertes, como se ve en la siguiente tabla.')

print('''\\begin{center}       
        \\begin{tabular}{ |c c| }
        \hline
            Variables & r > 0.7\\\\''')
        
for i in correlaciones:
    print('''

        \hline 
	  ''',remp(i[1],'_','\_')+" "+remp(i[2],'_','\_'),''' & ''',round(i[0],3), ''' \\\\
	\hline ''')
print(''''\\end{tabular}
	\\end{center}''')
	  
###### MATRIZ DE COVARIANZAS #################


print('''\\begin{center}       
        \\begin{tabular}{ |c|c|c|c|c|c|c|c|c|c|c|c|c|c| }''')
for i in cov:
    print('''

        \hline 
	  ''',round(cov[i][0],3),''' & ''',round(cov[i][1],3) ,'''&''', round(cov[i][2],3),''' &''', round(cov[i][3],3),''' &''', round(cov[i][4],3),''' &''', round(cov[i][5],3) ,'''&''', round(cov[i][6],3) ,'''&''', round(cov[i][7],3),''' &''', round(cov[i][8],3),''' &''', round(cov[i][9],3),''' &''', round(cov[i][10],3),''' &''', round(cov[i][11],3) ,'''&''', round(cov[i][12],3),''' &''', round(cov[i][13],3),''' \\\\
	\hline ''')
print(''''\\end{tabular}
	\\end{center}''')
