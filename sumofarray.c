#include<stdio.h>
#include<stdlib.h>


int sum(int arr[]){
  
int result = 0;
int i;
for(i=0;i<10;i++)
{
result+=arr[i];
};
return result; 
}

int main(){
int a[10],i;
printf("Enter 10 elements: \n");
for(i=0;i<10;i++){
scanf("%d",&a[i]);
}
printf("Sum of all Elements is: %d", sum(a[i]));
return 0;
}



