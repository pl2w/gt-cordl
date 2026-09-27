#ifdef __cpp_modules
                    module;
                    #endif
                
#pragma once
#include "Meta/WitAi/Data/AudioBuffer.hpp"
#include "Meta/WitAi/Data/AudioBufferConfiguration.hpp"
#include "Meta/WitAi/Data/AudioBufferPrefabProvider.hpp"
#include "Meta/WitAi/Data/AudioEncoding.hpp"
#include "Meta/WitAi/Data/AudioEncoding_Endian.hpp"
#include "Meta/WitAi/Data/IAudioBufferProvider.hpp"
#include "Meta/WitAi/Data/RingBuffer_1.hpp"
#include "Meta/WitAi/Data/SimulatedResponse.hpp"
#include "Meta/WitAi/Data/SimulatedResponseMessage.hpp"
#include "Meta/WitAi/Data/VoiceSession.hpp"
#include "Meta/WitAi/Data/WitFloatValue.hpp"
#include "Meta/WitAi/Data/WitIntValue.hpp"
#include "Meta/WitAi/Data/WitStringValue.hpp"
#include "Meta/WitAi/Data/WitValue.hpp"
#ifdef __cpp_modules
                    export module Data;
                    #endif
                
