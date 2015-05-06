#import matplotlib libary
import matplotlib.pyplot as plt
import numpy as np
import os

fignum='plot_3_2'
direc=os.getcwd()+'/../'
filename=direc+'data/'+fignum+'.dat'
title=""
xlabel="Size of the heap(in GB)"
ylabel="Total number of page faults ($ \\times 10^3$)"
axis_font = {'fontname':'Arial', 'size':'18'}

def conv(str):
  if(isinstance(str, int)):
     return (int(str))
  return (float(str))

with open(filename) as f:
    data = f.read()

x=[]
y=[]
data = data.split('\n')
for row in data:
  sp = row.split(' ')
  if(len(sp) >1):
  	x.append(conv(sp[0]))
  	y.append(conv(sp[1]))
N=len(x)

width = 0.30
ind = np.arange(N)
fig, ax = plt.subplots()
rects1 = ax.bar(ind, x, width, color='r', edgecolor='r', fill=False, hatch='/', label='Vanilla Mark-Sweep')
rects2 = ax.bar(ind+width, y, width, color='y', edgecolor='g', fill=False, hatch='\\', label='Core-Aware Mark-Sweep')

ax.set_xlabel(xlabel, **axis_font)
ax.set_ylabel(ylabel, **axis_font)
ax.set_xticks(ind+width)
ax.set_xticklabels( ('6.5', '7', '7.5', '8', '8.5', '9') )

leg = ax.legend(bbox_to_anchor=(0, 1.12), loc=2, ncol=2)
savepath=direc+'graphs/'+fignum+'.png'
plt.savefig(savepath, facecolor='w',transparent=True)
