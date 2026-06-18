<<<QUESTION.21>>>
#include <stdio.h>
int main() {
    int num, binary[32], i = 0;
    printf("Enter a decimal number: ");
    scanf("%d", &num);

    if (num == 0) 
{
        printf("Binary: 0\n");
        return 0;
    }

    while (num > 0)
 {
        binary[i] = num % 2;
        num /= 2;
        i++;
    }

    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--) 
{
        printf("%d", binary[j]);
    }
    printf("\n");
    return 0;
}

<<<QUESTION.22>>>
#include <stdio.h>
int main()
 {
    long long num;
    int decimal = 0, base = 1, rem;
    printf("Enter a binary number: ");
    scanf("%lld", &num);

    while (num > 0) 
{
        rem = num % 10;
        decimal += rem * base;
        num /= 10;
        base *= 2;
    }

    printf("Decimal: %d\n", decimal);
    return 0;
}

<<<QUESTION.23>>>
#include <stdio.h>
int main() 
{
    int num, count = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);

    while (num > 0)
 {
        count += (num & 1);
        num >>= 1;
    }

    printf("Number of set bits (1s): %d\n", count);
    return 0;
}

<<<QUESTION.24>>>
#include <stdio.h>
int main() 
{
    double x, result = 1.0;
    int n;
    printf("Enter base (x) and exponent (n): ");
    scanf("%lf %d", &x, &n);

    int absN = (n < 0) ? -n : n;

    for (int i = 0; i < absN; i++) 
{
        result *= x;
    }

    if (n < 0)
 {
        result = 1.0 / result;
    }

    printf("Result: %.6lf\n", result);
    return 0;
}