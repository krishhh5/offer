public class Solution {
    public boolean Find(int target, int [][] array) {
        //如果二维数组为空
        if(array==null||array[0].length==0) 
           return false; 
        //横向长度
        int horizon =  array[0].length;
        //纵向长度
        int vertical =  array.length;
        //不在范围内
        if (target < array[0][0] || target > array[vertical-1][horizon-1])
              return false;
        //从右上角开始查找
        int i = 0,j = horizon-1;
        while((i < vertical) &&  (j >= 0)){
            //如果比元素大,忘下走
            if (target > array[i][j]) {
                    i++;
            //如果比元素小,往左走
            } else if (target < array[i][j]) {
                    j--;
            //相等    
            } else {
                    return true;
            }
        }
         return false;
    }
}
