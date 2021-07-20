import math
import os
import random
import re
import sys


def checkEven(n):
    if n % 2 == 0:
        return True
    else:
        return False


if __name__ == '__main__':
    n = int(input().strip())
    if not checkEven(n):
        print
        "Weird"
    else:
        if n > 1 and n < 6:
            print
            "Not Weird"
        elif n > 5 and n <= 20:
            print
            "Weird"
        else:
            print
            "Not Weird"
