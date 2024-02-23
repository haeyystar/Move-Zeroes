// The goal of this program is to generate an efficient algorithm for the following problem:

// Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
// *** Note that you must do this in-place without making a copy of the array.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void moveZeroes(vector<int>& nums);

int main() {

    vector<int> nums = { 0, 0, 1, 2, 3 };
    moveZeroes(nums);

    return 0;
}

// This is one potential solution that involves using a two-pointer approach
void moveZeroes(vector<int>& nums) {
    // Edge Cases
    int len = nums.size();
    if (len == 0 || len == 1) { return; }

    // Initialize two pointers:
    int left = 0; // Position where the next non-zero value will be placed
    int right = 0; // Position of the next non-zero value

    while (right < len) {
        if (nums[right] != 0) {
            if (right != left) {
                nums[left] = nums[right];
                nums[right] = 0;
            }
            left++;
        }
        ++right;
    }
}