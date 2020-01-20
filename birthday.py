#!/bin/python3
#You are in charge of the cake for your niece's birthday and have decided the cake will 
#have one candle for each year of her total age. When she blows out the candles, she’ll only be able to blow out the tallest ones.
#Your task is to find out how many candles she can successfully blow out.

import math
import os
import random
import re
import sys

def birthdayCakeCandles(ar):
    max=0;
    j=0;
    for i in range (0,ar_count):
        if max<ar[i]:
            max=ar[i]
    for i in range (0,ar_count):
        if ar[i]==max:
            j=j+1
    return j

        

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    ar_count = int(input())

    ar = list(map(int, input().rstrip().split()))

    result = birthdayCakeCandles(ar)

    fptr.write(str(result) + '\n')

    fptr.close()
