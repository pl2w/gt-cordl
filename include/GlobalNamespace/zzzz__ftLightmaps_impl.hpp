#pragma once
// IWYU pragma private; include "GlobalNamespace/ftLightmaps.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__ftLightmaps_def.hpp"
#include "GlobalNamespace/zzzz__ftLightmapsStorage_def.hpp"
#include "GlobalNamespace/zzzz__ftLightmaps_LightmapAdditionalData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__Scene_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ftLightmaps.SetDirectionalMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::ftLightmaps::SetDirectionalMode)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5f28958;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ftLightmaps*>(),
                        {"SetDirectionalMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ftLightmaps.OnSceneChangedPlay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::Scene)>(&::GlobalNamespace::ftLightmaps::OnSceneChangedPlay)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5f289e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ftLightmaps*>(),
                        {"OnSceneChangedPlay", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>(), ::i2c::type_of<::UnityEngine::SceneManagement::Scene>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ftLightmaps.RefreshFull
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::ftLightmaps::RefreshFull)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x5f28a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ftLightmaps*>(),
                        {"RefreshFull", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ftLightmaps.FindInScene
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (*)(::StringW, ::UnityEngine::SceneManagement::Scene)>(&::GlobalNamespace::ftLightmaps::FindInScene)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5f28c68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ftLightmaps*>(),
                        {"FindInScene", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::SceneManagement::Scene>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ftLightmaps.GetEmptyDirectionTex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture2D> (*)(::GlobalNamespace::ftLightmapsStorage*)>(&::GlobalNamespace::ftLightmaps::GetEmptyDirectionTex)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5f2ab00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ftLightmaps*>(),
                        {"GetEmptyDirectionTex", {}, {::i2c::type_of<::GlobalNamespace::ftLightmapsStorage*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ftLightmaps.RefreshScene
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::SceneManagement::Scene, ::GlobalNamespace::ftLightmapsStorage*, bool, bool)>(&::GlobalNamespace::ftLightmaps::RefreshScene)> {
  constexpr static std::size_t size = 0x1d5c;
  constexpr static std::size_t addrs = 0x5f28da4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ftLightmaps*>(),
                        {"RefreshScene", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>(), ::i2c::type_of<::GlobalNamespace::ftLightmapsStorage*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ftLightmaps.UnloadScene
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::ftLightmapsStorage*)>(&::GlobalNamespace::ftLightmaps::UnloadScene)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x5f2ab14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ftLightmaps*>(),
                        {"UnloadScene", {}, {::i2c::type_of<::GlobalNamespace::ftLightmapsStorage*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ftLightmaps.RefreshScene2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::SceneManagement::Scene, ::GlobalNamespace::ftLightmapsStorage*)>(&::GlobalNamespace::ftLightmaps::RefreshScene2)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x5f2ada4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ftLightmaps*>(),
                        {"RefreshScene2", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>(), ::i2c::type_of<::GlobalNamespace::ftLightmapsStorage*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ftLightmaps._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ftLightmaps::*)()>(&::GlobalNamespace::ftLightmaps::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f2b000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ftLightmaps*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ftLightmaps::setStaticF_lightmapRefCount(::System::Collections::Generic::List_1<int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<int32_t>*, "lightmapRefCount", ::GlobalNamespace::ftLightmaps*>(std::forward<::System::Collections::Generic::List_1<int32_t>*>(value));
}
inline ::System::Collections::Generic::List_1<int32_t>* GlobalNamespace::ftLightmaps::getStaticF_lightmapRefCount()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<int32_t>*, "lightmapRefCount", ::GlobalNamespace::ftLightmaps*>();
}
inline void GlobalNamespace::ftLightmaps::setStaticF_globalMapsAdditional(::System::Collections::Generic::List_1<::GlobalNamespace::ftLightmaps_LightmapAdditionalData>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::GlobalNamespace::ftLightmaps_LightmapAdditionalData>*, "globalMapsAdditional", ::GlobalNamespace::ftLightmaps*>(std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::ftLightmaps_LightmapAdditionalData>*>(value));
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::ftLightmaps_LightmapAdditionalData>* GlobalNamespace::ftLightmaps::getStaticF_globalMapsAdditional()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::GlobalNamespace::ftLightmaps_LightmapAdditionalData>*, "globalMapsAdditional", ::GlobalNamespace::ftLightmaps*>();
}
inline void GlobalNamespace::ftLightmaps::setStaticF_directionalMode(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "directionalMode", ::GlobalNamespace::ftLightmaps*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::ftLightmaps::getStaticF_directionalMode()  {
return ::cordl_internals::getStaticField<int32_t, "directionalMode", ::GlobalNamespace::ftLightmaps*>();
}
inline void GlobalNamespace::ftLightmaps::SetDirectionalMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ftLightmaps*>(),
                        {"SetDirectionalMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::ftLightmaps::OnSceneChangedPlay(::UnityEngine::SceneManagement::Scene  prev, ::UnityEngine::SceneManagement::Scene  next)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ftLightmaps*>(),
                        {"OnSceneChangedPlay", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>(), ::i2c::type_of<::UnityEngine::SceneManagement::Scene>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, prev, next);
}
inline void GlobalNamespace::ftLightmaps::RefreshFull()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ftLightmaps*>(),
                        {"RefreshFull", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::GameObject> GlobalNamespace::ftLightmaps::FindInScene(::StringW  nm, ::UnityEngine::SceneManagement::Scene  scn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ftLightmaps*>(),
                        {"FindInScene", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::SceneManagement::Scene>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(nullptr, ___internal_method, nm, scn);
}
inline ::UnityW<::UnityEngine::Texture2D> GlobalNamespace::ftLightmaps::GetEmptyDirectionTex(::GlobalNamespace::ftLightmapsStorage*  storage)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ftLightmaps*>(),
                        {"GetEmptyDirectionTex", {}, {::i2c::type_of<::GlobalNamespace::ftLightmapsStorage*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2D>>(nullptr, ___internal_method, storage);
}
inline void GlobalNamespace::ftLightmaps::RefreshScene(::UnityEngine::SceneManagement::Scene  scene, ::GlobalNamespace::ftLightmapsStorage*  storage, bool  updateNonBaked, bool  incrementRefcount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ftLightmaps*>(),
                        {"RefreshScene", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>(), ::i2c::type_of<::GlobalNamespace::ftLightmapsStorage*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, scene, storage, updateNonBaked, incrementRefcount);
}
inline void GlobalNamespace::ftLightmaps::UnloadScene(::GlobalNamespace::ftLightmapsStorage*  storage)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ftLightmaps*>(),
                        {"UnloadScene", {}, {::i2c::type_of<::GlobalNamespace::ftLightmapsStorage*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, storage);
}
inline void GlobalNamespace::ftLightmaps::RefreshScene2(::UnityEngine::SceneManagement::Scene  scene, ::GlobalNamespace::ftLightmapsStorage*  storage)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ftLightmaps*>(),
                        {"RefreshScene2", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>(), ::i2c::type_of<::GlobalNamespace::ftLightmapsStorage*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, scene, storage);
}
inline void GlobalNamespace::ftLightmaps::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ftLightmaps*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ftLightmaps* GlobalNamespace::ftLightmaps::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ftLightmaps*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ftLightmaps::ftLightmaps()   {
}
