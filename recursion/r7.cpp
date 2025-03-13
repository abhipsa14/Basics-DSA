//palindrome 
//t.c:O(n/2),s.c:O(n/2)
#include<bits/stdc++.h>
using namespace std;
string f(int i ,std::string s){
    int n=s.size();
    if(i>=n/2) return "Yes";
    if(s[i]!=s[n-i-1]) return "No";
    return f(i+1,s);
}
int main(){
    string s;
    cin>>s;
    cout<<f(0,s);
    
}