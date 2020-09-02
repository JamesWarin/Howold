#include <stdio.h>
#include <string.h>

void main (void)
{
  char name[128], month[12];
  int age, day, year;
  
  printf("Hello, what is your name?\n");
  scanf("%s",name);

  printf("%s, What month is your birthday?\n");
  scanf("%s",month);

  if (strcmp(month, "January") ==0)
    {
	   printf("Born in the new year\n");
    }   
  if (strcmp(month, "February") ==0)
    {
	   printf("A Valentines gift for your parents"\n);
    }
  if (strcmp(month, "March") ==0)
    {
	   printf("Mad as a hatter!\n");
    }
  if (strcmp(month, "April") ==0)
    {
	   printf("Born in April, but you're no fool\n");
    }
  else
    {
      printf("Have you spelled the month correctly?\n");
    }

}  
  
	   
		  
	 
    

