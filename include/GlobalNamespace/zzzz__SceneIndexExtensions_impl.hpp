#pragma once
// IWYU pragma private; include "GlobalNamespace/SceneIndexExtensions.hpp"
#include "System/Collections/Generic/zzzz__List_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SceneIndexExtensions_def.hpp"
#include "GlobalNamespace/zzzz__SceneIndex_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__LoadSceneMode_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__Scene_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SceneIndexExtensions.GetSceneIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SceneIndex (*)(::UnityEngine::SceneManagement::Scene)>(&::GlobalNamespace::SceneIndexExtensions::GetSceneIndex)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x56b9844;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SceneIndexExtensions*>(),
                        {"GetSceneIndex", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SceneIndexExtensions.GetSceneIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SceneIndex (*)(::UnityEngine::GameObject*)>(&::GlobalNamespace::SceneIndexExtensions::GetSceneIndex)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x56b9860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SceneIndexExtensions*>(),
                        {"GetSceneIndex", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SceneIndexExtensions.GetSceneIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SceneIndex (*)(::UnityEngine::Component*)>(&::GlobalNamespace::SceneIndexExtensions::GetSceneIndex)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x56b9890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SceneIndexExtensions*>(),
                        {"GetSceneIndex", {}, {::i2c::type_of<::UnityEngine::Component*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SceneIndexExtensions.GetSceneName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::GlobalNamespace::SceneIndex)>(&::GlobalNamespace::SceneIndexExtensions::GetSceneName)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x56b98cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SceneIndexExtensions*>(),
                        {"GetSceneName", {}, {::i2c::type_of<::GlobalNamespace::SceneIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SceneIndexExtensions.AddCallbackOnSceneLoad
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::SceneIndex, ::System::Action*)>(&::GlobalNamespace::SceneIndexExtensions::AddCallbackOnSceneLoad)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x56b9988;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SceneIndexExtensions*>(),
                        {"AddCallbackOnSceneLoad", {}, {::i2c::type_of<::GlobalNamespace::SceneIndex>(), ::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SceneIndexExtensions.RemoveCallbackOnSceneLoad
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::SceneIndex, ::System::Action*)>(&::GlobalNamespace::SceneIndexExtensions::RemoveCallbackOnSceneLoad)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x56b9c0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SceneIndexExtensions*>(),
                        {"RemoveCallbackOnSceneLoad", {}, {::i2c::type_of<::GlobalNamespace::SceneIndex>(), ::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SceneIndexExtensions.OnSceneLoad
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::LoadSceneMode)>(&::GlobalNamespace::SceneIndexExtensions::OnSceneLoad)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x56b9cb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SceneIndexExtensions*>(),
                        {"OnSceneLoad", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>(), ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SceneIndexExtensions.AddCallbackOnSceneUnload
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::SceneIndex, ::System::Action*)>(&::GlobalNamespace::SceneIndexExtensions::AddCallbackOnSceneUnload)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x56b9e44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SceneIndexExtensions*>(),
                        {"AddCallbackOnSceneUnload", {}, {::i2c::type_of<::GlobalNamespace::SceneIndex>(), ::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SceneIndexExtensions.RemoveCallbackOnSceneUnload
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::SceneIndex, ::System::Action*)>(&::GlobalNamespace::SceneIndexExtensions::RemoveCallbackOnSceneUnload)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x56ba0c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SceneIndexExtensions*>(),
                        {"RemoveCallbackOnSceneUnload", {}, {::i2c::type_of<::GlobalNamespace::SceneIndex>(), ::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SceneIndexExtensions.OnSceneUnload
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::SceneManagement::Scene)>(&::GlobalNamespace::SceneIndexExtensions::OnSceneUnload)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x56ba15c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SceneIndexExtensions*>(),
                        {"OnSceneUnload", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SceneIndexExtensions.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::SceneIndexExtensions::Reset)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x56ba2ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SceneIndexExtensions*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::SceneIndexExtensions::setStaticF_onSceneLoadCallbacks(::ArrayW<::System::Collections::Generic::List_1<::System::Action*>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::System::Collections::Generic::List_1<::System::Action*>*>, "onSceneLoadCallbacks", ::GlobalNamespace::SceneIndexExtensions*>(std::forward<::ArrayW<::System::Collections::Generic::List_1<::System::Action*>*>>(value));
}
inline ::ArrayW<::System::Collections::Generic::List_1<::System::Action*>*> GlobalNamespace::SceneIndexExtensions::getStaticF_onSceneLoadCallbacks()  {
return ::cordl_internals::getStaticField<::ArrayW<::System::Collections::Generic::List_1<::System::Action*>*>, "onSceneLoadCallbacks", ::GlobalNamespace::SceneIndexExtensions*>();
}
inline void GlobalNamespace::SceneIndexExtensions::setStaticF_onSceneUnloadCallbacks(::ArrayW<::System::Collections::Generic::List_1<::System::Action*>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::System::Collections::Generic::List_1<::System::Action*>*>, "onSceneUnloadCallbacks", ::GlobalNamespace::SceneIndexExtensions*>(std::forward<::ArrayW<::System::Collections::Generic::List_1<::System::Action*>*>>(value));
}
inline ::ArrayW<::System::Collections::Generic::List_1<::System::Action*>*> GlobalNamespace::SceneIndexExtensions::getStaticF_onSceneUnloadCallbacks()  {
return ::cordl_internals::getStaticField<::ArrayW<::System::Collections::Generic::List_1<::System::Action*>*>, "onSceneUnloadCallbacks", ::GlobalNamespace::SceneIndexExtensions*>();
}
inline ::GlobalNamespace::SceneIndex GlobalNamespace::SceneIndexExtensions::GetSceneIndex(::UnityEngine::SceneManagement::Scene  scene)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SceneIndexExtensions*>(),
                        {"GetSceneIndex", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SceneIndex>(nullptr, ___internal_method, scene);
}
inline ::GlobalNamespace::SceneIndex GlobalNamespace::SceneIndexExtensions::GetSceneIndex(::UnityEngine::GameObject*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SceneIndexExtensions*>(),
                        {"GetSceneIndex", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SceneIndex>(nullptr, ___internal_method, obj);
}
inline ::GlobalNamespace::SceneIndex GlobalNamespace::SceneIndexExtensions::GetSceneIndex(::UnityEngine::Component*  cmp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SceneIndexExtensions*>(),
                        {"GetSceneIndex", {}, {::i2c::type_of<::UnityEngine::Component*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SceneIndex>(nullptr, ___internal_method, cmp);
}
inline ::StringW GlobalNamespace::SceneIndexExtensions::GetSceneName(::GlobalNamespace::SceneIndex  sceneIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SceneIndexExtensions*>(),
                        {"GetSceneName", {}, {::i2c::type_of<::GlobalNamespace::SceneIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, sceneIndex);
}
inline void GlobalNamespace::SceneIndexExtensions::AddCallbackOnSceneLoad(::GlobalNamespace::SceneIndex  scene, ::System::Action*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SceneIndexExtensions*>(),
                        {"AddCallbackOnSceneLoad", {}, {::i2c::type_of<::GlobalNamespace::SceneIndex>(), ::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, scene, callback);
}
inline void GlobalNamespace::SceneIndexExtensions::RemoveCallbackOnSceneLoad(::GlobalNamespace::SceneIndex  scene, ::System::Action*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SceneIndexExtensions*>(),
                        {"RemoveCallbackOnSceneLoad", {}, {::i2c::type_of<::GlobalNamespace::SceneIndex>(), ::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, scene, callback);
}
inline void GlobalNamespace::SceneIndexExtensions::OnSceneLoad(::UnityEngine::SceneManagement::Scene  scene, ::UnityEngine::SceneManagement::LoadSceneMode  mode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SceneIndexExtensions*>(),
                        {"OnSceneLoad", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>(), ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, scene, mode);
}
inline void GlobalNamespace::SceneIndexExtensions::AddCallbackOnSceneUnload(::GlobalNamespace::SceneIndex  scene, ::System::Action*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SceneIndexExtensions*>(),
                        {"AddCallbackOnSceneUnload", {}, {::i2c::type_of<::GlobalNamespace::SceneIndex>(), ::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, scene, callback);
}
inline void GlobalNamespace::SceneIndexExtensions::RemoveCallbackOnSceneUnload(::GlobalNamespace::SceneIndex  scene, ::System::Action*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SceneIndexExtensions*>(),
                        {"RemoveCallbackOnSceneUnload", {}, {::i2c::type_of<::GlobalNamespace::SceneIndex>(), ::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, scene, callback);
}
inline void GlobalNamespace::SceneIndexExtensions::OnSceneUnload(::UnityEngine::SceneManagement::Scene  scene)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SceneIndexExtensions*>(),
                        {"OnSceneUnload", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, scene);
}
inline void GlobalNamespace::SceneIndexExtensions::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SceneIndexExtensions*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SceneIndexExtensions::SceneIndexExtensions()   {
}
