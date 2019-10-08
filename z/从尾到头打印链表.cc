/**
 *  struct ListNode {
 *        int val;
 *        struct ListNode *next;
 *        ListNode(int x) :
 *              val(x), next(NULL) {
 *        }
 *  };
 */
class Solution {
 public:
  vector<int> printListFromTailToHead(ListNode* head) {
    vector<int> res;
    if (head == NULL) {
      return res;
    }
    while (head != NULL) {
      res.push_back(head->val);
      head = head->next;
    }
    reverse(begin(res), end(res));
    return res;
  }
};
