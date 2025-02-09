#include<stdio.h>
#include<stdlib.h>

int main() {
printf("Celcius-To-Fahrenite\n");
float temp;
printf("Enter Temperature: ");
scanf("%f",&temp);
temp=temp*9/5+32;
printf("Temperature in Fahrenite is: %.2ff",temp);
return 0;
  
}

