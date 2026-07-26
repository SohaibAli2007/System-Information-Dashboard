#include <iostream>
#include "generalInfo.hpp"
using namespace std;

int main(){
    GeneralInfo generalInfo;
    cout << "===================================" << endl;
    cout << "         System Information          " << endl;
    cout << "===================================" << endl;
    cout << "\n\n";
    generalInfo.displayGeneralInfo();
}

