/**
*    public class ListNode {
*        int val;
*        ListNode next = null;
*
*        ListNode(int val) {
*            this.val = val;
*        }
*    }
*
*/
import java.util.ArrayList;
import java.util.Collections;
public class Solution {
    public ArrayList<Integer> printListFromTailToHead(ListNode listNode) {
       
        ArrayList<Integer> list = new ArrayList<Integer>();
         
        if (listNode != null) {
           ListNode p = listNode;
  
            while (p != null) {
                list.add(p.val);
                p = p.next;
            }         
        }
        ArrayList<Integer> a = new ArrayList<>();
        Collections.reverse(list);
        return list;
    }
}
