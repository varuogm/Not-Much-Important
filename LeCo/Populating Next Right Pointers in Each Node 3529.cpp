/**
Solution to Populating Next Right Pointers in Each Node at LeetCode in C++
author: chandresh189
ref: https://leetcode.com/explore/challenge/card/november-leetcoding-challenge/565/week-2-november-8th-november-14th/3529/
**/
class Solution {
public:
    Node* connect(Node* root) {
        if(root == NULL) return NULL;
        if(root->left && root->right) root->left->next = root->right;
        if(root->next && root->right) root->right->next = root->next->left;
        connect(root->left);
        connect(root->right); //for right sub tree
        return root;
    }
};
