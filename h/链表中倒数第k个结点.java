/*
public class ListNode {
    int val;
    ListNode next = null;
 
    ListNode(int val) {
        this.val = val;
    }
}*/
/*定义两个指针,使前指针先走k个节点,
之后前后指针一起走 直到后指针走到末尾,
则前指针所在位置就是倒数第k个节点
*/
public class Solution {
    public ListNode FindKthToTail(ListNode head,int k) {
        if (k == 0 || head == null) {
            return null;
        }
        int counter = 1;
        ListNode first = head;
        ListNode last = head;
         
        while(counter++ <= k){
            
            if(last == null) {
                return null;
            }
             last = last.next;
        }
        while(last != null){
            first = first.next;
            last = last.next;
        }
        return first;
    }
}