/*
题目描述
输入一个正整数数组，把数组里所有数字拼接起来排成一个数，
打印能拼接出的所有数字中最小的一个。
例如输入数组{3，32，321}，
则打印出这三个数字能排成的最小数字为321323。
*/
import java.util.*;

public class Solution {
    public String PrintMinNumber(int [] numbers) {
        if (numbers.length == 0|| numbers == null) {
			return "";
		}
		   List<Integer> list = new ArrayList<>();
		   for (int a : numbers) {
			   list.add(a);
		   }
		   list.sort(
               (a, b) -> (a + "" + b).compareTo(b + "" + a)
           );
		   StringBuffer stringBuffer = new StringBuffer();
		   for (int a : list) {
			   stringBuffer.append(a);
		   }
		   return stringBuffer.toString();
    }
    public static void main(String[] args) {
		String str_1="334";
		String str_2="3331";
		//如果相等则返回0
		System.out.println(str_1.compareTo(str_2));
	}

}
