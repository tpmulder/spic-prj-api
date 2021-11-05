#ifndef ANIMATOR_H_
#define ANIMATOR_H_

#include "Component.hpp"
#include "Sprite.hpp"

namespace spic {

    /**
     * @brief A component which can play animated sequences of sprites.
     */
    class Animator : public Component {
        public:
            /**
             * @brief Start playing the image sequence.
             * @param looping If true, will automatically start again when done.
             * @spicapi
             */
            void Play(bool looping);

            /**
             * @brief Stop playing the image sequence. Whatever sprite was displayed
             *        last will remain shown.
             * @spicapi
             */
            void Stop();

            void Fps(int newFps);
            int Fps();

        private:
            /**
             * @brief frames per second (playing speed)
             * @spicapi
             */
            // int fps;
            // ... collection of Sprites here

        #include "Animator_private.h"
    };

}

#endif // ANIMATOR_H_
