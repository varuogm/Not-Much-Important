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

  if(head==NULL)
  {
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


int main() {
node * head=NULL;
insertAtTail(head,1);
insertAtTail(head,2);
insertAtTail(head,3);
insertAtTail(head,4);
display(head);
}
