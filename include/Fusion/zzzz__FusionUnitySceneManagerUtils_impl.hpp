#pragma once
// IWYU pragma private; include "Fusion/FusionUnitySceneManagerUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Component_impl.hpp"
#include "Fusion/zzzz__FusionUnitySceneManagerUtils_def.hpp"
#include "Fusion/zzzz__FusionUnitySceneManagerUtils_def.hpp"
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__LoadSceneParameters_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__LocalPhysicsMode_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__Scene_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::Fusion::FusionUnitySceneManagerUtils.IsAddedToBuildSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::SceneManagement::Scene)>(&::Fusion::FusionUnitySceneManagerUtils::IsAddedToBuildSettings)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x60e6518;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionUnitySceneManagerUtils*>(),
                        {"IsAddedToBuildSettings", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionUnitySceneManagerUtils.GetLocalPhysicsMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::SceneManagement::LocalPhysicsMode (*)(::UnityEngine::SceneManagement::Scene)>(&::Fusion::FusionUnitySceneManagerUtils::GetLocalPhysicsMode)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x60e65a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionUnitySceneManagerUtils*>(),
                        {"GetLocalPhysicsMode", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionUnitySceneManagerUtils.CanBeUnloaded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::SceneManagement::Scene)>(&::Fusion::FusionUnitySceneManagerUtils::CanBeUnloaded)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x60e668c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionUnitySceneManagerUtils*>(),
                        {"CanBeUnloaded", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionUnitySceneManagerUtils.Dump
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::UnityEngine::SceneManagement::Scene)>(&::Fusion::FusionUnitySceneManagerUtils::Dump)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0x60e6764;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionUnitySceneManagerUtils*>(),
                        {"Dump", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionUnitySceneManagerUtils.Dump
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::UnityEngine::SceneManagement::LoadSceneParameters)>(&::Fusion::FusionUnitySceneManagerUtils::Dump)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x60e6a6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionUnitySceneManagerUtils*>(),
                        {"Dump", {}, {::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneParameters>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionUnitySceneManagerUtils.GetSceneBuildIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW)>(&::Fusion::FusionUnitySceneManagerUtils::GetSceneBuildIndex)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x60e6b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionUnitySceneManagerUtils*>(),
                        {"GetSceneBuildIndex", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionUnitySceneManagerUtils.GetSceneIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Collections::Generic::IList_1<::StringW>*, ::StringW)>(&::Fusion::FusionUnitySceneManagerUtils::GetSceneIndex)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x60e6ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionUnitySceneManagerUtils*>(),
                        {"GetSceneIndex", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::StringW>*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionUnitySceneManagerUtils.GetFileNameWithoutExtensionPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::by_ref<int32_t>, ::by_ref<int32_t>)>(&::Fusion::FusionUnitySceneManagerUtils::GetFileNameWithoutExtensionPosition)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x60e6c78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionUnitySceneManagerUtils*>(),
                        {"GetFileNameWithoutExtensionPosition", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::FusionUnitySceneManagerUtils::setStaticF__reusableGameObjectList(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*, "_reusableGameObjectList", ::Fusion::FusionUnitySceneManagerUtils*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* Fusion::FusionUnitySceneManagerUtils::getStaticF__reusableGameObjectList()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*, "_reusableGameObjectList", ::Fusion::FusionUnitySceneManagerUtils*>();
}
inline bool Fusion::FusionUnitySceneManagerUtils::IsAddedToBuildSettings(::UnityEngine::SceneManagement::Scene  scene)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionUnitySceneManagerUtils*>(),
                        {"IsAddedToBuildSettings", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, scene);
}
inline ::UnityEngine::SceneManagement::LocalPhysicsMode Fusion::FusionUnitySceneManagerUtils::GetLocalPhysicsMode(::UnityEngine::SceneManagement::Scene  scene)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionUnitySceneManagerUtils*>(),
                        {"GetLocalPhysicsMode", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::SceneManagement::LocalPhysicsMode>(nullptr, ___internal_method, scene);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
inline ::ArrayW<T> Fusion::FusionUnitySceneManagerUtils::GetComponents(::UnityEngine::SceneManagement::Scene  scene, bool  includeInactive)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::FusionUnitySceneManagerUtils*>(),
                    {"GetComponents", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(nullptr, ___internal_method, scene, includeInactive);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
inline ::ArrayW<T> Fusion::FusionUnitySceneManagerUtils::GetComponents(::UnityEngine::SceneManagement::Scene  scene, bool  includeInactive, ::by_ref<::ArrayW<::UnityEngine::GameObject*>>  rootObjects)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::FusionUnitySceneManagerUtils*>(),
                    {"GetComponents", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::GameObject*>>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(nullptr, ___internal_method, scene, includeInactive, rootObjects);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
inline void Fusion::FusionUnitySceneManagerUtils::GetComponents(::UnityEngine::SceneManagement::Scene  scene, ::System::Collections::Generic::List_1<T>*  results, bool  includeInactive)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::FusionUnitySceneManagerUtils*>(),
                    {"GetComponents", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>(), ::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, scene, results, includeInactive);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
inline T Fusion::FusionUnitySceneManagerUtils::FindComponent(::UnityEngine::SceneManagement::Scene  scene, bool  includeInactive)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::FusionUnitySceneManagerUtils*>(),
                    {"FindComponent", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, scene, includeInactive);
}
inline bool Fusion::FusionUnitySceneManagerUtils::CanBeUnloaded(::UnityEngine::SceneManagement::Scene  scene)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionUnitySceneManagerUtils*>(),
                        {"CanBeUnloaded", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, scene);
}
inline ::StringW Fusion::FusionUnitySceneManagerUtils::Dump(::UnityEngine::SceneManagement::Scene  scene)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionUnitySceneManagerUtils*>(),
                        {"Dump", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, scene);
}
inline ::StringW Fusion::FusionUnitySceneManagerUtils::Dump(::UnityEngine::SceneManagement::LoadSceneParameters  loadSceneParameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionUnitySceneManagerUtils*>(),
                        {"Dump", {}, {::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneParameters>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, loadSceneParameters);
}
inline int32_t Fusion::FusionUnitySceneManagerUtils::GetSceneBuildIndex(::StringW  nameOrPath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionUnitySceneManagerUtils*>(),
                        {"GetSceneBuildIndex", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, nameOrPath);
}
inline int32_t Fusion::FusionUnitySceneManagerUtils::GetSceneIndex(::System::Collections::Generic::IList_1<::StringW>*  scenePathsOrNames, ::StringW  nameOrPath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionUnitySceneManagerUtils*>(),
                        {"GetSceneIndex", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::StringW>*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, scenePathsOrNames, nameOrPath);
}
inline void Fusion::FusionUnitySceneManagerUtils::GetFileNameWithoutExtensionPosition(::StringW  nameOrPath, ::by_ref<int32_t>  index, ::by_ref<int32_t>  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionUnitySceneManagerUtils*>(),
                        {"GetFileNameWithoutExtensionPosition", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, nameOrPath, index, length);
}
// Ctor Parameters []
constexpr ::Fusion::FusionUnitySceneManagerUtils::FusionUnitySceneManagerUtils()   {
}
//  Writing Method size for method: ::Fusion::FusionUnitySceneManagerUtils_SceneEqualityComparer.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::FusionUnitySceneManagerUtils_SceneEqualityComparer::*)(::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::Scene)>(&::Fusion::FusionUnitySceneManagerUtils_SceneEqualityComparer::Equals)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x60e6fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionUnitySceneManagerUtils_SceneEqualityComparer*>(),
                        {"Equals", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>(), ::i2c::type_of<::UnityEngine::SceneManagement::Scene>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionUnitySceneManagerUtils_SceneEqualityComparer.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::FusionUnitySceneManagerUtils_SceneEqualityComparer::*)(::UnityEngine::SceneManagement::Scene)>(&::Fusion::FusionUnitySceneManagerUtils_SceneEqualityComparer::GetHashCode)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x60e6ffc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionUnitySceneManagerUtils_SceneEqualityComparer*>(),
                        {"GetHashCode", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionUnitySceneManagerUtils_SceneEqualityComparer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::FusionUnitySceneManagerUtils_SceneEqualityComparer::*)()>(&::Fusion::FusionUnitySceneManagerUtils_SceneEqualityComparer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60e7018;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionUnitySceneManagerUtils_SceneEqualityComparer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline bool Fusion::FusionUnitySceneManagerUtils_SceneEqualityComparer::Equals(::UnityEngine::SceneManagement::Scene  x, ::UnityEngine::SceneManagement::Scene  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionUnitySceneManagerUtils_SceneEqualityComparer*>(),
                        {"Equals", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>(), ::i2c::type_of<::UnityEngine::SceneManagement::Scene>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x, y);
}
inline int32_t Fusion::FusionUnitySceneManagerUtils_SceneEqualityComparer::GetHashCode(::UnityEngine::SceneManagement::Scene  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionUnitySceneManagerUtils_SceneEqualityComparer*>(),
                        {"GetHashCode", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, obj);
}
inline void Fusion::FusionUnitySceneManagerUtils_SceneEqualityComparer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionUnitySceneManagerUtils_SceneEqualityComparer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::FusionUnitySceneManagerUtils_SceneEqualityComparer* Fusion::FusionUnitySceneManagerUtils_SceneEqualityComparer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::FusionUnitySceneManagerUtils_SceneEqualityComparer*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::SceneManagement::Scene>"
constexpr  Fusion::FusionUnitySceneManagerUtils_SceneEqualityComparer::operator ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::SceneManagement::Scene>*() noexcept {
return static_cast<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::SceneManagement::Scene>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::SceneManagement::Scene>"
constexpr ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::SceneManagement::Scene>* Fusion::FusionUnitySceneManagerUtils_SceneEqualityComparer::i___System__Collections__Generic__IEqualityComparer_1___UnityEngine__SceneManagement__Scene_() noexcept {
return static_cast<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::SceneManagement::Scene>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::FusionUnitySceneManagerUtils_SceneEqualityComparer::FusionUnitySceneManagerUtils_SceneEqualityComparer()   {
}
