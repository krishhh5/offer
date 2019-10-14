class Solution {
 public:
  struct cmp {
    bool operator()(const int& lhs, const int& rhs) { return lhs > rhs; }
  };
  vector<int> GetLeastNumbers_Solution(vector<int> input, int k) {
    vector<int> res;
    if (input.size() < k) {
      return res;
    }
    priority_queue<int, vector<int>, cmp> pq;
    for (const int& num : input) {
      pq.push(num);
    }
    for (int i = 0; i < k; ++i) {
      res.push_back(pq.top());
      pq.pop();
    }
    return res;
  }
};
