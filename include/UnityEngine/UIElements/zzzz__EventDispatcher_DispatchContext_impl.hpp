#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/EventDispatcher_DispatchContext.hpp"
#include "UnityEngine/UIElements/zzzz__EventDispatcher_DispatchContext_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventDispatcher_EventRecord_def.hpp"
// Ctor Parameters [CppParam { name: "m_GateCount", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Queue", ty: "::System::Collections::Generic::Queue_1<::GlobalNamespace::EventDispatcher_EventRecord>*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::EventDispatcher_DispatchContext::EventDispatcher_DispatchContext(uint32_t  m_GateCount, ::System::Collections::Generic::Queue_1<::GlobalNamespace::EventDispatcher_EventRecord>*  m_Queue) noexcept  {
this->m_GateCount = m_GateCount;
this->m_Queue = m_Queue;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EventDispatcher_DispatchContext::EventDispatcher_DispatchContext()   {
}
