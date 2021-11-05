#ifndef ENGINE_H_
#define ENGINE_H_

#include "Window.hpp"
#include "SceneManager.hpp"
#include "SystemManager.hpp"

namespace spic {

    class Engine {
        public:
            void Run();
            void Stop();

            Window& Window();
            SystemManager& SystemManager();
            SceneManager& SceneManager();

        private:
            #include "Engine_private.hpp"
    };

}

#endif // ENGINE_H_