#include <string>

class GeneralInfo{
    public:
        void displayGeneralInfo();
        void computerName();

    private:
        std::string systemName;
        std::string operatingSystem;
        std::string cpu;
        std::string ram;
};