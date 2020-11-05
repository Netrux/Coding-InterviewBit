int Solution::evalRPN(vector<string> &A) {
    stack<int> st;
    int op1;
    int op2;
    for(int i = 0;i < A.size();i++){
        if(A[i] != "*" && A[i] != "/" && A[i] != "+" && A[i] != "-"){
            st.push(atoi(A[i].c_str()));
            //cout<<atoi(A[i].c_str())<<endl;
        }
        else{
           // cout<<"check";
            op1 = st.top();
            st.pop();
            op2 = st.top();
            st.pop();
          //  cout<<op1<<" "<<op2<<endl;
            if(A[i] == "*"){
                st.push(op2*op1);
            }
            else if(A[i] == "/"){
                st.push(op2/op1);
            }
            else if(A[i] == "+"){
                st.push(op2+op1);
            }
            else if(A[i] == "-"){
                st.push(op2-op1);
            }            
        }
    }
    return st.top();
}
