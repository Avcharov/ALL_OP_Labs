import math
x=int(input("Введіть х"))
y=int(input("Введіть у"))
if (y>=x-1 and x<=0 and y>=1):
    print("Yes") 
elif (y>=x-1 and x>=1 and y<=0): 
    print("Yes")
else: print("No")
