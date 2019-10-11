import java.util.Stack;
import java.util.ArrayList;
public class Solution {
   private Stack<Integer> stack = new Stack<Integer>();
    private Stack<Integer> min = new Stack<Integer>();
     
    public void push(int node) {
        stack.push(node);
        if (min.isEmpty() || node < min.peek()) {
            min.push(node);
        }
    }
     
    public void pop() {
        if (stack.peek() == min.peek()) {
            min.pop();
        }
        stack.pop();
    }
     
    public int top() {
        return stack.peek();
    }
     
    public int min() {
        return min.peek();
    }
}
