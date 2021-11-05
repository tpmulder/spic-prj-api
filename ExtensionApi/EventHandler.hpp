#ifndef EVENTHANDLER_H_
#define EVENTHANDLER_H_

#include <functional>
#include <atomic>

namespace spic {
	template <typename... Args> class EventHandler
	{
	public:
		typedef std::function<void(Args...)> handler_func_type;
		typedef unsigned int handler_id_type;

		explicit EventHandler(const handler_func_type& handlerFunc);
		//	: m_HandlerFunc(handlerFunc)
		//{
		//	m_HandlerId = ++m_HandlerIdCounter;
		//}

		// copy constructor
		EventHandler(const EventHandler& src);
		//	: m_HandlerFunc(src.m_HandlerFunc), m_HandlerId(src.m_HandlerId)
		//{
		//}

		// move constructor
		EventHandler(EventHandler&& src);
		//	: m_HandlerFunc(std::move(src.m_HandlerFunc)), m_HandlerId(src.m_HandlerId)
		//{
		//}

		// copy assignment operator
		EventHandler& operator=(const EventHandler& src);
		//{
		//	m_HandlerFunc = src.m_HandlerFunc;
		//	m_HandlerId = src.m_HandlerId;

		//	return *this;
		//}

		// move assignment operator
		EventHandler& operator=(EventHandler&& src);
		//{
		//	std::swap(m_HandlerFunc, src.m_HandlerFunc);
		//	m_HandlerId = src.m_HandlerId;

		//	return *this;
		//}

		// function call operator
		void operator()(Args... params) const;
		//{
		//	if (m_HandlerFunc)
		//	{
		//		m_HandlerFunc(params...);
		//	}
		//}

		bool operator==(const EventHandler& other) const;
		//{
		//	return m_HandlerId == other.m_HandlerId;
		//}

		operator bool() const;
		//{
		//	return m_HandlerFunc;
		//}

		handler_id_type Id() const; // { return m_HandlerId; }

	private:
		//handler_func_type m_HandlerFunc;
		//handler_id_type m_HandlerId;
		//static std::atomic_uint m_HandlerIdCounter;

		#include "EventHandler_private.hpp"
	};

	template <typename... Args> std::atomic_uint EventHandler<Args...>::m_HandlerIdCounter(0);

	#include "EventHandler_templates.hpp"
}

#endif // EVENTHANDLER_H_