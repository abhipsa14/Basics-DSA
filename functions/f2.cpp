#include <iostream>
using namespace std;

void playMusic(int songId=3, int songId2=6){
    cout<<"Playing music "<< songId<<" and "<< songId2<<endl;
}
int main(){
    playMusic();
    playMusic(5);
    playMusic(5, 10);
    return 0;
}