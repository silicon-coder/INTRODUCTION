int solve(unsigned int n, int even, int odd1, int odd2){
        // base case
        if(n <= 1)
            return 0;
        if(n%2 == 0)
            even = (1 + solve(n/2, even, odd1, odd2));
        else{
            odd1 = (1 + solve(n-1, even, odd1, odd2));
            odd2 = (1 + solve(n+1, even, odd1, odd2));
        }
        int odd = min(odd1, odd2);
        return even + odd;
    }
    
    int integerReplacement(int n) {
        int even = 0;
        int odd1 = 0;
        int odd2 = 0;
        return solve(n, even, odd1, odd2);
    }