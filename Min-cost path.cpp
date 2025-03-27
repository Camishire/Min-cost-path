#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std;

long long coordinates[21][21];
long long cost[21][21];

int main() {

    long long n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) cin >> coordinates[i][j];
    }

    cost[1][1] = coordinates[1][1]; /// first step
    for (int j = 2; j <= m; j++) cost[1][j] = cost[1][j - 1] + coordinates[1][j]; /// first row
    for (int i = 2; i <= n; i++) cost[i][1] = cost[i - 1][1] + coordinates[i][1]; /// first coll


    for (int i = 2; i <= n; i++) {
        for (int j = 2; j <= m; j++) cost[i][j] = min(coordinates[i][j] + cost[i - 1][j], coordinates[i][j] + cost[i][j - 1]);
    }

    cout << cost[n][m];


    return 0;
}