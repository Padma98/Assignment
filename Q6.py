"""
Author: Padma
Language used: Python 3
------------------------------------------------------------------------------------------------
"""
#Problem Statement:
"""
A bigger solid cube is to be built using n number of smaller cubes, having unit length. Write a
program that:
a) Read n from user with suitable message
b) Check if n is valid, that is can a bigger solid cube be build using n number unit
length cubes
c) Calculate the surface area of bigger cube, s1
d) One unit length cubic block is now removed from every corner of the cube. Calculate
the surface area of new structure, s2
e) Prints with suitable message, both surface areas s1 and s2
f) Print what conclusion can be drawn with respect to s1 and s2
-------------------------------------------------------------------------------------------------







Global Variables:
    n: Number of unit cubes to build the bigger cube. It should be a perfect cube
    crt: Cube root of n
    s1: Surface area of the cube
    s2: Surface area of the cube after removing one cube from each of the corner

**********************************************************************************************************************************************************
"""
from math import pow
n = int(input("Enter the number of unit cubes, n: "))
crt = int(pow(n,(0.1/0.3)))

#To check whether n is perfect cube
if(crt**3 == n):
    s1 = 6*crt**2
    
    #For 2^3 there are 8 cubes & if we remove corner cubes all the 8 cubes will be gone hence no cubes, no surface area
    if(crt == 2):
        s2 = 0
        print("Suface area of the cube built using",n,"unit cubes, s1: ",s1)
        print("Surface area of the cube after removing all the corner cubes, s2:",s2)
        print("If we remove corner cubes all the 8 cubes will be gone")
    else:
        s2 = 6*pow(crt-2,2)+24*(crt-2)+8*3*1
        print("Suface area of the cube built using",n,"unit cubes, s1: ",s1)
        print("Surface area of the cube after removing all the corner cubes, s2:",s2)
        print("")
        print("Conclusion:")
        print("It is observed that the surface area of the cube remains same if we remove the corner cubes")
        print("i.e. Three faces of the corner cubes are open & other 3 are hidden inside")
        print("When we remove corner cubes the 3 surfaces of the another cubes which were attached to the hidden surfaces of the removed cube are open")
        print("Hence the surface area remains the same")

#If n is not perfect cube, we can not build the bigger cube
else:
    print("Bigger solid cube can not be built using",n,"number of unit cubes")
"""
**********************************************************************************************************************************************************








--------------------------------------------------------------------------------------------------------------------------------------------
"""
#Sample Output:
"""
Case 1:
    Enter the number of unit cubes, n: 343
    Suface area of the cube built using 343 unit cubes, s1:  294
    Surface area of the cube after removing all the corner cubes, s2: 294.0

    Conclusion:
    It is observed that the surface area of the cube remains same if we remove the corner cubes
    i.e. Three faces of the corner cubes are open & other 3 are hidden inside
    When we remove corner cubes the 3 surfaces of the another cubes which were attached to the hidden surfaces of the removed cube are open
    Hence the surface area remains the same

Case 2:
    Enter the number of unit cubes, n: 81
    Bigger solid cube can not be built using 81 number of unit cubes

Case 3:
    Enter the number of unit cubes, n: 8
    Suface area of the cube built using 8 unit cubes, s1:  24
    Surface area of the cube after removing all the corner cubes, s2: 0
    If we remove corner cubes all the 8 cubes will be gone
----------------------------------------------------------------------------------------------------------------------------------------------
"""
