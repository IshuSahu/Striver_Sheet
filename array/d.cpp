#include<iostream>

using namespace std;
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
    // HexToBinary(sum); 
}
int main(){
    DecToHex(8);
    return 0;
}