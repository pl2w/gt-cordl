#pragma once
// IWYU pragma private; include "GlobalNamespace/UnityLayerExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__UnityLayerExtensions_def.hpp"
#include "GlobalNamespace/zzzz__UnityLayer_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::UnityLayerExtensions.ToLayerMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::UnityLayer)>(&::GlobalNamespace::UnityLayerExtensions::ToLayerMask)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x56b1e3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnityLayerExtensions*>(),
                        {"ToLayerMask", {}, {::i2c::type_of<::GlobalNamespace::UnityLayer>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityLayerExtensions.ToLayerIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::UnityLayer)>(&::GlobalNamespace::UnityLayerExtensions::ToLayerIndex)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56b1e48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnityLayerExtensions*>(),
                        {"ToLayerIndex", {}, {::i2c::type_of<::GlobalNamespace::UnityLayer>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityLayerExtensions.IsOnLayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::GameObject*, ::GlobalNamespace::UnityLayer)>(&::GlobalNamespace::UnityLayerExtensions::IsOnLayer)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x56b1e4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnityLayerExtensions*>(),
                        {"IsOnLayer", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::GlobalNamespace::UnityLayer>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityLayerExtensions.SetLayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GameObject*, ::GlobalNamespace::UnityLayer)>(&::GlobalNamespace::UnityLayerExtensions::SetLayer)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x56b1e74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnityLayerExtensions*>(),
                        {"SetLayer", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::GlobalNamespace::UnityLayer>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityLayerExtensions.SetLayerRecursively
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GameObject*, ::GlobalNamespace::UnityLayer)>(&::GlobalNamespace::UnityLayerExtensions::SetLayerRecursively)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x56b1e88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnityLayerExtensions*>(),
                        {"SetLayerRecursively", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::GlobalNamespace::UnityLayer>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::UnityLayerExtensions::ToLayerMask(::GlobalNamespace::UnityLayer  self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnityLayerExtensions*>(),
                        {"ToLayerMask", {}, {::i2c::type_of<::GlobalNamespace::UnityLayer>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, self);
}
inline int32_t GlobalNamespace::UnityLayerExtensions::ToLayerIndex(::GlobalNamespace::UnityLayer  self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnityLayerExtensions*>(),
                        {"ToLayerIndex", {}, {::i2c::type_of<::GlobalNamespace::UnityLayer>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, self);
}
inline bool GlobalNamespace::UnityLayerExtensions::IsOnLayer(::UnityEngine::GameObject*  obj, ::GlobalNamespace::UnityLayer  layer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnityLayerExtensions*>(),
                        {"IsOnLayer", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::GlobalNamespace::UnityLayer>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, obj, layer);
}
inline void GlobalNamespace::UnityLayerExtensions::SetLayer(::UnityEngine::GameObject*  obj, ::GlobalNamespace::UnityLayer  layer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnityLayerExtensions*>(),
                        {"SetLayer", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::GlobalNamespace::UnityLayer>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, layer);
}
inline void GlobalNamespace::UnityLayerExtensions::SetLayerRecursively(::UnityEngine::GameObject*  obj, ::GlobalNamespace::UnityLayer  layer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnityLayerExtensions*>(),
                        {"SetLayerRecursively", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::GlobalNamespace::UnityLayer>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, layer);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UnityLayerExtensions::UnityLayerExtensions()   {
}
