public class Solution {
    public boolean VerifySquenceOfBST(int [] sequence) {
        if (sequence.length == 0) {
            return false;
        }
	
        return juge(sequence, 0, sequence.length - 1);
	}
 
    public boolean juge(int a[], int start, int end) {

    if (start >= end) {
        return true;
    }
		
    int i;

    for (i = start; i < end; i++) {
        if(a[i] > a[end]) {
            break;
        }
           
    }
	
        
    
    for (int j = i; j < end; j++) {
        if (a[j] < a[end]) {
            return false;
        }         
    }
			
   return juge(a, 0, i - 1) && juge(a, i, end - 1);
   
    }
}
