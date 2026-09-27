#pragma once
// IWYU pragma private; include "GlobalNamespace/GTSceneUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__GTSceneUtils_def.hpp"
#include "GlobalNamespace/zzzz__GTScene_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__Scene_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GTSceneUtils.AddToBuild
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::GTScene*)>(&::GlobalNamespace::GTSceneUtils::AddToBuild)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b20d1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSceneUtils*>(),
                        {"AddToBuild", {}, {::i2c::type_of<::GlobalNamespace::GTScene*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTSceneUtils.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::GTScene*, ::UnityEngine::SceneManagement::Scene)>(&::GlobalNamespace::GTSceneUtils::Equals)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5b20d20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSceneUtils*>(),
                        {"Equals", {}, {::i2c::type_of<::GlobalNamespace::GTScene*>(), ::i2c::type_of<::UnityEngine::SceneManagement::Scene>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTSceneUtils.ScenesInBuild
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::GlobalNamespace::GTScene*> (*)()>(&::GlobalNamespace::GTSceneUtils::ScenesInBuild)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5b20d48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSceneUtils*>(),
                        {"ScenesInBuild", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTSceneUtils.SyncBuildScenes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::GTSceneUtils::SyncBuildScenes)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b20ddc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSceneUtils*>(),
                        {"SyncBuildScenes", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GTSceneUtils::AddToBuild(::GlobalNamespace::GTScene*  scene)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSceneUtils*>(),
                        {"AddToBuild", {}, {::i2c::type_of<::GlobalNamespace::GTScene*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, scene);
}
inline bool GlobalNamespace::GTSceneUtils::Equals(::GlobalNamespace::GTScene*  x, ::UnityEngine::SceneManagement::Scene  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSceneUtils*>(),
                        {"Equals", {}, {::i2c::type_of<::GlobalNamespace::GTScene*>(), ::i2c::type_of<::UnityEngine::SceneManagement::Scene>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, x, y);
}
inline ::ArrayW<::GlobalNamespace::GTScene*> GlobalNamespace::GTSceneUtils::ScenesInBuild()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSceneUtils*>(),
                        {"ScenesInBuild", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::GTScene*>>(nullptr, ___internal_method);
}
inline void GlobalNamespace::GTSceneUtils::SyncBuildScenes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSceneUtils*>(),
                        {"SyncBuildScenes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GTSceneUtils::GTSceneUtils()   {
}
