#ifndef AUDIOSOURCE_H_
#define AUDIOSOURCE_H_

#include "Component.hpp"
#include <string>

namespace spic {

    /**
     * @brief Component which can play audio.
     */
    class AudioSource : public Component {
        public:
            /**
             * @brief Call this method to start playing audio.
             * @param looping Automatically start over when done.
             * @spicapi
             */
            void Play(bool looping);

            /**
             * @brief Call this method to stop playing audio.
             * @spicapi
             */
            void Stop();

            std::string AudioClip();
            void AudioClip(std::string clip);

            double Volume();
            void Volume(double vol);

            bool Loop();
            void Loop(bool l);

            bool PlayOnAwake();
            void PlayOnAwake(bool poa);

        private:
            /**
             * @brief Path to a locally stored audio file.
             */
            // std::string audioClip;

            /**
             * @brief When true, the component will start playing automatically.
             */
            // bool playOnAwake;

            /**
             * @brief When true, the audio will play indefinitely.
             */
            // bool loop;

            /**
             * @brief Audio volume, between 0.0 and 1.0.
             */
            // double volume;

            #include "AudioSource_private"
    };

}

#endif // AUDIOSOURCE_H_
