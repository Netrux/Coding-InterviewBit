int Solution::diffPossible(const vector<int> &A, int B) {
    unordered_map <int,int > mp;
    for(int i = 0; i < A.size();i++){
        if(mp.find(A[i]) == mp.end())
            mp[A[i]] = 1;
        else
            mp[A[i]]++;
    }
    
    for(int i = 0;i < A.size(); i++){
        if(B == 0){
            if(mp[A[i]] > 1)
                return 1;
        }
        
        else{
            if(mp.find(A[i] + B) != mp.end())
                return 1;
        }
    }
    return 0;
}
