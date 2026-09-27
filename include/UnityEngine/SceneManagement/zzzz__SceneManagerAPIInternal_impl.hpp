#pragma once
// IWYU pragma private; include "UnityEngine/SceneManagement/SceneManagerAPIInternal.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/SceneManagement/zzzz__SceneManagerAPIInternal_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__LoadSceneParameters_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__Scene_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__UnloadSceneOptions_def.hpp"
#include "UnityEngine/zzzz__AsyncOperation_def.hpp"
//  Writing Method size for method: ::UnityEngine::SceneManagement::SceneManagerAPIInternal.GetNumScenesInBuildSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::SceneManagement::SceneManagerAPIInternal::GetNumScenesInBuildSettings)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb5fc43c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::SceneManagerAPIInternal*>(),
                        {"GetNumScenesInBuildSettings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::SceneManagerAPIInternal.GetSceneByBuildIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::SceneManagement::Scene (*)(int32_t)>(&::UnityEngine::SceneManagement::SceneManagerAPIInternal::GetSceneByBuildIndex)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xb5fc464;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::SceneManagerAPIInternal*>(),
                        {"GetSceneByBuildIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::SceneManagerAPIInternal.LoadSceneAsyncNameIndexInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AsyncOperation* (*)(::StringW, int32_t, ::UnityEngine::SceneManagement::LoadSceneParameters, bool)>(&::UnityEngine::SceneManagement::SceneManagerAPIInternal::LoadSceneAsyncNameIndexInternal)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0xb5fc4f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::SceneManagerAPIInternal*>(),
                        {"LoadSceneAsyncNameIndexInternal", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneParameters>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::SceneManagerAPIInternal.UnloadSceneNameIndexInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AsyncOperation* (*)(::StringW, int32_t, bool, ::UnityEngine::SceneManagement::UnloadSceneOptions, ::by_ref<bool>)>(&::UnityEngine::SceneManagement::SceneManagerAPIInternal::UnloadSceneNameIndexInternal)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0xb5fc754;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::SceneManagerAPIInternal*>(),
                        {"UnloadSceneNameIndexInternal", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::SceneManagement::UnloadSceneOptions>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::SceneManagerAPIInternal.GetSceneByBuildIndex_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::by_ref<::UnityEngine::SceneManagement::Scene>)>(&::UnityEngine::SceneManagement::SceneManagerAPIInternal::GetSceneByBuildIndex_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb5fc4b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::SceneManagerAPIInternal*>(),
                        {"GetSceneByBuildIndex_Injected", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::SceneManagement::Scene>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::SceneManagerAPIInternal.LoadSceneAsyncNameIndexInternal_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, int32_t, ::by_ref<::UnityEngine::SceneManagement::LoadSceneParameters>, bool)>(&::UnityEngine::SceneManagement::SceneManagerAPIInternal::LoadSceneAsyncNameIndexInternal_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb5fc6f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::SceneManagerAPIInternal*>(),
                        {"LoadSceneAsyncNameIndexInternal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::SceneManagement::LoadSceneParameters>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::SceneManagerAPIInternal.UnloadSceneNameIndexInternal_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, int32_t, bool, ::UnityEngine::SceneManagement::UnloadSceneOptions, ::by_ref<bool>)>(&::UnityEngine::SceneManagement::SceneManagerAPIInternal::UnloadSceneNameIndexInternal_Injected)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb5fc96c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::SceneManagerAPIInternal*>(),
                        {"UnloadSceneNameIndexInternal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::SceneManagement::UnloadSceneOptions>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::SceneManagement::SceneManagerAPIInternal::GetNumScenesInBuildSettings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::SceneManagerAPIInternal*>(),
                        {"GetNumScenesInBuildSettings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline ::UnityEngine::SceneManagement::Scene UnityEngine::SceneManagement::SceneManagerAPIInternal::GetSceneByBuildIndex(int32_t  buildIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::SceneManagerAPIInternal*>(),
                        {"GetSceneByBuildIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::SceneManagement::Scene>(nullptr, ___internal_method, buildIndex);
}
inline ::UnityEngine::AsyncOperation* UnityEngine::SceneManagement::SceneManagerAPIInternal::LoadSceneAsyncNameIndexInternal(::StringW  sceneName, int32_t  sceneBuildIndex, ::UnityEngine::SceneManagement::LoadSceneParameters  parameters, bool  mustCompleteNextFrame)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::SceneManagerAPIInternal*>(),
                        {"LoadSceneAsyncNameIndexInternal", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneParameters>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AsyncOperation*>(nullptr, ___internal_method, sceneName, sceneBuildIndex, parameters, mustCompleteNextFrame);
}
inline ::UnityEngine::AsyncOperation* UnityEngine::SceneManagement::SceneManagerAPIInternal::UnloadSceneNameIndexInternal(::StringW  sceneName, int32_t  sceneBuildIndex, bool  immediately, ::UnityEngine::SceneManagement::UnloadSceneOptions  options, ::by_ref<bool>  outSuccess)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::SceneManagerAPIInternal*>(),
                        {"UnloadSceneNameIndexInternal", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::SceneManagement::UnloadSceneOptions>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AsyncOperation*>(nullptr, ___internal_method, sceneName, sceneBuildIndex, immediately, options, outSuccess);
}
inline void UnityEngine::SceneManagement::SceneManagerAPIInternal::GetSceneByBuildIndex_Injected(int32_t  buildIndex, ::by_ref<::UnityEngine::SceneManagement::Scene>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::SceneManagerAPIInternal*>(),
                        {"GetSceneByBuildIndex_Injected", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::SceneManagement::Scene>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, buildIndex, ret);
}
inline ::System::IntPtr UnityEngine::SceneManagement::SceneManagerAPIInternal::LoadSceneAsyncNameIndexInternal_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  sceneName, int32_t  sceneBuildIndex, ::by_ref<::UnityEngine::SceneManagement::LoadSceneParameters>  parameters, bool  mustCompleteNextFrame)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::SceneManagerAPIInternal*>(),
                        {"LoadSceneAsyncNameIndexInternal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::SceneManagement::LoadSceneParameters>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, sceneName, sceneBuildIndex, parameters, mustCompleteNextFrame);
}
inline ::System::IntPtr UnityEngine::SceneManagement::SceneManagerAPIInternal::UnloadSceneNameIndexInternal_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  sceneName, int32_t  sceneBuildIndex, bool  immediately, ::UnityEngine::SceneManagement::UnloadSceneOptions  options, ::by_ref<bool>  outSuccess)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SceneManagement::SceneManagerAPIInternal*>(),
                        {"UnloadSceneNameIndexInternal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::SceneManagement::UnloadSceneOptions>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, sceneName, sceneBuildIndex, immediately, options, outSuccess);
}
// Ctor Parameters []
constexpr ::UnityEngine::SceneManagement::SceneManagerAPIInternal::SceneManagerAPIInternal()   {
}
