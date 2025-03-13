//gcd or hcf--->highest common factor or greatest common factor
#include <bits/stdc++.h>
using namespace std;
int gcd(int n, int m){
    int min,gcd;
    if(n<m)
      min=n;
    else{
        min=m;
    }
    for(int i=1;i<=min;i++){
        if(n%i==0 && m%i==0){
            gcd=i;
        }
    }
    return gcd;
}
int main(){
   int n,m;
   cin>>n>>m;
   cout<<gcd(n,m);
}