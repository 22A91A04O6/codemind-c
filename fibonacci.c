#include<stdio.h>
int main()
{ 
int term1 = 0, term2 = 1; 
int count,nextTerm; 
scanf("%d",&count); 
for (int j = 0 ; j < count ; j++ ) 
{ 
if ( j <= 1 ) 
nextTerm = j; 
else 
{ 
nextTerm = term1 + term2; 
term1 = term2; 
term2 = nextTerm; 
} 
printf("%d ",nextTerm); 
} 
return 0; 
} 

