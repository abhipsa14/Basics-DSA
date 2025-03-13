//reverse of a number
#include <bits/stdc++.h>
using namespace std;
int reverse1(int n){
    int a=0,rev=0;
    while(n>0){
    a=n%10;
    rev=rev*10+a;
    n=n/10;
    }
    return rev;
}
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    cout<<"Reverse is:"<<reverse1(n);
}