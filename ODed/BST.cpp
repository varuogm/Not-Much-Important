// Binary Search Tree operations in C++
#include <iostream>
using namespace std;

struct node {
  int data;
  struct node *left, *right;
};

// Create a node
struct node *newNode(int item) 
{
  struct node *temp = (struct node *)malloc(sizeof(struct node));
  temp->data = item;
  temp->left = NULL ;
  temp->right = NULL;
  return temp;
}

// Inorder Traversal
void inorder(struct node *root) 
{
  if(root!=NULL) { 
 
    inorder(root->left);
    cout << root->data << " -> ";
    inorder(root->right);
  }
}

// Insert a node
struct node *insert(struct node *node, int data) 
{
 // empty he naya node bana diya
  if (node == NULL) 
    return newNode(data);

  // Traverse to the right place and insert the node
  if (data < node->data)
    node->left = insert(node->left, data);
  else
    node->right = insert(node->right, data);

  return node;
}

struct node* search(struct node* root, int data)
{
    // Base Cases: root is null or data is present at root
    if (root == NULL || root->data == data)
       return root;
    
    // data is greater than root's data
    if (root->data < data)
       return search(root->right, data);
 
    // data is smaller than root's data
    return search(root->left, data);
}

int height(node* root)
{
if(root == NULL)
  return 0;
return 1 + max(height(root->left), height(root->right));
}


int main() {

  struct node *root = NULL;
 /* int n,k;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    cin>>k;
    root = insert(root, k);
  }*/
  root = insert(root, 8);
  root = insert(root, 3);
  root = insert(root, 1);
  root = insert(root, 6);
  root = insert(root, 7);
  root = insert(root, 10);
  root = insert(root, 14);
  root = insert(root, 4);

  cout << "Inorder traversal: \n";

  inorder(root);
cout<<height(root);
//search key in bst
  int dhundho=10;
  if(search(root,dhundho))
     cout<<"\nYES";
  else
     cout<<"\nNO";
}
/*
8
8 3 1 6 7 10 14 4
*/
