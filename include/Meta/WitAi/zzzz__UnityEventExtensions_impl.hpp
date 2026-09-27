#pragma once
// IWYU pragma private; include "Meta/WitAi/UnityEventExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/WitAi/zzzz__UnityEventExtensions_def.hpp"
#include "UnityEngine/Events/zzzz__UnityAction_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
template<typename T>
inline void Meta::WitAi::UnityEventExtensions::SetListener(::UnityEngine::Events::UnityEvent_1<T>*  baseEvent, ::UnityEngine::Events::UnityAction_1<T>*  call, bool  add)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::UnityEventExtensions*>(),
                    {"SetListener", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Events::UnityEvent_1<T>*>(), ::i2c::type_of<::UnityEngine::Events::UnityAction_1<T>*>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, baseEvent, call, add);
}
// Ctor Parameters []
constexpr ::Meta::WitAi::UnityEventExtensions::UnityEventExtensions()   {
}
