/*
输入一棵二叉树，求该树的深度。从根结点到叶结点依次经过的结点
（含根、叶结点）形成树的一条路径，最长路径的长度为树的深度。
*/
/**
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
    public int TreeDepth(TreeNode pRoot) {
        if (pRoot == null) {
            return 0;
        }
           
       int DepthLeft = TreeDepth(pRoot.left);
       int DepthRight = TreeDepth(pRoot.right);
       
        return 1 + (DepthLeft > DepthRight ? DepthLeft : DepthRight);
    }
}
