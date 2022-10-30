int digitSqSum(int n){
	int sum = 0;
	while(n > 0){
		sum = sum + ((n%10)*(n%10));
		n=n/10;
	}
	return sum;
}
    
bool isHappy(int n) {
	unordered_map<int, int> mp;
	while(n != 1) {
		if(mp[n] == 0)mp[n]++;
		else return false;

		n = digitSqSum(n);
	}
	return true;
}	