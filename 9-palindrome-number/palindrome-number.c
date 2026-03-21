bool isPalindrome(int x) {
   long int rev=0,y;
   long int temp=x;
    while(temp>0)
    {
        y=temp%10;
        rev=rev*10+y;
        temp=temp/10;
    }
    if(rev==x)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}