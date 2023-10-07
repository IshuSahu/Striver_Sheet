// C++ program to count common subsequence in two strings
/*
Input : S = “ajblqcpdz”, T = “aefcnbtdi” 
Output : 11 
Common subsequences are : { “a”, “b”, “c”, “d”, “ab”, “bd”, “ad”, “ac”, “cd”, “abd”, “acd” }

Input : S = “a”, T = “ab” 
Output : 1
*/
#include <bits/stdc++.h>
using namespace std;

int CommonSubsequencesCount(string s, string t)
{
	int n1 = s.length();
	int n2 = t.length();

	vector<int>prev(n2+1 , 0);

	for (int i = 1; i <= n1; i++) {
		vector<int>curr(n2 +1 , 0);

		for (int j = 1; j <= n2; j++) {

			if (s[i - 1] == t[j - 1])
				curr[j] = 1 + curr[j - 1] + prev[j];	 
			else
				curr[j] = curr[j - 1] + prev[j] - prev[j - 1];	 
		}
			
		prev = curr;
	}

	return prev[n2];
}

int main()
{
	string s = "ajblqcpdz";
	string t = "aefcnbtdi";

	cout << CommonSubsequencesCount(s, t) << endl;
	return 0;
}
