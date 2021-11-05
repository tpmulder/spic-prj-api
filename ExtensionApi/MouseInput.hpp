#ifndef MOUSEINPUT_H_
#define MOUSEINPUT_H_

#include "../Point.hpp"

namespace spic {
	enum class MouseInputType {
		MOUSE_DOWN,
		MOUSE_UP
	};

	enum class MouseButton {
		LEFT,
		RIGHT,
		MIDDLE
	};

	struct MouseInput {
		MouseInput(const MouseInputType& inType, const MouseButton& mouseButton, const Point& mousePos);
		//	: inputType(inType), button(mouseButton), pos(mousePos)
		//{}

		MouseInputType inputType;
		MouseButton button;
		Point pos;
	};
};

#endif // MOUSEINPUT_H_