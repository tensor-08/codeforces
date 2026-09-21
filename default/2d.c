#include <stdio.h>

int main(void){
    int t;
    scanf("%d", &t);
    int s[t];
    int a[t][100];

    // Read all test cases
    for (int i = 0; i < t; i++) {
        scanf("%d", &s[i]);

        for (int j = 0; j < s[i]; j++) {
            scanf("%d", &a[i][j]);
        }
    }
}