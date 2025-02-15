#include<stdio.h>
#include<stdlib.h>

int main() {
int a[3][3] = {{5,6,7},{6,7,8},{0,2,4}};
int c[3][3],i,j; 
for(i=0;i<3;i++){
	for(j=0;j<3;j++){
		c[j][i] = a[i][j];
}
}
printf("Transpose of Matrix: \n");
for(i=0;i<3;i++){
	for(j=0;j<3;j++){
		printf("%d ", c[i][j]);
}
printf("\n");
}	
return 0;
}




