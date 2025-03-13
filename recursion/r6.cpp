//reverse of an array
#include<bits/stdc++.h>
using namespace std;
void f(int k, int arr[],int n){
    if(k>=n/2){
        return;
    }
    swap(arr[k],arr[n-k-1]);
    f(k+1,arr,n);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++) cin>>arr[i];
    f(0,arr,n);
    for(int i=0;i<n;i++) cout<<arr[i];

}