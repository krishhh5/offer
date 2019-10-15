class Solution {
 public:
  int FindGreatestSumOfSubArray(vector<int> array) {
    int max = INT_MIN;
    for (int i = 0; i < array.size(); ++i) {
      if (array[i] > max) {
        max = array[i];
      }
      int sum = array[i];
      for (int j = i + 1; j < array.size(); ++j) {
        sum += array[j];
        if (sum > max) {
          max = sum;
        }
      }
    }
    return max;
  }
};
