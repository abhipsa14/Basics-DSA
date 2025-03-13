//print series (1-N)

#include<bits/stdc++.h>
using namespace std;
 
void fun(int i,int N){
    if(i>N)
      return;
    cout<<i<<endl;
    fun(i+1,N);
}


int main(){
    int n;
    cin>>n;
    fun(1,n);
}