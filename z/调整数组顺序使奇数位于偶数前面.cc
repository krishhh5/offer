class Solution {
 public:
  void reOrderArray(vector<int>& array) {
    vector<int> odd_array(array.size());
    int m = 0;
    vector<int> even_array(array.size());
    int n = 0;
    for (int i = 0; i < array.size(); ++i) {
      if (array[i] % 2 == 1) {
        odd_array[m++] = array[i];
      } else {
        even_array[n++] = array[i];
      }
    }
    for (int i = 0; i < m; ++i) {
      array[i] = odd_array[i];
    }
    int j = 0;
    for (int i = m; i < m + n; ++i) {
      array[i] = even_array[j++];
    }
  }
};
