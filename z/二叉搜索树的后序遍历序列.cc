class Solution {
 public:
  bool helper(vector<int>& sequence, int left, int right) {
    if (left >= right) {
      return true;
    }
    int i = right;
    while (i > left && sequence[i - 1] > sequence[right]) {
      --i;
    }
    for (int j = i - 1; j >= left; --j) {
      if (sequence[j] > sequence[right]) {
        return false;
      }
    }
    return helper(sequence, left, i - 1) && helper(sequence, i, right - 1);
  }
  bool VerifySquenceOfBST(vector<int> sequence) {
    if (sequence.empty()) {
      return false;
    }
    return helper(sequence, 0, sequence.size() - 1);
  }
};
