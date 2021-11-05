#ifndef SCENE_H_
#define SCENE_H_

#include "GameObject.hpp"

namespace spic {

    /**
     * @brief Class representing a scene which can be rendered by the Camera.
     */
    class Scene {
        public:
            /**
             * @brief This function is called by a Camera to render the scene on the engine.
             * @spicapi
             */
            void RenderScene();
            void AddGameObject(std::shared_ptr<GameObject> gameObject);
            void AddGameObjects(std::vector<std::shared_ptr<GameObject>> gameObjects);
            void RemoveGameObject(std::shared_ptr<GameObject> gameObject);
            void GetGameObjectByComponent(const std::string&) const;
            void GetGameObjectByComponent(std::shared_ptr<Component>) const;
            std::vector<std::shared_ptr<GameObject>>& GetGameObjects() const;

        private:
            /**
             * @brief This property contains all the Game Object that are contained in this scene.
             * @spicapi
             */
            std::vector<std::shared_ptr<GameObject>> contents;
    };

}

#endif // SCENE_H_