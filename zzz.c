#include<stdio.h>
#include<stdlib.h>


int main(){

int arr[10], i, sum=0;
printf("Enter 10 element: \n");
for(i=0;i<10;i++){
	scanf("%d", &arr[i]);
}

printf("Sum of all Elements: \n");
	for(i=0;i<10;i++){
sum+=arr[i];

}
printf("%d", sum);

	
return 0; 
}


 


