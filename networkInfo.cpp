#include <string>
#include <cstdlib>
#include <iostream>
#include <array>

#include "networkInfo.hpp"
using namespace std;

void NetworkInfo::displayNetworkInfo(){
    findIPAddress();
    cout << endl << endl;
    cout << "Network Information\n";
    cout << "---------------------------------------------------------" << endl;
    cout << "IP Address: " << ipAddress << endl;
}


void NetworkInfo::findIPAddress(){
    array<char, 256> buffer;

    FILE *pipe = popen("hostname -I", "r");

    if(!pipe){
        cout << "Failed to run command" << endl;
        return;
    }

    while(fgets(buffer.data(), sizeof(buffer), pipe) != nullptr){
        ipAddress += buffer.data();
    }

    pclose(pipe);
}

