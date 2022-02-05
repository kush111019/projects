#include<stdio.h>
#include<conio.h>
int main()
{
 int a;
 int b;
 int c;
 printf("Enter any number\n");
 scanf("%d",&a);
 b=1;
 while(b<=10)
 {
  c=a*b;
  printf("%d\n",c);
  b++;
 }
 return 0;
}