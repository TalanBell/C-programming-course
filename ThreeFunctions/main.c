#include <stdio.h>
#include <stdlib.h>

//Function Prototypes
int gcd(int a, int b);
float absoluteValue(float c);
float squareRoot(float d);


int main()
{
    /* Testing Greatest Common Divisor function */
    int a = 1071;
    int b = 462;

    printf("\nThe greatest common divisor of %d and %d is %d", a, b, gcd(a, b));

    a = 1026;
    b = 405;
    printf("\nThe greatest common divisor of %d and %d is %d", a, b, gcd(a, b));

    a = 83;
    b = 240;
    printf("\nThe greatest common divisor of %d and %d is %d\n\n\n", a, b, gcd(a, b));

    /* Testing Absolute Value function */
    float c = -150.4;
    printf("\nThe absolute value of %.2f is %.2f", c, absoluteValue(c));

    c = 3.141592;
    printf("\nThe absolute value of %.2f is %.2f", c, absoluteValue(c));

    c = -3783457.4365;
    printf("\nThe absolute value of %.2f is %.2f\n\n\n", c, absoluteValue(c));

    /* Testing Square Root function */
    int n = -206;
    printf("Square root of %d = %lf\n", n, squareRoot(n));

    n = 144;
    printf("Square root of %d = %lf\n", n, squareRoot(n));

    n = 206;
    printf("Square root of %d = %lf\n\n\n", n, squareRoot(n));


    return 0;
}

//Function Definitions
int gcd(int a, int b)
{
    int t;

    while (b != 0)
    {
        t = a % b;
        a = b;
        b = t;
    }
    return a;
}

float absoluteValue(float c)
{
    if ( c < 0)
        c = -c;

    return c;
}

float squareRoot(float n)
{
    float i, precision = 0.00001;
    float returnValue = 0;

    if (n < 0)
    {
        printf("Negative argument to squareRoot.\n");
        returnValue = -1.0;
    }

    else
    {
        for(i = 1; i*i <=n; ++i);           //Integer part
        for(--i; i*i < n; i += precision);  //Fractional part

        returnValue = i;
    }

   return returnValue;
}
