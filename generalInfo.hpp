#include <string>

class GeneralInfo{
    public:
        void displayGeneralInfo();
        void computerName();
        void operatingSystemInfo();
        void cpuInfo();
        void gpuInfo();
        void ramInfo();

    private:
        std::string systemName;
        std::string operatingSystem;
        std::string cpu;
        std::string ram;
};