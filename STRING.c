#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>



int main() {
//Initializtion 
char c[] = "Kumar";
char a[7] = {"Manglam"};
printf("String c is : %s\n", c);
printf("String a is : %s\n", a);

// Length of the String
int len = strlen(a);
int len1 = strlen(c);
printf("String a length is : %d\n", len);
printf("String c length is : %d\n", len1);

// Copy of the String 
char d[7];
strcpy(d,a);
printf("Name: %s\n", d);

// Comparision of two String
int result = strcmp(c,a);
printf("Result: %d\n",result);   // is -1

// Merge of String
char A[5] = {"Sagar"};
char B[5] = {"Kumar"};

strcat(A,B); // content of B is Merge with A with the null terminator
printf("NAME is : %s\n", A);

//lowercase to Uppercase
char f[5] = "sasa";
printf("Uppercase of sasa is: %s\n", strupr(f));

//Uppercase to Lowercase
char k[] = "HELLO WORLD";
printf("Lowercase of HELLO is: %s\n", strlwr(k));

// Reverse String 
printf("Reverse A is: %s\n", strrev(A));

return 0;
}

