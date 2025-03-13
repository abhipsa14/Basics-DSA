//left rotate the array by D places
/*Multiple of the length will bring to the array itself.
eg. if n = 7,then 7 rotation will the array itself. if n=15,then 7+7+1 will give array plus 1 left rotation.

BRUTE FROCE:
    if d=3
    temp[]={1,2,3} 
    for(i=d;i<n;i++){
    a[i-a]=a[i]}
    j=0
    for(i=n-d;i<n;i++){
    a[i]=temp[j]; or a[i]=temp[i-(n-d)]
    j++}
OPTIMAL APPROACH:
    reverse(a,a+a)-->O(d)
    reverse(a+d,a+a)--->O(n-d)
    reverse(a,a+n)-->O(n)
    -->time complexity will be: O(2n)
    --->Space complexity: not using any extra space as we are using array itself--->O(1)
*/
//Time complexity: O(d)+O(n-d) or O(n+d)
//Space complexity: O(d)


#include <iostream>
#define size 7
using namespace std;
int main(){
    cout<<"enter d:";
    int d;
    d=d%7;
    int arr[size]= {1,2,3,4,5,6,7};
    int temp[d];
    for(int i=0;i<d;i++){
        temp[i]=arr[i];
    }
    for(int i=d;i<7;i++){
        arr[i-d]=arr[i];
    }
    for(int i=7-d;i<7;i++){
        arr[i]=temp[i-(7-d)];
    }
}

/*
void reverse(int arr[],int start,int end)
while(start<=end)
{
int temp=arr[start]
arr[start]=arr[end]
arr[end]=temp
start++
end--
}
void Rotateeletoright(int arr[],int n,int k){
Reverse(arr,0,n-k-1)
Reverse(arr,n-k,n-1)
Reverse(arr,0,n-1)
}
void Rotateeletoleft(int arr[],int n,int k){
Reverse(arr,0,k-1)
Reverse(arr,k,n-1)
Reverse(arr,0,n-1)}
*/


