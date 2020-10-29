unsigned int Solution::reverse(unsigned int A) {
    unsigned int B = 0;
  for(int i = 0;i < 32;i++){
      B += (A%2)*pow(2,31-i);
      A = A/2;
  }
  return(B);
}
