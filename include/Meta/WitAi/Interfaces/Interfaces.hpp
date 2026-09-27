#ifdef __cpp_modules
                    module;
                    #endif
                
#pragma once
#include "Meta/WitAi/Interfaces/CustomTranscriptionProvider.hpp"
#include "Meta/WitAi/Interfaces/IAudioEventProvider.hpp"
#include "Meta/WitAi/Interfaces/IAudioInputEvents.hpp"
#include "Meta/WitAi/Interfaces/IAudioInputSource.hpp"
#include "Meta/WitAi/Interfaces/IAudioUploadHandler.hpp"
#include "Meta/WitAi/Interfaces/IAudioVariableSampleRate.hpp"
#include "Meta/WitAi/Interfaces/IDataUploadHandler.hpp"
#include "Meta/WitAi/Interfaces/IDynamicEntitiesProvider.hpp"
#include "Meta/WitAi/Interfaces/IPlatformIntegrationOverride.hpp"
#include "Meta/WitAi/Interfaces/ITranscriptionEvent.hpp"
#include "Meta/WitAi/Interfaces/ITranscriptionEventProvider.hpp"
#include "Meta/WitAi/Interfaces/ITranscriptionProvider.hpp"
#include "Meta/WitAi/Interfaces/IVoiceServiceRequestProvider.hpp"
#include "Meta/WitAi/Interfaces/IWitConfigurationProvider.hpp"
#ifdef __cpp_modules
                    export module Interfaces;
                    #endif
                
