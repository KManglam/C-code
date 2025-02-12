#include<stdio.h>
#include<stdlib.h>
//Sort Integer Element in Ascending order
int main() {
	

int arr[5],i,j,temp;
printf("Enter 5 Elements: ");
	for (i=0;i<5;i++){
		scanf("%d",&arr[i]);
}
//arr[5] = 4 1 7 0 9
//1 4 7 0 9
//1 4 7 0 9
//0 4 7 1 9
//pass 2
//i=1, j=2
//0 4 7 1 9
//0 1 7 4 9
//pass 3
// i = 2, j= 3
// 0 1 4 7 9
// j =4
// pass 4
// i =3 , j 4
// 0 1 4 7 9


for(i=0;i<4;i++){
	for(j=i+1;j<5;j++){
	if(arr[i]>arr[j]){
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
      }
	} 
}
printf("Sorted Array: ");
	for(i=0;i<5;i++){
printf("%d ", arr[i]);
	
	}	
return 0;
}

