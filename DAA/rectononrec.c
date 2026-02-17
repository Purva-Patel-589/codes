#include <stdio.h>
#include <math.h>

void moveDisk(int disk, char from, char to) {
    printf("Move disk %d from %c to %c\n", disk, from, to);
}

void towerOfHanoi(int n, char src, char aux, char dest) {
    int totalMoves = pow(2, n) - 1;

    if (n % 2 == 0) {
        char t = dest;
        dest = aux;
        aux = t;
    }

    char rods[3] = {src, dest, aux};

    for (int i = 1; i <= totalMoves; i++) {
        int disk = 1;
        int temp = i;
        while (temp % 2 == 0) {
            temp /= 2;
            disk++;
        }

        int from = (i & (i - 1)) % 3;
        int to   = ((i | (i - 1)) + 1) % 3;

        moveDisk(disk, rods[from], rods[to]);
    }

    printf("Total moves = %d\n", totalMoves);
}

int main() {
    int n;
    printf("Enter number of disks: ");
    scanf("%d", &n);

    towerOfHanoi(n, 'A', 'B', 'C');
    return 0;
}