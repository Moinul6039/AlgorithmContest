#include<bits/stdc++.h>
using namespace std;
int canMakeChange(int m, int k) {
    int change = k - m;
    int denominations[] = {25, 13, 9, 7, 2, 1};
    int n = sizeof(denominations)/sizeof(denominations[0]);

    for (int i = 0; i < n; i++) {
        int numCoins = change / denominations[i];
        change %= denominations[i];
        if (numCoins > 0 && (denominations[i] == 7 ||denominations[i] == 9 )) {
            return true;
        }
    }
    return false;
}

int main() {
    int m, k;
    scanf("%d %d",&m,&k);

    if (canMakeChange(m, k)) {
        printf("Happy\n");
    } else {
        printf("Sad\n");
    }

    return 0;
}
