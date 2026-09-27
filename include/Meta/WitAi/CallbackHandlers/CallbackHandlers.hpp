#ifdef __cpp_modules
                    module;
                    #endif
                
#pragma once
#include "Meta/WitAi/CallbackHandlers/ComparisonMethod.hpp"
#include "Meta/WitAi/CallbackHandlers/ConfidenceRange.hpp"
#include "Meta/WitAi/CallbackHandlers/FormattedValueEvents.hpp"
#include "Meta/WitAi/CallbackHandlers/MatchMethod.hpp"
#include "Meta/WitAi/CallbackHandlers/MultiValueEvent.hpp"
#include "Meta/WitAi/CallbackHandlers/OutOfScopeUtteranceHandler.hpp"
#include "Meta/WitAi/CallbackHandlers/SimpleIntentHandler.hpp"
#include "Meta/WitAi/CallbackHandlers/SimpleStringEntityHandler.hpp"
#include "Meta/WitAi/CallbackHandlers/StringEntityMatchEvent.hpp"
#include "Meta/WitAi/CallbackHandlers/ValueEvent.hpp"
#include "Meta/WitAi/CallbackHandlers/ValuePathMatcher.hpp"
#include "Meta/WitAi/CallbackHandlers/WitIntentMatcher.hpp"
#include "Meta/WitAi/CallbackHandlers/WitResponseHandler.hpp"
#include "Meta/WitAi/CallbackHandlers/WitResponseMatcher.hpp"
#include "Meta/WitAi/CallbackHandlers/WitUtteranceMatcher.hpp"
#ifdef __cpp_modules
                    export module CallbackHandlers;
                    #endif
                
