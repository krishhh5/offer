import java.util.ArrayList;
public class Solution {
    public ArrayList<Integer> printMatrix(int [][] matrix) {
        // 记录四个角的位置
        int left = 0;
        int right = matrix[0].length - 1;
        int top = 0;
        int boom = matrix.length - 1;
        ArrayList<Integer> list = new ArrayList<Integer>();
 
        while ((right > left) && (boom > top)) {
            // 从左到右
            for (int i = left; i <=right; i++) {
                list.add(matrix[top][i]);
            }
            // 上到下
            for (int i = top + 1;  i <= boom; i++) {
                list.add(matrix[i][right]);
            }
            // 右到左
            for (int i = right - 1; i >= left; i--) {
                list.add(matrix[boom][i]);
            }
            // 下到上
            for (int i = boom - 1; i > top; i--) {
                list.add(matrix[i][left]);
            }
            left++;
            right--;
            top++;
            boom--;
        }
 
        // 单独剩下一行的情况
        if ((boom == top) && (left < right)) {
            for (int i = left; i <= right; i++) {
                list.add(matrix[top][i]);
            }
        }
        // 单独剩下一列的情况
        if ((left == right) && (boom > top)) {
            for (int i = top; i <= boom; i++) {
                list.add(matrix[i][left]);
            }
        }
        // 单独剩下一个元素的情况
         if ((boom == top) && (right == left)) {
           list.add(matrix[left][boom]);
        }
        return list;
    }
}
