/*
给定一个double类型的浮点数base和int类型的整数exponent。求base的exponent次方。

保证base和exponent不同时为0
*/
public class Solution {
    public double Power(double base, int exponent) {
        double result = 1;
         
        if (exponent > 0) {
            for (int i = 1; i <= exponent; i++) {
               result *= base;
            }
        } else if (exponent < 0) {
            for (int i = 1; i <= -exponent; i++) {
               result *= base;
            }
            result = 1.0 / result;
        }
        return result;
  }
}
