#ifndef INPUTCHANNEL_H_
#define INPUTCHANNEL_H_

#include "KeyInput.hpp"
#include "EventChannel.hpp"
#include "MouseInput.hpp"

namespace spic {
	class KeyInputChannel : public EventChannel<KeyInput> {};
	class MouseInputChannel : public EventChannel<MouseInput> {};
}

#endif // !INPUTCHANNEL_H_