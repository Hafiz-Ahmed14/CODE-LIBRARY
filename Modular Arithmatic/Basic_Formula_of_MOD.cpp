// mod formula
int res;
(a + b) % mod = (a % mod + b % mod) % mod;
(a * b) % mod = (a % mod * b % mod) % mod;
(a - b) % mod = ((a % mod - b % mod) % mod + mod) % mod;	
(a ^ b) % mod = ((a % mod) ^ b) % mod;

// Example for addition
int a = 1e9, b = 1e9, m = 27;
int ans = (a % m + b % m) % m;

// Example for Substration
int a = 1e9, b = 1e9 + 1, m = 27;
int ans = ((a % m - b % m) % m + m) % m;

// Example for Multiplication
int a = 1e9 , b = 23434234, m = 1e9 + 7;
int ans = ((a % m) * (b % m)) % m;

//more example for multiplication
int a = 2353545345, b = 235345453, c = 353543535, d = 3453452323, m = 1e9 + 7;
int ans = (((((1ll * a * b) % m) * c) % m) * d) % m;


// random example
//Compute this a - 3 * b
int res = (a - (3 * b % mod) + mod) % mod;

// computer this -5 * a;
int res = ((-5ll * a) % mod + mod) % mod;

// compute this (n!) ^ k 
int res = ((n! % mod) ^ k) % mod;
