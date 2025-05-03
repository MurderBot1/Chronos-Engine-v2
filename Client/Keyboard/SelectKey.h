// © 2025 Trent Cridland, Murderbot1@outlook.com, All Rights Reserved.
/* Some parts of this engine can be used either for free or for a cost, look at the EngineSections.txt document for more information. */

#ifndef SelectKey_H
#define SelectKey_H

// C++ imported files


// Program imported files


// Definitions

class SelectKey{
    public:
        static void KeySelectOsKeySHIFTALTCTRL();
        static void KeySelectSHIFTALTCTRL();
        static void KeySelectOsKeyALTCTRL();
        static void KeySelectOsKeySHIFTCTRL();
        static void KeySelectOsKeySHIFTALT();
        static void KeySelectALTCTRL();
        static void KeySelectSHIFTCTRL();
        static void KeySelectSHIFTALT();
        static void KeySelectOsKeyCTRL();
        static void KeySelectOsKeyALT();
        static void KeySelectOsKeySHIFT();
        static void KeySelectCTRL();
        static void KeySelectALT();
        static void KeySelectSHIFT();
        static void KeySelectOsKey();
        static void KeySelect();
};

#endif