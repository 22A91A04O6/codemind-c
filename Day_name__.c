#include <stdio.h>

int main()
{
  int weekday;
  scanf("%d", &weekday);
  
  if (weekday == 1)
  {
  	printf("monday");  	
  }
  else if ( weekday == 2 )
  {
  	printf("tuesday");  	
  }  
  else if ( weekday == 3 )
  {
  	printf("wednesday");  	
  } 
  else if ( weekday == 4 )
  {
  	printf("thursday");  	
  } 
  else if ( weekday == 5 )
  {
  	printf("friday");  	
  } 
  else if ( weekday == 6 )
  {
      printf("saturday");
  }
  else 
  {
      printf("invalid input");
  }
}
