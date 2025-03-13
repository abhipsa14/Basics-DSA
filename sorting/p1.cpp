#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5]={6,5,4,11,2};
    int num;
    cin>>num;
    for (int  i=0;i<=5;i++){
        if(arr[i]==num)
          cout<<i;
    }
}