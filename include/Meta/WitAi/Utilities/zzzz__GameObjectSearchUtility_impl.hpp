#pragma once
// IWYU pragma private; include "Meta/WitAi/Utilities/GameObjectSearchUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Object_impl.hpp"
#include "Meta/WitAi/Utilities/zzzz__GameObjectSearchUtility_def.hpp"
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Object*>)
inline T Meta::WitAi::Utilities::GameObjectSearchUtility::FindSceneObject(bool  includeInactive)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Utilities::GameObjectSearchUtility*>(),
                    {"FindSceneObject", {::i2c::class_of<T>()}, {::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, includeInactive);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Object*>)
inline ::ArrayW<T> Meta::WitAi::Utilities::GameObjectSearchUtility::FindSceneObjects(bool  includeInactive, bool  returnImmediately)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Utilities::GameObjectSearchUtility*>(),
                    {"FindSceneObjects", {::i2c::class_of<T>()}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(nullptr, ___internal_method, includeInactive, returnImmediately);
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Utilities::GameObjectSearchUtility::GameObjectSearchUtility()   {
}
