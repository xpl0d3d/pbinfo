#include <iostream>
using namespace std;
int main() {
	int mat[101][101], n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        cin >> mat[i][j];
    for (int j = 0; j < m; j++) {
        mat[n - 2][j] = mat[n - 1][j];
    } for (int i = 0; i < n - 1; i++) {
        mat[i][m - 2] = mat[i][m - 1];
    } for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < m - 1; j++) {
        	cout << mat[i][j] << " ";
        } cout << endl;
    }
    return 0;
}