#include<bits/stdc++.h>
using namespace std;
class Node{
 public:
 int val;
 Node*next;

 Node(int data){
    val = data;
    next = NULL;
 }
};

void insertathead(Node* &head, int val){
    Node* new_node =  new Node(val);
    new_node->next = head;
    head = new_node;
}
void insertatend(Node* &head,int val){
    Node* new_node=new Node(val);
    Node* temp=head;
    while(temp->next!=NULL){
         temp=temp->next;
    }
     temp->next=new_node;
}
void insertatposition(Node* &head,int val,int pos){
    if(pos==0){
        insertathead(head,val);
        return;
    }
    Node* new_node = new Node(val);
    Node* temp = head;
    int current_pos = 0;
    while (current_pos!=pos-1){
        temp=temp->next;
        current_pos++;
    }
    //temp is pointing to pos-1
    new_node->next = temp->next;
    temp->next=new_node;
}
void updateatposition(Node* &head,int k,int val){
    Node* temp=head;
    int curr_pos=0;
    while (curr_pos!=k){
        temp=temp->next;
        curr_pos++;
    }
    //temp will be pointing to the kth node
    temp->val = val;
}
void deletathead(Node* &head){
    Node* temp = head; //node to deleted
    head = head->next;
    free(temp);
}

void deleteattail(Node* &head){
    Node* second_last = head;
    while(second_last->next->next!=NULL){
        second_last=second_last->next;
    }
    //now second_last points to second last node
    Node* temp = second_last->next;
    second_last->next=NULL;
    free(temp);
}

void display(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    Node* head = NULL;
    insertathead(head,2);
    insertathead(head,1);
    insertatend(head,3);
    insertatposition(head,4,2);
    updateatposition(head,3,6);
    deletathead(head);
    deleteattail(head);
    display(head);
    return 0;
}