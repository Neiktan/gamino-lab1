#include <stdio.h>

int main() {
    //variables
    double miles;
    double gallons;
    double mpg;

    printf("Miles traveled: ");
    scanf("%lf", &miles);

    printf("Gallons of gas used: ");
    scanf("%lf", &gallons);

    if (gallons > 0) {
        //miles per gallon (MPG)
        mpg = miles / gallons;

        //result
        printf("The MPG (Miles per Gallon) is: %.1lf\n", mpg);
    } else {
        printf("Error: Gallons used must be greater than 0.\n");
    }

    return 0;
}