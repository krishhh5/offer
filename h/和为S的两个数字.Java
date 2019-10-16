/*
输入一个递增排序的数组和一个数字S，
在数组中查找两个数，使得他们的和正好是S，
如果有多对数字的和等于S，输出两个数的乘积最小的。
*/
import java.util.ArrayList;
public class Solution {
    public ArrayList<Integer> FindNumbersWithSum(int [] array, int sum) {
        int first = 0;
        int last = array.length - 1;
        ArrayList<Integer> list = new ArrayList<Integer>();
        while (first < last) {
            if (array[first] + array[last] == sum) {
                list.add(array[first]);
                list.add(array[last]);
                break;
            } else if (array[first] + array[last] > sum) {
                last--;
            } else if (array[first] + array[last] < sum) {
                first++;
            }
        }
        return list;
    }
}
