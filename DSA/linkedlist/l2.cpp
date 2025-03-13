#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int data1){
        data=data1;
        next=nullptr;
    } 
};
Node* convertArr2LL(vector<int> &arr){  //O(N)
    Node* head = new Node(arr[0]);
    Node* mover=head;
    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}
int LengthofLL(Node* head){ //O(N)
    int cnt=0;
    Node* temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
        cnt++;
    }
    cout<<endl;
    return cnt;
}
void check(Node* head,int val){
   Node* temp=head;
   int f=0;
   while (temp){
     if(temp->data==val){
        f=1;
        break;
     }
     temp=temp->next;
   }
   if(f==1){
    cout<<"Found";
   }
   else{
    cout<<"Not found";
   }
}
int main(){
 vector<int> arr={12,3,4,1};
 Node* head=convertArr2LL(arr);
 cout<<head->data<<endl;
 cout<<LengthofLL(head)<<endl;
 int val;
 cout<<"Enter a number:"<<endl;
 cin>>val;
 check(head,val);
}