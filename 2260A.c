#include <stdio.h>

int main(void){
    int t;
    scanf("%d", &t);
    int s[t];
    int a[t][50];
    int b[t];

    // Read all test cases
    for (int i = 0; i < t; i++) {
        scanf("%d", &s[i]);

        for (int j = 0; j < s[i]; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for(int k = 0; k < t; k++){
        b[k] = 0;
        for(int l = 0; l < s[k]; l++){
            if(a[k][l] == 0){
                b[k]++;
            }
        }
    }

    for(int j = 0; j < t; j++){
        if(a[j][0] == a[j][s[j]-1] && a[j][0] == 0){
            printf("0\n");
        }
        else if(b[j] >= 2){
            if(a[j][0] == a[j][s[j]-1] && a[j][0] == 1){
                printf("2\n");
            }
            else{
                printf("1\n");
            }
        }
        else{
            printf("-1\n");
        }
    }
}