#include <iostream>
using namespace std;

//function overloading
int fun(int a, int b){
    return a*b;
}
int fun(int a){
    return a*a;
}
int main(){
    fun(5);
    fun(5,3);
}