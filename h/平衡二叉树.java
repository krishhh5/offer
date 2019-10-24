/*
输入一棵二叉树，判断该二叉树是否是平衡二叉树。
*/
public class Solution {
    public boolean IsBalanced_Solution(TreeNode root) {
        if (root == null){
            return true;
        }
        int left = iterTree(root.left);
        int right = iterTree(root.right);
        
        if (Math.abs(left - right) > 1) {
            return false;
        }
        return true;
    }
    
    private static int iterTree(TreeNode root) {
        if (root == null) {
            return 0;
        }
        int left = iterTree(root.left);
        int right = iterTree(root.right);
        
        return left > right ? (left + 1) : (right + 1);
    }
}
