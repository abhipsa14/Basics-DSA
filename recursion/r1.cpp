//print name n times
//time complexity:O(n)
//space complexity:O(n)-->stack space
#include<bits/stdc++.h>
using namespace std;
void p(int i,int N){
    if(i>N)
      return;
    cout<<"abhipsa"<<endl;
    p(i+1,N);
}
int main(){
    int n;
    cin>>n;
    p(1,n);
}