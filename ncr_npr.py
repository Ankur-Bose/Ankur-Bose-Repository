import math
n = int(input("Enter the value of n "))
r = int(input("Enter the value of r "))
#calculating ncr
ncr = math.factorial(n)/math.factorial(n-r)
#calculating npr
npr = math.factorial(n)/math.factorial(n)*math.factorial(n-r)
print("The nCr value is ",ncr)
print("The nPr value is ",npr)