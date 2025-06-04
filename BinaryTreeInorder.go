/**
 * Definition for a binary tree node.
 * type TreeNode struct {
 *     Val int
 *     Left *TreeNode
 *     Right *TreeNode
 * }
 */
func inorderTraversal(root *TreeNode) []int {
    res := make([]int, 0)
    helper(root, &res)
    return res
}

func helper(root *TreeNode, res *[]int) {
    if root != nil {
        helper(root.Left, res)
        *res = append(*res, root.Val)
        helper(root.Right, res)
    }
}
