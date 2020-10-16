vector<int> Solution::plusOne(vector<int> &A) {
    vector<int>::iterator it;
    vector<int> B;
    int j = 0;
    int n = A.size();
    for(int i = 0;i < n; i++){
        if(n == 1 && A[0] == 0)
        {   A[0] = 1;
            return A ;
        }
        else{
        if(A[0] == 0){
            it = A.begin();
            A.erase(it);

        }
        else
            break;

        }

    }
    int m = A.size();
        for(int i = m-1;i >=0 ; i--){
            if(A[i] != 9){
                A[i] = A[i] + 1;
                break;
            }
            else if(A[i] == 9 && i > 0)
                A[i] = 0;

            else if(A[i] == 9 && i == 0){
                A[i] = 0;
                A.push_back(1);
                reverse(A.begin(),A.end());
            }
         }

    return A;
}
