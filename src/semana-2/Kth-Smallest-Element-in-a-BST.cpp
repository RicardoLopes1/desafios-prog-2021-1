#include <bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/kth-smallest-element-in-a-bst/
// 230. Kth Smallest Element in a BST
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
        auto aux = root;
        stack<TreeNode*> tree;
        tree.push(root);
        int node;
        
        while(root->left != NULL){
            aux = root->left;
            root = aux;
            tree.push(root);
        }
        
        for(int i = 0; i < k; i++){
            root = tree.top();
            tree.pop();
            node = root->val;
            
            if(root->right != NULL){
                aux = root->right;
                root = aux;
                tree.push(root);
                
                while(root->left != NULL){
                    aux = root->left;
                    root = aux;
                    tree.push(root);
                } // while
            }// if
        }// for
        return node;
    }
};
int main(){
    
    return 0;
}