#include<bits/stdc++.h>

using namespace std;

string Binary(int n){
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
    string ans = to_string(sum);
    return ans;
}
void OctalToBin(int n){
    string ans="";
    while (n!=0)
    {
        int digit = n%10;
        ans = Binary(digit) + ans;
        n=n/10;
    }
    cout<<ans;
}

int main(){
    int n = 154;
   OctalToBin(n)  ;

    return 0;
}