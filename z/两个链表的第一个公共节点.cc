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
  int length(ListNode* head) {
    if (head == NULL) {
      return 0;
    }
    int len = 0;
    while (head != NULL) {
      ++len;
      head = head->next;
    }
    return len;
  }
  ListNode* FindFirstCommonNode(ListNode* pHead1, ListNode* pHead2) {
    if (pHead1 == NULL || pHead2 == NULL) {
      return NULL;
    }
    int len1 = length(pHead1);
    int len2 = length(pHead2);
    int diff;
    if (len1 > len2) {
      diff = len1 - len2;
      for (int i = 0; i < diff; ++i) {
        pHead1 = pHead1->next;
      }
    } else if (len1 < len2) {
      diff = len2 - len1;
      for (int i = 0; i < diff; ++i) {
        pHead2 = pHead2->next;
      }
    }
    if (pHead1 == pHead2) {
      return pHead1;
    }
    while (pHead1 != pHead2) {
      pHead1 = pHead1->next;
      pHead2 = pHead2->next;
    }
    return pHead1;
  }
};
