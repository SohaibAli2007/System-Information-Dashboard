#include <iostream>
#include <unistd.h>
#include <limits.h>
#include <fstream>
#include "generalInfo.hpp"
using namespace std;

//Returns General Information about the system
void GeneralInfo::displayGeneralInfo()
{   
    computerName();
    operatingSystemInfo();
    cpuInfo();
    cout << "General Information\n";
    cout << "---------------------------------------------------------" << endl;
    cout << "Computer Name: " << systemName << endl;
    cout << "Operating System: " << operatingSystem << endl;
    cout << "CPU: " << cpu << endl;
    cout << "GPU: " << gpu << endl;
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

void GeneralInfo::cpuInfo(){
    ifstream cpuinfo("/proc/cpuinfo");
    string line;
    
    for(int i = 0; i < 5; ++i){
        getline(cpuinfo, line);
    }

    char colon = line.find(':');
    cpu = line.substr(colon + 2);
}




