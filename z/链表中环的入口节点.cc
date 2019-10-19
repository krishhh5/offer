/*
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) :
        val(x), next(NULL) {
    }
};
*/
class Solution {
 public:
  ListNode* EntryNodeOfLoop(ListNode* pHead) {
    if (pHead == NULL) {
      return NULL;
    }
    ListNode* slow = pHead;
    ListNode* fast = pHead->next;
    while (fast != NULL && fast->next != NULL) {
      slow = slow->next;
      fast = fast->next->next;
      if (slow == fast) {
        slow = pHead;
        while (slow != fast->next) {
          slow = slow->next;
          fast = fast->next;
        }
        return fast->next;
      }
    }
    return NULL;
  }
};
