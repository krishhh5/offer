/*
输入一棵二叉搜索树，将该二叉搜索树转换成一个排序的双向链表。
要求不能创建任何新的结点，只能调整树中结点指针的指向。
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
    public TreeNode Convert(TreeNode pRootOfTree) {
        TreeNode lastNode = null;
			TreeNode headNode = ConvertNode(pRootOfTree, lastNode);
			while (headNode != null && headNode.left != null) {
				headNode = headNode.left;
			}
			return headNode;
		}
 
		public static TreeNode ConvertNode(TreeNode rootTree, TreeNode lastNode) {
			if (rootTree == null) {
				return null;
			}
			if (rootTree.left != null) {
				lastNode = ConvertNode(rootTree.left, lastNode);
			}
			rootTree.left = lastNode;
			if (lastNode != null) {
				lastNode.right = rootTree;
			}
			lastNode = rootTree;
			if (rootTree.right != null) {
				lastNode=ConvertNode(rootTree.right, lastNode);
			}
			return lastNode;
    }
}
