#ifdef __cpp_modules
                    module;
                    #endif
                
#pragma once
#include "UnityEngine/InputForUI/CommandEvent.hpp"
#include "UnityEngine/InputForUI/CommandEvent_Command.hpp"
#include "UnityEngine/InputForUI/CommandEvent_Type.hpp"
#include "UnityEngine/InputForUI/Event.hpp"
#include "UnityEngine/InputForUI/EventConsumer.hpp"
#include "UnityEngine/InputForUI/EventModifiers.hpp"
#include "UnityEngine/InputForUI/EventModifiers_Modifiers.hpp"
#include "UnityEngine/InputForUI/EventProvider.hpp"
#include "UnityEngine/InputForUI/EventProvider_Registration.hpp"
#include "UnityEngine/InputForUI/EventSanitizer.hpp"
#include "UnityEngine/InputForUI/EventSource.hpp"
#include "UnityEngine/InputForUI/Event_MapAsEventModifiers.hpp"
#include "UnityEngine/InputForUI/Event_MapAsEventSource.hpp"
#include "UnityEngine/InputForUI/Event_MapAsObject.hpp"
#include "UnityEngine/InputForUI/Event_Type.hpp"
#include "UnityEngine/InputForUI/IEventProperties.hpp"
#include "UnityEngine/InputForUI/IEventProviderImpl.hpp"
#include "UnityEngine/InputForUI/IMECompositionEvent.hpp"
#include "UnityEngine/InputForUI/InputEventPartialProvider.hpp"
#include "UnityEngine/InputForUI/InputManagerProvider.hpp"
#include "UnityEngine/InputForUI/InputManagerProvider_ButtonEventsIterator.hpp"
#include "UnityEngine/InputForUI/InputManagerProvider_Configuration.hpp"
#include "UnityEngine/InputForUI/KeyEvent.hpp"
#include "UnityEngine/InputForUI/KeyEvent_ButtonsState.hpp"
#include "UnityEngine/InputForUI/KeyEvent_ButtonsState__buttons_e__FixedBuffer.hpp"
#include "UnityEngine/InputForUI/KeyEvent_Type.hpp"
#include "UnityEngine/InputForUI/NavigationEvent.hpp"
#include "UnityEngine/InputForUI/NavigationEventRepeatHelper.hpp"
#include "UnityEngine/InputForUI/NavigationEvent_Direction.hpp"
#include "UnityEngine/InputForUI/NavigationEvent_Type.hpp"
#include "UnityEngine/InputForUI/PointerEvent.hpp"
#include "UnityEngine/InputForUI/PointerEvent_Button.hpp"
#include "UnityEngine/InputForUI/PointerEvent_ButtonsState.hpp"
#include "UnityEngine/InputForUI/PointerEvent_Type.hpp"
#include "UnityEngine/InputForUI/PointerState.hpp"
#include "UnityEngine/InputForUI/TextInputEvent.hpp"
#ifdef __cpp_modules
                    export module InputForUI;
                    #endif
                
