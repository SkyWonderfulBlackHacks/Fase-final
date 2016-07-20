
#include <iostream>
using namespace std;
bool ordenadofun(long posiciones[],long numcelulas){
    long i=0;
    bool ok=true;
    while(i<numcelulas && ok){
        if(posiciones[i]>=posiciones[i+1]){
            ok=false;
        }   
        i++;
    }
  return ok;  
}


int main() {
    long tests,numcelulas;
    //cin >> tests;
    //for ( long i=0;i <tests; i++){
        cin>> numcelulas;
        cout << numcelulas;
        long  movcelulas [numcelulas];
        long  posiciones[numcelulas];
        long intermedia [numcelulas];
        for(long j=0;j<numcelulas;j++){
            cin >> movcelulas[j];
            cout <<movcelulas[j]<< endl;
            posiciones[j]=j;   
        }

        bool ordenado=false;
        long counter=0;
        while(!ordenado){
            cout << counter;
            for(long i=0;i<numcelulas;i++){
                intermedia[movcelulas[i]]=posiciones[i];
            }
            for(long j=0;j<numcelulas;j++){
                posiciones[j]=intermedia[j];
            }
            ordenado=ordenadofun(posiciones,numcelulas);
            counter++;
        }
        //cout << counter;
             
    //}   
    return 0;
}

