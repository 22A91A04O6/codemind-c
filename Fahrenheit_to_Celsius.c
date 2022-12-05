#include<stdio.h>
float mom(float d)
{
    float c;
    c=(d-32)*5/9;
    return c;
}
int main()
{
    float d;
    scanf("%f",&d);
    float x=mom(d);
    printf("%.2f",x);
}