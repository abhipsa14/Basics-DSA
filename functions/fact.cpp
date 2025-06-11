#include <bits/stdc++.h>
using namespace std;

int fact(int n){
 int fact1=1;
 for (int i=1;i<=n;i++){
    fact1*=i;
 }   
 return fact1;
}

int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    cout<<"Factorial of "<<n<<" is "<<fact(n)<<endl;
    return 0;
}