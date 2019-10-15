/*
统计一个数字在排序数组中出现的次数。
*/
public class Solution {
    public int GetNumberOfK(int [] array, int k) {
       int start = binarySearch(array, k);
       int end = binarySearch(array, k + 1);
        //如果返回的start越界，也就是在[1,3,3,3,3,4,5],6时会越界
        //如果查找之后不存在k这个数，则返回0
        return (array.length == start || array[start] != k) ? 0 : end - start;
    }
    //这个二分查找法，允许有重复的数字，返回重复数字最开始出现的位置
    //如果没有这个数字，则返回比他大的一个数字的位置
    private int binarySearch(int [] array, int k)
    {
        int start = 0;
        int end = array.length;
        while (start < end) {
            int mid = start + (end + start) >> 1;
            if(array[mid] >= k) {
                end = mid;
            } else {
                start = mid + 1;
            }
        }
        return start;
    }
}
