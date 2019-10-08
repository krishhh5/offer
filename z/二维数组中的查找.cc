class Solution {
 public:
  bool Find(int target, vector<vector<int> > array) {
    int row = array.size();
    int col = array[0].size();
    int i = row - 1;
    int j = 0;
    while (i >= 0 && j <= col - 1) {
      if (array[i][j] == target) {
        return true;
      } else if (array[i][j] > target) {
        --i;
      } else {
        ++j;
      }
    }
    return false;
  }
};
