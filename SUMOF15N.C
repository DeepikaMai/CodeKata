#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,sum=0;
clrscr();
   for(i=1;i<=15;i++)
    {
    sum+=i;
    }
printf("\tThe sum of 1st 15 num = %d\n" ,sum);
   for(i=15;i<=45;i++)
    {
    if(i%2!=0)
    sum+=i;
    }
printf("\t\tThe sum of odd num = %d\n" ,sum);

getch();
}