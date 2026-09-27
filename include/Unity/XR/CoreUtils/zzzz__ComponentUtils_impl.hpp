#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/ComponentUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Component_impl.hpp"
#include "Unity/XR/CoreUtils/zzzz__ComponentUtils_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
inline T Unity::XR::CoreUtils::ComponentUtils::GetOrAddIf(::UnityEngine::GameObject*  gameObject, bool  add)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Unity::XR::CoreUtils::ComponentUtils*>(),
                    {"GetOrAddIf", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, gameObject, add);
}
// Ctor Parameters []
constexpr ::Unity::XR::CoreUtils::ComponentUtils::ComponentUtils()   {
}
