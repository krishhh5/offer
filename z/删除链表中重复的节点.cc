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
  ListNode* deleteDuplication(ListNode* pHead) {
    if (pHead == NULL || pHead->next == NULL) {
      return pHead;
    }
    ListNode* dummy = new ListNode(0);
    dummy->next = pHead;
    pHead = dummy;
    while (pHead->next != NULL && pHead->next->next != NULL) {
      if (pHead->next->val == pHead->next->next->val) {
        int tmp = pHead->next->val;
        while (pHead->next != NULL && pHead->next->val == tmp) {
          pHead->next = pHead->next->next;
        }
      } else {
        pHead = pHead->next;
      }
    }
    pHead = dummy->next;
    delete dummy;
    return pHead;
  }
};
