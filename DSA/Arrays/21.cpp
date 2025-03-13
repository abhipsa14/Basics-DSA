#include<bits/stdc++.h>
using namespace std;
void printArray(int arr[]){
    cout<<"in func"<<sizeof(arr)<<endl;
}
int main(){
  int arr[]={1,2,3};
  int n=sizeof(arr)/sizeof(int);
  cout<<"in main"<<sizeof(arr)<<endl;
  printArray(arr);
}