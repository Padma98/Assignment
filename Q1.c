/*
Author: Padma
Language used: C
-----------------------------------------------------------------------------------
#Problem Statement:

Consider a matrix M2*2 . Write a program that:
a) Reads from user: elements of the matrix M
b) Check if Eigenvalues and Eigenvectors exists for matrix M
c) Find the Eigenvalues and any two Eigenvectors of matrix M
d) Prints with suitable message the matrix M , its Eigenvalues and Eigenvectors
-----------------------------------------------------------------------------------




Variables used:
    M: 2*2 user defined matrix
    I: Identity matrix of order 2
    Y: Eigen Values
    a,b,c: Co-efficient of characteristic equation aY^2+bY+c=0
    delta = (b^2)-4ac
    E: Eigen Space
    V1 & V2: Eigen vectors
********************************************************************************
*/
#include<stdio.h>
#include<math.h>
int main()
{
    float M[2][2],I[2][2]={{1,0},{0,1}},Y[2],a,b,c,delta,E[2][2],V1[2],V2[2];
    int i,j;
    printf("Enter the elements of 2*2 matrix\n");
    for(i=0; i<2; i++)
        for(j=0; j<2; j++)
        scanf("%f",&M[i][j]);
/*
  Let M =   | w x |
            | y z |
    characteristic equation: det(YI-M)=0
    |Y-w  -x|
    |-y  Y-z|    =  0

             det: (Y-w)(Y-z)-xy = 0
                   Y^2-(w+z)Y+(wz-xy)
it is in the form: aY^2+bY+c = 0
        Hence   a = 1
                b = -(w+z)
                c = (wz-xy)

        delta = b^2 - 4ac
*/
        a=1;
        b = -(M[0][0]+M[1][1]);
        c = M[0][0]*M[1][1]-M[0][1]*M[1][0];
        delta = pow(b,2)-4*a*c;

        //If delta is negative then the roots are complex
        if(delta<0)
            printf("Eigen Values & Eigen vectors do not exist for the given matrix\n");
        else
        {
            //Equation to find the roots of the characteristic equation
            //x = (-b(+/-)rt(delta))/2a
            Y[0]=(-b+sqrt(delta))/(2*a);
            Y[1]=(-b-sqrt(delta))/(2*a);

            //E = N(|YI-M|)
            //For 1st Eigen value
            E[0][0] = Y[0]-M[0][0];
            E[0][1] = -M[0][1];
            E[1][0] = Y[0]-M[1][0];
            E[1][1] = -M[1][1];
            V1[1]=1;
            V1[0] = (V1[1]*E[0][1])/E[0][0];    //[E][V] = 0

            //For 2nd Eigen value
            E[0][0] = Y[1]-M[0][0];
            E[0][1] = -M[0][1];
            E[1][0] = Y[1]-M[1][0];
            E[1][1] = -M[1][1];
            V2[1] = 1;
            V2[0] = (V2[1]*E[0][1])/E[0][0];    //[E][V] = 0

            printf("Eigen values are %.2f and %.2f\n",Y[0],Y[1]);
            //When both the Eigen values are same then the 2 Eigen vectors are also same, Hence we represent it once
            if(V1[0]==V2[0])
                printf("Single Eigen vector exist for the given matrix that is [%.2f  %.2f]",V1[0],V1[1]);
            else
                printf("Eigen vectors are [%.2f  %.2f] and [%.2f  %.2f]",V1[0],V1[1],V2[0],V2[1]);
        }
}


/*
--------------------------------------------------------------------------
Sample Output:
Case 1:
    Enter the elements of 2*2 matrix
    1 2
    3 4
    Eigen values are 5.37 and -0.37
    Eigen vectors are [-0.46  1.00] and [1.46  1.00]

Case 2:
    Enter the elements of 2*2 matrix
    2 8
    4 8
    Eigen values are 11.40 and -1.40
    Eigen vectors are [-0.85  1.00] and [2.35  1.00]

Case 3:
    Enter the elements of 2*2 matrix
    -3 3
    -2 1
    Eigen Values & Eigen vectors do not exist for the given matrix
--------------------------------------------------------------------------
*/
