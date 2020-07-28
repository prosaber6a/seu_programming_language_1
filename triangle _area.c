/**
* Saber Hossen Rabbani
* Date: 28-Jul-2020 12:05 PM
*/

#include <stdio.h>

int main() {
    int base, height = 0;
    float area = 0;
    printf("Enter triangle \"base\" and \"height\" value: ");
    scanf("%d %d", &base, &height);
    area = .5*base*height;

    printf("\n\tArea = %.3f", area);
    return 0;
}

