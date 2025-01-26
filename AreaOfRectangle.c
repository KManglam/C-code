#include<stdio.h>
int main(){
	float length,breadth,Area, Perimeter;
	Perimeter=2*(length+breadth);
	Area=length*breadth;
	printf("---Area of Rectangle--- \n");
	printf("Enter the Length: ");
	scanf("%f",&length);
	printf("Enter the Breadth: ");
	scanf("%f",&breadth);
	Perimeter=2*(length+breadth);
	Area=length*breadth;
	printf("Area of Rectangle: %.2f\n",Area);
	printf("Perimeter of Rectangle: %f\n",Perimeter);
	return 0;
}
