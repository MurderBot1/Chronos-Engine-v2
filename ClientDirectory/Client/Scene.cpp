// © 2025 Trent Cridland, Murderbot1@outlook.com, All Rights Reserved.
/* Some parts of this engine can be used either for free or for a cost, look at the EngineSections.txt document for more information. */

#ifndef Scene_CPP
#define Scene_CPP

// Include the C++'s .h file
#include "Scene.h"

// Variable redefinitions


// Definitions


#endif

Scene::Scene(std::string FilePath) {
    // Load identity
    Identity.LoadIdentity();

    std::ifstream LoadScene(FilePath + ".ChrScene");

    LoadScene.close();
}

Scene::~Scene() {

}
