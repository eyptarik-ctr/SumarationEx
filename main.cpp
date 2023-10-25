
#include <iostream>
using namespace std;
int main() {
    int n, m;
    int sum = 0;


    cout << "n degerini girin: ";
    cin >> n;
    cout << "m degerini girin: ";
    cin >> m;


    while (n <= m) {
        sum += n;
        n++;
    }

    while ( n >= m){
        sum += n;
        n--;
    }
    cout << "sonuç " << sum << endl;

    return 0;
}