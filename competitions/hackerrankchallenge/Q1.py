#!/bin/python3

import math
import os
import random
import re
import sys



#
# Complete the 'closestNumbers' function below.
#
# The function accepts INTEGER_ARRAY numbers as parameter.
#

def closestNumbers(numbers):
    numbers.sort()
    arr = ""
    minimum = numbers[1] - numbers[0]
    arr += f"{numbers[0]} {numbers[1]}\n"
    for i in range(2,len(numbers),1):
       
        if(numbers[i]-numbers[i-1]<minimum):
            arr = f"{numbers[i-1]} {numbers[i]}\n"
            minimum = numbers[i]-numbers[i-1]
        elif numbers[i]-numbers[i-1]==minimum:
            arr += f"{numbers[i-1]} {numbers[i]}\n"
    print(arr)
if __name__ == '__main__':
    numbers_count = int(input().strip())

    numbers = []

    for _ in range(numbers_count):
        numbers_item = int(input().strip())
        numbers.append(numbers_item)

    closestNumbers(numbers)
