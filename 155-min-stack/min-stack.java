class MinStack {

Stack<Integer> stk =new Stack<>();
Stack<Integer> min=new Stack<>();

int mini=Integer.MAX_VALUE;


public void push(int data) 
{
    if(min.isEmpty())
    {min.push(data);
    stk.push(data);
    return;}

if(data<=min.peek())
{
    
    min.push(data);
}

 stk.push(data);

  }

public void pop()
{ 
    // System.out.println(min+"\n"+stk);
    if(min.peek().equals(stk.pop()))
     {min.pop();}
 System.out.println(min+"\n"+stk);
    
}

public int top()
{
    return stk.peek();
}

public int getMin()
{
return min.peek();
}

}

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(val);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */