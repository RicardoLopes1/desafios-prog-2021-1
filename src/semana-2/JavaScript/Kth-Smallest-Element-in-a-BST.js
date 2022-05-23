/**
 * Definition for a binary tree node.
 * function TreeNode(val, left, right) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.left = (left===undefined ? null : left)
 *     this.right = (right===undefined ? null : right)
 * }
 */
/**
 * @param {TreeNode} root
 * @param {number} k
 * @return {number}
 * https://leetcode.com/problems/kth-smallest-element-in-a-bst/
 */
const root = [3,1,4,null,2];	
const k = 1;
var kthSmallest = (root, k) => {
  var stack = [];
  var node;
  var nodeVal;
  stack.push(root);
  
  while (root.left) {
    node = root.left;
    root = node;
    stack.push(root);
  }

  while (k--) {
    root = stack.pop();
    nodeVal = root.val;

    if (root.right) {
      node = root.right;
      root = node;
      stack.push(root);

      while (root.left) {
        node = root.left;
        root = node;
        stack.push(root);
      }
    }
  }
  return nodeVal;
};

console.log(kthSmallest(root, k));