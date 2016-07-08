#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
char ch;
char num[256];
int dec=0,i,j,len;
printf("Enter a string : ");
//gets(num);
scanf("%d",&num);
len = strlen(num);
for(i=0;i<len;i++)
dec = dec *10 +( num[i] - '0' );

//ch = atoi(num);
printf("The value entered is %d.\n",dec);

getch();
return 0;
}