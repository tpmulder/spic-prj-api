#ifndef WINDOW_H_
#define WINDOW_H_

#include <string>
#include "Point.hpp"

namespace spic {

    class Window {
        public:
            double Width() const;
            void Width(double newWidth);

            double Height() const;
            void Height(double newHeight);

            bool Fullscreen() const;
            void Fullscreen(bool fullscreen);

            std::string Title() const;
            void Title(const std::string& newTitle);

            Point Position() const;
            void Position(const Point& newPosition);

            bool Resizable() const;
            void Resizable(bool resizable);

        private:
            #include "Window_private.hpp"
    };

}

#endif // WINDOW_H_