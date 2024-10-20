#include <stdio.h>

int main() {
    int mat1[2][2], mat2[2][2], sum[2][2], subs[2][2], multi[2][2];
    float div_result[2][2];
    int i, j, check;
    printf("Enter Matrix 1 Elements:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("Enter Matrix 2 Elements:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }
    printf("Enter your Choice\n");
    printf("\n1 = Sum \n2 = Subtraction \n3 = Multiplication \n4 = Element-wise Division\n");
    scanf("%d", &check);
    switch (check) {
        case 1: {
            for (i = 0; i < 2; i++) {
                for (j = 0; j < 2; j++) {
                    sum[i][j] = mat1[i][j] + mat2[i][j];
                }
            }
            printf("\nSum of two matrices:\n");
            for (i = 0; i < 2; i++) {
                for (j = 0; j < 2; j++) {
                    printf("%d  ", sum[i][j]);
                }
                printf("\n");
            }
            break;
        }

        case 2: {
            // Matrix Subtraction
            for (i = 0; i < 2; i++) {
                for (j = 0; j < 2; j++) {
                    subs[i][j] = mat1[i][j] - mat2[i][j];
                }
            }
            printf("\nSubtraction of two matrices:\n");
            for (i = 0; i < 2; i++) {
                for (j = 0; j < 2; j++) {
                    printf("%d  ", subs[i][j]);
                }
                printf("\n");
            }
            break;
        }
        case 3: {
            
            for (i = 0; i < 2; i++) {
                for (j = 0; j < 2; j++) {
                    multi[i][j] = 0; 
                    for (int k = 0; k < 2; k++) { 
                        multi[i][j] += mat1[i][k] * mat2[k][j];
                    }
                }
            }
            printf("\nMultiplication of two matrices:\n");
            for (i = 0; i < 2; i++) {
                for (j = 0; j < 2; j++) {
                    printf("%d  ", multi[i][j]);
                }
                printf("\n");
            }
            break;
        }
        case 4: {
          
            printf("\nElement-wise Division of two matrices\n");
            for (i = 0; i < 2; i++) {
                for (j = 0; j < 2; j++) {
                    if (mat2[i][j] != 0) {
                        div_result[i][j] = (float)mat1[i][j] / mat2[i][j];
                        printf("%.2f  ", div_result[i][j]);
                    } else {
                        printf("Invalid Division"); 
                    }
                }
                printf("\n");
            }
            break;
        }
        default:
            printf("Invalid choice.\n");
    }
    return 0; 
}
