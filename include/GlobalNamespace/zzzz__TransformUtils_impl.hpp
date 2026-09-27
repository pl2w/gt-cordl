#pragma once
// IWYU pragma private; include "GlobalNamespace/TransformUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__TransformUtils_def.hpp"
#include "UnityEngine/zzzz__Hash128_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TransformUtils.ComputePathHashByInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Transform*)>(&::GlobalNamespace::TransformUtils::ComputePathHashByInstance)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5b1a568;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransformUtils*>(),
                        {"ComputePathHashByInstance", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransformUtils.ComputePathHash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Hash128 (*)(::UnityEngine::Transform*)>(&::GlobalNamespace::TransformUtils::ComputePathHash)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5b1a690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransformUtils*>(),
                        {"ComputePathHash", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransformUtils.GetScenePath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::UnityEngine::Transform*)>(&::GlobalNamespace::TransformUtils::GetScenePath)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5b1a780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransformUtils*>(),
                        {"GetScenePath", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransformUtils.GetScenePathReverse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::UnityEngine::Transform*)>(&::GlobalNamespace::TransformUtils::GetScenePathReverse)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x5b1a87c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransformUtils*>(),
                        {"GetScenePathReverse", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::TransformUtils::ComputePathHashByInstance(::UnityEngine::Transform*  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransformUtils*>(),
                        {"ComputePathHashByInstance", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, t);
}
inline ::UnityEngine::Hash128 GlobalNamespace::TransformUtils::ComputePathHash(::UnityEngine::Transform*  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransformUtils*>(),
                        {"ComputePathHash", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Hash128>(nullptr, ___internal_method, t);
}
inline ::StringW GlobalNamespace::TransformUtils::GetScenePath(::UnityEngine::Transform*  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransformUtils*>(),
                        {"GetScenePath", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, t);
}
inline ::StringW GlobalNamespace::TransformUtils::GetScenePathReverse(::UnityEngine::Transform*  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransformUtils*>(),
                        {"GetScenePathReverse", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, t);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TransformUtils::TransformUtils()   {
}
