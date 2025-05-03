// © 2025 Trent Cridland, Murderbot1@outlook.com, All Rights Reserved.
/* Some parts of this engine can be used either for free or for a cost, look at the EngineSections.txt document for more information. */

#ifndef PauseKey_H
#define PauseKey_H

// C++ imported files


// Program imported files


// Definitions

class PauseKey{
    public:
        static void KeyPauseOsKeySHIFTALTCTRL();
        static void KeyPauseSHIFTALTCTRL();
        static void KeyPauseOsKeyALTCTRL();
        static void KeyPauseOsKeySHIFTCTRL();
        static void KeyPauseOsKeySHIFTALT();
        static void KeyPauseALTCTRL();
        static void KeyPauseSHIFTCTRL();
        static void KeyPauseSHIFTALT();
        static void KeyPauseOsKeyCTRL();
        static void KeyPauseOsKeyALT();
        static void KeyPauseOsKeySHIFT();
        static void KeyPauseCTRL();
        static void KeyPauseALT();
        static void KeyPauseSHIFT();
        static void KeyPauseOsKey();
        static void KeyPause();
};

#endif