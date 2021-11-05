#ifndef EVENTCHANNEL_H_
#define EVENTCHANNEL_H_

#include "Event.hpp"

namespace spic {
    template<typename ...Args>
    class EventChannel
    {
    public:
        EventChannel(const EventChannel&) = delete;
        EventChannel& operator=(const EventChannel&) = delete;
        EventChannel(EventChannel&&) = delete;
        EventChannel& operator=(EventChannel&&) = delete;

        static auto& GetInstance();
        //{
        //    static EventChannel channel;
        //    return channel;
        //}

        int AddEvent();

        void RemoveEvent(int id);

        void CleanEvents();

        void Raise(Args...);

        int GetActiveListenerCount(); // { return ev.GetActiveHandlerCount(); }

    protected:
        EventChannel() {}; // Disallow instantiation outside of the class.
        virtual ~EventChannel() {};

    private:
        // Event<Args...> Ev;

        #include "EventChannel_private.hpp"
    };
};

#include "EventChannel_templates.hpp"

#endif // EVENTCHANNEL_H_