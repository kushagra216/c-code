#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
char name[10],sp[10],dp[10];
int date;
  printf("Enter the name of the paseger ");
  gets(name);
  printf("Enter starting point");
  gets(sp);
   clrscr()
  printf("Enter your destination point");
  gets(dp);
   clrscr();
  printf("Enter the date of travel in DD-MM-YY format");
  scanf("%d",&date);
   clrscr();
  printf("%s you are travelling form %s to %s on %d\n\n\n",name,sp,dp,date);
  printf("************************************************\n");
  printf("Available Trains From %s to %s are :\n",sp,dp);
  printf("*************************************************\n");
  printf("*NAME*      *TRAINNO*    *FARE*   *AVAILIBILITY**\n");
  printf("*RAJDHANI    8840345      850      A            *\n");
  printf("*TEJAS       6340345      550      A            *\n");
  printf("*SHATABDI    4540345      750      A            *\n");
  printf("*DHURANTO    9640345      450      A            *\n");
  printf("*************************************************\n");
   getch();
   return 0;
}
