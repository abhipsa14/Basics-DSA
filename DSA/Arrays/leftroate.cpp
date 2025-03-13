//Left rotation-->{1,2,3,4,5}-->{2,3,4,5,1}
//time complexity: O(N)
//space complexity:O(1)-->extra space & o(n)is the space us used
#include<iostream>
#define size 5
using namespace std;
int main(){
    int arr[size]={1,2,3,4,5};
    int temp=arr[0];
    for(int i=1;i<size;i++){
        arr[i-1]=arr[i];
    }
    arr[size-1]=temp;
    for(int j=0;j<size;j++){
        cout<<arr[j];
    }
}