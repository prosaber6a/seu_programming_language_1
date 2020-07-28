/**
* Saber Hossen Rabbani
* Date: 28-Jul-2020 12:10 PM
*/

#include <stdio.h>

int main() {

    int days,months,years = 0;
    printf("Enter days number to convert: ");
    scanf("%d", &days);

    years = days/365;
    days = days - years*365;
    months = days/30;
    days = days - months*30;

    printf("\n\t %d Year, %d Months, %d Days", years, months, days);
    return 0;
}

