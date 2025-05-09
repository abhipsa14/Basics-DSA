#include<iostream>
#include<vector>
using namespace std;
typedef long long l1;

int solve(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(auto &x:v){
        cin>>x;
    }
    int first=v[0],second=v[0];
    for(int i=1;i<n;i++){
        if(v[i]==second+1){
            second++;
            continue;
        }
        else if(v[i]==first-1){
            first++;
            continue;
        }else{
            cout<<"NO"<<endl;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}

int main(){
 int testcase=1;
 cin>>testcase;;
    while(testcase--){
            solve();
        }
        return 0;   
}