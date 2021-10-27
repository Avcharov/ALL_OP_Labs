import math
a=int(input("Введіть n"))

isprime = False

for i in range(1,a):
    isprime = True
    for j in range(2,i//2):
        if i%j==0:
            isprime= False
    if isprime:
        if a%i==0:
            print(i )

