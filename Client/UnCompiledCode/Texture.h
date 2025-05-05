// © 2025 Trent Cridland, Murderbot1@outlook.com, All Rights Reserved.
/* Some parts of this engine can be used either for free or for a cost, look at the EngineSections.txt document for more information. */

#ifndef Texture_H
#define Texture_H

// C++ imported files
#include <string>
#include <vector>

// Program imported files
#include "VariableTypes.h"
#include "Pixels.h"

// Definitions
class Texture {
    public:
        Texture(std::string FilePath);
        ~Texture();

        int Dx, Dy; // The x and y widths and hight of the image
        std::vector<Pixels> LoadedTexture;
        /*
            The setup array looks like this
            {
                Hight{Width, Width, Width, Width},
                Hight{Width, Width, Width, Width},
                Hight{Width, Width, Width, Width},
                Hight{Width, Width, Width, Width}
            }
            {
                Hight{0, 1, 2, 3},
                Hight{4, 5, 6, 7},
                Hight{8, 9, 10, 11},
                Hight{12, 13, 14, 15}
            }
        */
};

#endif