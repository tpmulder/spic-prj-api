#ifndef CAMERA_H_
#define CAMERA_H_

#include "GameObject.hpp"
#include "Color.hpp"

namespace spic {

    /**
     * @brief Class representing a point of view towards the game scene.
     * @spicapi
     */
    class Camera : public GameObject {
        public:
            Color BackgroundColor();
            void BackgroundColor(Color col);

            double AspectWidth();
            void AspectWidth(double w);

            double AspectHeight();
            void AspectHeight(double h);

        private:
            // Color backgroundColor;
            // double aspectWidth;
            // double aspectHeight;

            #include "Camera_private.hpp"
    };

}

#endif // CAMERA_H_
