#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  string s,p;
  cin >> s >> p;
  s+=s;
  cout << ((s.find(p)!=-1)?"Yes":"No") << endl;
  return 0;
}
