#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int N, K;
long long int dp[201][201];

int main() {
	cin >> N >> K;
	for (int i = 0; i <= N; i++) {
		dp[1][i] = 1;
	}
	for (int i = 0; i <= N; i++) {
		dp[0][i] = 0;
	}
	for (int i = 2; i <= K; i++) {
		for (int j = 0; j <= N; j++) {
			for (int o = 0; o <= j; o++) {
				dp[i][j] += dp[i - 1][o];
			}
			dp[i][j] = dp[i][j] % 1000000000;
		}
	}
	cout << dp[K][N] << endl;
	return 0;
}