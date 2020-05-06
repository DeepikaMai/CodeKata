#include<stdio.h>
#include<conio.h>
void main()
{
char c;
printf("Enter a alpha or numeric number");
scanf("%c",&c);
if(c>=96 && c<=122)
 printf("The Enter value %c is a lower case alphabet",c);
else if(c>=65 && c<=90)
 printf("The entered value %c is a upper case alphabet",c);
else
 printf("The entered value %c is not a alphabet",c);
getch();
}
