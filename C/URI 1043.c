#include <stdio.h>

int main()
{
    double x, y, z, area, perimetro;
    
    scanf("%lf %lf %lf", &x, &y, &z);
    
    if(x+y > z && x+z > y && y+z > x){
        perimetro = x+y+z;
        printf("Perimetro = %.1f\n", perimetro);
    }
    else{
        area = ((x+y)*z)/2;
        printf("Area = %.1f\n", area);
    }

    return 0;
}
