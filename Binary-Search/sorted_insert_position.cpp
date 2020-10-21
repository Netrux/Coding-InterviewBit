int Solution::searchInsert(vector<int> &A, int B) {
    long int n = A.size();
    long int l = 0, r = n-1; 
      while (l <= r) { 
        int m = l + (r - l) / 2; 
  
        // Check if x is present at mid 
        if (A[m] == B) 
            return m; 
  
        // If x greater, ignore left half 
        if (A[m] < B) 
            l = m + 1; 
  
        // If x is smaller, ignore right half 
        else
            r = m - 1; 
    } 
  
    // if we reach here, then element was 
    // not present 
    return l; 
}
