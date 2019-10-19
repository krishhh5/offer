/*给你一根长度为n的绳子，请把绳子剪成m段（m、n都是整数，n>1并且m>1），每段绳子的长度记为k[0],k[1],...,k[m]。请问k[0]xk[1]x...xk[m]可能的最大乘积是多少？例如，当绳子的长度是8时，我们把它剪成长度分别为2、3、3的三段，此时得到的最大乘积是18。
输入描述:
*/
import java.lang.Math;
public class Solution {
    public int cutRope(int target) {
        if (target <= 3) {
            return target - 1;
        }
        
        int x = target % 3;
        int y = target / 3;
        if (x == 0) {
            return (int)Math.pow(3.0, y);
        } else if (x == 1) {
            return (int)(2 * 2 * Math.pow(3.0, y - 1));
        } else {
            return (int)(2 * Math.pow(3.0, y));
        }
    }
}
