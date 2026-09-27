#pragma once
// IWYU pragma private; include "UnityEngine/InputForUI/Event_MapAsEventSource.hpp"
#include "UnityEngine/InputForUI/zzzz__IEventProperties_impl.hpp"
#include "UnityEngine/InputForUI/zzzz__Event_MapAsEventSource_def.hpp"
#include "UnityEngine/InputForUI/zzzz__EventSource_def.hpp"
#include "UnityEngine/InputForUI/zzzz__Event_def.hpp"
template<typename TEventType>
requires(::cordl_internals::type_constraint<TEventType, ::UnityEngine::InputForUI::IEventProperties*>)
inline ::UnityEngine::InputForUI::EventSource GlobalNamespace::Event_MapAsEventSource::Map(::by_ref<TEventType>  ev)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Event_MapAsEventSource>(),
                    {"Map", {::i2c::class_of<TEventType>()}, {::i2c::type_of<::by_ref<TEventType>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TEventType>()}
                )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputForUI::EventSource>(*this, ___internal_method, ev);
}
/// @brief Convert operator to "::UnityEngine::InputForUI::Event_IMapFn_1<::UnityEngine::InputForUI::EventSource>"
constexpr  GlobalNamespace::Event_MapAsEventSource::operator ::UnityEngine::InputForUI::Event_IMapFn_1<::UnityEngine::InputForUI::EventSource>*()  {
return static_cast<::UnityEngine::InputForUI::Event_IMapFn_1<::UnityEngine::InputForUI::EventSource>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::InputForUI::Event_IMapFn_1<::UnityEngine::InputForUI::EventSource>"
constexpr ::UnityEngine::InputForUI::Event_IMapFn_1<::UnityEngine::InputForUI::EventSource>* GlobalNamespace::Event_MapAsEventSource::i___UnityEngine__InputForUI__Event_IMapFn_1___UnityEngine__InputForUI__EventSource_()  {
return static_cast<::UnityEngine::InputForUI::Event_IMapFn_1<::UnityEngine::InputForUI::EventSource>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Event_MapAsEventSource::Event_MapAsEventSource()   {
}
