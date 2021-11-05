#ifndef COLLIDER2D_H_
#define COLLIDER2D_H_

#include "Component.hpp"
#include "GameObject.hpp"

namespace spic {

    /**
     * @brief The base class for all colliders.
     * @spicapi
     */
    class Collider : public Component {
        public:
            Collider(GameObject& go);

            GameObject& GameObject();

            bool Trigger();
            void Trigger(bool trig);

        private:
            #include "Collider_private"
    };
}

#endif // COLLIDER2D_H_
