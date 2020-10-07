// C++ program to find nth even 
// palindromic number of only even 
// length composing of 4's and 5's. 

#include <bits/stdc++.h> 
using namespace std; 

// Utility function to compute 
// n'th palindrome number 
string solve(int n, char x, char y) 
{ 
	// Calculate the length from above 
	// formula as discussed above 
	int length = ceil(log2(n + 2)) - 1; 

	// Calculate rank for length L 
	int rank = n - (1 << length) + 1; 

	string left = "", right = ""; 

	for (int i = length - 1; i >= 0; i--) { 

		// Mask to check if i't bit 
		// is set or not 
		int mask = 1 << i; 

		// If bit is set append '5' else append '4' 
		bool bit = mask & rank; 

		if (bit) { 
			left += y; 
			right += y; 
		} 
		else { 
			left += x; 
			right += x; 
		} 
	} 

	reverse(right.begin(), right.end()); 

	return left + right; 
} 

// Driver Code 
int main() 
{ 
	int n = 2; 
	char x = '4', y = '5'; 
	string ans = solve(n, x, y); 
	cout << ans << '\n'; 

	return 0; 
} 
