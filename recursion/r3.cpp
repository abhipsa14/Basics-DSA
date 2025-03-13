//print terms as N-1
#include<bits/stdc++.h>
using namespace std;
void fun(int i,int N){
    if(i<1)
     return;
    cout<<i<<endl;
    fun(i-1,N);
}
int main(){
    int n;
    cin>>n;
    fun(n,n);
}