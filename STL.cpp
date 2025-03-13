
/* STL in C++ consists of 4 things:
1.Algorithm
2.Containers
3.Iterators
4.FInctions*/

#include<bits/stdc++.h>
using namespace std;
void print(){
    cout<<"abhipsa";
}
int sum(int a, int b){
    return a+b;
}
int main(){
    print();
    int s=sum(5,6);
    cout<<s;
    return 0;
}

//CONTAINERS
//Pairs lies inside the utility library.
void explainPair(){
    pair<int,int> p={1,3};//p->{1,3}
    cout<<p.first<<" "<<p.second;
    pair<int,pair<int,int>>p1={1,{3,4}};
    cout<<p1.first<<" "<<p1.second.first<<" "<<p1.second.second;
    pair<int,int>arr[]={{1,2},{2,3},{3,4}};
    cout<<arr[1].second;
}
//VECTORS-->dynamic in nature.stores elements in similar fashion like arrays
void explainVectors(){
    vector<int>v;//creates an empty container{}
    v.push_back(1);//puts the element in the container
    v.emplace_back(2);
    vector
}



