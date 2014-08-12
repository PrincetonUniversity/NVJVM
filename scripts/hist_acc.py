#!/usr/bin/env python
from sys import argv
import sys
import re
script, filename = argv
file = open(filename)
count=0
for line in file:
    if count > 0 and not (re.match("(.*)starting evacuation collection cycle(.*)", line)) and not (re.match("(.*)rank(.*)", line)):
       s = line.split(',')
       if (len(s) < 3):
	  continue
       f.write(s[0]+'\n')
    if re.match("(.*)starting evacuation collection cycle(.*)", line):
        if count > 0:
           f.close()
        count = count + 1
        f = open('./data/file'+str(count)+'.csv','w')
