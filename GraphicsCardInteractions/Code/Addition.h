#ifndef AddtionFunctions_H
#define AddtionFunctions_H

#include <string>
#include <vector>

namespace GPU_Addition {
    class Intiger_Addition{
        std::string GPUID;

        public:
            Intiger_Addition(std::string GPUID, std::vector<int>& Input, std::vector<int>* Output);
            ~Intiger_Addition();
    };
}

#endif