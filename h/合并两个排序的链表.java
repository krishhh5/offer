/*
public class ListNode {
    int val;
    ListNode next = null;
 
    ListNode(int val) {
        this.val = val;
    }
}*/
public class Solution {
	
    public ListNode Merge(ListNode list1, ListNode list2) {
        if (list1 == null) {
            return list2;
        }
        
        if (list2 == null) {
            return list1;
        }
        
        ListNode pList = null;
		
        if (list1.val < list2.val) {
            pList = list1;
            pList.next = Merge(list1.next, list2);
            
        } else {
            pList = list2;
            pList.next = Merge(list1, list2.next);
        }
		
        return pList;
	}
	
}
