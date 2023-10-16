#include <iostream>
using namespace std;
string Remove_duplicate(string str) {
   string ans ="";
   for (int i = 0; i < str.length(); i++)
   {
        int j=0;
        for (j = 0; j <i ; j++)
        {
            if(str[i]==str[j]){
                // str[i] = (char)(str[i]-32);
                break;
            }
        }
        if(i==j){   //Index same
            ans+=str[i];
        }
        
   }
   
   return ans;
}
string LowerToUpper(string s) {
        
        string ans="";
        
        for(int i=0 ;i<s.length(); i++){
            if(s[i]==s[i+1]){
                ans+= (char)(s[i]-32);
                i++;
            }else{
                ans+=s[i];
            }
        }
    return ans;
    }
int main() {
    string str = "ISSHHU";
   cout << "After Remove duplicate: " << Remove_duplicate(str) << endl;
}