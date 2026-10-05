#include <stdio.h>
int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int nums[n];
    int totalSum = 0;
    int leftSum = 0;
    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
        totalSum = totalSum + nums[i];
    }
    for (int i = 0; i < n; i++) {
        int rightSum = totalSum - leftSum - nums[i];
        if (leftSum == rightSum) {
            printf("%d", i);
            return 0;
        }
        leftSum = leftSum + nums[i];
    }
    printf("-1");
    return 0;
}