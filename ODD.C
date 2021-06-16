#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,sum=0;
clrscr();
printf("Enter the value of n:\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
sum+=((2*i)-1)*((2*i)-1);
}
printf("The sum of squares of first %d odd numbers is %d",n,sum);
getch();
}