#!/bin/python3

import math
import os
import random
import re
import sys



#
# Complete the 'findCompletePrefixes' function below.
#
# The function is expected to return an INTEGER_ARRAY.
# The function accepts following parameters:
#  1. STRING_ARRAY names
#  2. STRING_ARRAY query
#

def findCompletePrefixes(names, query):
    for q in query:
        count=0
        for name in names:
            if len(name)>len(q) and name[:len(q)]==q:
                count+=1
        print(count)


if __name__ == '__main__':
   # fptr = open(os.environ['OUTPUT_PATH'], 'w')

    names_count = int(input().strip())

    names = []

    for _ in range(names_count):
        names_item = input()
        names.append(names_item)

    query_count = int(input().strip())

    query = []

    for _ in range(query_count):
        query_item = input()
        query.append(query_item)

    result = findCompletePrefixes(names, query)
    #print(result)
    # fptr.write('\n'.join(map(str, result)))
    # fptr.write('\n')

    # fptr.close()
