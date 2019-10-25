class Solution {
 public:
  priority_queue<int> max_heap;
  priority_queue<int, vector<int>, greater<int>> min_heap;
  void Insert(int num) {
    if (max_heap.empty() || num < max_heap.top()) {
      max_heap.push(num);
    } else {
      min_heap.push(num);
    }
    if (max_heap.size() + 1 == min_heap.size()) {
      max_heap.push(min_heap.top());
      min_heap.pop();
    }
    if (max_heap.size() == min_heap.size() + 2) {
      min_heap.push(max_heap.top());
      max_heap.pop();
    }
  }

  double GetMedian() {
    return max_heap.size() == min_heap.size() ? (max_heap.top() + min_heap.top()) / 2.0
                                              : max_heap.top();
  }
};
