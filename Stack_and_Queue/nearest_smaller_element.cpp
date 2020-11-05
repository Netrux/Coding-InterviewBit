vector<int> Solution::prevSmaller(vector<int> &A) {
    stack<int> B;
    vector<int> ans;
    ans.push_back(-1);
    for(int i = 0;i < A.size();i++){
        if(B.empty()) B.push(A[i]);
        
        else if(A[i] <= B.top()){
            
            while(B.empty() == 0){
                if(A[i] <= B.top())
                    B.pop();
                else 
                    break;
            }    
                
            if(B.empty()){
                ans.push_back(-1);
                B.push(A[i]);
            }
            else 
            {
                ans.push_back(B.top());
                B.push(A[i]);
            }
            
        }
        
        else if(i != 0){
            ans.push_back(B.top());
            B.push(A[i]);
        }
        }
    return ans;    
    }
