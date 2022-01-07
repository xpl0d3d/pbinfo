#include <fstream>
using namespace std;
ifstream in("interclasare3.in");
ofstream out("interclasare3.in");
int main() {
    int a[100001], b[100001], c[200001], n, m, k, i, j;
    in >> n >> m; for (int i = 1; i <= n; i++) in >> a[i];
    for (int j = 1; j <= m; j++) in >> b[j];
    i = 1; j = 1; k = 0;
    while (i <= n && j <= m) {
        if (a[i] % 2 == 0) {
            if (b[j] % 2 == 0) {
                if (a[i] < b[j]) c[++k] = a[i++];
                else c[++k] = b[j++];
            } else j++; } else i++; 
    } while (i <= n) if (a[i] % 2 == 0) c[++k] = a[i++];
        else i++;
    while (j <= m) {
        if (b[j] % 2 == 0) c[++k] = b[j++];
        else j++;
    } return 0;
}