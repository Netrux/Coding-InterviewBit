vector<vector<int> > Solution::solve(int A) {
    vector<int> temp;
    vector<vector<int>> ans;
    if(A < 1)
        return ans;
    temp.push_back(1);
    ans.push_back(temp);
    if(A == 1)
        return ans;

    temp.push_back(1);
    ans.push_back(temp);
    if(A == 2)
        return ans;
    temp.clear();

    for(int i = 2;i < A;i++){
        temp.push_back(1);
        for(int j = 1;j < ans[ans.size()-1].size();j++){
            temp.push_back(ans[ans.size()-1][j-1]+ans[ans.size()-1][j]);
        }
        temp.push_back(1);
        ans.push_back(temp);
        temp.clear();
    }
    return ans;
}
