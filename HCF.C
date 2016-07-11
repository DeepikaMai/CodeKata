#include<stdio.h>
#include<conio.h>
void main()
{
int n1,n2,i,hcf=1,min;
clrscr();
printf("Enter two numbers ");
scanf("%d%d",&n1,&n2);
  min=(n1<n2) ? n1 : n2;
   for(i=1;i<min;i++)
    {
    if(n1%i==0 && n2%i==0)
     hcf=i;
    }
printf("The hcf is %d " ,hcf);
getch();
}
