import matplotlib.pyplot as plt
import numpy as np
import seaborn as sns
import pandas as pd
from sklearn.linear_model import LinearRegression
df = pd.read_csv('SDSS_QSO.csv', index_col=0) # dataframe

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

def remp(xxx,l,ll): # remplaza un caracter o mas de un string por otro/os
  out = ''
  for i in xxx:
    if i == l:
      out += ll
    else:
      out += i
  return out

text = ['Redshift.','Brillo en la banda u (ultravioleta). ','Patrón de desviación para la banda ultravioleta, el equipo SDSS determina los errores de medición para cada magnitud a partir del conocimiento de las condiciones de observación y otras consideraciones tecnicas.','Brillo en la banda verde.','Patrón de desviación para la banda verde.','Brillo en la banda roja.','Patrón de desviación para la banda roja.','Brillo en la banda mas roja.','Patrón de desviación para la banda mas roja.','Brillo en la banda rojo profundo.',' Patrón de desviación para la banda rojo profundo.','Brillo en la banda de radio.']

print('\subsection{Descripcion de variables.}')
print('A continuacion se presenta la descripcion de cada variable almacenada en la base de datos junto con un resumen estadistico de esta, donde se incluyen los intervalos de confianza para la media y varianza con un valor de significancia del $0.05$ junto con los valores de: total de datos, promedio, media, moda, desviacion estandar, valor minimo, primer, segundo y tercer percentil, y valor maximo.\n')

c = 0
for i in df.columns.values:
    
    if i != 'SDSS' and i != 'Mp' and i != 'ROSAT':
       
        des = df[i].describe()
        
        
        print('''\subsubsection{''',remp(i,'_','\_'),''''}
        
        \n''',text[c],'''\n
       \\\\
         
        \\begin{center}       
        \\begin{tabular}{ |c|c| }
        \hline 
	 IC(\mu)_{0,975} & [''', round(des[1] - 1.995*des[2]/len(df[i]),4),''',''', round(des[1] + 1.995*des[2]/len(df[i]),4),''']\\\\ 
	 \hline
	 IC(\sigma)_{0,975} & [''', round(des[1] - 1.995*des[2]/len(df[i]),4),''',''', round(des[1] + 1.995*des[2]/len(df[i]),4),''']\\\\ 
	 \hline
        
        \\end{tabular}       
        
              
        \\begin{tabular}{ |c|c|c|c|c| }
        \hline

        count & mean & med & mode & std \\\\
        ''',round(des[0],3) ,''' & ''',round(des[1],3) ,''' & ''', round(df[i][(len(df[i])-1)/2],3),''' & ''',round(df[i].mode()[0],3),''' & ''',round(des[2],3),''' \\\\
        \n\hline
        min & 25\% & 50\% & 75\% & max\\\\
        ''',round(des[3],3) ,''' & ''',round(des[4],3) ,''' & ''',round(des[5],3) ,''' & ''',round(des[6],3) ,''' & ''',round(des[7],3) ,''' \\\\
        
        
        \n\hline
        \end{tabular}
        \\end{center}'''); c += 1
          


