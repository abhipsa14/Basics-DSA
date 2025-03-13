#include<bits/stdc++.h>
using namespace std;
int main(){
 int a,b;
 char op;
 cin>>a>>b>>op;
 switch(op){
    case '+': return a+b;break;
    case '-': return a-b; break;
    case '*': return a*b; break;
 }

}