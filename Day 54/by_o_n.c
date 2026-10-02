#include <stdio.h>

int main() {
    int n;
    int pivot = -1;

    printf("Enter n: ");
    scanf("%d", &n);

    long long totalSum = (long long)n * (n + 1) / 2;
    long long leftSum = 0;

    for (int x = 1; x <= n; x++) {

        leftSum = leftSum + x;

        long long rightSum = totalSum - leftSum + x;

        if (leftSum == rightSum) {
            pivot = x;
            break;
        }
    }

    printf("%d", pivot);

    return 0;
}