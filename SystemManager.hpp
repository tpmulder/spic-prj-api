#ifndef SYSTEMMANAGER_H_
#define SYSTEMMANAGER_H_

#include "ISystem.hpp"
#include <memory>

namespace spic {

    class SystemManager {
        public:
            void AddSystem(std::shared_ptr<ISystem> system);
            void RemoveSystem(std::shared_ptr<ISystem> system);

        private:
            #include "SystemManager_private.hpp"
    };

}

#endif // SYSTEMMANAGER_H_