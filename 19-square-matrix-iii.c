#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    int num;
    int base = 2;

    do {
        scanf("%d", &num);

        // only perform operations if num is not 0
        if (num != 0) {  
            int matrix[num][num];

            for (int i = 0; i < num; i++) {
                for (int j = 0; j < num; j++) {
                    if (i == 0 && j == 0) {
                        matrix[i][j] = (int)pow(base, i);
                    } else {
                        matrix[i][j] = (int)pow(base, i + j);
                    }
                }
            }

            //takes the last element of each matrix
            int biggest = matrix[num - 1][num - 1];
            char string[200];
            int t;

            //calculate the number of digits of the biggest element
            sprintf(string, "%d", biggest);
            t = strlen(string);

            //printing the matrix
            for (int i = 0; i < num; i++) {
                for (int j = 0; j < num; j++) {
                    if (j == num - 1) {
                        printf("%*d\n", t, matrix[i][j]);
                    } else {
                        printf("%*d ", t, matrix[i][j]);
                    }
                }
            }
        }

        if (num != 0) {
            printf("\n");  // printing a line break only if num is not 0
        }
    } while (num != 0);

    return 0;
}
