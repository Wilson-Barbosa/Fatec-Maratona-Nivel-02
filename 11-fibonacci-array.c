#include <stdio.h>
#include <stdint.h>

int main()
{

    uint64_t fibonacci[61]; // fibonacci array
    int testCaseNum;        // number of test cases
    int num;                // fibonacci element

    // defining the first
    fibonacci[0] = 0;
    fibonacci[1] = 1;

    // creating the fibonacci array
    for (int j = 2; j <= 60; j++)
    {
        fibonacci[j] = fibonacci[j - 1] + fibonacci[j - 2];
    }

    // ask for the nuimber of test cases
    scanf("%d", &testCaseNum);

    // number of test cases
    for (int i = 0; i < testCaseNum; i++)
    {
        scanf("%d", &num);

        printf("Fib(%d) = %llu\n", num, fibonacci[num]);
    }

    return 0;
}