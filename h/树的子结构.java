/*
输入两棵二叉树A，B，判断B是不是A的子结构。
（ps：我们约定空树不是任意一个树的子结构）
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
    public boolean HasSubtree(TreeNode pRoot1, TreeNode pRoot2) {

         boolean flag = false;
         if ((pRoot1 != null) && (pRoot2 != null)) {
             if (pRoot1.val == pRoot2.val) {
                flag = HasSubtreetty(pRoot1, pRoot2);
             }
     
             if (!flag) {
                flag = HasSubtree(pRoot1.left, pRoot2);
             }
 
             if (!flag) {
                flag = HasSubtree(pRoot1.right, pRoot2);
             }   
         }
         return flag;
    }
    
    public boolean HasSubtreetty(TreeNode pRoot1, TreeNode pRoot2) {

        if (pRoot2 == null) {
            return true;
         }
            
        if ((pRoot1 == null) && (pRoot2 != null)) {
            return false;
        }
           
        if (pRoot1.val != pRoot2.val) {
            return false;
        }
     
         return HasSubtreetty(pRoot1.left, pRoot2.left) && HasSubtreetty(pRoot1.right, pRoot2.right);
     }
}
