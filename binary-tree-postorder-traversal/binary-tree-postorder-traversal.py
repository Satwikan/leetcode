# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def __init__(self):
        self.ans = []
    def postorderTraversal(self, root):
        """
        :type root: TreeNode
        :rtype: List[int]
        """
        if not root: return []
        if (root.left):
            self.postorderTraversal(root.left)
        if (root.right):
            self.postorderTraversal(root.right)
        if (root.val):
            self.ans.append(root.val)
        return(self.ans)