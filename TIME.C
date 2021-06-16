#include<stdio.h>
#include<conio.h>
int convert_time(int hrs,int mins);
void main()
 {
  int hrs, mins ,total_mins;
  clrscr();
  printf("enter the time in  hours and minutes:\n");
  scanf("%d%d",&hrs,&mins);
  total_mins=convert_time(hrs,mins);
  printf("Total minutes=%d",total_mins);
  getch();
 }
 int convert_time(int hrs,int mins)
 {
 mins=(hrs*60)+mins;
 return mins;
 }

