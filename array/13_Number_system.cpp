
/*
void  DecToBinary(int n){
    int dec,r,t=1;
    dec=n;
    long sum =0;
    while (n!=0)
    {
        r = n%2;
        sum = sum + r*t;
        t=t*10;
        n=n/2;
    }
    printf("Binary of decimal %d is %d\n",dec, sum);
    
}
// Binary to demimal:
#include<bits/stdc++.h>
using namespace std;
int main() {
	string s = "1011";
	int n = s.length();
	int base = 1;
	int ans = 0;
	for (int i = n - 1; i >= 0; i--) {
		if (s[i] == '1') {
			ans += base;
		}
		base *= 2;
	}
	cout << ans;
    // cout << stoi(s, 0, 2);
}

// Convert Binary to Octal (biary digits)
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s = "101";
	int n =  s.length();
    string ans="";
    if(n%3==1){
        s = "00" + s;
    }
    else if(n%3==2){
        s = "0"+s;
    }
    n = s.length();
    for (int i = 0; i < n; i+=3)
    {
        int temp = (s[i]-'0')*4  +  (s[i+1] -'0')*2 + (s[i+2] -'0')*1;
        ans +=(temp+'0');
    }

	cout << ans;
}
//value
void  OctToBinary(int n){
    int dec,r,t=1;
    dec=n;
    long sum =0;
    while (n!=0)
    {
        r = n%2;
        sum = sum + r*t;
        t=t*10;
        n=n/2;
    }
    printf("Binary of octal %d is %d\n",dec, sum);
}
//value
void  DecToOct(int n){
    int dec,r,t=1;
    dec=n;
    long sum =0;
    while (n!=0)
    {
        r = n%8;
        sum = sum + r*t;
        t=t*10;
        n=n/8;
    }
    printf("octal of decimal %d is %d\n",dec, sum);
    OctToBinary(sum);
}

//values
int OctaltoDecimal(int Octal)
{
  int Decimal = 0;
  int i = 0;
  while (Octal != 0)
  {
    int rem = Octal % 10;
    Decimal += rem * pow(8, i);
    i++;
    Octal /= 10;
  }
  return Decimal;
}

//Value
void  HexToBinary(int n){
    int dec,r,t=1;
    dec=n;
    long sum =0;
    while (n!=0)
    {
        r = n%2;
        sum = sum + r*t;
        t=t*10;
        n=n/2;
    }
    printf("Binary of Hex %d is %d\n",dec, sum);
    
}
//value
void  DecToHex(int n){
    int dec,r,t=1;
    dec=n;
    long sum =0;
    while (n!=0)
    {
        r = n%16;
        sum = sum + r*t;
        t=t*10;
        n=n/16;
    }
    printf("hex of decimal %d is %d\n",dec, sum);
    HexToBinary(sum); 
}

int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    DecToOct(n);
    DecToHex(n);
    DecToBinary(n);
    return 0;
}
*/




