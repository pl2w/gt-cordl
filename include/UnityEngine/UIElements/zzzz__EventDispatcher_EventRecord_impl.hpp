#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/EventDispatcher_EventRecord.hpp"
#include "UnityEngine/UIElements/zzzz__EventDispatcher_EventRecord_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseVisualElementPanel_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
// Ctor Parameters [CppParam { name: "m_Event", ty: "::UnityEngine::UIElements::EventBase*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Panel", ty: "::UnityEngine::UIElements::BaseVisualElementPanel*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::EventDispatcher_EventRecord::EventDispatcher_EventRecord(::UnityEngine::UIElements::EventBase*  m_Event, ::UnityEngine::UIElements::BaseVisualElementPanel*  m_Panel) noexcept  {
this->m_Event = m_Event;
this->m_Panel = m_Panel;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EventDispatcher_EventRecord::EventDispatcher_EventRecord()   {
}
