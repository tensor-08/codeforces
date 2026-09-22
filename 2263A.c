#include <stdio.h>

int main(void){
    int t;
    scanf("%d", &t);
    int n[t];
    int a[t][100];
    for (int i = 0; i < t; i++) {
        scanf("%d", &n[i]);

        for (int j = 0; j < n[i]; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for(int k = 0; k < t; k++){
        while(0==0){

            //bessie
            while(0==0){
                int cat = 0;
                for(int l = 0; l < n[k]-1; l++){
                //if both are different
                    if(a[k][l] != a[k][l+1]){
                        a[k][l] = 1;
                        for(int m = l+1; m < n[k]-1; m++){
                            a[k][m] = a[k][m+1];
                        }
                        a[k][n[k]-1] = 0;
                        n[k]--;
                        l--;
                        cat = 1;
                        break;
                    }
                }
                if(cat == 1){
                    break;
                }
                for(int l = 0; l < n[k]-1; l++){
                    //if both are 0
                    if(a[k][l] == 0 && a[k][l+1] == 0){
                        a[k][l] = 0;
                        for(int m = l+1; m < n[k]-1; m++){
                            a[k][m] = a[k][m+1];
                        }
                        a[k][n[k]-1] = 0;
                        n[k]--;
                        l--;
                        cat = 1;
                        break;
                    }
                }
                if(cat == 1){
                    break;
                }
                for(int l = 0; l < n[k]-1; l++){
                    //if both are 1
                    if(a[k][l] == 1 && a[k][l+1] == 1){
                        a[k][l] = 1;
                        for(int m = l+1; m < n[k]-1; m++){
                            a[k][m] = a[k][m+1];
                        }
                        a[k][n[k]-1] = 0;
                        n[k]--;
                        l--;
                        cat = 1;
                        break;
                    }
                }
                if(cat == 1){
                    break;
                }
            }

            if(n[k] == 1){
                break;
            }

            //elsie
            while(0==0){
                int cat = 0;
                for(int l = 0; l < n[k]-1; l++){
                    //if both are different
                    if(a[k][l] != a[k][l+1]){
                        a[k][l] = 0;
                        for(int m = l+1; m < n[k]-1; m++){
                            a[k][m] = a[k][m+1];
                        }
                        a[k][n[k]-1] = 0;
                        n[k]--;
                        l--;
                        cat = 1;
                        break;
                    }
                }
                if(cat == 1){
                    break;
                }

                for(int l = 0; l < n[k]-1; l++){
                    //if both are 1
                    if(a[k][l] == 1 && a[k][l+1] == 1){
                        a[k][l] = 1;
                        for(int m = l+1; m < n[k]-1; m++){
                            a[k][m] = a[k][m+1];
                        }
                        a[k][n[k]-1] = 0;
                        n[k]--;
                        l--;
                        cat = 1;
                        break;
                    }
                }
                if(cat == 1){
                    break;
                }
                for(int l = 0; l < n[k]-1; l++){
                    //if both are 0
                    if(a[k][l] == 0 && a[k][l+1] == 0){
                        a[k][l] = 0;
                        for(int m = l+1; m < n[k]-1; m++){
                            a[k][m] = a[k][m+1];
                        }
                        a[k][n[k]-1] = 0;
                        n[k]--;
                        l--;
                        cat = 1;
                        break;
                    }
                }
                if(cat == 1){
                    break;
                }
            }

            if(n[k] == 1){
                    break;
            }

        }
    }

    for(int p = 0; p < t; p++){
        if(a[p][0] == 1){
            printf("Bessie\n");
        }
        else{
            printf("Elsie\n");
        }
    }
}