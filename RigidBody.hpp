#ifndef RIGIDBODY_H_
#define RIGIDBODY_H_

#include "Component.hpp"
#include "Point.hpp"

namespace spic {

    /**
     * @brief Enumeration for different rigid body types
     */
    enum class BodyType {
        STATIC_BODY,
        KINEMATIC_BODY,
        DYNAMIC_BODY
    };

    /**
     * @brief A component representing a rigid body.
     */
    class RigidBody : public Component {
        public:
            /**
             * @brief Apply force to this rigid body.
             * @param forceDirection A point, used as a vector to indicate direction
             *        and magnitude of the force to be applied.
             * @spicapi
             */
            void AddForce(const Point& forceDirection);

            double Mass() const;
            void Mass(double newMass);

            double GravityScale() const;
            void GravityScale(double newMass);

            BodyType BodyType() const;
            void BodyType(BodyType newBodyType);

            Point Velocity() const;
            void Velocity(const& Point velocity);

            bool FixedRotation() const;
            void FixedRotation(bool fixed);

        private:
            #include "RigidBody_private.hpp"
            //double mass;
            //double gravityScale;
            //BodyType bodyType;
    };

}

#endif // RIGIDBODY_H_
