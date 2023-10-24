#include <stdio.h>

int main()
{

    double num1, num2, num3;

    // variables to be checked later
    double a, b, c;

    // scannig the numbers
    scanf("%lf %lf %lf", &num1, &num2, &num3);

    // sorting the numbers and making the biggest be A always
    if (num1 > num2 && num1 > num3)
    {
        a = num1;
        b = num2;
        c = num3;
    }
    else if (num2 > num1 && num2 > num3)
    {
        a = num2;
        b = num1;
        c = num3;
    }
    else if (num3 > num1 && num3 > num2)
    {
        a = num3;
        b = num2;
        c = num1;
    }
    else
    {
        a = num1;
        b = num2;
        c = num3;
    }

    // checking conditions
    if (a >= b + c)
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    else
    {
        if (a * a == b * b + c * c)
        {
            printf("TRIANGULO RETANGULO\n");
        }

        if (a * a > b * b + c * c)
        {
            printf("TRIANGULO OBTUSANGULO\n");
        }

        if (a * a < b * b + c * c)
        {
            printf("TRIANGULO ACUTANGULO\n");
        }

        if (a == b && b == c)
        {
            printf("TRIANGULO EQUILATERO\n");
        }
        if (a == b && b != c || b == c && b != a || a == c && a != b)
        {
            printf("TRIANGULO ISOSCELES\n");
        }
    }

    return 0;
}