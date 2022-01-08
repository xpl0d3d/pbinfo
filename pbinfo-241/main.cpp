#include <fstream>
using namespace std;
ifstream in("interclasare.in");
ofstream out("interclasare.out");
int main() {
    int a[100001], b[100001], c[200001], n, m, k, i, j;
    in >> n; for (int i = 1; i <= n; i++) in >> a[i];
    in >> m; for (int j = 1; j <= m; j++) in >> b[j];
    i = 1; j = 1; k = 0;
    while (i <= n && j <= m) {
        if (a[i] < b[j]) c[++k] = a[i++];
        else c[++k] = b[j++];
    } while (i <= n) c[++k] = a[i++];
    while (j <= m) c[++k] = b[j++];
    for (int t = 1; t <= k; t++) {
        out << c[t] << " ";
        if (t % 10 == 0) out << endl;
    } return 0;
}