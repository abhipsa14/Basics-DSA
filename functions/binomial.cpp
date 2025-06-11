#include <iostream>
using namespace std;

// binomial coefficient function ncr, given n and r
int fact(int n){
    int a=1;
    for(int i=1;i<=n;i++){
        a*=i;
    }
    return a;
}
int bincoff(int n,int r){
  int a=fact(n)/fact(n-r)/fact(r);
  return a;
}
int main(){
    int n,r;
    cin>>n>>r;
    cout<<bincoff(n,r);
}
