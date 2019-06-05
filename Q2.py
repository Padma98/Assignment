"""
Author: Padma
Language used: Python 3
--------------------------------------------------------------------------------------------------------
"""
#Problem Statement:
"""
A straight line in two dimension can be represented with y=mx +c , where y and x are the y
and x coordinates of the point on line in two dimension space respectively. m is slope of the line and
c is intercept made by the line with y axis. Write a program that:
a) Reads from end user using suitable messages :
i. Slope m
ii. Intercept c
iii. Values of x
b) Reads from end user using suitable messages: a random point ( xp , yp )
c) Print with suitable message if ( xp, yp ) is on the line y=mx +c
---------------------------------------------------------------------------------------------------------






Global Variables:
m: Slope of the straight line
c: Intercept of the straight line on the y-axis
pt:(x,y): The random point on the plane that is to be read from the user

*************************************************************************************
"""
m = int(input('Enter the slope, m: '))
c = int(input('Enter the intercept of the line, c: '))
print('Enter the point to be checked (x & y co-ordinates comma seperated) as (x y): ')
pt = input().split(',')
x = int(pt[0])
y = int(pt[1])
if(c<0):
    sg = ''
else:
    sg = '+'
#Equation of the straight line
y1 = m*x+c
if(y == y1):
    print('Point ('+str(x)+','+str(y)+') is on the line y = '+str(m)+'x'+sg+str(c))
else:
     print('Point ('+str(x)+','+str(y)+') is not on the line y = '+str(m)+'x'+sg+str(c))
"""
**************************************************************************************








-----------------------------------------------------------------------------------------------------------------------------------------
"""
#Sample Output:
"""
Case 1:
    Enter the slope, m: 2
    Enter the intercept of the line, c: 3
    Enter the point to be checked (x & y co-ordinates comma seperated) as (x y): 
    -1,1
    Point (-1,1) is on the line y = 2x+3

Case 2:
    Enter the slope, m: 1
    Enter the intercept of the line, c: -5
    Enter the point to be checked (x & y co-ordinates comma seperated) as (x y): 
    8,3
    Point (8,3) is on the line y = 1x-5

Case 3:
    Enter the slope, m: 4
    Enter the intercept of the line, c: 0
    Enter the point to be checked (x & y co-ordinates comma seperated) as (x y): 
    4,8
    Point (4,8) is not on the line y = 4x+0
   
----------------------------------------------------------------------------------------------------------------------------------------------
"""
