/*
Elemnt at therir Right Index*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n = 6;
	int arr[n] = {40,50,10,230,20,30};
	for (int i = 0; i < n; i++) {
		set<int>s; //Every time i'm Reinitiallizing
		for (int j = 0; j < n; j++) {
			if (arr[j] < arr[i]) {
				s.insert(arr[j]);
			}
		}
		cout << s.size() + 1 << " ";
	}

}