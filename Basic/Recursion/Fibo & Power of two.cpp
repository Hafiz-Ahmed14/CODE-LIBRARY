int memo[100];

int power_of_two(int n) {
	if(n == 0) return 1;
	if(memo[n] != -1) return memo[n];
	return memo[n] = power_of_two(n - 1) + power_of_two(n - 1);
}

int fibo(n) {
	if(n <= 1) {
		return n;
	}
	if(memo[n] != -1) {
		return memo[n];
	}
	return memo[n] = fibo(n - 1) + fibo(n - 2);
}
