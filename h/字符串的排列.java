/*
输入一个字符串,
按字典序打印出该字符串中字符的所有排列。
例如输入字符串abc,则打印出由字符a,b,c
所能排列出来的所有字符串abc,acb,bac,bca,cab和cba。
*/
import java.util.ArrayList;
import java.util.Collections;

public class Solution {
    public ArrayList<String> Permutation(String str) {
        char [] strArray = str.toCharArray();
        ArrayList<String> list = new ArrayList<>();
        sort(strArray, 0, list);
        Collections.sort(list);
        return list;
    }

    public void sort (char [] strArray , int i, ArrayList<String> list) {
        if (strArray == null) {
            return ;
        }

        if (i == strArray.length - 1) {
            if (list.contains(String.valueOf(strArray))) {
                return ;
            }
            list.add(String.valueOf(strArray));
        } else {
            for (int j = i; j < strArray.length; j++) {
                char temp = strArray[j];
                strArray[j] = strArray[i];
                strArray[i] = temp;

                sort(strArray, i + 1, list);

                temp = strArray[j];
                strArray[j] = strArray[i];
                strArray[i] = temp;
            }
        }

    }

}
