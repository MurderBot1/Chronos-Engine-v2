// © 2025 Trent Cridland, Murderbot1@outlook.com, All Rights Reserved.
/* Some parts of this engine can be used either for free or for a cost, look at the EngineSections.txt document for more information. */

#ifndef Scene_H
#define Scene_H

// C++ imported files
#include <vector>
#include <string>
#include <memory>

// Program imported files

// Definitions
class Scene {
    public:
        Scene(std::string SceneName);
        ~Scene();

        std::vector<std::shared_ptr<int>> ObjectList;
        std::vector<std::shared_ptr<int>> LightList;
        std::vector<std::shared_ptr<int>> CameraList;
        std::vector<std::shared_ptr<int>> ParticleGeneratorList;
        std::vector<std::shared_ptr<int>> ParticlesList;
        std::vector<std::shared_ptr<int>> AudioGeneratorList;
};

#endif