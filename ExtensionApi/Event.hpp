#ifndef EVENT_H_
#define EVENT_H_

#include "EventHandler.hpp"

namespace spic {
	template <typename... Args>
	class Event
	{
	public:
		typedef EventHandler<Args...> handler_type;

		Event();

		// copy constructor
		Event(const Event& src);
		//{
		//	std::lock_guard<std::mutex> lock(src.m_HandlersLocker);

		//	m_Handlers = src.m_Handlers;
		//}

		// move constructor
		Event(Event&& src);
		//{
		//	std::lock_guard<std::mutex> lock(src.m_HandlersLocker);

		//	m_Handlers = std::move(src.m_Handlers);
		//}

		// copy assignment operator
		Event& operator=(const Event& src);
		//{
		//	std::lock_guard<std::mutex> lock(m_HandlersLocker);
		//	std::lock_guard<std::mutex> lock2(src.m_HandlersLocker);

		//	m_Handlers = src.m_Handlers;

		//	return *this;
		//}

		// move assignment operator
		Event& operator=(Event&& src);
		//{
		//	std::lock_guard<std::mutex> lock(m_HandlersLocker);
		//	std::lock_guard<std::mutex> lock2(src.m_HandlersLocker);

		//	std::swap(m_Handlers, src.m_Handlers);

		//	return *this;
		//}

		constexpr int GetActiveHandlerCount(); // { return m_Handlers.size(); }

		typename handler_type::handler_id_type AddHandler(const handler_type& handler);
		//{
		//	std::lock_guard<std::mutex> lock(m_HandlersLocker);

		//	m_Handlers.push_back(handler);

		//	return handler.Id();
		//}

		inline typename handler_type::handler_id_type Add(const typename handler_type::handler_func_type& handler); // { return AddHandler(handler_type(handler)); }

		bool Remove(const handler_type& handler);
		//{
		//	std::lock_guard<std::mutex> lock(m_HandlersLocker);

		//	auto it = std::find(m_Handlers.begin(), m_Handlers.end(), handler);
		//	if (it != m_Handlers.end())
		//	{
		//		m_Handlers.erase(it);
		//		return true;
		//	}

		//	return false;
		//}

		bool RemoveId(const typename handler_type::handler_id_type& handlerId);
		//{
		//	std::lock_guard<std::mutex> lock(m_HandlersLocker);

		//	auto it = std::find_if(m_Handlers.begin(), m_Handlers.end(), [handlerId](const handler_type& handler) { return handler.Id() == handlerId; });

		//	if (it != m_Handlers.end())
		//	{
		//		m_Handlers.erase(it);
		//		return true;
		//	}

		//	return false;
		//}

		void Call(Args... params) const;
		//{
		//	handler_collection_type handlersCopy = GetHandlersCopy();

		//	CallImpl(handlersCopy, params...);
		//}

		std::future<void> CallAsync(Args... params) const;
		//{
		//	return std::async(std::launch::async, [this](Args... asyncParams) {
		//		Call(asyncParams...);
		//		}, params...);
		//}

		inline void operator()(Args... params) const // { Call(params...); }
			inline typename handler_type::handler_id_type operator+=(const handler_type& handler); // { return AddHandler(handler); }
			inline typename handler_type::handler_id_type operator+=(const typename handler_type::handler_func_type& handler); // { return AddHandler(handler); }
			inline bool operator-=(const handler_type& handler); // { return Remove(handler); }

	protected:
		typedef std::list<handler_type> handler_collection_type;

		void CallImpl(const handler_collection_type& handlers, Args... params) const; // { for (const auto& handler : handlers) { handler(params...); } }

		handler_collection_type GetHandlersCopy() const;
		//{
		//	std::lock_guard<std::mutex> lock(m_HandlersLocker);

		//	return m_Handlers;
		//}

	private:
		//handler_collection_type m_Handlers;
		//mutable std::mutex m_HandlersLocker;

		#include "Event_private.hpp"
	};
}

#endif // EVENT_H_