#include <stdio.h>

void printPattern(int n) {
    int i, j, k;
    int spaces = n - 1;
    int stars = 1;

    for (i = 0; i < n; i++) {
        for (j = 0; j < spaces; j++) {
            printf(" ");
        }

        for (k = 0; k < stars; k++) {
            printf("^");
        }

        printf("\n");
        spaces--;
        stars += 2;
    }
}

int main() {
    int N;
    printf("Enter the value of N: ");
    scanf("%d", &N);

    printPattern(N);

    return 0;
}
