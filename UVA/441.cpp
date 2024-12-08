#include <iostream>

using namespace std;

int k;
long tmp;
int s[20];
int result[10];

void ordenar(int pos, int nums) {
  if (nums == 6) {
    for (int i = 0; i < 6; i++) {
      if (i > 0)
        cout << " ";
      cout << result[i];
    }
    cout << endl;

    return;
  }

  for (int i = pos; i < k; i++) {
    result[nums] = s[i];
    ordenar(i+1, nums+1);
  }
}

int main(void) {
  bool primero = true;

  while (cin >> k) {
    if (k == 0)
      break;

    for (int i = 0; i < k; i++)
      cin >> s[i];

    if (!primero)
      cout << endl;

    ordenar(0, 0);

    primero = false;
  }

  return 0;
}
