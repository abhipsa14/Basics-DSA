#include<bits/stdc++.h>
using namespace std;
// Linear search implementation
int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i; // Return the index if the key is found
        }
    }
    return -1; // Return -1 if the key is not found
}
int main(){
   int arr[]={6, 5, 4, 11, 2};
   int n = sizeof(arr) / sizeof(arr[0]); // Calculate the number of elements
   int key;
   cout << "Enter the number to search: ";
   cin >> key; // Input the number to search
   int result = linearSearch(arr, n, key); // Call the linear search function
   if (result != -1) {
       cout << "Element found at index: " << result << endl; // Output the index
   } else {
       cout << "Element not found" << endl; // Output if the element is not found       
}}