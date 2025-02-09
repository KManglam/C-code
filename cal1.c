int Add(int a,int b){
	int sum=a+b;
	printf("ADDITION:%d\n",sum);
	return 0;
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
int x,y,l;
printf("----A Simple Calculator----\n");
printf("Choose a number:\n ");
printf("1.ADDITION\t 2.SUBSTRACTION \n3.MULTIPLICATION\t 4.DIVISION\n");
scanf("%d ",&l);
printf("Enter the First Number: \n");
scanf("%d",&x);
printf("Enter the Second Number: \n");
scanf("%d",&y);

switch(l){
	case 1:
	Add(x,y);
    break;

	case 2:
	Sub(x,y);
    break;
	
    case 3:
	Mult(x,y);
	break;
	
    case 4:
	Div(x,y);
    break;

deafult: 
	printf("Enter a valid number");
}


return 0;
}
