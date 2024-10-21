#include <stdio.h>
#include <stdlib.h>

int trapWater(int height[], int n) {
    if (n <= 2) return 0; 

    int left[n], right[n];
    int waterTrapped = 0;

  
    left[0] = height[0];
    for (int i = 1; i < n; i++) {
        left[i] = (height[i] > left[i - 1]) ? height[i] : left[i - 1];
    }

  
    right[n - 1] = height[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        right[i] = (height[i] > right[i + 1]) ? height[i] : right[i + 1];
    }

   
    for (int i = 0; i < n; i++) {
        waterTrapped += (left[i] < right[i] ? left[i] : right[i]) - height[i];
    }

    return waterTrapped;
}

int main() {
    int n;


    printf("Enter the number of bars: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Number of bars must be positive.\n");
        return 1;
    }

    int *height = (int *)malloc(n * sizeof(int));
    if (height == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }
    printf("Enter the heights of the bars:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &height[i]);
    }

    int result = trapWater(height, n);
    printf("Water trapped: %d units\n", result);

    free(height);

    return 0;
}