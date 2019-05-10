#include <iostream>
#include <algorithm>
using namespace std;

const int n_max = 14, 
n_corners_max = 1 << n_max;
int corners[n_corners_max], potencia[n_corners_max];

int main()
{
	int n;
	while (cin >> n) {
		int n_corners = 1 << n;
		for (int i = 0; i < n_corners; i++)
			cin >> corners[i];
		for (int i = 0; i < n_corners; i++) {
			potencia[i] = 0;
			for (int j = 0, b = 1; j < n; j++, b <<= 1) {
				potencia[i] += corners[i ^ b];
			}
		}
		int max_sum = 0;
		for (int i = 0; i < n_corners; i++)
			for (int j = 0, b = 1; j < n; j++, b <<= 1)
				max_sum = max(max_sum, potencia[i] + potencia[i ^ b]);
		cout << max_sum << endl;
	}
	return 0;
}
