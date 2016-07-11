#include<stdio.h>
#include<conio.h>
int main()
{
int n1,n2,i,lcm=1,min;
clrscr();
printf("Enter two numbers ");
scanf("%d%d",&n1,&n2);
  min=(n1<n2) ? n1 : n2;
   while(1)
   {
    if(min%n1==0 && min%n2==0)
     {
     printf("The hcf is %d " ,lcm);
     break;
     }
     ++min;
    }
  
getch();
return 0;
}
