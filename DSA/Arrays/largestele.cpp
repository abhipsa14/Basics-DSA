//Two wayss to solve the problem:
//1.Sort the array and then the last index will contain the largest element
//2.Making zeroth index as largest and then comparing and storing one by one the elements by comparing
//Time complexity of 2nd is O(n)

#include<iostream>
using namespace std;
int main(){
    int arr[10]={2,3,45,66,100,13,44,5,69};
    int max=0,i;
    max=arr[0];
    for(i=0;i<=10;i++){
        if(max<arr[i])
           max=arr[i];
    }
    cout<<"Largest element is "<<max;
}