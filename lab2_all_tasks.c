
#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

int main(void)
{
    printf("====================================\n");
    printf(" Computing for Engineers - Lab 2\n");
    printf(" Tasks A to J\n");
    printf("====================================\n\n");

    // ========================================
    // Task A: Calculate x = (a+b)(c+d)
    // ========================================
    {
        int a, b, c, d;
        int x;

        printf("Task A: Calculate (a+b)*(c+d)\n");
        printf("Enter four integers a, b, c, d: ");

        if (scanf("%d %d %d %d", &a, &b, &c, &d) != 4)
            return 1;

        x = (a + b) * (c + d);
        printf("Result x = %d\n\n", x);
    }

    // ========================================
    // Task B: float, double and printf formats
    // ========================================
    {
        float p;
        double q;

        printf("Task B: Float and double\n");
        printf("Enter a value for p (float): ");

        if (scanf("%f", &p) != 1)
            return 1;

        printf("p in decimal format = %f\n", p);
        printf("p in exponential format = %e\n", p);

        printf("Enter a value for q (double): ");

        if (scanf("%lf", &q) != 1)
            return 1;

        printf("q in decimal format = %f\n", q);
        printf("q in exponential format = %e\n", q);
        printf("2*p + 3*q = %f\n\n", 2 * p + 3 * q);
    }

    // ========================================
    // Task C: x*x*x + 3*x*x + 5*x + 7
    // ========================================
    {
        double x, result;

        printf("Task C: Polynomial using multiplication\n");
        printf("Enter x: ");

        if (scanf("%lf", &x) != 1)
            return 1;

        result = x * x * x + 3 * x * x + 5 * x + 7;
        printf("Result = %f\n\n", result);
    }

    // ========================================
    // Task D: Same polynomial using pow()
    // ========================================
    {
        double x, result;

        printf("Task D: Polynomial using pow()\n");
        printf("Enter x: ");

        if (scanf("%lf", &x) != 1)
            return 1;

        result = pow(x, 3.0) + 3 * pow(x, 2.0)
                 + 5 * x + 7;

        printf("Result = %f\n\n", result);
    }

    // ========================================
    // Task E: Division using float variables
    // ========================================
    {
        float a, b, c;

        printf("Task E: Float division\n");
        printf("Enter two numbers a and b: ");

        if (scanf("%f %f", &a, &b) != 2)
            return 1;

        if (b == 0.0f)
        {
            printf("Error: division by zero.\n\n");
        }
        else
        {
            c = a / b;
            printf("a / b = %f\n\n", c);
        }
    }

    // ========================================
    // Task F: Integer division and type casting
    // ========================================
    {
        int a, b;
        float c;

        printf("Task F: Integer division and casting\n");
        printf("Enter two integers a and b: ");

        if (scanf("%d %d", &a, &b) != 2)
            return 1;

        if (b == 0)
        {
            printf("Error: division by zero.\n\n");
        }
        else
        {
            c = a / b;
            printf("Without casting: %f\n", c);

            c = (float)a / (float)b;
            printf("With casting:    %f\n\n", c);
        }
    }

    // ========================================
    // Task G: Remainder using %
    // ========================================
    {
        int p;

        printf("Task G: Remainder after division by 7\n");
        printf("Enter an integer p: ");

        if (scanf("%d", &p) != 1)
            return 1;

        printf("Remainder = %d\n\n", p % 7);
    }

    // ========================================
    // Task H: Volume of a sphere
    // V = (4/3) * PI * r^3
    // ========================================
    {
        double r, V;

        printf("Task H: Volume of a sphere\n");
        printf("Enter radius r: ");

        if (scanf("%lf", &r) != 1)
            return 1;

        if (r < 0.0)
        {
            printf("Error: radius cannot be negative.\n\n");
        }
        else
        {
            V = (4.0 / 3.0) * PI * r * r * r;
            printf("Volume V = %f\n\n", V);
        }
    }

    // ========================================
    // Task I: Sum two numbers, then six numbers
    // Use a and total for the number and sum.
    // ========================================
    {
        int a;
        int total = 0;
        int i;

        printf("Task I (part 1): Sum of two numbers\n");

        for (i = 1; i <= 2; i++)
        {
            printf("Enter number %d: ", i);

            if (scanf("%d", &a) != 1)
                return 1;

            total = total + a;
        }

        printf("Sum of two numbers = %d\n\n", total);

        total = 0;

        printf("Task I (part 2): Sum of six numbers\n");

        for (i = 1; i <= 6; i++)
        {
            printf("Enter number %d: ", i);

            if (scanf("%d", &a) != 1)
                return 1;

            total = total + a;
        }

        printf("Sum of six numbers = %d\n\n", total);
    }

    // ========================================
    // Task J: Calculate factorial n!
    // ========================================
    {
        int n;
        int i;
        float factorial = 1.0f;

        printf("Task J: Calculate factorial n!\n");
        printf("Enter an integer n (0 to 20): ");

        if (scanf("%d", &n) != 1)
            return 1;

        if (n < 0 || n > 20)
        {
            printf("Error: n must be between 0 and 20.\n\n");
        }
        else
        {
            for (i = 1; i <= n; i++)
            {
                factorial = factorial * i;
            }

            printf("%d! = %.0f\n\n", n, factorial);
        }
    }

    printf("====================================\n");
    printf("All Lab 2 tasks completed!\n");
    printf("====================================\n");

    return 0;
}
