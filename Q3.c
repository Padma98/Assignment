/*
Author: Padma
Language used: C
-----------------------------------------------------------------------------------
#Problem Statement:

Consider three dimension system. A point in three dimension system is represented as ( x , y , z ) ,
where x , y and z are the x , y and z coordinates of the point in three dimension space respectively.
Write a program that:
a) Reads from end user using suitable messages :
i. Point p1 ( x1 , y1 , z1 ) , and
ii. Point p2 ( x2 , y2 , z2 )
b) Prints with suitable message all partial derivatives between the points ( p1 , p2 )
-----------------------------------------------------------------------------------





Variables used:
    P1 & P2: Points in the space with co-ordinates (x,y,z)
    C: Constant value with which all the points on the line are traversed
******************************************************************************************
*/
#include<stdio.h>
#include<math.h>
int main()
{
    //Assuming only the integer co-ordinates for the points
    int P1[3],P2[3],i;
    float C,x,y,z;
    printf("Enter the first point P1(x1,y1,z1): ");
    for(i=0; i<3; i++)
        scanf("%d",&P1[i]);
    printf("Enter the second point P2(x2,y2,z2): ");
    for(i=0; i<3; i++)
        scanf("%d",&P2[i]);

    //We have the equation of the line joining 2 points as below
    //(x1x+y1y+z1z)+C((x2-x1)x+(y2-y1)y+(z2-z1)z) = 0  where C -> constant
    printf("Equation of the line joining P1 & P2: %dx+(%d)y+(%d)z+C(%dx+(%d)y+(%d)z)\n"
           ,P1[0],P1[1],P1[2],P2[0],P2[1],P2[2]);

/*
        We will have the function
        F = (x1-C(x2-x1))x+(y1-C(y2-y1))y+(z1-C(z2-z1))z;
        Partially derivatives are given by
        dF/dx = x1-C(x2-x1
        dF/dy = y1-C(y2-y1)
        dF/dz = z1-C(z2-z1)
        Hence these partial derivative values are dependent only on the value of C
*/
    printf("Partial derivatives between the points: \n");
    //Assuming the step size of 0.05 for the value of constant C
    for(C=0; C<1.01; C+=0.05)
    {
        x = P1[0]+C*(P2[0]-P1[0]);
        y = P1[1]+C*(P2[1]-P1[1]);
        z = P1[2]+C*(P2[2]-P1[2]);
        printf("dF/dx = %.2f\tdF/dy = %.2f\tdF/dz = %.2f\n",x,y,z);
    }
    return 0;
}/*
*************************************************************************************





--------------------------------------------------------------------------
Sample Output:

Case 1:
    Enter the first point P1(x1,y1,z1): 1 3 2
    Enter the second point P2(x2,y2,z2): 4 2 -1
    Equation of the line joining P1 & P2: 1x+(3)y+(2)z+C(4x+(2)y+(-1)z)
    Partial derivatives between the points:
    dF/dx = 1.00    dF/dy = 3.00    dF/dz = 2.00
    dF/dx = 1.15    dF/dy = 2.95    dF/dz = 1.85
    dF/dx = 1.30    dF/dy = 2.90    dF/dz = 1.70
    dF/dx = 1.45    dF/dy = 2.85    dF/dz = 1.55
    dF/dx = 1.60    dF/dy = 2.80    dF/dz = 1.40
    dF/dx = 1.75    dF/dy = 2.75    dF/dz = 1.25
    dF/dx = 1.90    dF/dy = 2.70    dF/dz = 1.10
    dF/dx = 2.05    dF/dy = 2.65    dF/dz = 0.95
    dF/dx = 2.20    dF/dy = 2.60    dF/dz = 0.80
    dF/dx = 2.35    dF/dy = 2.55    dF/dz = 0.65
    dF/dx = 2.50    dF/dy = 2.50    dF/dz = 0.50
    dF/dx = 2.65    dF/dy = 2.45    dF/dz = 0.35
    dF/dx = 2.80    dF/dy = 2.40    dF/dz = 0.20
    dF/dx = 2.95    dF/dy = 2.35    dF/dz = 0.05
    dF/dx = 3.10    dF/dy = 2.30    dF/dz = -0.10
    dF/dx = 3.25    dF/dy = 2.25    dF/dz = -0.25
    dF/dx = 3.40    dF/dy = 2.20    dF/dz = -0.40
    dF/dx = 3.55    dF/dy = 2.15    dF/dz = -0.55
    dF/dx = 3.70    dF/dy = 2.10    dF/dz = -0.70
    dF/dx = 3.85    dF/dy = 2.05    dF/dz = -0.85
    dF/dx = 4.00    dF/dy = 2.00    dF/dz = -1.00

Case 2:
    Enter the first point P1(x1,y1,z1): 4 -2 0
    Enter the second point P2(x2,y2,z2): 4 3 -7
    Equation of the line joining P1 & P2: 4x+(-2)y+(0)z+C(4x+(3)y+(-7)z)
    Partial derivatives between the points:
    dF/dx = 4.00    dF/dy = -2.00   dF/dz = 0.00
    dF/dx = 4.00    dF/dy = -1.75   dF/dz = -0.35
    dF/dx = 4.00    dF/dy = -1.50   dF/dz = -0.70
    dF/dx = 4.00    dF/dy = -1.25   dF/dz = -1.05
    dF/dx = 4.00    dF/dy = -1.00   dF/dz = -1.40
    dF/dx = 4.00    dF/dy = -0.75   dF/dz = -1.75
    dF/dx = 4.00    dF/dy = -0.50   dF/dz = -2.10
    dF/dx = 4.00    dF/dy = -0.25   dF/dz = -2.45
    dF/dx = 4.00    dF/dy = 0.00    dF/dz = -2.80
    dF/dx = 4.00    dF/dy = 0.25    dF/dz = -3.15
    dF/dx = 4.00    dF/dy = 0.50    dF/dz = -3.50
    dF/dx = 4.00    dF/dy = 0.75    dF/dz = -3.85
    dF/dx = 4.00    dF/dy = 1.00    dF/dz = -4.20
    dF/dx = 4.00    dF/dy = 1.25    dF/dz = -4.55
    dF/dx = 4.00    dF/dy = 1.50    dF/dz = -4.90
    dF/dx = 4.00    dF/dy = 1.75    dF/dz = -5.25
    dF/dx = 4.00    dF/dy = 2.00    dF/dz = -5.60
    dF/dx = 4.00    dF/dy = 2.25    dF/dz = -5.95
    dF/dx = 4.00    dF/dy = 2.50    dF/dz = -6.30
    dF/dx = 4.00    dF/dy = 2.75    dF/dz = -6.65
    dF/dx = 4.00    dF/dy = 3.00    dF/dz = -7.00

--------------------------------------------------------------------------
*/
