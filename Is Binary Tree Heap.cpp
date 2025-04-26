/*
Date: 26 April 2025

Problem: Is Binary Tree Heap
A binary tree is considered a max-heap if it satisfies the following conditions:

Completeness: Every level of the tree, except possibly the last, is completely filled, and all nodes are as far left as possible.
Max-Heap Property: The value of each node is greater than or equal to the values of its children.
*/

// Code: 
class Solution {
  public:
    int count(Node* tree){
        if(!tree) return 0;
        return 1+count(tree->left) + count(tree->right);
    }
    bool solve(Node* tree,int i,int total){
        if(!tree) return true;
        if(i>=total) return false;
        if(tree->left && tree->data < tree->left->data) return false;
        if(tree->right && tree->data < tree->right->data) return false;
        return solve(tree->left,2*i+1,total) && solve(tree->right,2*i+2,total);
    }
    bool isHeap(Node* tree) {
        int total=count(tree);
        return solve(tree,0,total);
        
    }
};
