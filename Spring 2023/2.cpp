#include<bits/stdc++.h>
using namespace std;

int main() {
  int n;
  scanf("%d",&n);

  int maxYogurt = 0;
  int farthestHouse = 0;

  for (int i = 1; i <= n; i++) {
    int yogurtAmount;
      scanf("%d",&yogurtAmount);

    if (yogurtAmount > maxYogurt) {
      maxYogurt = yogurtAmount;
      farthestHouse = i;
    } else if (yogurtAmount == maxYogurt && i > farthestHouse) {
      farthestHouse = i;
    }
  }

  printf("%d\n",farthestHouse);

  return 0;
}
