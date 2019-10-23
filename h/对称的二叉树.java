/*
请实现一个函数，用来判断一颗二叉树是不是对称的。
注意，如果一个二叉树同此二叉树的镜像是同样的，定义其为对称的。
*/
/*
public class TreeNode {
    int val = 0;
    TreeNode left = null;
    TreeNode right = null;

    public TreeNode(int val) {
        this.val = val;

    }

}
*/
public class Solution {
     boolean isSymmetrical(TreeNode pRoot) {
        if (pRoot == null || pRoot.left == null && pRoot.right == null) {
            return true;
        }
        return Symmetrical(pRoot.left, pRoot.right);
     }
  
     boolean Symmetrical(TreeNode left, TreeNode right) {
         if (left == null && right == null) {
             return true;
         }
         if (left == null || right == null) {
             return false;
         }
         if (left.val == right.val) {
             return Symmetrical(left.left, right.right) && Symmetrical(left.right, right.left);
        }
         return false;
    }
}
