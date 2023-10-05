// Firsl half accendin next half descending
/*
Example 1:
Input: 8 7 1 6 5 9
Output: 1 5 6 9 8 7
Explanation: First three elements are in the ascending order and next three elements are in the descending order.

Example 2:
Input: 4 2 8 6 15 5 9 20
Output: 2 4 5 6 20 15 9 8
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int>arr = {8, 7, 1, 6, 5, 9};
	int n = arr.size();
	sort(arr.begin(), arr.end());
	for (int i = 0; i < n / 2; i++) {
		cout << arr[i] << " ";
	}
	for (int i = n - 1; i >= n / 2; i--) {
		cout << arr[i] << " ";
	}
}