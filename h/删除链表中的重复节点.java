/*
在一个排序的链表中，存在重复的结点，请删除该链表中重复的结点，
重复的结点不保留，返回链表头指针。 例如，链表1->2->3->3->4->4->5
 处理后为 1->2->5
*/
public class Solution {
    public ListNode deleteDuplication(ListNode pHead) {
        if (pHead == null) {
            return null;
        }

        ListNode preNode = null;
        ListNode curNode = pHead;

        while (curNode != null) {
            if (curNode.next != null && curNode.next.val == curNode.val) {
                int value = curNode.val;
                while (curNode.next != null && curNode.next.val == value) {
                    curNode = curNode.next;
                }
                if (preNode == null) {
                    pHead = curNode.next;
                } else {
                    preNode.next = curNode.next;
                }
            } else {
                preNode = curNode;
            }
            node = node.next;
        }
        return pHead;
    }
}
