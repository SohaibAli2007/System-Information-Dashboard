#include <iostream>
#include <unistd.h>
#include <limits.h>
#include "generalInfo.hpp"
using namespace std;

//Returns General Information about the system
void GeneralInfo::displayGeneralInfo()
{   
    computerName();
    operatingSystemInfo();
    cout << "General Information\n";
    cout << "---------------------------------------------------------" << endl;
    cout << "Computer Name: " << systemName << endl;
    cout << "Operating System: " << operatingSystem << endl;
    cout << "CPU: " << cpu << endl;
    cout << "RAM: " << ram << endl;
}

void GeneralInfo::computerName()
{
    char buffer[HOST_NAME_MAX];
    if (gethostname(buffer, sizeof(buffer)) == 0) {
        systemName = buffer;
    }
}

void GeneralInfo::operatingSystemInfo(){
    #ifdef _WIN64
        operatingSystem = "Windows 64-bit";
    #elif __linux__
        operatingSystem = "Linux";
    #endif
}


