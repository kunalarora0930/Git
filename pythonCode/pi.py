from time import *
from decimal import *
getcontext().prec = 100

def nilakantha(reps):
        pi = Decimal(3.0)
        op = 1
        n = 2
        for n in range(2, 2*reps+1, 2):
                pi += 4/Decimal(n*(n+1)*(n+2)*op)
                op *= -1
        return pi

print("How many repetitions?")
repetitions = int(input())
start_time = time()
print(nilakantha(repetitions))
print("--- %s seconds ---" % (time() - start_time))
