int Solution::trap(const vector<int> &A) {
    int l=0,r=A.size()-1;
    int ans=0,lm=0,rm=0;
    while(l<r){
        if(A[l]<A[r]){
            lm=max(lm,A[l]);
            ans+=lm-A[l];
            l++;
        }
        else{
            rm=max(rm,A[r]);
            ans+=rm-A[r];
            r--;
        }
    }
    return ans;
}
