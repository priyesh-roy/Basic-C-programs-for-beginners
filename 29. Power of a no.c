//using pow() function
#include <math.h>
#include <stdio.h>

int main() {
    double base, exp, result;
    printf("Enter a base number: ");
    scanf("%lf", &base);
    printf("Enter an exponent: ");
    scanf("%lf", &exp);

    // calculates the power
    result = pow(base, exp);

    printf("%.1lf^%.1lf = %.2lf", base, exp, result);
    return 0;
}


//using while loop
//#include <stdio.h>
//int main() {
//    int base, exp;
//    long long result = 1;
//    printf("Enter a base number: ");
//    scanf("%d", &base);
//    printf("Enter an exponent: ");
//    scanf("%d", &exp);
//
//    while (exp != 0) {
//        result *= base;
//        --exp;
//    }
//    printf("Answer = %lld", result);
//    return 0;
//}



//using recursion
//#include <stdio.h>
//
//int power_of_a_number(int base, int exponent)
//{
//if (exponent != 0)
//return (base * power_of_a_number(base, exponent-1));
//else
//return 1;
//}
//
//int main()
//{
//int base, exponent;
//printf("\nEnter the base value : ");
//scanf("%d", &base);
//printf("\nEnter the exponent value : ");
//scanf("%d", &exponent);
//printf("\nResultant value : %d\n", power_of_a_number(base,exponent));
//return 0;
//}


