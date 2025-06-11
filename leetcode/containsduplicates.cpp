#include<bits/stdc++.h>
using namespace std;

bool containsDuplicate(vector<int>& nums) {
    unordered_set<int> seen;
    for (int num : nums) {
        if (seen.count(num)) {
            return true; // Duplicate found
        }
        seen.insert(num);
    }
    return false; // No duplicates found
}
int main() {
    vector<int> nums = {1, 2, 3, 1};
    if (containsDuplicate(nums)) {
        cout << "Contains duplicates" << endl;
    } else {
        cout << "No duplicates found" << endl;
    }
    return 0;
}