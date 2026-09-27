#ifdef __cpp_modules
                    module;
                    #endif
                
#pragma once
#include "Meta/WitAi/Events/AudioBufferEvents.hpp"
#include "Meta/WitAi/Events/AudioDurationTrackerFinishedEvent.hpp"
#include "Meta/WitAi/Events/EventCategoryAttribute.hpp"
#include "Meta/WitAi/Events/EventRegistry.hpp"
#include "Meta/WitAi/Events/IWitByteDataReadyHandler.hpp"
#include "Meta/WitAi/Events/IWitByteDataSentHandler.hpp"
#include "Meta/WitAi/Events/SpeechEvents.hpp"
#include "Meta/WitAi/Events/TelemetryEvents.hpp"
#include "Meta/WitAi/Events/VoiceEvents.hpp"
#include "Meta/WitAi/Events/VoiceServiceRequestEvent.hpp"
#include "Meta/WitAi/Events/WitByteDataEvent.hpp"
#include "Meta/WitAi/Events/WitErrorEvent.hpp"
#include "Meta/WitAi/Events/WitMicLevelChangedEvent.hpp"
#include "Meta/WitAi/Events/WitRequestCreatedEvent.hpp"
#include "Meta/WitAi/Events/WitRequestOptionsEvent.hpp"
#include "Meta/WitAi/Events/WitResponseEvent.hpp"
#include "Meta/WitAi/Events/WitSampleEvent.hpp"
#include "Meta/WitAi/Events/WitTranscriptionEvent.hpp"
#include "Meta/WitAi/Events/WitValidationEvent.hpp"
#ifdef __cpp_modules
                    export module Events;
                    #endif
                
