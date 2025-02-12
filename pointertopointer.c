#include<stdio.h>
#include<stdlib.h>


int main() {
int i=3, *j, **k;
j=&i;
k=&j;
printf("Address of i = %p\n",&i);
printf("Address of i = %p\n",j);
printf("Address of i = %p\n",*k);
printf("Address of j = %p\n",&j);
printf("Address of j = %p\n",k);
printf("Address of k = %p\n",&k);

printf("Value of j = %p\n",j);
printf("Value of k = %p\n",k);
printf("Value of i = %d\n",i);
printf("Value of i = %d\n",*(&i));
printf("Value of i = %d\n",*j);
printf("Value of i = %d\n",**k);


return 0;
}

