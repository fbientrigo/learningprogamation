import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
from argparse import ArgumentParser
import os

# Parsing de argumentos
parser = ArgumentParser(fromfile_prefix_chars='@')
parser.add_argument('-f', '--file')

ns = parser.parse_args()
file_path = ns.file


if os.path.isfile(file_path) and file_path.endswith(".csv"):
    df = pd.read_csv(file_path)
    plt.plot(df['t'], df['y'])
    plt.xlabel('t')
    plt.ylabel('y')
    plt.show()
else:
    print("Invalid file path or file format")

