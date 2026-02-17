#include <stdio.h>
int main() {
    int i, j, n = 4; // number of rows
    for (i = 1; i <= n; i++) {
        // Print spaces first
        for (j = 1; j <= n - i; j++) {
            printf("  ");  // two spaces for alignment
        }
        // Print stars
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
