#ifndef SPRITERENDERER_H_
#define SPRITERENDERER_H_

#include "Component.hpp"
#include "Color.hpp"
#include <string>

namespace spic {

    /**
     * @brief A component representing a sprite (small image)
     * @spicapi
     */
    class Sprite : public Component {
        public:
            void Sprite(const std::string& newSprite);
            std::string Sprite() const;

            void Color(const Color& newColor);
            Color Color() const;

            void FlipX(bool flipX);
            bool FlipX() const;

            void FlipY(bool flipY);
            bool FlipY() const;

            void SortingLayer(int sortingLayer);
            int SortingLayer() const;

            void OrderInLayer(int orderInLayer);
            int OrderInLayer() const;

        private:
            #include "Sprite_private.hpp"
            /*std::string sprite;
            Color color;
            bool flipX;
            bool flipY;
            int sortingLayer;
            int orderInLayer;*/
    };

}

#endif // SPRITERENDERER_H_
