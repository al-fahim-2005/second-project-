#include <stdio.h>
#include <stdlib.h>

int main()
{
  char name [50];
  int age;
  printf("Enter Your Name Here ");
  scanf("%s",name);
  printf("Your Name Is %s\n",name);
  printf("Enter Your Age ");
  scanf("%d",&age);
  printf("You Are %d Years Old\n",age);
  return 0;

}
