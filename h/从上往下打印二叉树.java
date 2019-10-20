/*
从上往下打印出二叉树的每个节点，同层节点从左至右打印。
*/
import java.util.ArrayList;
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
import java.util.*;
public class Solution {
    public ArrayList<Integer> PrintFromTopToBottom(TreeNode root) {

        if (root == null) { 
            return new ArrayList<Integer>();
        }
        ArrayList<Integer> arr = new ArrayList<>();

        LinkedList<TreeNode> list = new LinkedList<>();
        list.add(root);
        while (!list.isEmpty()) {
            TreeNode temp = list.removeFirst();
            if (temp.left != null) {
                list.add(temp.left);
            }
            if (temp.right != null) {
                list.add(temp.right);
            }
            arr.add(temp.val);
        }
        return arr;
    }
}
