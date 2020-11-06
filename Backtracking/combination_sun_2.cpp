int checksum(vector<int> temp,int B){
    int sum = 0;
    for(int i = 0;i < temp.size();i++)
        sum += temp[i];
    return sum;    
}

void combination(vector<int> A,vector<vector<int>> &ans,vector<int> temp,int B,int curr){
    if(checksum(temp,B) == B){
        ans.push_back(temp);
        return;
    }
    
    if(checksum(temp,B) > B || curr >= A.size())
        return;
        

        
    for(int i = curr;i<A.size();i++){
        vector<int> temp1(temp);
        temp1.push_back(A[i]);
        combination(A,ans,temp1,B,i+1);
    } 
}
vector<vector<int> > Solution::combinationSum(vector<int> &A, int B) {
    sort(A.begin(),A.end());
    vector<vector<int>> ans,ans1;
    vector<int> temp;
    combination(A,ans,temp,B,0);
    
    if(ans.size() == 0)
        return ans1;
        
    sort(ans.begin(),ans.end());
    vector<int> test = ans[0];
    ans1.push_back(ans[0]);
    for(int i = 1;i < ans.size();i++){
        if(ans[i] != test){
            ans1.push_back(ans[i]);
            test = ans[i];
        }
        
    }
    return ans1;
}
