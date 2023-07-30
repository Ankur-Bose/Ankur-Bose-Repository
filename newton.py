import math
#F=ma
m=int(input("Enetr the mass "))
a=int(input("Enter the acceleration "))
F = m*a
print("the force F is",F,"when mass =",m,"and acceleration =",a)

#a=v-u/t

v= int(input("Enter the final distance "))
u= int(input("Enter the initial distance "))
t= int(input("Enter the time required "))

acc = (v-u)/t
print("The acceleration is ",acc)

#s=ut+1/2at^2

initial = int(input("Enter the inital distance "))
acceleration = int(input("Enter the acceleration "))
time = int(input("Enter the time required "))

s= initial*time + 0.5 * acceleration* time*time

print("The distance is ",s)