bool isValidParenthesis(string expression)
{
    // Write your code here.
    stack<char> st;
    for(auto i:expression){
        if(i=='(' || i=='{' || i=='[')st.push(i);
        else{
            if(!st.empty() and i==')' and st.top()=='(')st.pop();
            else if(!st.empty() and i==']' and st.top()=='[')st.pop();
            else if(!st.empty() and i=='}' and st.top()=='{')st.pop();
            else return false;
        }
    }
    return st.empty();
}
