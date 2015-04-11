#import matplotlib libary
import matplotlib.pyplot as plt
import numpy as np

title=""
xlabel=""
ylabel=""

with open("/Users/ravitandon/Documents/workspace/JVM_CPP/plots/data/sample.txt") as f:
    data = f.read()

x=[]
y=[]
data = data.split('\n')
for row in data:
  sp = row.split(' ')
  if(len(sp) >1):
  	x.append(int(sp[0]))
  	y.append(int(sp[1]))
N=len(x)

width = 0.30
ind = np.arange(N)
fig, ax = plt.subplots()
rects1 = ax.bar(ind, x, width, color='r', edgecolor='r', fill=False, hatch='/')
rects2 = ax.bar(ind+width, y, width, color='y', edgecolor='g', fill=False, hatch='\\')


#fig = plt.figure()

#ax1 = fig.add_subplot(111)

#ax.set_title("Plot title...")    
ax.set_xlabel(xlabel)
ax.set_ylabel(ylabel)
ax.set_xticks(ind+width)
ax.set_xticklabels( ('6.5', '7', '7.5', '8', '8.5', '9') )

#ax1.plot(x,y, c='r', label='the data')

leg = ax.legend()

plt.show()


