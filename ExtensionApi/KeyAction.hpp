#ifndef KEYACTION_H_
#define KEYACTION_H_

#include <functional>
#include "KeyInput.hpp"

namespace spic {
	struct KeyAction {
		KeyAction();
		//	: Input(KeyInput(KeyInputType::KeyDown, "")), onInput([]() {})
		//{}

		KeyAction(KeyInput in, const std::string actName, std::function<void()> onIn);
		//	: input(in), actionName(actName), onInput(onIn)
		//{}

		std::string mapName;
		std::string actionName;
		KeyInput input;
		std::function<void()> onInput;
	};
};

#endif // KEYACTION_H_