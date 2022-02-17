#!/bin/python3

import math
import os
import random
import re
import sys


#
# Complete the 'smashTheBricks' function below.
#
# The function is expected to return a 2D_LONG_INTEGER_ARRAY.
# The function accepts following parameters:
#  1. INTEGER bigHits
#  2. INTEGER_ARRAY newtons
#
from operator import itemgetter
def addIdx(a,i):
    return {'idx':i, 'value':a}

def smashTheBricks(bigHits, newtons):
    newtons = map(addIdx,newtons,range(1,len(newtons)+1))
    newtons = sorted(newtons, key=itemgetter('value'), reverse=True)
    bigHammer = []
    smallHammer = []
    count = 0
    for nw in newtons:
        if bigHits>0:
            bigHits-=1
            count+=1
            bigHammer.append(nw['idx'])
        else:
            count+=nw['value']
            smallHammer.append(nw['idx'])
    smallHammer.sort()
    bigHammer.sort()
    if len(smallHammer)==0:
        smallHammer.append(-1)
    if len(bigHammer)==0:
        bigHammer.append(-1)
    return [[count],bigHammer,smallHammer]

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    bigHits = int(input().strip())

    newtons_count = int(input().strip())

    newtons = []

    for _ in range(newtons_count):
        newtons_item = int(input().strip())
        newtons.append(newtons_item)

    result = smashTheBricks(bigHits, newtons)
    #print(result)
    fptr.write('\n'.join([' '.join(map(str, x)) for x in result]))
    fptr.write('\n')

    fptr.close()
