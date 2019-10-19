/*
 public class ListNode {
    int val;
    ListNode next = null;

    ListNode(int val) {
        this.val = val;
    }
}
*/
/*
    给一个链表，若其中包含环，请找出该链表的环的入口结点，否则，输出null
*/
public class Solution {

    public ListNode EntryNodeOfLoop(ListNode pHead) {
        ListNode meetingNode = isLoop(pHead);
   
        if (meetingNode == null) {
            return null;
        }
                
        ListNode p1 = meetingNode;
        ListNode p2 = pHead;

        while (p1 != p2) {
             p1 = p1.next;
             p2 = p2.next;
          
            
        }
        if (p1 == p2) {
               return p1;
        }
        return null;
    }
    public ListNode isLoop(ListNode pHead) {
        if (pHead == null) {
            return null;
        }
        ListNode slow = pHead.next;
        if(slow==null) {
          return null;
        }
        ListNode fast = slow.next;
     
        while (fast != null && fast.next != null) {
            if (fast == slow) {
                return fast;
            }
            slow = slow.next;
            fast = fast.next.next;
        }
        return null;
    }
}