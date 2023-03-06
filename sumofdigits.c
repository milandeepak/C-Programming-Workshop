// Find the sum of digits of a number


#include<stdio.h>

int main(){

int num,rem,sum,temp;
printf("Enter a number to find sum:");
scanf("%d",&num);

sum=0;
temp=num;
do
{
   rem=num%10;
   sum=sum+rem;
   num=num/10;	
}while(num!=0);

printf("The sum of the number %d is %d\n" , temp, sum);
}
