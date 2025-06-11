#include<bits/stdc++.h> 
using namespace std;

int missingNumber(vector<int>& nums) {
    int n = nums.size();
    int expectedSum = n * (n + 1) / 2; // Sum of first n natural numbers
    int actualSum = accumulate(nums.begin(), nums.end(), 0); // Sum of elements in nums
    return expectedSum - actualSum; // The missing number
}

int main() {
    vector<int> nums = {3, 0, 1};
    cout << "Missing number: " << missingNumber(nums) << endl;
    return 0;
}