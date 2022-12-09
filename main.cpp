#include <iostream>
#include "lib.h"
using namespace std;

int main() {
    char c;
    char v;
    cout<<"inserire carattere:"<<endl;
    cin>>c;
    if(check(c)){
        v=conv(c);
        cout<<v<<endl;
    }else{
        cout<<"errore"<<endl;
    }

    return 0;
}
