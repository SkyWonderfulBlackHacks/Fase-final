#include <iostream>
using namespace std;
/*
3
30
10
10 30 50 20 40 60 30 40 50 36
40
10
10 30 50 20 40 20 10 10 20 36
20
3
40 10 15
 */


int main() {
    int maxInRow = 5;

    int tests, snowFall, nPalmeras, thisPalmera;
    cin >> tests;
    for (int test = 0; test < tests; test++) {

        cin >> snowFall >> nPalmeras;
        bool *t = new bool[nPalmeras];

        for (int input = 0; input < nPalmeras; input++) { // true -> se cae
            cin >> thisPalmera;
            if (thisPalmera < snowFall) {
                t[input] = true;
            } else {
                t[input] = false;
            }
        }

        int maxAff = 0;
        int i = 0;
        while (i < nPalmeras && maxAff < maxInRow) {
            if (!t[i]) {
                maxAff++;
            }
            //cout << "t-> " << maxAff << endl;
            i++;
        }
        //cout << "init i: " << i << endl;
        
        int init = 0, end = i - 1;
        maxAff = i;
        int nPMax = maxInRow;
        while (end < nPalmeras) {
            if (nPMax < maxInRow) {
                //cout << "metemos " << end+1 << endl;
                end++;
                if (!t[end]) {
                    nPMax++;
                    //cout << "  no se cae!" << endl;
                }
            } else {
                //cout << "sacamos " << init << endl;
                if (!t[init]) {
                    nPMax--;
                    //cout << "  no se cae!" << endl;
                }
                init++;
            }
            
            if ((end - init) > maxAff) {
                maxAff = (end - init + 1);
                //cout << "  ---> new record!" << maxAff << endl;
            }
        }
        cout << maxAff << endl;

        delete[] t;

    }

	
    return 0;
}

