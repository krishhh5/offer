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
  ListNode* ReverseList(ListNode* pHead) {
    if (pHead == NULL) {
      return NULL;
    }
    ListNode* prev = NULL;
    while (pHead != NULL) {
      ListNode* tmp = pHead->next;
      pHead->next = prev;
      prev = pHead;
      pHead = tmp;
    }
    return prev;
  }
};
