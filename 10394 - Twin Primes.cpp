#include <bitset>
#include <vector>
#include <iostream>
using namespace std;
int main (){
  ios::sync_with_stdio(0);
  long long const max = 18409241;
  long long f, x, j;
  bitset <max> criba;
  vector <long long> gemelos;

  criba.set();
  criba[0] = criba[1] = 0;
  criba[2] = 1;
  for (x = 4; x < max; x+=2)
    criba[x] = false;
  for (x = 3; x < max; x+=2)
    if (criba[x])
      for (j = x*x; j < max; j+= x)
        criba[j] = false;
  for (x = 0; x < max; x++)
    if (criba[x] && criba[x+2]){
      gemelos.push_back(x);
      gemelos.push_back(x+2);
    }

  while(cin >> f){
    f <<= 1;
    cout << '(' << gemelos[f-2] << ", " << gemelos[f-1] << ')' << '\n';
  }
}
