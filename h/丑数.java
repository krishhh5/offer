/*
把只包含质因子2、3和5的数称作丑数（Ugly Number）。
例如6、8都是丑数，但14不是，因为它包含质因子7。 
习惯上我们把1当做是第一个丑数。求按从小到大的顺序的第N个丑数。
*/
import java.util.ArrayList;

public class Solution {
    public int GetUglyNumber_Solution(int index) {
        
       if (index <= 0) {
            return 0;
        } else if (index < 7) {
            return index;
        }
        
        ArrayList<Integer> result = new ArrayList<>(); 
        result.add(1);
        int r1 = 0,r2 = 0,r3 = 0;
        
        for (int i = 1;i < index; i++) {
            int temp = min(result.get(r1) * 2, min(result.get(r2) * 3, result.get(r3) * 5));
            result.add(temp);
            if (result.get(i) == (result.get(r1) * 2)) {
                r1++;
            }
            if (result.get(i) == (result.get(r2) * 3)) {
                r2++;
            }
            if (result.get(i) == (result.get(r3) * 5)) {
                r3++;
            }
        }
        return result.get(index - 1);
    }

     public static int min(int a, int b) {
        return a > b ? b : a;
    }
}
