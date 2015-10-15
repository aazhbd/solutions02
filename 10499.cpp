#include <iostream>
using namespace std;

int main(void) {
  int n;
  int initial = 4;
  unsigned long long result;

  while (cin >> n) {
    if (n < 0)
      break;

    if (n == 1) {
      result = 0;
    } else {
      result =  (unsigned long long)n * 100 / 4;
    }

    cout << result << "%" << endl;
  }

  return 0;
}
