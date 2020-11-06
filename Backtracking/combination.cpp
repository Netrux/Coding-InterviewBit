void make(int A,int B,int curr,vector<vector<int> > &ans,vector<int> temp){
    
    ans.push_back(temp);
    if(curr > A){
        return;
    }

    
    for(int i = curr;i <= A;i++){
        vector<int> temp1(temp);
        temp1.push_back(i);
        make(A,0,i+1,ans,temp1);
    }    
}
vector<vector<int> > Solution::combine(int A, int B) {
    vector<vector<int> > ans;
    vector<vector<int> > ans1;
    vector<int> temp;
    if(B == 0){
        ans.push_back(temp);
        return ans;
    }    
    make(A,B,1,ans,temp);
    sort(ans.begin(),ans.end());
    for(int i = 0;i < ans.size();i++){
        if(ans[i].size() == B)
            ans1.push_back(ans[i]);

    }
    return ans1;
}
