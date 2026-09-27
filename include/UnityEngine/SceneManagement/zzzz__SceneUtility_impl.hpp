#pragma once
// IWYU pragma private; include "UnityEngine/SceneManagement/SceneUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/SceneManagement/zzzz__SceneUtility_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
//  Writing Method size for method: ::UnityEngine::SceneManagement::SceneUtility.GetScenePathByBuildIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int32_t)>(&::UnityEngine::SceneManagement::SceneUtility::GetScenePathByBuildIndex)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xb5fe4e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::SceneUtility*>(),
                        {"GetScenePathByBuildIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::SceneUtility.GetBuildIndexByScenePath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW)>(&::UnityEngine::SceneManagement::SceneUtility::GetBuildIndexByScenePath)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0xb5fe5ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::SceneUtility*>(),
                        {"GetBuildIndexByScenePath", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::SceneUtility.GetScenePathByBuildIndex_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::SceneManagement::SceneUtility::GetScenePathByBuildIndex_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb5fe5a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::SceneUtility*>(),
                        {"GetScenePathByBuildIndex_Injected", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::SceneUtility.GetBuildIndexByScenePath_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::SceneManagement::SceneUtility::GetBuildIndexByScenePath_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb5fe734;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::SceneUtility*>(),
                        {"GetBuildIndexByScenePath_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW UnityEngine::SceneManagement::SceneUtility::GetScenePathByBuildIndex(int32_t  buildIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::SceneUtility*>(),
                        {"GetScenePathByBuildIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, buildIndex);
}
inline int32_t UnityEngine::SceneManagement::SceneUtility::GetBuildIndexByScenePath(::StringW  scenePath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::SceneUtility*>(),
                        {"GetBuildIndexByScenePath", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, scenePath);
}
inline void UnityEngine::SceneManagement::SceneUtility::GetScenePathByBuildIndex_Injected(int32_t  buildIndex, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::SceneUtility*>(),
                        {"GetScenePathByBuildIndex_Injected", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, buildIndex, ret);
}
inline int32_t UnityEngine::SceneManagement::SceneUtility::GetBuildIndexByScenePath_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  scenePath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::SceneUtility*>(),
                        {"GetBuildIndexByScenePath_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, scenePath);
}
// Ctor Parameters []
constexpr ::UnityEngine::SceneManagement::SceneUtility::SceneUtility()   {
}
