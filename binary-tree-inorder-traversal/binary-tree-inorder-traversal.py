# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def __init__(self):
        self.ans = []
    def inorderTraversal(self, root):
        """
        :type root: TreeNode
        :rtype: List[int]
        """
        if not root: return []
        if (root.left):
            self.inorderTraversal(root.left)
        if (root.val):
            self.ans.append(root.val)
        if (root.right):
            self.inorderTraversal(root.right)
        return(self.ans)