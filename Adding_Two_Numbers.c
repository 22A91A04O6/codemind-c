#include<stdio.h>
int ram(int a,int b)
{
    int c;
    c=a+b;
    return c;
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int x=ram(a,b);
    printf("%d",x);
}