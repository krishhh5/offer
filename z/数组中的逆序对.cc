class Solution {
 public:
  long long merge_sort(vector<int>& data, vector<int>& helper, int start, int end) {
    if (start == end) {
      helper[start] = data[start];
      return 0;
    }
    int mid = start + (end - start) / 2;
    long long left_count = merge_sort(data, helper, start, mid);
    long long right_count = merge_sort(data, helper, mid + 1, end);
    int left = mid;
    int right = end;
    int index = end;
    long long count = 0;
    while (left >= start && right >= mid + 1) {
      if (data[left] > data[right]) {
        helper[index--] = data[left--];
        count += right - mid;
      } else {
        helper[index--] = data[right--];
      }
    }
    while (left >= start) {
      helper[index--] = data[left--];
    }
    while (right >= mid + 1) {
      helper[index--] = data[right--];
    }
    for (int i = start; i <= end; ++i) {
      data[i] = helper[i];
    }
    return left_count + right_count + count;
  }
  int InversePairs(vector<int> data) {
    if (data.empty()) {
      return 0;
    }
    vector<int> helper(data.size());
    long long res = merge_sort(data, helper, 0, data.size() - 1);
    return res % 1000000007;
  }
};
