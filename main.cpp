#include <iostream>
#include "lib.h"
using namespace std;

int main() {
    char c;
    char v;
    cin>>c;
    if(checkimput(c)){
        v=conversione(c);
        cout<<v<<endl;
    }else{
        cout<<"errore"<<endl;
    }

    return 0;
}
