// © 2025 Trent Cridland Murderbot1@outlook.com All Rights Reserved

#ifndef Exit_H
#define Exit_H

// C++ imported files


// Program imported files


// Function definitions
class Exit {
    public:
        Exit(){
            ExitTheMainLoop = false;
        }
        static bool ExitTheMainLoop;
        void ExitTheProgram();
};

#endif