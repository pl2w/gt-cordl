#pragma once
// IWYU pragma private; include "Meta/WitAi/UnityObjectExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Component_impl.hpp"
#include "Meta/WitAi/zzzz__UnityObjectExtensions_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::UnityObjectExtensions.DestroySafely
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Object*)>(&::Meta::WitAi::UnityObjectExtensions::DestroySafely)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9e3c5fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::UnityObjectExtensions*>(),
                        {"DestroySafely", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Meta::WitAi::UnityObjectExtensions::DestroySafely(::UnityEngine::Object*  unityObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::UnityObjectExtensions*>(),
                        {"DestroySafely", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, unityObject);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
inline T Meta::WitAi::UnityObjectExtensions::GetOrAddComponent(::UnityEngine::GameObject*  unityObject)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::UnityObjectExtensions*>(),
                    {"GetOrAddComponent", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, unityObject);
}
// Ctor Parameters []
constexpr ::Meta::WitAi::UnityObjectExtensions::UnityObjectExtensions()   {
}
