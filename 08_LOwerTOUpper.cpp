#include<bits/stdc++.h>

using namespace std;
void solve(string str, int n) {

  for (int i = 0; i < str.length(); i++)
  {
    int ascii = (int)str[i];

    if(ascii>=65 && ascii<=90){
        str[i] = (char)(ascii+32);
    }
    else if(ascii>=97 && ascii<=122){
        str[i] = (char)(ascii-32);
    }
  }
  

  cout << "Resultant string: " << "\n";
  cout << str << "\n";
}
int main() {
  // Input string
  string str = "take u forward IS Awesome";
  int n = str.length();

  solve(str, n);
  return 0;
}