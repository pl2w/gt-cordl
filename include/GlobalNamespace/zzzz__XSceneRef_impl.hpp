#pragma once
// IWYU pragma private; include "GlobalNamespace/XSceneRef.hpp"
#include "GlobalNamespace/zzzz__SceneIndex_impl.hpp"
#include "UnityEngine/zzzz__Component_impl.hpp"
#include "GlobalNamespace/zzzz__XSceneRef_def.hpp"
#include "GlobalNamespace/zzzz__XSceneRefTarget_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::XSceneRef.TryResolve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::XSceneRef::*)(::by_ref<::GlobalNamespace::XSceneRefTarget*>)>(&::GlobalNamespace::XSceneRef::TryResolve)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x56ba4f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XSceneRef>(),
                        {"TryResolve", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::XSceneRefTarget*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XSceneRef.TryResolve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::XSceneRef::*)(::by_ref<::UnityEngine::GameObject*>)>(&::GlobalNamespace::XSceneRef::TryResolve)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x56ba6e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XSceneRef>(),
                        {"TryResolve", {}, {::i2c::type_of<::by_ref<::UnityEngine::GameObject*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XSceneRef.AddCallbackOnLoad
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XSceneRef::*)(::System::Action*)>(&::GlobalNamespace::XSceneRef::AddCallbackOnLoad)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56ba79c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XSceneRef>(),
                        {"AddCallbackOnLoad", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XSceneRef.RemoveCallbackOnLoad
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XSceneRef::*)(::System::Action*)>(&::GlobalNamespace::XSceneRef::RemoveCallbackOnLoad)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56ba7a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XSceneRef>(),
                        {"RemoveCallbackOnLoad", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XSceneRef.AddCallbackOnUnload
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XSceneRef::*)(::System::Action*)>(&::GlobalNamespace::XSceneRef::AddCallbackOnUnload)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56ba7ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XSceneRef>(),
                        {"AddCallbackOnUnload", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XSceneRef.RemoveCallbackOnUnload
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XSceneRef::*)(::System::Action*)>(&::GlobalNamespace::XSceneRef::RemoveCallbackOnUnload)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56ba7b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XSceneRef>(),
                        {"RemoveCallbackOnUnload", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::XSceneRef::TryResolve(::by_ref<::GlobalNamespace::XSceneRefTarget*>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XSceneRef>(),
                        {"TryResolve", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::XSceneRefTarget*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, result);
}
inline bool GlobalNamespace::XSceneRef::TryResolve(::by_ref<::UnityEngine::GameObject*>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XSceneRef>(),
                        {"TryResolve", {}, {::i2c::type_of<::by_ref<::UnityEngine::GameObject*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, result);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
inline bool GlobalNamespace::XSceneRef::TryResolve(::by_ref<T>  result)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::XSceneRef>(),
                    {"TryResolve", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, result);
}
inline void GlobalNamespace::XSceneRef::AddCallbackOnLoad(::System::Action*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XSceneRef>(),
                        {"AddCallbackOnLoad", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, callback);
}
inline void GlobalNamespace::XSceneRef::RemoveCallbackOnLoad(::System::Action*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XSceneRef>(),
                        {"RemoveCallbackOnLoad", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, callback);
}
inline void GlobalNamespace::XSceneRef::AddCallbackOnUnload(::System::Action*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XSceneRef>(),
                        {"AddCallbackOnUnload", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, callback);
}
inline void GlobalNamespace::XSceneRef::RemoveCallbackOnUnload(::System::Action*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XSceneRef>(),
                        {"RemoveCallbackOnUnload", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, callback);
}
// Ctor Parameters [CppParam { name: "TargetScene", ty: "::GlobalNamespace::SceneIndex", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "TargetID", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cached", ty: "::UnityW<::GlobalNamespace::XSceneRefTarget>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "didCache", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::XSceneRef::XSceneRef(::GlobalNamespace::SceneIndex  TargetScene, int32_t  TargetID, ::UnityW<::GlobalNamespace::XSceneRefTarget>  cached, bool  didCache) noexcept  {
this->TargetScene = TargetScene;
this->TargetID = TargetID;
this->cached = cached;
this->didCache = didCache;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::XSceneRef::XSceneRef()   {
}
