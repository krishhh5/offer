/*
给定一棵二叉搜索树，请找出其中的第k小的结点。
例如， （5，3，7，2，4，6，8）    中，
按结点数值大小顺序第三小结点的值为4。
*//*
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
    private int count = 0;
    private TreeNode result;
    TreeNode KthNode(TreeNode pRoot, int k) {
        inOrder(pRoot, k);
        return result;
    }
    
    private void inOrder(TreeNode pRoot, int k) {
        if (pRoot == null || count >= k) {
            return ;
        }
        
        inOrder(pRoot.left, k);
        count++;
        if (count == k) {
            result = pRoot;
        }
            inOrder(pRoot.right, k);
    }
}
