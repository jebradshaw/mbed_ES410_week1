#include "mbed.h"

main() //this command is the start of the program
{ // between the {} is what is executed
    float z[6];     // declaration of vector z to have up to 6 floating point values
    float p[6];     // declaration of vector p to have up to 6 floating point values
    int k;      // declaration of integer variable k
    float dt;       // declaration floating point variable
    dt=1.0;
    z[1]= -1.0; // vector z values
    z[2]= -0.3679;
    z[3]= -0.1353;
    z[4]= -0.0498;
    z[5]= -0.0183;
        
    p[1]=1.0;       // set the first value of vector p to 1.
    for (k=2;k<=5;k++)  //calculate values for p, 
    //this is the same as in MATLAB program see example 3
    {
        p[k]=p[k-1]+z[k-1]*dt;
    }
    for (k=1;k<=5;k++) // plot vectors z and p
    { //this is tricky
        printf(" %7.2f \n", p[k]); 
    } //%7.2f means print a float and allow for 7 spaces, 2 spaces after decimal point
} // end main

