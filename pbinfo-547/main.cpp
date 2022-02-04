#include <iostream>
using namespace std;
int main() {

	int n;
	int v[1001];
	int maxim = -1, minim = 9999999, d;
	int ct = 0;
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> v[i];
	for (int i = 1; i <= n; i++)
	{
		if (v[i] < minim)
			minim = v[i];
		else
			if (v[i] > maxim)
				maxim = v[i];
		d = maxim - minim;
	}
	d = maxim - minim;
	for (int i = 1; i <= n; i++)
	{
		if (d == v[i])
			ct++;
	}
	cout << ct;
}