#ifndef KEYINPUT_H_
#define KEYINPUT_H_

#include <string>

namespace spic {
	enum class KeyInputType {
		KEY_UP,
		KEY_DOWN,
		KEY_HOLD
	};

	struct KeyInput {
		KeyInput(const KeyInputType& inType, const std::string& kCode);
		//: inputType(inType), keycode(kCode) 
		//{}

		KeyInputType inputType;
		std::string keycode;
	};
};

#endif // KEYINPUT_H_