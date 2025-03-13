#include<bits/stdc++.h>
using namespace std;
// int main(){
//     int target;
//     cin>>target;
//     int arr[6]={10,12,13,15,20,21};
//     for (int i=0;i<=6;i++){
//         if(arr[i]==target){
//             cout<<"found";
//         }
//     }
//}
int main(){
    int mid=0,start=0,end=5;
    int target;
    cin>>target;
    int arr[6]={10,12,13,15,20,21};
    mid=(start+end)/2;
    while(start<=end){
        if(arr[mid]==target){
         cout<<"found";
         break;
        }
        if(target<arr[mid]){
                end=mid-1;
            }
        else {
                start=mid+1;
            }
            }
        }


