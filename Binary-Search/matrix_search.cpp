int Solution::searchMatrix(vector<vector<int> > &A, int B) {
    int row = A.size();
    int col = A[0].size();
    
    int l = 0, r = row - 1;
       while (l <= r) { 
        int m = l + (r - l) / 2; 
  
        if (A[m][col-1] == B || A[m][0] == B) 
            return 1; 
          
        // Check if x is present at mid 
        if (A[m][col-1] > B && A[m][0] < B) {
                
                int l1 = 0, r1 = col-1;
                while (l1 <= r1) { 
                int m1 = l1 + (r1 - l1) / 2; 
          
                // Check if x is present at mid 
                if (A[m][m1] == B) 
                    return 1; 
          
                // If x greater, ignore left half 
                if (A[m][m1] < B) 
                    l1 = m1 + 1; 
          
                // If x is smaller, ignore right half 
                else
                    r1 = m1 - 1; 
    
                    
                } 
                return 0;
  
        }
  
        // If x greater, ignore left half 
        if (A[m][col-1] < B && A[m][0] < B) 
            l = m + 1; 
  
        // If x is smaller, ignore right half 
        if(A[m][col-1] > B && A[m][0] > B)
            r = m - 1; 
    } 
  
    // if we reach here, then element was 
    // not present 
    return 0; 
} 

