<<<QUESTION.25>>>
#include <stdio.h>
int factorial(int n) 
{
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

int main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Factorial of %d is %d\n", num, factorial(num));
    return 0;
}

<<<QUESTION.26>>>
#include <stdio.h>
int fibonacci(int n) 
{
    if (n <= 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() 
{
    int terms;
    printf("Enter the number of terms: ");
    scanf("%d", &terms);
    
    printf("Fibonacci series: ");
    for (int i = 0; i < terms; i++)
 {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
    return 0;
}

<<<QUESTION.27>>>
#include <stdio.h>
int sumOfDigits(int n) 
{
    if (n == 0) return 0;
    return (n % 10) + sumOfDigits(n / 10);
}

int main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Sum of digits: %d\n", sumOfDigits(num));
    return 0;
}

<<<QUESTION.28>>>
#include <stdio.h>
int reverseNum(int n, int rev)
 {
    if (n == 0) return rev;
    return reverseNum(n / 10, rev * 10 + (n % 10));
}

int main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Reversed number: %d\n", reverseNum(num, 0));
    return 0;
}