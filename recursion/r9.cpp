#include<bits/stdc++.h>
using namespace std;
void printSubsets(int ind, vector<int>& ds, int arr[], int n) {
    if (ind == n) {
        if (ds.size() == 0)
            cout << "{}";
        else {
            for (auto it : ds)
                cout << it << " ";
        }
        cout << endl;
        return;
    }

    // Take the element
    ds.push_back(arr[ind]);
    printSubsets(ind + 1, ds, arr, n);

    // Not take the element
    ds.pop_back();
    printSubsets(ind + 1, ds, arr, n);
}
int main(){
    int arr[]={1,2,3};
    int n=3;
    vector<int>ds;
    printSubsets(0,ds,arr,n);
    return 0;
}