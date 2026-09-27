#ifdef __cpp_modules
                    module;
                    #endif
                
#pragma once
#include "Meta/WitAi/TTS/Interfaces/ISpeaker.hpp"
#include "Meta/WitAi/TTS/Interfaces/ISpeakerTextPostprocessor.hpp"
#include "Meta/WitAi/TTS/Interfaces/ISpeakerTextPreprocessor.hpp"
#include "Meta/WitAi/TTS/Interfaces/ITTSDiskCacheHandler.hpp"
#include "Meta/WitAi/TTS/Interfaces/ITTSEventPlayer.hpp"
#include "Meta/WitAi/TTS/Interfaces/ITTSRuntimeCacheHandler.hpp"
#include "Meta/WitAi/TTS/Interfaces/ITTSVoiceProvider.hpp"
#include "Meta/WitAi/TTS/Interfaces/ITTSWebHandler.hpp"
#include "Meta/WitAi/TTS/Interfaces/TTSClipCallback.hpp"
#include "Meta/WitAi/TTS/Interfaces/TTSEventSampleDelegate.hpp"
#ifdef __cpp_modules
                    export module Interfaces;
                    #endif
                
