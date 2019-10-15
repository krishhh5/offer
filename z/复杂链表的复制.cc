/*
struct RandomListNode {
    int label;
    struct RandomListNode *next, *random;
    RandomListNode(int x) :
            label(x), next(NULL), random(NULL) {
    }
};
*/
class Solution {
 public:
  RandomListNode* Clone(RandomListNode* pHead) {
    if (pHead == NULL) {
      return NULL;
    }
    RandomListNode* dummy = new RandomListNode(0);
    RandomListNode* iter = dummy;
    unordered_map<RandomListNode*, RandomListNode*> map;
    while (pHead != NULL) {
      if (map.count(pHead) == 1) {
        iter->next = map[pHead];
      } else {
        iter->next = new RandomListNode(pHead->label);
        map.insert({pHead, iter->next});
      }
      if (pHead->random != NULL) {
        if (map.count(pHead->random) == 1) {
          iter->next->random = map[pHead->random];
        } else {
          iter->next->random = new RandomListNode(pHead->random->label);
          map.insert({pHead->random, iter->next->random});
        }
      }
      iter = iter->next;
      pHead = pHead->next;
    }
    iter = dummy->next;
    delete dummy;
    return iter;
  }
};
