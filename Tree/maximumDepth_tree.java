/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public int solve(TreeNode root) 
    {
        if (root == NULL) return depth ; 
        int left = solve(root.left , depth + 1);
        int right = solve(root.right, depth + 1); 
        return Math.max(left, right); 
    }
    public int maxDepth(TreeNode root)
    {
        return solve(root, 0); 
    }

}
