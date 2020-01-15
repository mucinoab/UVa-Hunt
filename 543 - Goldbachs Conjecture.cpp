#include <iostream>
#include <bitset>
#include <vector>
#include <algorithm>

using namespace std;

int main (){
  ios::sync_with_stdio(false);
  // long long const max = 1000000;
  long long x, j, z, primo2;
  bitset <max> criba;
  vector <long long> primos;
  vector <long long>::iterator it;

  criba.set();
  criba[0] = criba[1] = 0;
  primos.push_back(2);
  for (x = 4; x < max; x+=2)
    criba[x] = false;
  for (x = 3; x < max; x+=2)
    if (criba[x]){
      primos.push_back(x);
      for (j = x*x; j < max; j+= x)
        criba[j] = false;
    }
  do{
    cin >> x;
    for(z = 0; z <= x; z++){
      primo2 = x - primos[z];
      it = lower_bound(primos.begin(), primos.end(), primo2);
      if(*it == primo2){
        cout << x << " = " << primos[z] << " + " << primo2 << '\n';
        break;
      }
    }
  }while(x != 0);
  return 0;
}
