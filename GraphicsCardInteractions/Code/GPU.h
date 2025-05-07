#ifndef GPU_H
#define GPU_H

#include <vector>
#include <string>

namespace GPU {
    class GPU {
        GPU();
        ~GPU();

        std::string ID;
        bool RunningOperation;
    };

    class Get_GPUs {
        Get_GPUs();
        ~Get_GPUs();

        std::vector<GPU> GPUs;
    };
}

#endif