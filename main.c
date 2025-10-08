#include <stdio.h>
#include <math.h>

int main() {
    
    float x = 2.1;

    // x = sqrt(x);
    // x = pow(x, 2);
    // x = round(x);
    //entier supérieur
    // x = ceil(x);
    //entier inférieur
    // x = floor(x);
    // x = abs(x);
    // x = log(x);
    // x = sin(x);
    // x = cos(x);
    // x = tan(x);

    double radius = 0.0;
    double area = 0.0;
    double surfaceArea = 0.0;
    double volume = 0.0;
    const double PI = 3.14159;


    printf("Enter the radius: ");
    scanf("%lf", &radius);

    area = PI * pow(radius, 2);
    surfaceArea = 4 * PI * pow(radius, 2);
    volume = (4.0/3.0) * PI * pow(radius, 3);

    printf("Area: %.2lf\n", area);
    printf("Surface Area: %.2lf\n", surfaceArea);
    printf("Volume: %.2lf\n", volume);

    return 0;
}