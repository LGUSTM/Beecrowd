#include <stdio.h>
 
int main() {
    int i; 
    double s = 1;

    for(i = 2; i <= 100; i++){
    	s = s + (1.00 / i);
    }
    
    printf("%.2f\n", s);
    
    return 0;
}