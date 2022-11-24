#include "main.h"

int main()
{
    vehicle toyota, volvo, hyundai, lambo;

    toyota.name = "vangard";
    toyota.yom = 2020;
    toyota.country = "japan";
    toyota.price = 3000000;

    volvo.name = "xc60";
    volvo.yom = 2021;
    volvo.country = "sweden";
    volvo.price = 3500000;

    hyundai.name = "primus";
    hyundai.yom = 2019;
    hyundai.country = "china";
    hyundai.price = 900000;

    lambo.name = "hurricane";
    lambo.yom = 2018;
    lambo.country = "italy";
    lambo.price = 10000000;

    printf("The name of the vehicle: %s\n", toyota.name);
    printf("The yom of the vehicle: %i\n", toyota.yom);
    printf("The country of manufacture: %s\n", toyota.country);
    printf("The price of the vehicle: %d\n", toyota.price);
    printf("\n");
    printf("The name of the vehicle: %s\n", volvo.name);
    printf("The yom of the vehicle: %i\n", volvo.yom);
    printf("The country of manufacture: %s\n", volvo.country);
    printf("The price of the vehicle: %d\n", volvo.price);
    printf("\n");
    printf("The name of the vehicle: %s\n", hyundai.name);
    printf("The yom of the vehicle: %i\n", hyundai.yom);
    printf("The country of manufacture: %s\n", hyundai.country);
    printf("The price of the vehicle: %d\n", hyundai.price);
    printf("\n");
    printf("The name of the vehicle: %s\n", lambo.name);
    printf("The yom of the vehicle: %i\n", lambo.yom);
    printf("The country of manufacture: %s\n", lambo.country);
    printf("The price of the vehicle: %d\n", lambo.price);

    return 0;
}
