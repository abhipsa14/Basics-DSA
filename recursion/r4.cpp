//Sum of first N numbers
//parameterized
#include<bits/stdc++.h>
using namespace std;
void sum(int i,int sum1){
    if(i<1){
     cout<<sum1;
     return;
 
    }
    sum(i-1,sum1+i);

}
int main(){
 int n;
 cin>>n;
 sum(n,0);
}

//functional
int sum2(int n){
    if(n==0){
        return 0;
    }
    return n+sum2(n);
    
}