#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
char ch;
char num[256];
printf("Enter a string : ");
gets(num);
ch = stoi(num);
printf("The value entered is %d.\n",ch);
return 0;
getch();
}