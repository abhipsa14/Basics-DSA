// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int units,sum=0;
    cin>>units;
    if(units>=1 && units<=100){
        sum=sum+0;
    }
    else if(units>=100 && units<=200){
        sum=sum+(units-100)*5;
    }
    else if(units>=200 && units<=300){
        sum=sum+100*5+(units-200)*10;
    }
    else if(units>=300){
        sum=sum+100*5+100*10+(units-300)*12;
    }
    cout<<sum;
    return 0;
}