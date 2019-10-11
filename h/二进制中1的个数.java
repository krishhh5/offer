/*
输入一个整数，
输出该数二进制表示中1的个数。
其中负数用补码表示。
*/
public class Solution {
    public int NumberOf1(int n) {
        // 记录个数
        int counter = 0;
         
        for (int i = 0; i < 32; i++) {
            if ((n >>> i & 1) == 1) {
               counter++;
            }
              
        }
        return counter;
    }
}
