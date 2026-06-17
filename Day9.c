<<<QUESTION.33>>>
#include <stdio.h>
int main()
 {
    int rows = 5;
    for (int i = rows; i >= 1; i--)
 {
        for (int j = 1; j <= i; j++) 
{
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

<<<QUESTION.34>>>
#include <stdio.h>
int main()
 {
    int rows = 5;
    for (int i = rows; i >= 1; i--) 
{
        for (int j = 1; j <= i; j++) 
{
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}

<<<QUESTION.35>>>
#include <stdio.h>
int main()
 {
    int rows = 5;
    for (int i = 0; i < rows; i++) 
{
        for (int j = 0; j <= i; j++) 
{
            printf("%c", 'A' + i);
        }
        printf("\n");
    }
    return 0;
}

<<<QUESTION.36>>>
#include <stdio.h>
int main() 
{
    int size = 5;
    for (int i = 1; i <= size; i++)
 {
        for (int j = 1; j <= size; j++) {
            if (i == 1 || i == size || j == 1 || j == size)
 {
                printf("*");
            } 
           else 
{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}