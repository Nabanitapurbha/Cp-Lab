//Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.(leetcode).

#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int nums[n];
    int sumArray = 0;
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
        sumArray += nums[i];
    }
    int totalSum = n * (n + 1) / 2;
    int missing = totalSum - sumArray;
    printf("The missing number is: %d\n", missing);
    return 0;
}

