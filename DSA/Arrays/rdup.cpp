//brute: using set and putting it in the set one by one
/* first inserting in the set and checking if there is any similar element and if not then inserting. and then again inserting in the
same array one by one the unique elements.Time complexity: O(nlogn+n)
*/
//better:
/*optimal:
i=0
for(j=1;j<n;j++){
if(arr[j]!=arr[i]){
arr[i+1]=arr[j]
i++}
return i+1
}
*/
#include<iostream>
using namespace std;
int main(){
    int arr[6]={1,1,2,2,3,3};
    int i=0,j;
    for(j=1;j<=6;j++){
        if(arr[j]!=arr[i]){
            arr[i+1]=arr[j];
            i++;
        }
    }
    cout<<"Unique elements:"<<(i);
}