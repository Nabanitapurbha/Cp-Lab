//A school is trying to take an annual photo of all the students. The students are asked to stand in a single file line in non-decreasing order by height. Let this ordering be represented by the integer array expected where expected[i] is the expected height of the ith student in line.
//You are given an integer array heights representing the current order that the students are standing in. Each heights[i] is the height of the ith student in line (0-indexed).
//Return the number of indices where heights[i] != expected[i].(LeetCode)

#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    int heights[n], expected[n];
    printf("Enter the heights of students: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &heights[i]);
        expected[i] = heights[i];
    }
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-1-i; j++) {
            if (expected[j] > expected[j+1]) {
                int temp = expected[j];
                expected[j] = expected[j+1];
                expected[j+1] = temp;
            }
        }
    }
    int mismatch = 0;
    for (int i = 0; i < n; i++) {
        if (heights[i] != expected[i]) {
            mismatch++;
        }
    }
    printf("Number of students in wrong positions: %d\n", mismatch);

    return 0;
}
