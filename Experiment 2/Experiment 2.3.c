/*Experiment 2:Operator
3.Write a program to calculate Compound Interest.*/
#include <stdio.h>
#include <math.h>   // required for pow()
int main() 
{
    float p, rate, n, CI;
    printf("Name-Anshika Joshi\nSap id-590028351\nBatch-B1\nCourse-Bsc-cs\n");
    printf("Enter the principal (p): ");
    scanf("%f", &p);
    printf("Enter the rate: ");
    scanf("%f", &rate);
    printf("Enter the time (n in years): ");
    scanf("%f", &n);
    CI = (p * pow((1 + rate / 100), n)) - p;

    printf("The CI is = %.2f\n", CI);

    return 0;
}



