#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<int> balls(n);
        vector<int> rattles(m);

        for (int i = 0; i < n; i++) {
            cin >> balls[i];
        }

        for (int i = 0; i < m; i++) {
            cin >> rattles[i];
        }

        sort(balls.rbegin(), balls.rend());
        sort(rattles.rbegin(), rattles.rend());

        vector<int> result;
        int i = 0, j = 0;

        while (i < n && j < m) {
            if (balls[i] >= rattles[j]) {
                result.push_back(balls[i++]);
                
            } else {
                result.push_back(rattles[j++]);
                
            }
        }

        while (i < n) {
            result.push_back(balls[i]);
            i++;
        }

        while (j < m) {
            result.push_back(rattles[j]);
            j++;
        }

        for (int k = 0; k < n + m; k++) {
            cout << result[k] << " ";
        }

        cout << endl;
    }

    return 0;
}
