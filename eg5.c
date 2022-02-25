//numbers of prime numbers between two given numbers
#include<stdio.h>
#include<conio.h>
int main()
{
 int a,b,i,j,s=0,k=0;
 while(a)
 {
 printf("Enter any two numbers\n");
 scanf("%d%d",&a,&b);
 if(b<a||b==0)
 {
 printf("Second number must not be less than first number\n");
 continue;
 }
 else
 break;
 }
 for(i=a;i<=b;i++)
 {
  s=0;
  for(j=2;j<=9;j++)
  {
   if(i==2||i==1)
   break;
   else
   if(i%j==0)
   s=s+1;
   if(s==2)
   break;
  }
   if(s>=2)
   k=k;
   else
   k=k+1;
 }
printf("Total number of prime numbers between %d and %d is %d\n",a,b,k);
return 0;
}