#include <stdio.h>

void sort3(int *a, int *b, int *c);

int main(void)
{
    int n;
    scanf("%d", &n);

    int numbers[n][3];

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %d", &numbers[i][0], &numbers[i][1], &numbers[i][2]);
        sort3(&numbers[i][0], &numbers[i][1], &numbers[i][2]);
    }

    for(int i = 0; i < n; i++)
    {
        if(numbers[i][2] >= numbers[i][0] + numbers[i][1])
        {
            printf("%d\n", numbers[i][1]);
        }
        else
        {
            printf("%d\n", numbers[i][2] - numbers[i][0]);
        }
    }
}

void sort3(int *a, int *b, int *c)
{
    if (*a > *b) { int temp = *a; *a = *b; *b = temp; }
    if (*b > *c) { int temp = *b; *b = *c; *c = temp; }
    if (*a > *b) { int temp = *a; *a = *b; *b = temp; }
}