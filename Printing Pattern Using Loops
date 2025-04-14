#include <stdio.h>

int main() {
    int size;
    scanf("%d", &size);  

    int gridSize = 2 * size - 1;

    for (int row = 0; row < gridSize; row++) {
        for (int col = 0; col < gridSize; col++) {
            int top = row;
            int left = col;
            int bottom = gridSize - 1 - row;
            int right = gridSize - 1 - col;

            int minDistance = top;
            if (left < minDistance) minDistance = left;
            if (bottom < minDistance) minDistance = bottom;
            if (right < minDistance) minDistance = right;

            printf("%d", size - minDistance);

         
            if (col != gridSize - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}

