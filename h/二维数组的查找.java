public class Solution {
    public boolean Find(int target, int[][] array) {
        int low = 0;
        int high = array[0].length - 1;
        int mid = 0;
     
       for (int i = 0; i < array.length; i++) {
           for (int j = 0; j < array[i].length; j++) {
               if (target == array[i][j]) {
                   return true;
               }   
           }
       }
        return false;
     
    }
}
