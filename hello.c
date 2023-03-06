#include<stdio.h>

int main(){
int roll, marks,num;
char name[50];
printf("Enter number of students:");
scanf("%d",&num);
for (int i=0;i<num;i++)
{
printf("Enter your name:");
scanf("%s", name);
printf("Enter roll no:");
scanf("%d", &roll);
printf("Enter your marks:");
scanf("%d",&marks);
if(marks>40){
printf("%s 's roll no is %d and he has passed \n", name, roll);
} 
else if(marks<=40){
printf("%s 's roll no is %d and failed \n", name, roll);
}

}
}


