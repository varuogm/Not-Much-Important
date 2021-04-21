#include<bits/stdc++.h>
typedef long long ll;
#define endl "\n"
using namespace std;


class node {
public:
    int data;
    node* next;

    node(int val){
      data= val;
      next=NULL;
    }
};


void insertAtTail(node * &head , int val) {

  node* n =new node(val); //isko add karna he 

  if(head==NULL){
    head = n;
    return;
  }

  node* temp = head; //iterate ke liye temp

  while(temp->next != NULL)
  {
    temp =temp->next;
  }

  temp->next= n; //last posiiton me daldo n
}

void display(node* head) {
 // node* temp = head;
  while(head != NULL)
  {
    cout<< head->data<<"->";
    head=head->next;
  }
}

void deleteAtHead(node* &head){
  node* todelete= head;//head ko defernce kardia todelte bolke
  head= head->next;

delete todelete;
}

void deletion(node* &head ,int val){

if(head==NULL) //agar khali ho 
  return;

if(head->next==NULL){//agar ek hi ho
  deleteAtHead(head);
  return;
}

  node* temp=head;
  while(temp->next->data!=val)
    {
      temp=temp->next;
    }

  node * todelete = temp->next;
  temp->next = temp->next->next;

  delete todelete;

}



int main() {

node * head=NULL;

insertAtTail(head,1);
insertAtTail(head,2);
insertAtTail(head,3);
insertAtTail(head,4);

deleteAtHead(head);
deletion(head,3);

display(head);
}
