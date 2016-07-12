#include<stdio.h>
void main()
 {
    int i;
    printf("Enter the number between the range 1 and 10 ");
    scanf("%d",&i);
    if(i > 0 && i < 10)
     printf("%d",i);
    else
      printf("'you entered number is not in range.'");
}
