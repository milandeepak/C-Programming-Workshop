#include<stdio.h>
int main(){
int roll, marks;
char name[50];
printf("Enter your name:");
scanf("%s", name);
printf("Enter roll no:");
scanf("%d", &roll);
printf("Enter your marks:");
scanf("%d",&marks);
if(marks>40){
printf("%s 's roll no is %d and he has passed", name, roll);

} 

else if(marks<40){

printf("%s 's roll no is %d and failed/n", name, roll);

}
}
