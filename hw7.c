#include <stdio.h>
#include <math.h>

int main(void) {

    double num[5];
    double avg;
    double sum = 0;
    double result = 0;

    printf("Enter 5 real numbers : ");
    scanf_s("%lf %lf %lf %lf %lf", &num[0], &num[1], &num[2], &num[3], &num[4]);

    for (int i = 0; i < 5; i++) {
        sum = sum + num[i];
    }
    avg = sum / 5;
    sum = 0;
    for (int i = 0; i < 5; i++) {
        double square = pow(num[i] - avg, 2);
        sum = sum + square;
    }
    printf("Standard Deviation : %.3f", sqrt(sum / 5));

    return 0;
}
