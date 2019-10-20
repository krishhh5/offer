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
  ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
    if (pListHead == NULL || k <= 0) {
      return NULL;
    }
    ListNode* fast = pListHead;
    ListNode* slow = pListHead;
    for (int i = 1; i < k; ++i) {
      if (fast->next == NULL) {
        return NULL;
      }
      fast = fast->next;
    }
    while (fast->next != NULL) {
      slow = slow->next;
      fast = fast->next;
    }
    return slow;
  }
};
