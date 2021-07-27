// Binary Search Tree operations in C++
/*
gourav*IMP - allocating dynamically
to allocate a similar array dynamically, the following code can be used:

int *array = (int*)malloc(10 * sizeof(int));
malloc returns a void pointer (void *) thus we cast it to out preferred one as well
like
```
int *ptr, *ptr2;
ptr = malloc(10 * sizeof(*ptr)); without a cast 
ptr2 = (int *)malloc(10 * sizeof(*ptr));  with a cast 
```
*/
#include <iostream>
#include <queue>
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

void sumreplace(node * root){

if (root == NULL )
       return ;
 sumreplace(root->left);
 sumreplace(root->right);

 if(root->left!= NULL){
  root->data += root->left->data;
 }
  if(root->right!= NULL){
  root->data += root->right->data;
 }

}

void rightview(node *root)
{
  if (root == NULL)  return;
  queue<node *> q;
 
  q.push(root);
  while (!q.empty()){
    int n= q.size();

  for(int  i=0;i<n;i++) {

    node *temp = q.front();
    q.pop();
          
    if(i==n-1) cout<<temp->data<<" ";
     // toggele i=0 and n-1 for right and left
    if(temp->left != NULL)  
       q.push(temp->left);

    if(temp->right != NULL)  
       q.push(temp->right);
    }
  }
}

void printLevelOrder(node *root)
{
    // Base Case
    if (root == NULL)  return;
 
    // Create an empty queue for level order traversal
    queue<node *> q;
 
    // Enqueue Root and initialize height
    q.push(root);
 
    while (q.empty() == false)
    {
        // Print front of queue and remove it from queue
        node *temp = q.front();


        cout << temp->data << " ";
        q.pop();
 
        /* Enqueue left child */
        if (temp->left != NULL)
            q.push(temp->left);
 -
        /*Enqueue right child */
        if (temp->right != NULL)
            q.push(temp->right);
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

bool isbalanced(node *root)
{
if(root==NULL)
  return true;


if( isbalanced(root->left) == false )
   return false;
if( isbalanced(root->right) == false )
   return false;

int lh= height(root->left);
int rh = height(root-> right);

if(abs(lh-rh)<=1)
  return true;
else
  return false;
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

  printLevelOrder(root);

//cout<<height(root);
//search key in bst
 /* int dhundho=10;
  if(search(root,dhundho))
     cout<<"\nYES";
  else
     cout<<"\nNO";*/
}
/*
8
8 3 1 6 7 10 14 4
*/
