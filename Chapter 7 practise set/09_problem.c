#include<stdio.h>

int main() {
    int arr3d[2][4][6];
    for (int i = 0 ; i < 2 ; i++){
        for (int j = 0 ; j < 4 ; j++){
            for (int k = 0 ; k < 6 ; k++){
                printf("%u ",&arr3d[i][j][k]);
                
            }
        }
    }

    return 0 ;
}