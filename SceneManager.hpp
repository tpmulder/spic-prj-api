#ifndef SCENEMANAGER_H_
#define SCENEMANAGER_H_

#include "Scene.hpp"
#include <memory>
#include <string>

namespace spic {

    class SceneManager {
        public:
            void AddScene(std::shared_ptr<Scene> scene, const std::string& id);
            void RemoveScene(const std::string& id);
            void SwitchScene(const std::string& id);
            Scene& CurrentScene();

        private:
            #include "SceneManager_private.hpp"
    };

}

#endif // SCENEMANAGER_H_