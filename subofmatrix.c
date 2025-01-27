#include<stdio.h>
#include<stdlib.h>

int main() {
int a[3][3],b[3][3],c[3][3],i,j;
printf("Enter the First matrix(9 elements):\n");
	for(i=0;i<3;i++){	
		for(j=0;j<3;j++){
			scanf("%d", &a[i][j]);
}
}
printf("Enter the Second matrix(9 elements):\n");
	for(i=0;i<3;i++){	
		for(j=0;j<3;j++){
			scanf("%d", &b[i][j]);
}
}
printf("Substraction of Two matrix: \n");
	for(i=0;i<3;i++){	
		for(j=0;j<3;j++){
			c[i][j]=a[i][j]-b[i][j];
				printf("%d",c[i][j]);

}
}	
return 0;
}

