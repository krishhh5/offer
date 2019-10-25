/*
将一个字符串转换成一个整数，要求不能使用字符串转换整数的库函数。 
数值为0或者字符串不是一个合法的数值则返回0
*/
public class Solution {
   public int StrToInt(String str) {
        int length = str.length();
        int isNegtive = 1, overValue = 0;
        int digit = 0, value = 0;
        char [] c = str.toCharArray();
        final int INT_MAX = 2147483647;
 
        if (length == 0) {
            return 0;
        }
        int idx = 0;
        if (c[0] == '-') { 
            isNegtive = -1; 
            idx = 1;
        } else if (c[0] == '+') {
            idx = 1;
        }
        for ( ; idx<length; idx++) {
            digit = c[idx]-'0';
            overValue = isNegtive * value - INT_MAX/10 + (((isNegtive + 1) / 2 + digit > 8) ? 1 : 0);
            if (digit < 0 || digit > 9) {
                return 0;
            } else if (overValue > 0){
                return 0;
            } 
            value = value * 10 + isNegtive * digit;
        }
            return value;   
    }
}
