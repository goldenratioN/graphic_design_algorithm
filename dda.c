// C program for DDA line generation
#include<stdio.h>
#include <math.h>


//Function for finding absolute value
int abs (int n)
{
    return ( (n>0) ? n : ( n * (-1)));
}

//DDA Function for line generation
void DDA(int X0, int Y0, int X1, int Y1)
{
    // calculate dx & dy
    int dx = X1 - X0;
    int dy = Y1 - Y0;

    // calculate steps required for generating pixels
    int steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy);

    // calculate increment in x & y for each steps
    float Xinc = dx / (float) steps;
    float Yinc = dy / (float) steps;

    // Put pixel for each step
    float X = X0;
    float Y = Y0;
    for (int i = 0; i <= steps; i++)
    {

        X += Xinc;
        Y += Yinc;
        printf("(%0.lf,%0.lf)\n",X,Y);

    }
}

// Driver program
int main()
{


    int X0 = 2, Y0 = 2, X1 = 14, Y1 = 16;
    DDA(2, 2, 14, 16);
    return 0;
}
