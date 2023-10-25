#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  scanf("%d",&n);

  int jars[n];
  for (int i = 0; i < n; i++) {
    scanf("%d",&jars[i]);
  }

  int parity = jars[0] % 2;
  for (int i = 0; i < n; i++) {
    if (jars[i] % 2 != parity) {
      printf("No\n");
      return 0;
    }
  }
     printf("Yes\n");
  return 0;
}
