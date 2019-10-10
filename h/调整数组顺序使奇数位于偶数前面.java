/*
输入一个整数数组，实现一个函数来调整该数组中数字的顺序，
使得所有的奇数位于数组的前半部分，所有的偶数位于数组的后半部分，
并保证奇数和奇数，偶数和偶数之间的相对位置不变。
*/
public class Solution {
    public void reOrderArray(int [] array) {
        //记录排好序的奇数的位置
        int m = 0;
        for (int i = 0; i < array.length; i++) {   
            //找到奇数
            if (array[i] % 2 == 1) {
                //记录奇数
                int temp = array[i];
                
                for (int j = i; j > m; j--) {
                    //将奇数之前的所有元素往后移一个位置
                    array[j] = array[j - 1];
                }
                //将奇数放到array[m]位置
                array[m++] = temp;
            }
        }
    }
}
