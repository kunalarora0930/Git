#Calculate dot and cross product of vectors  
import numpy as num
arr1 = []
arr2 = []
print("Enter i,j,k components of first vector in order.")
for i in range(0, 3):
    arr1.append(int(input("Enter component: ")))

print("Enter i,j,k components of second vector in order.")
for i in range(0, 3):
    arr2.append(int(input("Enter component: ")))

a = num.array(arr1)  
b = num.array(arr2)  
print(a)
print(b)
print("Cross product of vectors: ",num.cross(a,b))
print("Dot product of vectors: ",num.dot(a,b))
