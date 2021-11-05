#ifndef TEXT_H_
#define TEXT_H_

#include "UIObject.hpp"
#include "Color.hpp"
#include <string>

namespace spic {

    /**
     * @brief Enumeration for different text alignments.
     * @spicapi
     */
    enum class Alignment {
        LEFT,
        CENTER,
        RIGHT
    };

    /**
     * @brief Class representing a piece of text which can be rendered.
     * @spicapi
     */
    class Text : public UIObject {
        public:
            void Text(const std::string& newText);
            std::string Text() const;

            void Font(const std::string& newFont);
            std::string Font() const;

            void Size(int newSize);
            int Size() const;

            void Alignment(Alignment newAlignment);
            Alignment Alignment() const;

            void Color(Color newColor);
            Color Color() const;
        private:
        #include "Text_private.hpp"
            //std::string text;
            //std::string font;
            //int size;
            //Alignment alignment;
            //Color color;
    };

}

#endif // TEXT_H_
