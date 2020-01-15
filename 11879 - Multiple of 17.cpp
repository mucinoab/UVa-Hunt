#include <iostream>
#define MOD 17
using namespace std;

int main (){
  long long pos = 1, ans = 0, i;
  string p;

  cin >> p;
  while(p != "0"){

    for (i = p.size() - 1; i >= 0; --i){
      ans = (ans + (pos * (p[i]-'0')))%MOD;
      pos = (pos * 10)% MOD;
    }

    if (ans == 0)
      cout << 1 << '\n';
    else
      cout << 0 << '\n';

    ans = 0;
    pos = 1;
    cin >> p;
  }
  return 0;
}


// long long fast_power(long long base, long long power, long long mod) {
//     long long result = 1;
//     while(power > 0) {
//         if(power & 1)  // Can also use (power & 1) to make code even faster
//             result = (result*base) % mod;
//         base = (base * base) % mod;
//         power = power >>= 1; // Can also use power >>= 1; to make code even faster
//     }
//     return result;
// }
