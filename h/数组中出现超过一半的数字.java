/*
数组中有一个数字出现的次数超过数组长度的一半，
请找出这个数字。例如输入一个长度为9的数组{1,2,3,2,2,2,5,4,2}。
由于数字2在数组中出现了5次，超过数组长度的一半，因此输出2。
如果不存在则输出0。
*/
public class Solution {
    public int MoreThanHalfNum_Solution(int [] array) {

        int [] a = new int[100];

        for (int i = 0; i < array.length; i++) {
            a[array[i]]++;
        }

        for (int i = 0; i < a.length; i++) {
            if (a[i] > array.length / 2) {
                return i;
            }
        }
        return 0;        
    }
}
