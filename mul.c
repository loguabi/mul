#include<stdio.h>
#include<conio.h>
void main()
{
int num, i=1;
printf("Enter any number:");
scanf("%d",&num);
printf("multiply table %d:",num);
while(i<=10)
{
printf("%d*%d=%d",num,i,num*i);
i++;
}
getch();
}
