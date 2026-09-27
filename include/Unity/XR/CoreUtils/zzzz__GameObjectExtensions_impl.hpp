#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/GameObjectExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/XR/CoreUtils/zzzz__GameObjectExtensions_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__HideFlags_def.hpp"
//  Writing Method size for method: ::Unity::XR::CoreUtils::GameObjectExtensions.SetHideFlagsRecursively
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GameObject*, ::UnityEngine::HideFlags)>(&::Unity::XR::CoreUtils::GameObjectExtensions::SetHideFlagsRecursively)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0xb3eef28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::GameObjectExtensions*>(),
                        {"SetHideFlagsRecursively", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::HideFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::GameObjectExtensions.AddToHideFlagsRecursively
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GameObject*, ::UnityEngine::HideFlags)>(&::Unity::XR::CoreUtils::GameObjectExtensions::AddToHideFlagsRecursively)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0xb3ef1e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::GameObjectExtensions*>(),
                        {"AddToHideFlagsRecursively", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::HideFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::GameObjectExtensions.SetLayerRecursively
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GameObject*, int32_t)>(&::Unity::XR::CoreUtils::GameObjectExtensions::SetLayerRecursively)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0xb3ef4b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::GameObjectExtensions*>(),
                        {"SetLayerRecursively", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::GameObjectExtensions.SetLayerAndAddToHideFlagsRecursively
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GameObject*, int32_t, ::UnityEngine::HideFlags)>(&::Unity::XR::CoreUtils::GameObjectExtensions::SetLayerAndAddToHideFlagsRecursively)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0xb3ef774;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::GameObjectExtensions*>(),
                        {"SetLayerAndAddToHideFlagsRecursively", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::HideFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::GameObjectExtensions.SetLayerAndHideFlagsRecursively
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GameObject*, int32_t, ::UnityEngine::HideFlags)>(&::Unity::XR::CoreUtils::GameObjectExtensions::SetLayerAndHideFlagsRecursively)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0xb3efa64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::GameObjectExtensions*>(),
                        {"SetLayerAndHideFlagsRecursively", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::HideFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::GameObjectExtensions.SetRunInEditModeRecursively
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GameObject*, bool)>(&::Unity::XR::CoreUtils::GameObjectExtensions::SetRunInEditModeRecursively)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb3efd48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::GameObjectExtensions*>(),
                        {"SetRunInEditModeRecursively", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline void Unity::XR::CoreUtils::GameObjectExtensions::SetHideFlagsRecursively(::UnityEngine::GameObject*  gameObject, ::UnityEngine::HideFlags  hideFlags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::GameObjectExtensions*>(),
                        {"SetHideFlagsRecursively", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::HideFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, gameObject, hideFlags);
}
inline void Unity::XR::CoreUtils::GameObjectExtensions::AddToHideFlagsRecursively(::UnityEngine::GameObject*  gameObject, ::UnityEngine::HideFlags  hideFlags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::GameObjectExtensions*>(),
                        {"AddToHideFlagsRecursively", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::HideFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, gameObject, hideFlags);
}
inline void Unity::XR::CoreUtils::GameObjectExtensions::SetLayerRecursively(::UnityEngine::GameObject*  gameObject, int32_t  layer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::GameObjectExtensions*>(),
                        {"SetLayerRecursively", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, gameObject, layer);
}
inline void Unity::XR::CoreUtils::GameObjectExtensions::SetLayerAndAddToHideFlagsRecursively(::UnityEngine::GameObject*  gameObject, int32_t  layer, ::UnityEngine::HideFlags  hideFlags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::GameObjectExtensions*>(),
                        {"SetLayerAndAddToHideFlagsRecursively", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::HideFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, gameObject, layer, hideFlags);
}
inline void Unity::XR::CoreUtils::GameObjectExtensions::SetLayerAndHideFlagsRecursively(::UnityEngine::GameObject*  gameObject, int32_t  layer, ::UnityEngine::HideFlags  hideFlags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::GameObjectExtensions*>(),
                        {"SetLayerAndHideFlagsRecursively", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::HideFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, gameObject, layer, hideFlags);
}
inline void Unity::XR::CoreUtils::GameObjectExtensions::SetRunInEditModeRecursively(::UnityEngine::GameObject*  gameObject, bool  enabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::GameObjectExtensions*>(),
                        {"SetRunInEditModeRecursively", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, gameObject, enabled);
}
// Ctor Parameters []
constexpr ::Unity::XR::CoreUtils::GameObjectExtensions::GameObjectExtensions()   {
}
