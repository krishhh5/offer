class Solution {
 public:
  void swap(char& a, char& b) {
    char tmp = a;
    a = b;
    b = tmp;
  }
  void reverse(string& str, int start, int end) {
    while (start < end) {
      swap(str[start++], str[end--]);
    }
  }
  string LeftRotateString(string str, int n) {
    if (str.empty() || n <= 0) {
      return str;
    }
    n = n % str.size();
    reverse(str, 0, n - 1);
    reverse(str, n, str.size() - 1);
    reverse(str, 0, str.size() - 1);
    return str;
  }
};
