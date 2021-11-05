#ifndef ISYSTEM_H_
#define ISYSTEM_H_

namespace spic {

    class ISystem {
        public:
            explicit ISystem(int order);
            virtual ~ISystem() = default;
            virtual void Update() = 0;
            virtual void Init() = 0;
            virtual void Clean() = 0;
    };

}

#endif // ISYSTEM_H_