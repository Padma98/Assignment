"""
Author: Padma
Language used: Python 3
----------------------------------------------------------------------------------------------------------
"""
#Problem Statement:
"""
The area of a square is d. What is the area of the circle which has the diagonal of the square as its
diameter? Write a program that:
a) Reads from user: area of a square as d (an integer)
b) Check if area entered, d is valid
c) Find the area of the circle whose diameter is the same as the diagonal of the square
d) Find the circumference of the circle whose radius is the same as the diagonal of the
square
e) Prints with suitable message the area and circumference of the circles respectively
----------------------------------------------------------------------------------------------------------







Global Variables:
d: Area of the square
diag: Diagonal of the square which act as a diameter of the circle
area: Area of the circle
cir: Circumference of the circle
sqr: Square root of the area d. Edge length of the square

************************************************************************************************
"""
import math
d = int(input('Enter the area of the square, d: '))
sqr = math.sqrt(float(d))
#Assuming only the integer squares
#The float square root of d if squared gives the value same as d iff d is a perfect square
if(int(sqr)**2 == d):
    diag = math.sqrt(2*d)
    area = (math.pi*(diag**2))/4
    cir = math.pi*diag
    print("Area of the Circle is",int(area*1000)/1000)          #Rounding off upto 3 points
    print("Circumference of the circle is",int(cir*1000)/1000)
else:
    print(d,"is not a valid area")
"""
*************************************************************************************************







--------------------------------------------------------------
"""
#Sample Output:
"""
Case 1:
    Enter the area of the square, d: 64
    Area of the Circle is 100.53
    Circumference of the circle is 35.543

Case 2:
    Enter the area of the square, d: 169
    Area of the Circle is 265.464
    Circumference of the circle is 57.757
    
Case 3:
    Enter the area of the square, d: 27
    27 is not a valid area
---------------------------------------------------------------
"""
