class Solution {
 public:
  void push(int node) { stack1.push(node); }
  void move(stack<int>& stack1, stack<int>& stack2) {
    if (stack2.empty()) {
      while (!stack1.empty()) {
        stack2.push(stack1.top());
        stack1.pop();
      }
    }
  }
  int pop() {
    if (!stack2.empty()) {
      int tmp = stack2.top();
      stack2.pop();
      return tmp;
    } else {
      move(stack1, stack2);
      int tmp = stack2.top();
      stack2.pop();
      return tmp;
    }
  }

 private:
  stack<int> stack1;
  stack<int> stack2;
};
