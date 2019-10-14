/*
输入n个整数，找出其中最小的K个数。
例如输入4,5,1,6,2,7,3,8这8个数字，则最小的4个数字是1,2,3,4,。
*/
import java.util.*;
import java.util.Collections;

public class Solution {
    public ArrayList<Integer> GetLeastNumbers_Solution(int [] input, int k) {
        ArrayList<Integer> resultList = new ArrayList<>();
        ArrayList<Integer> res = new ArrayList<Integer>();

        if (input.length < k || input.length == 0) {
           return res;
        }
      
        for (int n : input) {
            resultList.add(n);
        }
        Collections.sort(resultList);
      
        for (int i = 0; i < k; i++) {
           res.add(resultList.get(i));
        }
        return res;        
    }
}
