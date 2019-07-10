import matplotlib.pyplot as plt
import numpy as np
import pandas as pd
import math
import scipy.interpolate as ip


def plot_timings_from_file(fname):
    timings = pd.read_csv(fname, sep=',')
    n = timings['n'].values
    seconds = timings['seconds'].values
    x = n
    y = seconds
    plt.loglog(x, y, 's')
    s = ip.UnivariateSpline(x, y, s = 0)
    xs = np.linspace(min(x), max(x), 1000)
    ys = s(xs)
    plt.plot(xs, ys)
    plt.xlabel('# of elements')
    plt.ylabel('time in seconds')
    plt.title('Performance of introsort')
    plt.show()
    plt.close()

plot_timings_from_file('test_time.csv')
