class Solution {
    public List<String> fizzBuzz(int n) {
        List<String>lis=new ArrayList<>();
        for(int i=1;i<=n;i++)
        {
            if(i%3==0&&i%5==0)
            {
                  lis.add("FizzBuzz");
            }
            else if(i%3==0)
            {
                lis.add("Fizz");
            }
            else if(i%5==0)
            {
                lis.add("Buzz");
            }
            else
            {
                String s=Integer.toString(i);
                lis.add(s);
            }
        }
        return lis;
        
    }
}