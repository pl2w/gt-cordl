#pragma once
// IWYU pragma private; include "GorillaTagScripts/CustomMapSupport/CMSTryOnArea.hpp"
#include "UnityEngine/SceneManagement/zzzz__Scene_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTagScripts/CustomMapSupport/zzzz__CMSTryOnArea_def.hpp"
#include "GlobalNamespace/zzzz__CompositeTriggerEvents_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__Scene_def.hpp"
#include "UnityEngine/zzzz__BoxCollider_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::CustomMapSupport::CMSTryOnArea.InitializeForCustomMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::CustomMapSupport::CMSTryOnArea::*)(::GlobalNamespace::CompositeTriggerEvents*, ::UnityEngine::SceneManagement::Scene)>(&::GorillaTagScripts::CustomMapSupport::CMSTryOnArea::InitializeForCustomMap)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5bdd454;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSTryOnArea*>(),
                        {"InitializeForCustomMap", {}, {::i2c::type_of<::GlobalNamespace::CompositeTriggerEvents*>(), ::i2c::type_of<::UnityEngine::SceneManagement::Scene>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::CustomMapSupport::CMSTryOnArea.RemoveFromCustomMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::CustomMapSupport::CMSTryOnArea::*)(::GlobalNamespace::CompositeTriggerEvents*)>(&::GorillaTagScripts::CustomMapSupport::CMSTryOnArea::RemoveFromCustomMap)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5bdd4f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSTryOnArea*>(),
                        {"RemoveFromCustomMap", {}, {::i2c::type_of<::GlobalNamespace::CompositeTriggerEvents*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::CustomMapSupport::CMSTryOnArea.IsFromScene
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::CustomMapSupport::CMSTryOnArea::*)(::UnityEngine::SceneManagement::Scene)>(&::GorillaTagScripts::CustomMapSupport::CMSTryOnArea::IsFromScene)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5bdd584;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSTryOnArea*>(),
                        {"IsFromScene", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::CustomMapSupport::CMSTryOnArea._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::CustomMapSupport::CMSTryOnArea::*)()>(&::GorillaTagScripts::CustomMapSupport::CMSTryOnArea::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bdd598;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSTryOnArea*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::SceneManagement::Scene& GorillaTagScripts::CustomMapSupport::CMSTryOnArea::__cordl_internal_get_originalScene()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___originalScene;
}
constexpr ::UnityEngine::SceneManagement::Scene const& GorillaTagScripts::CustomMapSupport::CMSTryOnArea::__cordl_internal_get_originalScene() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___originalScene;
}
constexpr void GorillaTagScripts::CustomMapSupport::CMSTryOnArea::__cordl_internal_set_originalScene(::UnityEngine::SceneManagement::Scene  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___originalScene = value;
}
constexpr ::UnityW<::UnityEngine::BoxCollider>& GorillaTagScripts::CustomMapSupport::CMSTryOnArea::__cordl_internal_get_tryOnAreaCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tryOnAreaCollider;
}
constexpr ::UnityW<::UnityEngine::BoxCollider> const& GorillaTagScripts::CustomMapSupport::CMSTryOnArea::__cordl_internal_get_tryOnAreaCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tryOnAreaCollider;
}
constexpr void GorillaTagScripts::CustomMapSupport::CMSTryOnArea::__cordl_internal_set_tryOnAreaCollider(::UnityW<::UnityEngine::BoxCollider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tryOnAreaCollider = value;
}
inline void GorillaTagScripts::CustomMapSupport::CMSTryOnArea::InitializeForCustomMap(::GlobalNamespace::CompositeTriggerEvents*  customMapTryOnArea, ::UnityEngine::SceneManagement::Scene  customMapScene)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSTryOnArea*>(),
                        {"InitializeForCustomMap", {}, {::i2c::type_of<::GlobalNamespace::CompositeTriggerEvents*>(), ::i2c::type_of<::UnityEngine::SceneManagement::Scene>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, customMapTryOnArea, customMapScene);
}
inline void GorillaTagScripts::CustomMapSupport::CMSTryOnArea::RemoveFromCustomMap(::GlobalNamespace::CompositeTriggerEvents*  customMapTryOnArea)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSTryOnArea*>(),
                        {"RemoveFromCustomMap", {}, {::i2c::type_of<::GlobalNamespace::CompositeTriggerEvents*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, customMapTryOnArea);
}
inline bool GorillaTagScripts::CustomMapSupport::CMSTryOnArea::IsFromScene(::UnityEngine::SceneManagement::Scene  unloadingScene)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSTryOnArea*>(),
                        {"IsFromScene", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, unloadingScene);
}
inline void GorillaTagScripts::CustomMapSupport::CMSTryOnArea::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSTryOnArea*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::CustomMapSupport::CMSTryOnArea* GorillaTagScripts::CustomMapSupport::CMSTryOnArea::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::CustomMapSupport::CMSTryOnArea*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::CustomMapSupport::CMSTryOnArea::CMSTryOnArea()   {
}
