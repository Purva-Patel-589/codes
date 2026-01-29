#include <stdio.h>
int main() {
    int i, j, k = 1, n = 4; // n = number of rows
    for (i = 1; i <= n; i++) {
        // No spaces before numbers (right aligned mirror)
        for (j = 1; j <= i; j++) {
            printf("%d ", k % 10);
            k++;
        }
        printf("\n");
    }
    return 0;
}
