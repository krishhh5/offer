class Solution {
 public:
  static bool cmp(const int& lhs, const int& rhs) {
    string A = "";
    string B = "";
    A += to_string(lhs);
    A += to_string(rhs);
    B += to_string(rhs);
    B += to_string(lhs);
    return A < B;
  }
  string PrintMinNumber(vector<int> numbers) {
    string res = "";
    sort(numbers.begin(), numbers.end(), cmp);
    for (int i = 0; i < numbers.size(); ++i) {
      res += to_string(numbers[i]);
    }
    return res;
  }
};
