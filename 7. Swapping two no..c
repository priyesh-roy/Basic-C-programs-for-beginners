#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter two numbers:\n");
	scanf("%d %d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("After swapping:%d %d",a,b);
	return 0;
}


//#include <stdio.h>
//int main()
//{
//    int a, b;
//    printf("Enter two numbers: ");
//    scanf("%d %d", &a, &b);  //consider two numbers as 4 and 5
//    a = a * b;  // a = 4 * 5 = 20
//    b = a / b;  // b = 20 / 5 = 4
//    a = a / b;  // a = 20 / 4 = 5
//    printf("Numbers after swapping: %d %d", a, b);
//}


//#include <stdio.h>
//int main()
//{
//    int a, b;
//    printf("Enter two numbers: ");
//    scanf("%d %d", &a, &b); 
//    a = a ^ b; 
//    b = a ^ b;
//    a = a ^ b;
//    printf("Numbers after swaping: %d %d", a, b);
//}

