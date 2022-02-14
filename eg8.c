#include<stdio.h>
#include<conio.h>
int main(void)
{
 int a;
 int b;
 int c;
 for(a=0;a<=5;a++)
 {
  c=1;
  for(b=0;b<=a;b++)
  {
   printf("%d",c);
   c++;
  }
  printf("\n");
 }
 return 0;
}