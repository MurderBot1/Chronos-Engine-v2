// © 2025 Trent Cridland, Murderbot1@outlook.com, All Rights Reserved.
/* Some parts of this engine can be used either for free or for a cost, look at the EngineSections.txt document for more information. */

#ifndef RunKeyboardKeyCommands_H
#define RunKeyboardKeyCommands_H

// C++ imported files


// Program imported files
#include "KeyboardKeys.h"

// Definitions
class KeyboardCommands {
    public:
        static void KeysOsKeySHIFTALTCTRL();
        static void KeysSHIFTALTCTRL();
        static void KeysOsKeysALTCTRL();
        static void KeysOsKeySHIFTCTRL();
        static void KeysOsKeySHIFTALT();
        static void KeysALTCTRL();
        static void KeysSHIFTCTRL();
        static void KeysSHIFTALT();
        static void KeysOsKeyCTRL();
        static void KeysOsKeysALT();
        static void KeysOsKeySHIFT();
        static void KeysCTRL();
        static void KeysALT();
        static void KeysSHIFT();
        static void KeysOsKey();
        static void Keys();
};

#endif