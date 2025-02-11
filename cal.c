#include<stdio.h>
#include<stdlib.h>




int Add(int a,int b){
	int sum=a+b;
	return printf("ADDITION:%d\n",sum);
}
int Sub(int a,int b){
	int sub=a-b;
	return printf("SUBSTRACTION:%d\n",sub);
}
int Mult(int a,int b){
	int mult=a*b;
	return printf("MULTIPLICATION:%d\n",mult);
}
int Div(int a, int b){
	
	if(b==0||b>a){
	printf("DIVISION: Error");
}else
{
int div = a/b;
return printf("DIVISION:%d\n",div);
}
}
int main() {
int x,y;
printf("----A Simple Calculator----\n");
printf("Enter the First Number: \n");
scanf("%d",&x);
printf("Enter the Second Number: \n");
scanf("%d",&y);
Add(x,y);
Sub(x,y);
Mult(x,y);
Div(x,y);


return 0;
}

