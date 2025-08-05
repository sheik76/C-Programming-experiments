#include<stdio.h>
int main()
{
    float a,b,sum=0;
    int sum1=0;
    printf("enter the inputs:");
    scanf("%f %f",&a,&b);
    sum=a+b;
    sum1=(int)sum;
    printf("\n%.2f",sum);
    printf("\n%d",sum1);

    return 0;
}
