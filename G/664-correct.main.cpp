#include <iostream>
#include <math.h>
#include <string>
using namespace std;


void printarray(char intermediate [],int counter, string &sol) {
    for (int i = 0; i < counter; i++) {
        sol += intermediate[i];
    }
    
}

bool valid (char intermediate[],int total,int counter, string &sol) {
    if(counter == total) {
        printarray(intermediate,counter, sol);
        sol += " ";
        return true;
    }
    return false;
    
}
void recursiva(char intermediate [] , int chocolate, int vainilla,int &Cchoco,int &Cvaini,int bolitastotal,int &counter, string &sol) {
    bool end = valid(intermediate,bolitastotal,counter, sol);
    
    if(!end){
        if(Cchoco < chocolate){
            intermediate[counter]='C';
            counter++;
            Cchoco++;
            recursiva(intermediate,chocolate,vainilla,Cchoco,Cvaini,bolitastotal,counter, sol);
            counter--;
            Cchoco--;
        }
        if(Cvaini < vainilla){
            intermediate[counter]='V';
            counter++;
            Cvaini++;
            recursiva(intermediate,chocolate,vainilla,Cchoco,Cvaini,bolitastotal,counter, sol);
            counter--;
            Cvaini--;
        }       
    }
    
}
int main() {
    string sol;
    int numcases;
    cin >> numcases;
    for(int i =0; i < numcases;i++){
        int vainilla, chocolate, bolitastotal;
        cin >> chocolate;
        cin >> vainilla;
        bolitastotal = chocolate+vainilla;
        char intermediate[bolitastotal];
        int Cchoco = 0, Cvaini = 0;
        int counter = 0;
        sol = "";
        recursiva(intermediate,chocolate,vainilla,Cchoco,Cvaini,bolitastotal,counter, sol);   
        sol[sol.length() - 1] = '\n';
        cout << sol;
    }
   
    return 0;
}