// © 2025 Trent Cridland, Murderbot1@outlook.com, All Rights Reserved.
/* Some parts of this engine can be used either for free or for a cost, look at the EngineSections.txt document for more information. */

#ifndef ClassIdentifier_H
#define ClassIdentifier_H

// C++ imported files
#include <stdint.h>
#include <mutex>

// Program imported files


// Definitions
class IdentityToken {
    public:
        IdentityToken() = default;
        void LoadIdentity();
        static void StartIdentityToken();
        uint64_t GetIdentifierToken();
    private:
        uint64_t IdentifierToken;
        std::mutex IdentifierToken_MX;
        static uint64_t CurrentIdentifierToken;
        static std::mutex CurrentIdentifierToken_MX;
};

#endif