void Solution::merge(vector<int> &A, vector<int> &B) {
    vector<int> ans;
    int i = 0,j = 0;
        while((i < A.size()) && (j < B.size())){
                if(A[i] > B[j] ){
                    ans.push_back(B[j]);
                    j++;
                }
                else{
                    ans.push_back(A[i]);
                    i++;
                }
            }
        while(j != B.size()){
            ans.push_back(B[j]);
            j++;
        }
        while(i != A.size()){
            ans.push_back(A[i]);
            i++;
        }
    A = ans;        
    
}
