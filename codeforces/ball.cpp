// N ladies attend the ball in the King's palace. Every lady can be described with three values: beauty, intellect and richness. King's Master of Ceremonies knows that ladies are very special creatures. If some lady understands that there is other lady at the ball which is more beautiful, smarter and more rich, she can jump out of the window. He knows values of all ladies and wants to find out how many probable self-murderers will be on the ball. Lets denote beauty of the i-th lady by Bi, her intellect by Ii and her richness by Ri. Then i-th lady is a probable self-murderer if there is some j-th lady that Bi < Bj, Ii < Ij, Ri < Rj. Find the number of probable self-murderers.

// Input
// The first line contains one integer N (1 ≤ N ≤ 500000). The second line contains N integer numbers Bi, separated by single spaces. The third and the fourth lines contain sequences Ii and Ri in the same format. It is guaranteed that 0 ≤ Bi, Ii, Ri ≤ 109.


#include<bits/stdc++.h>
using namespace std;

int suicide(int n,int beauty[],int intelligence[],int rich[]){
   int count=0;
   for(int i=0;i<n;i++){
    for(int j=1;j<n;j++){
        if(beauty[i]<beauty[j]&& intelligence[i]<intelligence[j]&&rich[i]<rich[j]){
            count++;
            break;
        }
    }
   }
   return count;
}
int main(){
    int n; //number of ladies
    cin>>n;
    int beauty[n];
    int intelligence[n];
    int rich[n];
    for(int i=0;i<n;i++){
        cin>>beauty[i];
    }
    for(int i=0;i<n;i++){
        cin>>intelligence[i];
    }
    for(int i=0;i<n;i++){
        cin>>rich[i];
    }
    // sort(beauty, beauty + n);
    // sort(intelligence,intelligence+n);
    // sort(rich,rich+n);
    cout<<suicide(n, beauty,intelligence,rich);

}