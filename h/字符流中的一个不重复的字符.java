/*
请实现一个函数用来找出字符流中第一个只出现一次的字符。
例如，当从字符流中只读出前两个字符"go"时，第一个只出现一次的字符是"g"。
当从该字符流中读出前六个字符“google"时，第一个只出现一次的字符是"l"。
*/
public class Solution {
    String str = "";
    int length = 'z';
    int[] count = new int[length];
    //Insert one char from stringstream
    public void Insert(char ch)
    {
        if (ch >= length) {
            return ;
        }
        str += ch;
        count[ch]++;
        
    }
  //return the first appearence once char in current stringstream
    public char FirstAppearingOnce()
    {
        for (char c : str.toCharArray()) {
            if (count[c] == 1) {
                return c;
            }
        }
        return '#';
    }
}
