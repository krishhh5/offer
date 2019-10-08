public class Solution {
    public String replaceSpace(StringBuffer str) {
        String s = new String(str);
     
        s =  s.replaceAll(" ","%20");
        return s;
    }
}
