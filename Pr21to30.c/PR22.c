//This program is written by 24DCS145_JEMIT
#include <stdio.h>
#include <math.h>

int check_triangle(float a, float b, float c) {
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
       return printf("\nThese three sides are forming a triangle....");
        
    } 
    
}

float calculate_area(float a, float b, float c) {
    float semi_perimeter = (a + b + c) / 2;
    return sqrt(semi_perimeter * (semi_perimeter - a) * (semi_perimeter - b) * (semi_perimeter - c));
}

int main() {
    float a, b, c;
    printf("\nEnter three side lengths of a triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    if (check_triangle(a, b, c)) {
        printf("\nArea of the triangle: %.2f\n", calculate_area(a, b, c));
    }
    else {
        printf("\nThese three sides do not form a triangle.....");
         
    }
    printf("\n24DCS145_JEMIT\n");
    return 0;

}
