int Solution::reverse(int num) {
    
    bool negativeFlag = false;
    if (num < 0)
    {
        negativeFlag = true;
        num = -num ;
    }
 
    int prev_rev_num = 0, rev_num = 0;
    while (num != 0)
    {
        int curr_digit = num%10;
 
        rev_num = (rev_num*10) + curr_digit;
 
        if ((rev_num)/10 != prev_rev_num)
        {
            return 0;
        }
        prev_rev_num = rev_num;
        num = num/10;
    }
 
    return (negativeFlag == true)? -rev_num : rev_num;
}

