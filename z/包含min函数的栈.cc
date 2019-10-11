class Solution {
 public:
  void push(int value) {
    s.push(value);
    if (helper.empty()) {
      helper.push(value);
    } else {
      if (helper.top() > value) {
        helper.push(value);
      }
    }
  }
  void pop() {
    if (s.top() > helper.top()) {
      s.pop();
    } else if (s.top() == helper.top()) {
      s.pop();
      helper.pop();
    }
  }
  int top() { return s.top(); }
  int min() { return helper.top(); }
  stack<int> s;
  stack<int> helper;
};
