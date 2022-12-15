#include<stdio.h>

void main()
{
int i,data;
printf("\nEnter the digit :\n");
scanf("%d",&data);

for(i=7;i>=0;i--)
{

printf("%d",((data>>i)&1));

}
}
