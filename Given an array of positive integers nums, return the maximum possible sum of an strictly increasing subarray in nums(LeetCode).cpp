//Given an array of positive integers nums, return the maximum possible sum of an strictly increasing subarray in nums(LeetCode).

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int nums[n];
    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++)
        cin >> nums[i];

    int max_sum = nums[0];
    int current_sum = nums[0];

    for(int i = 1; i < n; i++) {
        if(nums[i] > nums[i-1])
            current_sum += nums[i];
        else
            current_sum = nums[i];

        if(current_sum > max_sum)
            max_sum = current_sum;
    }

    cout << "Maximum sum of strictly increasing subarray: " << max_sum << endl;

    return 0;
}

