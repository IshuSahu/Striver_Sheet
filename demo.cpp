#include<iostream>

using namespace std;

int GCD(int n,int m){
	if(m==0){
		return n;
	}
	return GCD(m, n%m);
}
int main(){
	while (true)
	{
		int n,m;
		cin>>n>>m;
		int num = GCD(n,m);
		cout<<"GCD: "<<num<<endl;
		cout<<"lCM: "<<(n*m)/num<<endl;
	}
	
	return 0;
}