#include<iostream>
using namespace std;
int main()
{
    double fahrenheit;
    cout<<"Enter a degree in fahreheit:";
    cin>>fahrenheit;
    double celsius=(5.0/9)*(fahrenheit-32);
    cout<<"Fahrenheit "<<fahrenheit<<" is "<<celsius<<" in celsius "<<endl;

    }