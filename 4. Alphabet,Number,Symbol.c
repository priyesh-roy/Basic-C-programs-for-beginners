#include<stdio.h>
int main()
{
	char c;
	printf("Enter a character:\n");
	scanf("%c",&c);
	if(c>=65 && c<=90)
		printf("Upper");
	else if(c>=97 && c<=122)
		printf("Lower");
	else if(c>=48 && c<=57)
		printf("Number");
	else
		printf("Symbol");
	return 0;
}
//65 90
//97 122
//48 57
