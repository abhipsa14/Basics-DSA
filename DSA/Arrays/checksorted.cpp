//time complexity: O(n)
#include<iostream>
using namespace std;
int main(){
    int arr[6]={1,2,3,4,5,6};
    int i;
    for(i=1;i<=6;i++){
          if(arr[i]>=arr[i-1]){

          }
          else{
            return false;
          }
    }
    return true;
}