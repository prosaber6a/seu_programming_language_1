/**
* Saber Hossen Rabbani
* Date: 28-Jul-2020 11:50 AM
*/
#include <stdio.h>

int main() {
    int a, b = 0;
    printf("Enter the value for \"a\" and \"b\" variable: ");
    scanf("%d %d", &a, &b);
    printf("\n\tSummation %d + %d = %d", a, b, a+b);
    printf("\n\tSubtraction %d - %d = %d", a, b, a-b);
    printf("\n\tMultiplication %d * %d = %d", a, b, a*b);
    printf("\n\tDivision %d / %d = %d", a, b, a/b);
    printf("\n\tReminder %d %% %d = %d", a, b, a%b);
    return 0;
}

