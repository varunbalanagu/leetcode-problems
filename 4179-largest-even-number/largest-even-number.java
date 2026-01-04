class Solution {
    public String largestEven(String s) {
      int n=s.length();
      while(s.charAt(n-1)!='2')
      {
      s=s.substring(0,n-1);
      n=s.length();
      if(n==0)
      {
        return s;
      }
      }
      return s;
    }
}