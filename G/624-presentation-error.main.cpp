#include <iostream>
using namespace std;


void printarray(char intermediate [],int counter) {
    for (int i = 0; i < counter; i++) {
        cout << intermediate[i];
    }
    cout << " ";
}

bool valid (char intermediate[],int total,int counter) {
    if(counter == (total)) {
        printarray(intermediate,counter);
        return true;
    }
    return false;
    
}
void recursiva(char intermediate [] , int chocolate, int vainilla,int &Cchoco,int &Cvaini,int bolitastotal,int &counter) {
    
    if(!valid(intermediate,bolitastotal,counter)){
        if(Cchoco < chocolate){
            intermediate[counter]='C';
            counter++;
            Cchoco++;
            recursiva(intermediate,chocolate,vainilla,Cchoco,Cvaini,bolitastotal,counter);
            counter--;
            Cchoco--;
        }
        if(Cvaini < vainilla){
            intermediate[counter]='V';
            counter++;
            Cvaini++;
            recursiva(intermediate,chocolate,vainilla,Cchoco,Cvaini,bolitastotal,counter);
            counter--;
            Cvaini--;
        }       
    } 
}
int main() {
    int numcases;
    cin >> numcases;
    for(int i =0; i < numcases;i++){
        int vainilla, chocolate, bolitastotal;
        cin >> chocolate;
        cin >> vainilla;
        bolitastotal = chocolate+vainilla;
        char intermediate[bolitastotal];
        int Cchoco=0, Cvaini=0;
        int counter=0;
        recursiva(intermediate,chocolate,vainilla,Cchoco,Cvaini,bolitastotal,counter);   
        cout << endl;
    }
   
    return 0;
}