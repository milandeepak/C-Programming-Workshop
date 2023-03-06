// Write a program to reverse a number
#include<stdio.h>

int main(){

int num,rem,rev,temp;
printf("Enter a number to be reversed:");
scanf("%d",&num);
temp=num;
rev=0;
do
{
   rem=num%10;
   rev=rev*10+rem;
   num=num/10;
}while(num!=0);

printf("The reverse of the number %d is %d" , temp, rev);
}
