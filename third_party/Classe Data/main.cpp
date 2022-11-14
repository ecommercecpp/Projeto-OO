#include <iostream>
#include "Data.h"

using namespace std;

int main() {
    Data d0 = Data::dateNow();
    d0.printData();
    try {
        Data d1(2022, 9, 23);
        Data d2(2022, 9, 27);
        d2.setAno(2022);
        d2.setMes(9);
        d2.setDia(23);
         
        cout << "Hello world";
        if ( d1<d2 )
            cout<< "\nA data " << d1.getData() << " é menor que " << d2.getData();
        else
            cout<< "\nA data " << d1.getData() << " é maior ou igual a " << d2.getData();
    }
    catch (...) {
        cout << "\nHouve um erro na definição da data.";

    }
}