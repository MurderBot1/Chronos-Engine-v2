#ifndef AddtionFunctions_H
#define AddtionFunctions_H

#include <string>
#include <vector>

#include <GPU.h>

namespace GPU_Addition {
    class Intiger_Addition{
        std::string DeviceID;

        public:
            Intiger_Addition(const std::string& DeviceID, std::vector<int>& Input, std::vector<int>* Output);
            ~Intiger_Addition();
    };
    
    class Float_Addition{
        std::string DeviceID;

        public:
            Float_Addition(const std::string& DeviceID, std::vector<float>& Input, std::vector<float>* Output);
            ~Float_Addition();
    };
    
    class Double_Addition{
        std::string DeviceID;

        public:
            Double_Addition(const std::string& DeviceID, std::vector<double>& Input, std::vector<double>* Output);
            ~Double_Addition();
    };
}

#endif