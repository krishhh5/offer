/*
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) :
            val(x), next(NULL) {
    }
};*/
class Solution {
 public:
  ListNode* Merge(ListNode* pHead1, ListNode* pHead2) {
    ListNode* dummy = new ListNode(0);
    ListNode* head = dummy;
    while (pHead1 != NULL && pHead2 != NULL) {
      if (pHead1->val < pHead2->val) {
        head->next = pHead1;
        head = head->next;
        pHead1 = pHead1->next;
      } else {
        head->next = pHead2;
        head = head->next;
        pHead2 = pHead2->next;
      }
    }
    head->next = pHead1 != NULL ? pHead1 : pHead2;
    head = dummy->next;
    delete dummy;
    return head;
  }
};
