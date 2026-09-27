#ifdef __cpp_modules
                    module;
                    #endif
                
#pragma once
#include "GorillaTag/Audio/DuplicateAudioSource.hpp"
#include "GorillaTag/Audio/GTAudioOneShot.hpp"
#include "GorillaTag/Audio/GTAudioOneShot_DelayedPlayData.hpp"
#include "GorillaTag/Audio/GTMicWrapper.hpp"
#include "GorillaTag/Audio/GTRecorder.hpp"
#include "GorillaTag/Audio/GTSpeaker.hpp"
#include "GorillaTag/Audio/LoudSpeakerActivator.hpp"
#include "GorillaTag/Audio/LoudSpeakerNetwork.hpp"
#include "GorillaTag/Audio/LoudSpeakerTrigger.hpp"
#include "GorillaTag/Audio/LoudSpeakerVolume.hpp"
#include "GorillaTag/Audio/PlanarSound.hpp"
#include "GorillaTag/Audio/PlayerSpeakerSwapper.hpp"
#include "GorillaTag/Audio/ProcessVoiceDataToLoudness.hpp"
#include "GorillaTag/Audio/VoiceToLoudness.hpp"
#ifdef __cpp_modules
                    export module Audio;
                    #endif
                
