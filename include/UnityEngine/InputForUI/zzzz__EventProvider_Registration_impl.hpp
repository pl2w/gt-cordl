#pragma once
// IWYU pragma private; include "UnityEngine/InputForUI/EventProvider_Registration.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "UnityEngine/InputForUI/zzzz__EventProvider_Registration_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "UnityEngine/InputForUI/zzzz__EventConsumer_def.hpp"
#include "UnityEngine/InputForUI/zzzz__Event_Type_def.hpp"
// Ctor Parameters [CppParam { name: "handler", ty: "::UnityEngine::InputForUI::EventConsumer*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "priority", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "playerId", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_types", ty: "::System::Collections::Generic::HashSet_1<::GlobalNamespace::Event_Type>*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::EventProvider_Registration::EventProvider_Registration(::UnityEngine::InputForUI::EventConsumer*  handler, int32_t  priority, ::System::Nullable_1<int32_t>  playerId, ::System::Collections::Generic::HashSet_1<::GlobalNamespace::Event_Type>*  _types) noexcept  {
this->handler = handler;
this->priority = priority;
this->playerId = playerId;
this->_types = _types;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EventProvider_Registration::EventProvider_Registration()   {
}
