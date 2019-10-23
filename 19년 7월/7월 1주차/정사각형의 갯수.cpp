#include <iostream>
using namespace std;
int main() {
	int N;
	cin >> N;
	cout << (long long)N * (N + 1) * (2 * N + 1) / 6;
}