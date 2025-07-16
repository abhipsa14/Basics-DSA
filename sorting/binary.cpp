#include<bits/stdc++.h>
using namespace std;
int binary(int arr[],int n, int key){
    int start = 0; // Initialize the start index
    int end = n - 1; // Initialize the end index
  int mid = (start+end)/2;
  while(start<=end){
    if(arr[mid]==key) // Check if the middle element is the key
      return mid; // Return the index if found
    else if(arr[mid]<key) // If the middle element is less than the key
      start = mid + 1; // Move the start index to the right
    else // If the middle element is greater than the key
      end = mid - 1; // Move the end index to the left
    mid = (start + end) / 2; // Recalculate the middle index
  }
  return -1; // Return -1 if the key is not found
}
int main(){
    int arr[] = {2, 4, 5, 6, 11};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the number of elements
    int key;
    cout << "Enter the number to search: ";
    cin >> key; // Input the number to search
    int result = binary(arr, n, key); // Call the binary search function
    if (result != -1) {
        cout << "Element found at index: " << result << endl; // Output the index
    } else {
        cout << "Element not found" << endl; // Output if the element is not found       
    }
    return 0;
}