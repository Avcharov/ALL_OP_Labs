import math
a=int(input("Input a - "))
b=int(input("Input b - "))
sum =0
isprime = False

for i in range(a,b):
    isprime = True
 
    if i%2==0 or i<0:
         isprime= False


    if isprime:
        print(i," ")
        sum+=i**2

print("There is the sum - ",sum)
