#include <stdio.h>

int main() {
    float celsius,fahrenheit;
    scanf("%f",&celsius);
    fahrenheit = (9 * celsius / 5) + 32;
    printf("%.2f", fahrenheit);
    return 0;
}
