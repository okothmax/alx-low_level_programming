#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct car
{
    char *name;
    int engine;
    char *make;
} model;

int main()
{

    // struct car car1, car2, car3;
    model car1, car2, car3;
    model car1 = {"toyota", 2300, "bshhdyd"};
    
    car1.engine = 2500;
    car2.engine = 3000;
    car3.engine = 3500;

    printf("the engine caoacity of car3; %i", car3.engine);
    printf("the engine caoacity of car3; %i", car1.engine);
    printf("the engine caoacity of car3; %i", car2.engine);
    // typedef int INTEGER;

    // INTEGER n = 3;
    // printf("The valie of n; %i", n);

    // struct car car1, car2, car3;

    // car1.name = "Toyota";
    // car1.make = "noah";
    // car1.engine = 2000;

    // printf("The engine capicity if car1:  %d", car1.engine);

    // car2.name = "porche";

    // printf("The name of car2: %s", car2.name);

    // car3.engine = 2500;

    // printf("The ingine of car3 is : %d", car3.engine);

    return 0;
}