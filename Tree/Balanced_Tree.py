# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isBalanced(self, root):
        def postorder(curr):
            if not curr:
                return 0
            height_left = postorder(curr.left)
            height_right = postorder(curr.right)

            if abs(height_left - height_right) > 1:
                return -1
            if height_left == -1 or height_right == -1:
                return -1
            return 1 + max(height_left, height_right)
        
        return postorder(root) != -1
