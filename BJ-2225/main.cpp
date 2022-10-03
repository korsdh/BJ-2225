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
}