#include <iostream>
using namespace std;



int main() {
    int N, M;
    int result;
    
    cin >> N >> M;
    
    while (N != 0 && M != 0) {
        int numDigitsTotal = 0;
        for (int i = N; i < M; i++) {
            int j = i;
            int cont = 1;

            while (j >= 10) {
                j = j / 10;
                cont++;
            }

            numDigitsTotal += cont;
        }

        int mitad = numDigitsTotal / 2;

        int cont = 1;
        for (int k = N; mitad >= cont && k < M; k++) {
            int j = k;

            while (j >= 10) {
                j = j / 10;
                cont++;
            }

            mitad -= cont; 
            cont = 1;

            result = k;
        }

        cout << result << endl;
        cin >> N >> M;
    }
    
    return 0;
}
