import math
x=float(input("Введіть х "))
sum =0
k=0.0001
n=0
step = x
fact = 1
sign = 1
pool= abs(sign*step/fact)

while pool>k:
    sum+=sign * step / fact
    n+=1
    sign= -sign
    step *=x*x
    fact  *=2*n
    print("pool = ",'%.6f' % pool)
    pool=abs(sign*step/fact)

print("Sum - ",'%.6f' % sum)