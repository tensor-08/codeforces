#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isprime(int n);

int main(void)
{
    int n;
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(int i = 0; i < n; i++)
    {
        if(isprime(a[i] + 1))
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}

bool isprime(int n) {
    if (n < 2) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}