#ifdef __cpp_modules
                    module;
                    #endif
                
#pragma once
#include "Meta/Voice/Audio/AudioClipSettings.hpp"
#include "Meta/Voice/Audio/AudioClipStreamDelegate.hpp"
#include "Meta/Voice/Audio/AudioClipStreamSampleDelegate.hpp"
#include "Meta/Voice/Audio/BaseAudioClipStream.hpp"
#include "Meta/Voice/Audio/BaseAudioPlayer.hpp"
#include "Meta/Voice/Audio/BaseAudioSystem_2.hpp"
#include "Meta/Voice/Audio/IAudioClipProvider.hpp"
#include "Meta/Voice/Audio/IAudioClipStream.hpp"
#include "Meta/Voice/Audio/IAudioPlayer.hpp"
#include "Meta/Voice/Audio/IAudioSourceProvider.hpp"
#include "Meta/Voice/Audio/IAudioSystem.hpp"
#include "Meta/Voice/Audio/RawAudioClipStream.hpp"
#include "Meta/Voice/Audio/SimulatedAudioPlayer.hpp"
#include "Meta/Voice/Audio/UnityAudioPlayer.hpp"
#include "Meta/Voice/Audio/UnityAudioSystem.hpp"
#ifdef __cpp_modules
                    export module Audio;
                    #endif
                
