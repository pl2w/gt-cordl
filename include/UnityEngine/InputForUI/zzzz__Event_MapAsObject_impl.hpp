#pragma once
// IWYU pragma private; include "UnityEngine/InputForUI/Event_MapAsObject.hpp"
#include "UnityEngine/InputForUI/zzzz__IEventProperties_impl.hpp"
#include "UnityEngine/InputForUI/zzzz__Event_MapAsObject_def.hpp"
#include "UnityEngine/InputForUI/zzzz__Event_def.hpp"
#include "UnityEngine/InputForUI/zzzz__IEventProperties_def.hpp"
template<typename TEventType>
requires(::cordl_internals::type_constraint<TEventType, ::UnityEngine::InputForUI::IEventProperties*>)
inline ::UnityEngine::InputForUI::IEventProperties* GlobalNamespace::Event_MapAsObject::Map(::by_ref<TEventType>  ev)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Event_MapAsObject>(),
                    {"Map", {::i2c::class_of<TEventType>()}, {::i2c::type_of<::by_ref<TEventType>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TEventType>()}
                )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputForUI::IEventProperties*>(*this, ___internal_method, ev);
}
/// @brief Convert operator to "::UnityEngine::InputForUI::Event_IMapFn_1<::UnityEngine::InputForUI::IEventProperties*>"
constexpr  GlobalNamespace::Event_MapAsObject::operator ::UnityEngine::InputForUI::Event_IMapFn_1<::UnityEngine::InputForUI::IEventProperties*>*()  {
return static_cast<::UnityEngine::InputForUI::Event_IMapFn_1<::UnityEngine::InputForUI::IEventProperties*>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::InputForUI::Event_IMapFn_1<::UnityEngine::InputForUI::IEventProperties*>"
constexpr ::UnityEngine::InputForUI::Event_IMapFn_1<::UnityEngine::InputForUI::IEventProperties*>* GlobalNamespace::Event_MapAsObject::i___UnityEngine__InputForUI__Event_IMapFn_1___UnityEngine__InputForUI__IEventProperties__()  {
return static_cast<::UnityEngine::InputForUI::Event_IMapFn_1<::UnityEngine::InputForUI::IEventProperties*>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Event_MapAsObject::Event_MapAsObject()   {
}
