import math
n = int(input("Enter any decimal number "))
nm = int(input("Enter any number "))
num1 = bin(n)
num2 = oct(n)
num3 = hex(n)
num4 = divmod(nm,n)
#conversions using math
num5 = math.fabs(-34.56)
num6 = math.fmod(-3.45,2)
num7 = math.frexp(5.6)
num8 = math.modf(5.6)
#Return the logarithmic value of different numbers
#>>> math.log(4,2)
#2.0
#>>> math.log10(6)
#0.7781512503836436
#>>> math.log1p(4)
#1.6094379124341003
#>>> math.log2(8)
#3.0


#gcd calculate
#>>> math.gcd(125,100)
#25
#>>> math.factorial(8)
#40320
#>>> math.hypot(3,4)
#5.0


#truncate and sqrt
#>>> math.trunc(4.789)
#4
#>>> math.sqrt(2525)
#50.24937810560445


#>>> math.e
#2.718281828459045
#>>> math.pi
#3.141592653589793
#>>> math.tau
#6.283185307179586
#>>> math.inf
#inf
#>>> math.nan
#nan
num9 = math.log(4,2)
print("Number in decimal "+num1)
print("Number in octal "+num2)
print("Number in hex "+num3)
print("The quotent and remainder is ",num4)
print("The values are ",num5)
print("The values are ",num6)
print("The values are ",num7)
print("The values are ",num8)