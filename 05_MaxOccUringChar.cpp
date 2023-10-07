#include <iostream>
using namespace std;
string maxOccurringChar(string str) {
   string ans ="";
   for (int i = 0; i < str.length(); i++)
   {
        int j=0;
        for (j = 0; j <i ; j++)
        {
            if(str[i]==str[j]){
                break;
            }
        }
        if(i==j){
            ans+=str[i];
        }
        
   }
   
   return ans;
}
int main() {
    string str = "janakram";
   cout << "After Remove duplicate: " << maxOccurringChar(str) << endl;
}