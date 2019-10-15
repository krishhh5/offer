/*
在数组中的两个数字，如果前面一个数字大于后面的数字，则这两个数字组成一个逆序对。
输入一个数组,求出这个数组中的逆序对的总数P。
并将P对1000000007取模的结果输出。 即输出P%1000000007
输入描述:
题目保证输入的数组中没有的相同的数字

数据范围：

	对于%50的数据,size<=10^4

	对于%75的数据,size<=10^5

	对于%100的数据,size<=2*10^5
*/

public class Solution {
   
    int count = 0;
    public int InversePairs(int [] array) {
        if (array != null && array.length != 0) {
            //数组创建在merge中会每次都开辟一此存放数组的空间，数据量大时会消耗大量时间，因此在一开始就创建好。
            int[] tmpArr = new int[array.length];
            mergeSort(array, 0, array.length-1, tmpArr);
        }
        return count;
    }

    private void mergeSort(int[] array, int start, int end, int[] tmpArr) {
        if (start >= end) {
            return;
        }
        int mid = (start + end) >> 1;
        mergeSort(array, start, mid, tmpArr);
        mergeSort(array, mid + 1, end, tmpArr);
        //合并
        merge(array, start, mid, end, tmpArr);
    }
    private void merge(int[] array, int start, int mid, int end, int[] tmpArr) {
       //tmpArr的下标
        int tmpIndex = start;
        //第二个归并段
        int start2 = mid + 1;
        int i = start;
        while (start <= mid && start2 <= end) {
            if (array[start] > array[start2]) {
                tmpArr[tmpIndex++] = array[start++];
                count = (count + end - start2 + 1) % 1000000007;
            } else {
                tmpArr[tmpIndex++] = array[start2++];
            }
        }
        if (start2 <= end) {
            System.arraycopy(array, start2, tmpArr, tmpIndex, end - start2 + 1);
        }
        if (start <= mid) {
            System.arraycopy(array, start, tmpArr, tmpIndex, mid - start + 1);
        }
        System.arraycopy(tmpArr, i, array, i, end - i + 1);
    }   
}
