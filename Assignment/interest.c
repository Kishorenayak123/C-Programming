#include<stdio.h>
#include<math.h>
int main()
{
    int p,t,r;
    printf("Enter the principal amount : ");
    scanf("%d",&p);
    printf("Enter the Rate of interest : ");
    scanf("%d",&r);
    printf("Enter the time : ");
    scanf("%d",&t);
    float si=(p*t*r)/100;
    printf("The simple interest is : %f\n",si);
    double Amount = p *  
                  ((pow((1 + r / 100),t)));
    double ci=Amount-p;
    printf("The compound interest is : %lf\n",ci);
    
    return 0;
}