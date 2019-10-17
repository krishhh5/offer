class Solution {
 public:
  // Parameters:
  //        numbers:     an array of integers
  //        length:      the length of array numbers
  //        duplication: (Output) the duplicated number in the array number
  // Return value:       true if the input is valid, and there are some duplications in the array
  // number
  //                     otherwise false
  bool duplicate(int numbers[], int length, int* duplication) {
    if (length <= 0) {
      return false;
    }
    unordered_map<int, int> map;
    for (int i = 0; i < length; ++i) {
      if (numbers[i] < 0 || numbers[i] > length - 1) {
        return false;
      }
      map[numbers[i]]++;
    }
    for (int i = 0; i < length; ++i) {
      if (map.count(numbers[i])) {
        if (map[numbers[i]] > 1) {
          *duplication = numbers[i];
          return true;
        }
      }
    }
    return false;
  }
};
