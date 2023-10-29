#include <stdio.h>

#include <string.h>

int main() {
    int num;
    int base = 2;

    do {
        scanf("%d", &num);

        // only perform operations if num is not 0
        if (num != 0) {  
        // matrix
        int matrix[num][num];

        for (int i = 0; i < num; i++)
        { // rows
            for (int j = 0; j < num; j++)
            { // columns

                if (i == j)
                {
                    matrix[i][j] = 1; // elements ON the diagonal
                }
                else if (i > j)
                {
                    matrix[i][j] = i - j + 1; // elements BELOW the diagonal
                }
                else if (i < j)
                {
                    matrix[i][j] = j - i + 1; // elements ABODE the diagonal
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
