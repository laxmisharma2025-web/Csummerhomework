<<<QUESTION.29>>>
#include <stdio.h>
int main() 
{
    int rows;
    scanf("%d", &rows);
    for (int i = 1; i <= rows; i++) 
{
        for (int j = 1; j <= i; j++)
{           
                 printf("* ");
}
        printf("\n");
    }
    return 0;
}

<<<QUESTION.30>>>
#include <stdio.h>
int main() 
{
    int rows = 5;
    for (int i = 1; i <= rows; i++) 
{
        for (int j = 1; j <= i; j++) 
{      
              printf("%d", j);
}
        printf("\n");
    }
    return 0;
}

<<<QUESTION.31>>>
#include <stdio.h>
int main() 
{
    int rows = 5;
    for (int i = 1; i <= rows; i++)
 {
        for (int j = 0; j < i; j++) 
{
            printf("%c", 'A' + j);
}
        printf("\n");
    }
    return 0;
}

<<<QUESTION.32>>>
#include <stdio.h>
int main() 
{
    int rows = 5;
    for (int i = 1; i <= rows; i++) 
{
        for (int j = 1; j <= i; j++)
 { 
          printf("%d", i);
}
        printf("\n");
    }
    return 0;
}