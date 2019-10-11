/*
输入一个链表，反转链表后，输出新链表的表头
*/
/*
public class ListNode {
    int val;
    ListNode next = null;
 
    ListNode(int val) {
        this.val = val;
    }
}*/
public class Solution {
    public ListNode ReverseList(ListNode head) {
        // 空表
        if (head == null) {
            return null;
        }
         
        // 只有一个节点
        if (head.next == null) {
            return head;
        }
         
        // 心得与头节点
        ListNode newHead = null;
        ListNode preNode = null;
        ListNode curNode = head;
        ListNode nextNode = null;
         
        while (curNode != null) {
            nextNode = curNode.next;
            // 到末尾
            if (nextNode == null) {
                newHead = curNode;
            }
            curNode.next = preNode;
            preNode = curNode;
            curNode = nextNode;
          
        }
        return newHead;
         
    }
}
