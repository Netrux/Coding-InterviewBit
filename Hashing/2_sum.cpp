vector<int> Solution::twoSum(const vector<int> &A, int B) {
    vector<int> ans;
    unordered_map<int,int> map;
    int to_find;
    int curr;
    int index2 = A.size();    
    
    if(A.size() < 2)
        return ans;

    for(int i = 0;i < A.size();i++){
        map.insert({A[i],i});
    }
    for(int i = 0;i < A.size();i++){
        to_find = B - A[i];
        if(to_find == A[i])
            for(int j = i+1;j < A.size();j++){
                if(A[j] == to_find && j < index2){
                    ans.clear();
                    ans.push_back(i+1);
                    ans.push_back(j+1);
                    index2 = j;
                }
            }
            
        else{    
        if(map.find(to_find) != map.end()){
            curr = map[to_find];
            if(curr < index2 && curr > i){
                ans.clear();
                ans.push_back(i+1);
                ans.push_back(curr+1);
                index2 = curr;
               // cout<<i+1<<"  "<<curr+1<<endl;
            }
            }
        
        }        
    }
    return ans;
}
