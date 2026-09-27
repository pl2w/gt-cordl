#pragma once
// IWYU pragma private; include "GlobalNamespace/MB_SkinnedMeshSceneController.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MB_SkinnedMeshSceneController_def.hpp"
#include "GlobalNamespace/zzzz__MB3_MeshBaker_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MB_SkinnedMeshSceneController.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB_SkinnedMeshSceneController::*)()>(&::GlobalNamespace::MB_SkinnedMeshSceneController::Start)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x9dfd8f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_SkinnedMeshSceneController*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB_SkinnedMeshSceneController.OnGUI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB_SkinnedMeshSceneController::*)()>(&::GlobalNamespace::MB_SkinnedMeshSceneController::OnGUI)> {
  constexpr static std::size_t size = 0xe58;
  constexpr static std::size_t addrs = 0x9dfdb24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_SkinnedMeshSceneController*>(),
                        {"OnGUI", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB_SkinnedMeshSceneController.SearchHierarchyForBone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::GlobalNamespace::MB_SkinnedMeshSceneController::*)(::UnityEngine::Transform*, ::StringW)>(&::GlobalNamespace::MB_SkinnedMeshSceneController::SearchHierarchyForBone)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x9dfe97c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_SkinnedMeshSceneController*>(),
                        {"SearchHierarchyForBone", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB_SkinnedMeshSceneController._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB_SkinnedMeshSceneController::*)()>(&::GlobalNamespace::MB_SkinnedMeshSceneController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dfea88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_SkinnedMeshSceneController*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::MB_SkinnedMeshSceneController::__cordl_internal_get_swordPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swordPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::MB_SkinnedMeshSceneController::__cordl_internal_get_swordPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swordPrefab;
}
constexpr void GlobalNamespace::MB_SkinnedMeshSceneController::__cordl_internal_set_swordPrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swordPrefab = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::MB_SkinnedMeshSceneController::__cordl_internal_get_hatPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hatPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::MB_SkinnedMeshSceneController::__cordl_internal_get_hatPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hatPrefab;
}
constexpr void GlobalNamespace::MB_SkinnedMeshSceneController::__cordl_internal_set_hatPrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hatPrefab = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::MB_SkinnedMeshSceneController::__cordl_internal_get_glassesPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___glassesPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::MB_SkinnedMeshSceneController::__cordl_internal_get_glassesPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___glassesPrefab;
}
constexpr void GlobalNamespace::MB_SkinnedMeshSceneController::__cordl_internal_set_glassesPrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___glassesPrefab = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::MB_SkinnedMeshSceneController::__cordl_internal_get_workerPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___workerPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::MB_SkinnedMeshSceneController::__cordl_internal_get_workerPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___workerPrefab;
}
constexpr void GlobalNamespace::MB_SkinnedMeshSceneController::__cordl_internal_set_workerPrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___workerPrefab = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::MB_SkinnedMeshSceneController::__cordl_internal_get_targetCharacter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetCharacter;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::MB_SkinnedMeshSceneController::__cordl_internal_get_targetCharacter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetCharacter;
}
constexpr void GlobalNamespace::MB_SkinnedMeshSceneController::__cordl_internal_set_targetCharacter(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetCharacter = value;
}
constexpr ::UnityW<::GlobalNamespace::MB3_MeshBaker>& GlobalNamespace::MB_SkinnedMeshSceneController::__cordl_internal_get_skinnedMeshBaker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___skinnedMeshBaker;
}
constexpr ::UnityW<::GlobalNamespace::MB3_MeshBaker> const& GlobalNamespace::MB_SkinnedMeshSceneController::__cordl_internal_get_skinnedMeshBaker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___skinnedMeshBaker;
}
constexpr void GlobalNamespace::MB_SkinnedMeshSceneController::__cordl_internal_set_skinnedMeshBaker(::UnityW<::GlobalNamespace::MB3_MeshBaker>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___skinnedMeshBaker = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::MB_SkinnedMeshSceneController::__cordl_internal_get_swordInstance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swordInstance;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::MB_SkinnedMeshSceneController::__cordl_internal_get_swordInstance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swordInstance;
}
constexpr void GlobalNamespace::MB_SkinnedMeshSceneController::__cordl_internal_set_swordInstance(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swordInstance = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::MB_SkinnedMeshSceneController::__cordl_internal_get_glassesInstance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___glassesInstance;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::MB_SkinnedMeshSceneController::__cordl_internal_get_glassesInstance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___glassesInstance;
}
constexpr void GlobalNamespace::MB_SkinnedMeshSceneController::__cordl_internal_set_glassesInstance(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___glassesInstance = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::MB_SkinnedMeshSceneController::__cordl_internal_get_hatInstance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hatInstance;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::MB_SkinnedMeshSceneController::__cordl_internal_get_hatInstance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hatInstance;
}
constexpr void GlobalNamespace::MB_SkinnedMeshSceneController::__cordl_internal_set_hatInstance(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hatInstance = value;
}
inline void GlobalNamespace::MB_SkinnedMeshSceneController::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_SkinnedMeshSceneController*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MB_SkinnedMeshSceneController::OnGUI()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_SkinnedMeshSceneController*>(),
                        {"OnGUI", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> GlobalNamespace::MB_SkinnedMeshSceneController::SearchHierarchyForBone(::UnityEngine::Transform*  current, ::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_SkinnedMeshSceneController*>(),
                        {"SearchHierarchyForBone", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method, current, name);
}
inline void GlobalNamespace::MB_SkinnedMeshSceneController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB_SkinnedMeshSceneController*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MB_SkinnedMeshSceneController* GlobalNamespace::MB_SkinnedMeshSceneController::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MB_SkinnedMeshSceneController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MB_SkinnedMeshSceneController::MB_SkinnedMeshSceneController()   {
}
