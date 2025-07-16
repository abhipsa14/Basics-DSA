#include<bits/stdc++.h>
using namespace std;

vector<int> findMissingNumbers(vector<int>& nums) {
    int n = nums.size();
    vector<int> missing;
    unordered_set<int> numSet(nums.begin(), nums.end());

    for (int i = 1; i <= n; ++i) {
        if (numSet.find(i) == numSet.end()) {
            missing.push_back(i);
        }
    }
    
    return missing;
}
int main() {
    vector<int> nums = {1, 2, 4, 6}; // Example input
    vector<int> missingNumbers = findMissingNumbers(nums);
    
    cout << "Missing numbers: ";
    for (int num : missingNumbers) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}