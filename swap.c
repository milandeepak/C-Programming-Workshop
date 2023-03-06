#include<stdio.h>

int main(){
int a,b,temp;
printf("Enter a and b: ");
scanf("%d %d",&a,&b);
printf("Numbers before swapping: a = %d and b = %d \n", a,b);
temp=a;
a=b;
b=temp;

printf("Numbers after swapping: a = %d and b = %d \n", a,b);

}
