//using functions
#include <stdio.h>
#include <math.h>

float area_of_a_circle(float radius)
{
return M_PI * radius * radius;
}
int main()
{
float area, radius;
printf(“\nEnter the radius of the circle : “);
scanf(“%f”, &radius);
area = area_of_a_circle(radius);
printf(“\nArea of the circle : %f\n”, area);
return 0;



//using pointers
#include <stdio.h>
#include <math.h>

float area_of_circle(float *radius)
{
return M_PI * (*radius) * (*radius);
}
int main()
{
float radius;

printf(“\nEnter the radius of Circle : “);
scanf(“%f”, &radius);
printf(“\nArea of Circle : %f”, area_of_circle(&radius));

return (0);
}


