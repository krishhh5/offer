/*
如何得到一个数据流中的中位数？如果从数据流中读出奇数个数值，
那么中位数就是所有数值排序之后位于中间的数值。
如果从数据流中读出偶数个数值，那么中位数就是所有数值排序之后中间两个数的平均值。
我们使用Insert()方法读取数据流，使用GetMedian()方法获取当前读取数据的中位数。
*/
import java.util.*;
public class Solution {

    ArrayList<Integer> list = new ArrayList<>();
    public void Insert(Integer num) {
        list.add(num);
        Collections.sort(list);
    }

    public Double GetMedian() {
        int mid = list.size() / 2;
        if ((list.size() & 1) == 0) {
            Integer n1 = list.get(mid);
            Integer n2 = list.get(mid - 1);
            double s = (Double.valueOf(n1 + "") + Double.valueOf(n2 + "")) / 2;
            return s;
        } else {
            double s = Double.valueOf(list.get(mid) + "");
            return s;
        } 
        
    }
}
