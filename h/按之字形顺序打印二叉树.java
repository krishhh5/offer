/*
请实现一个函数按照之字形打印二叉树，即第一行按照从左到右的顺序打印，
第二层按照从右至左的顺序打印，第三行按照从左到右的顺序打印，
其他行以此类推
*/
import java.util.ArrayList;

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
import java.util.*;
public class Solution {
    public ArrayList<ArrayList<Integer> > Print(TreeNode pRoot) {
        ArrayList<ArrayList<Integer>> res = new ArrayList<ArrayList<Integer>>();
        if(pRoot == null){
            return res;
        }
        ArrayList<Integer> list;
        Queue<TreeNode> queue = new LinkedList<TreeNode>();
        int rows = 1;
        queue.add(pRoot);
        while (!queue.isEmpty()) {
            list = new ArrayList();
            int size = queue.size();
            for (int i = 0; i < size; i++) {
                TreeNode t = queue.poll();
                if (rows % 2 == 0){
                    list.add(0, t.val);
                } else {
                    list.add(t.val);
                }
                if (t.left != null) {
                    queue.offer(t.left);
                }
                if (t.right != null) {
                    queue.offer(t.right);
                }
            }
            res.add(list);
            rows++;
        }
        return res;
    }
}
