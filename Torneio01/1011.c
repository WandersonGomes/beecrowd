#include <stdio.h>

#define PI 3.14159

int main() {
    double raio, volume;

    scanf("%lf", &raio);

    volume = (4/3.0) * PI * (raio * raio * raio); // v = (4/3) * pi * r³

    printf("VOLUME = %.3lf\n", volume);

    return 0;
}