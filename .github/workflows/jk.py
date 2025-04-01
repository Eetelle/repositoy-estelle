import sys
import math

# Auto-generated code below aims at helping you parse
# the standard input according to the problem statement.

n = int(input())
l=[]
for i in range(n):
    line=input().replace(" ","")
    if len(line)!=0:
        l.append(line)

# Write an answer using print
# To debug: print("Debug messages...", file=sys.stderr, flush=True)
if len(l[0])==len(l[1]):
    print("SQUARE")
elif len(l[0])==len(l[-1]):
    print("ROUND")
else: print ("TRIANGLE")
