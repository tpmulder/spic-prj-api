#ifndef UIOBJECT_H_
#define UIOBJECT_H_

#include "GameObject.hpp"

namespace spic {

    /**
     * @brief Base class for a user interface object like Button or Text.
     * @spicapi
     */
    class UIObject : public GameObject {
        public:
            void Width(double newWidth);
            double Width() const;

            void Height(double newHeight);
            double Height() const;

        private:
        #include "UIObject_private.hpp"
            //double width;
            //double height;
    };

}

#endif // UIOBJECT_H_
