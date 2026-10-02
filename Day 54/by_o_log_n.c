#include <stdio.h>

int main() {
    int n;
    int pivot = -1;

    printf("Enter n: ");
    scanf("%d", &n);

    int low = 1;
    int high = n;

    long long totalSum = (long long)n * (n + 1) / 2;

    while (low <= high) {

        int mid = low + (high - low) / 2;

        long long leftSum = (long long)mid * (mid + 1) / 2;

        long long rightSum = totalSum - leftSum + mid;

        if (leftSum == rightSum) {
            pivot = mid;
            break;
        }
        else if (leftSum < rightSum) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    printf("%d", pivot);

    return 0;
}