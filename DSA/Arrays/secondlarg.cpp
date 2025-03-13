//Brute: sort it and second last element will be the second largest but we have to check if the element is equal to the largest element.Time complexity first for sorting and then for finding it O(n)+O(nlogn)
//Better:first find the largest and then start finding the second largest by comparing. O(2n)
//Optimal:assuming non negative number. time complex:- O(n)
// taking largest and secondlargest at the same time.
#include<iostream>
using namespace std;
int main(){
    int size=6;
    int arr[6]={1,2,3,5,4,4};
    int max,sec_max,i;
    max=arr[0];
    sec_max=-1;
    for(i=0;i<=size;i++){
        if(arr[i]>max){
            sec_max=max;
            max=arr[i];   
        }
        else if(arr[i]<max&&arr[i]>sec_max){
            sec_max=arr[i];
        }
    }
    cout<<"Second largest is: "<<sec_max;
}