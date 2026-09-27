#pragma once
// IWYU pragma private; include "GorillaExtensions/GameObjectExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaExtensions/zzzz__GameObjectExtensions_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GorillaExtensions::GameObjectExtensions.IsPrefab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::GameObject*)>(&::GorillaExtensions::GameObjectExtensions::IsPrefab)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cf4bac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GameObjectExtensions*>(),
                        {"IsPrefab", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::MonoBehaviour*>)
inline bool GorillaExtensions::GameObjectExtensions::TryGetComponentInParent(::UnityEngine::GameObject*  obj, ::by_ref<T>  component)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GorillaExtensions::GameObjectExtensions*>(),
                    {"TryGetComponentInParent", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::by_ref<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, obj, component);
}
inline bool GorillaExtensions::GameObjectExtensions::IsPrefab(::UnityEngine::GameObject*  go)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::GameObjectExtensions*>(),
                        {"IsPrefab", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, go);
}
// Ctor Parameters []
constexpr ::GorillaExtensions::GameObjectExtensions::GameObjectExtensions()   {
}
