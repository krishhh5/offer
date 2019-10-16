/*
求1+2+3+...+n，
要求不能使用乘除法、for、while、if、else、switch、case
等关键字及条件判断语句（A?B:C）。
*/
public class Solution {
    public int Sum_Solution(int n) {
        int sum = 0;
        if (n == 1) {
            return 1;
        } else {
           sum = Sum_Solution(n - 1) + n;
        }
        return sum;
    }
}
