#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    int numbers[n][3];

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %d", &numbers[i][0], &numbers[i][1], &numbers[i][2]);
    }

    for (int i =0; i < n; i++)
    {
        if(numbers[i][0] == numbers[i][1] && numbers[i][1] == numbers[i][2])
        {
            printf("0\n");
        }

        else if (numbers[i][0] == numbers[i][1])
        {
            if (numbers[i][0] > numbers[i][2])
            {
                printf("%d\n", numbers[i][0] - numbers[i][2]);
            }
            else
            {
                if(2 * numbers[i][0] >= numbers[i][2])
                {
                    printf("%d", numbers[i][2] - numbers[i][0]);
                }
                if(2 * numbers[i][0] < numbers[i][2])
                {
                    numbers[i][2] = 2 * numbers[i][0];
                    printf("%d", numbers[i][2] - numbers[i][0]);
                }
            }
        }

        else if (numbers[i][1] == numbers[i][2])
        {
            if (numbers[i][1] > numbers[i][0])
            {
                printf("%d\n", numbers[i][1] - numbers[i][0]);
            }
            else
            {
                if(2 * numbers[i][1] >= numbers[i][0])
                {
                    printf("%d", numbers[i][0] - numbers[i][1]);
                }
                if(2 * numbers[i][1] < numbers[i][0])
                {
                    numbers[i][0] = 2 * numbers[i][1];
                    printf("%d", numbers[i][0] - numbers[i][1]);
                }
            }
        }

        else if (numbers[i][0] == numbers[i][2])
        {
            if (numbers[i][0] > numbers[i][1])
            {
                printf("%d\n", numbers[i][0] - numbers[i][1]);
            }
            else
            {
                if(2 * numbers[i][0] >= numbers[i][1])
                {
                    printf("%d", numbers[i][1] - numbers[i][0]);
                }
                if(2 * numbers[i][0] < numbers[i][1])
                {
                    numbers[i][1] = 2 * numbers[i][0];
                    printf("%d", numbers[i][1] - numbers[i][0]);
                }
            }
        }

        else if (numbers[i][0] + numbers[i][1] > numbers[i][2] && numbers[i][2] > numbers[i][0] && numbers[i][2] > numbers[i][1])
        {
            if(numbers[i][0] > numbers[i][1])
            {
                printf("%d\n", numbers[i][2] - numbers[i][1]);
            }
            else
            {
                printf("%d\n", numbers[i][2] - numbers[i][0]);
            }
        }
        else if (numbers[i][0] + numbers[i][2] > numbers[i][1] && numbers[i][1] > numbers[i][0] && numbers[i][1] > numbers[i][2])
        {
            if(numbers[i][0] > numbers[i][1])
            {
                printf("%d\n", numbers[i][1] - numbers[i][2]);
            }
            else
            {
                printf("%d\n", numbers[i][1] - numbers[i][0]);
            }
        }
        else if (numbers[i][2] + numbers[i][1] > numbers[i][0] && numbers[i][0] > numbers[i][2] && numbers[i][0] > numbers[i][1])
        {
            if(numbers[i][0] > numbers[i][1])
            {
                printf("%d\n", numbers[i][0] - numbers[i][1]);
            }
            else
            {
                printf("%d\n", numbers[i][0] - numbers[i][2]);
            }
        }
        else if(numbers[i][0] > numbers[i][1] && numbers[i][0] > numbers[i][2])
        {
            numbers[i][0] = numbers[i][1] + numbers[i][2];
            if(numbers[i][1] < numbers[i][2])
            {
                printf("%d\n", numbers[i][0] - numbers[i][1]);
            }
            else
            {
                printf("%d\n", numbers[i][0] - numbers[i][2]);
            }
        }
        else if(numbers[i][1] > numbers[i][0] && numbers[i][1] > numbers[i][2])
        {
            numbers[i][1] = numbers[i][0] + numbers[i][2];
            if(numbers[i][0] < numbers[i][2])
            {
                printf("%d\n", numbers[i][1] - numbers[i][0]);
            }
            else
            {
                printf("%d\n", numbers[i][1] - numbers[i][2]);
            }
        }
        else if(numbers[i][2] > numbers[i][1] && numbers[i][2] > numbers[i][0])
        {
            numbers[i][2] = numbers[i][1] + numbers[i][0];
            if(numbers[i][1] < numbers[i][0])
            {
                printf("%d\n", numbers[i][2] - numbers[i][1]);
            }
            else
            {
                printf("%d\n", numbers[i][2] - numbers[i][0]);
            }
        }

    }
}
