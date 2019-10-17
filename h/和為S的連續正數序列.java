/*
小明很喜欢数学,有一天他在做数学作业时,要求计算出9~16的和,
他马上就写出了正确答案是100。但是他并不满足于此,
他在想究竟有多少种连续的正数序列的和为100(至少包括两个数)。
没多久,他就得到另一组连续正数和为100的序列:18,19,20,21,22。
现在把问题交给你,你能不能也很快的找出所有和为S的连续正数序列? Good Luck!
*/
import java.util.ArrayList;
public class Solution {
    public ArrayList<ArrayList<Integer> > FindContinuousSequence(int sum) {
        ArrayList<ArrayList<Integer>> sqList = new ArrayList<ArrayList<Integer>>();
        if (sum < 3) {
            return sqList;
        }
        int small = 1;
        int big = 2;
        int curSum = small + big;
        //设置middle变量的原因在于如果在当前总和小于sum的情况下，
        //small在增加到sum的一半的过程中肯定会大于sum
        int middle = (1 + sum) / 2;
        while (small < middle) {
            ArrayList<Integer> sq = new ArrayList<Integer>();
            if (curSum == sum) {
                for (int i = small; i <= big; i++) {
                    sq.add(i);
                }
            }
            while (curSum > sum && small < middle) {
                curSum -= small;
                small++;
                if (curSum == sum) {
                    for (int i = small; i <= big; i++) {
                        sq.add(i);
                    }
                }
            }
            if (sq.size() > 0) {
                sqList.add(sq);
            }
            big++;
            curSum += big;
        }

        return sqList;
    }
}
