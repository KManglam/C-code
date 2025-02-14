#include<stdio.h>
#include<stdlib.h>

int main() {

printf("Swapping of two Number\n");
int a,b;
printf("Enter a number: ");
scanf("%d",&a);
printf("Enter b number: ");
scanf("%d",&b);
//logic
a = a+b;
b = a-b;
a = a-b;
printf("a: %d\n",a);

printf("b: %d\n",b);

return 0;
}

