#include <stdio.h>

#include <string.h>

int main() {
    int num;

    do {
        scanf("%d", &num);

        // only perform operations if num is not 0
        if (num != 0) {  
        
		// matrix
            int matrix[num][num];

            int size = (num - 1) / 2;

            //generates elements concentrics
            for (int i = 0; i <= size; i++) {
                for (int j = i; j < num - i; j++) {
                    for (int k = i; k < num - i; k++) {
                        matrix[j][k] = i + 1;
                    }
                }
            }

            //printing the matrix
            for (int i = 0; i < num; i++) {
                for (int j = 0; j < num; j++) {
                    if (j == num - 1) {
                        printf("%3d\n", matrix[i][j]);
                    } else {
                        printf("%3d ", matrix[i][j]);
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
