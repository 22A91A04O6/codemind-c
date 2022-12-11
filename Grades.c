#include<stdio.h>
int main()
{
    int i;
    float mark, sum=0, avg;
    for(i=0; i<5; i++)
    {
        scanf("%f", &mark);
        sum = sum+mark;
    }
    avg = sum/5;
    printf("Grade ");
    if(avg>=91 && avg<=100)
        printf("A");
    else if(avg>=81 && avg<91)
        printf("B");
    else if(avg>=71 && avg<81)
        printf("C");
    else if(avg>=61 && avg<71)
        printf("D");
    else if(avg>=51 && avg<61)
        printf("E");
    else if(avg>=41 && avg<51)
        printf("F");
        else
        printf("Invalid!");
    return 0;
}
