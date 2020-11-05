int Solution::largestRectangleArea(vector<int> &A) 
{
    int res = 0;
    A.push_back(0);
    
    vector<int> idx;
    
    for(auto i=0; i<A.size(); i++)
    {
        while(idx.size() > 0 && A[idx.back()] >= A[i])
        {
            int h = A[idx.back()];
            idx.pop_back();
            
            int j;
            if(idx.size() > 0)
                j = idx.back();
            else 
                j = -1;
                
            if(h*(i-j-1) > res)
                res = h*(i-j-1);
        }
        idx.push_back(i);
    }
    
    return res;
    
}
