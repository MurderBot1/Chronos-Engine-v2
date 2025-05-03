// © 2025 Trent Cridland, Murderbot1@outlook.com, All Rights Reserved.
/* Some parts of this engine can be used either for free or for a cost, look at the EngineSections.txt document for more information. */

#ifndef RenderingStates_H
#define RenderingStates_H

// C++ imported files


// Program imported files


// Definitions
class RenderingStates {
    public:
        // Rendering variables
        bool IsRenderable;

        // Functions for rendering variables
        void EnableRendering();
        void DisableRendering();
};

#endif