#!/usr/bin/env python

import time
import sys

def staircase(message, delay):
    staircase = []

    for letter in message:
        staircase.append(letter)
        print(''.join(staircase))
        sys.stdout.flush() # Just gonna put it here because time.sleep() doesn't work for git bash

        time.sleep(delay)

    while len(staircase) != 0:
        del staircase[-1]
        print(''.join(staircase))
        sys.stdout.flush() # Just gonna put it here because time.sleep() doesn't work for git bash

        time.sleep(delay)

if __name__ == '__main__':
    message = input('Message: ')
    delay = 0

    try:
        delay = float(input('Delay: '))
    except ValueError:
        delay = 0

    staircase(message, delay)
