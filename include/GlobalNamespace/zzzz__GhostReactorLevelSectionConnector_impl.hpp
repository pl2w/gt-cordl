#pragma once
// IWYU pragma private; include "GlobalNamespace/GhostReactorLevelSectionConnector.hpp"
#include "GlobalNamespace/zzzz__GhostReactorLevelSectionConnector_Direction_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GhostReactorLevelSectionConnector_def.hpp"
#include "GlobalNamespace/zzzz__GameEntity_def.hpp"
#include "GlobalNamespace/zzzz__GhostReactorLevelSectionConnector_Direction_def.hpp"
#include "GlobalNamespace/zzzz__GhostReactorManager_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__BoxCollider_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GhostReactorLevelSectionConnector.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorLevelSectionConnector::*)()>(&::GlobalNamespace::GhostReactorLevelSectionConnector::Awake)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x584f428;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorLevelSectionConnector*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorLevelSectionConnector.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorLevelSectionConnector::*)(::GlobalNamespace::GhostReactorManager*)>(&::GlobalNamespace::GhostReactorLevelSectionConnector::Init)> {
  constexpr static std::size_t size = 0x4f8;
  constexpr static std::size_t addrs = 0x584f6ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorLevelSectionConnector*>(),
                        {"Init", {}, {::i2c::type_of<::GlobalNamespace::GhostReactorManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorLevelSectionConnector.Hide
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorLevelSectionConnector::*)(bool)>(&::GlobalNamespace::GhostReactorLevelSectionConnector::Hide)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x584fc04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorLevelSectionConnector*>(),
                        {"Hide", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorLevelSectionConnector.UpdateDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorLevelSectionConnector::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::GhostReactorLevelSectionConnector::UpdateDisable)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x584fd00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorLevelSectionConnector*>(),
                        {"UpdateDisable", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorLevelSectionConnector._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorLevelSectionConnector::*)()>(&::GlobalNamespace::GhostReactorLevelSectionConnector::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x584fe1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorLevelSectionConnector*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GhostReactorLevelSectionConnector::__cordl_internal_get_hubAnchor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hubAnchor;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GhostReactorLevelSectionConnector::__cordl_internal_get_hubAnchor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hubAnchor;
}
constexpr void GlobalNamespace::GhostReactorLevelSectionConnector::__cordl_internal_set_hubAnchor(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hubAnchor = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GhostReactorLevelSectionConnector::__cordl_internal_get_sectionAnchor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sectionAnchor;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GhostReactorLevelSectionConnector::__cordl_internal_get_sectionAnchor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sectionAnchor;
}
constexpr void GlobalNamespace::GhostReactorLevelSectionConnector::__cordl_internal_set_sectionAnchor(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sectionAnchor = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GhostReactorLevelSectionConnector::__cordl_internal_get_gateSpawnPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gateSpawnPoint;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GhostReactorLevelSectionConnector::__cordl_internal_get_gateSpawnPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gateSpawnPoint;
}
constexpr void GlobalNamespace::GhostReactorLevelSectionConnector::__cordl_internal_set_gateSpawnPoint(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gateSpawnPoint = value;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity>& GlobalNamespace::GhostReactorLevelSectionConnector::__cordl_internal_get_gateEntity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gateEntity;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity> const& GlobalNamespace::GhostReactorLevelSectionConnector::__cordl_internal_get_gateEntity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gateEntity;
}
constexpr void GlobalNamespace::GhostReactorLevelSectionConnector::__cordl_internal_set_gateEntity(::UnityW<::GlobalNamespace::GameEntity>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gateEntity = value;
}
constexpr ::GlobalNamespace::GhostReactorLevelSectionConnector_Direction& GlobalNamespace::GhostReactorLevelSectionConnector::__cordl_internal_get_direction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___direction;
}
constexpr ::GlobalNamespace::GhostReactorLevelSectionConnector_Direction const& GlobalNamespace::GhostReactorLevelSectionConnector::__cordl_internal_get_direction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___direction;
}
constexpr void GlobalNamespace::GhostReactorLevelSectionConnector::__cordl_internal_set_direction(::GlobalNamespace::GhostReactorLevelSectionConnector_Direction  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___direction = value;
}
constexpr ::UnityW<::UnityEngine::BoxCollider>& GlobalNamespace::GhostReactorLevelSectionConnector::__cordl_internal_get_boundingCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boundingCollider;
}
constexpr ::UnityW<::UnityEngine::BoxCollider> const& GlobalNamespace::GhostReactorLevelSectionConnector::__cordl_internal_get_boundingCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boundingCollider;
}
constexpr void GlobalNamespace::GhostReactorLevelSectionConnector::__cordl_internal_set_boundingCollider(::UnityW<::UnityEngine::BoxCollider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___boundingCollider = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*& GlobalNamespace::GhostReactorLevelSectionConnector::__cordl_internal_get_pathNodes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pathNodes;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* const& GlobalNamespace::GhostReactorLevelSectionConnector::__cordl_internal_get_pathNodes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pathNodes;
}
constexpr void GlobalNamespace::GhostReactorLevelSectionConnector::__cordl_internal_set_pathNodes(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pathNodes = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>*& GlobalNamespace::GhostReactorLevelSectionConnector::__cordl_internal_get_prePlacedGameEntities()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prePlacedGameEntities;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>* const& GlobalNamespace::GhostReactorLevelSectionConnector::__cordl_internal_get_prePlacedGameEntities() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prePlacedGameEntities;
}
constexpr void GlobalNamespace::GhostReactorLevelSectionConnector::__cordl_internal_set_prePlacedGameEntities(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prePlacedGameEntities = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*& GlobalNamespace::GhostReactorLevelSectionConnector::__cordl_internal_get_renderers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderers;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>* const& GlobalNamespace::GhostReactorLevelSectionConnector::__cordl_internal_get_renderers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderers;
}
constexpr void GlobalNamespace::GhostReactorLevelSectionConnector::__cordl_internal_set_renderers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___renderers = value;
}
constexpr bool& GlobalNamespace::GhostReactorLevelSectionConnector::__cordl_internal_get_hidden()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hidden;
}
constexpr bool const& GlobalNamespace::GhostReactorLevelSectionConnector::__cordl_internal_get_hidden() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hidden;
}
constexpr void GlobalNamespace::GhostReactorLevelSectionConnector::__cordl_internal_set_hidden(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hidden = value;
}
inline void GlobalNamespace::GhostReactorLevelSectionConnector::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorLevelSectionConnector*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GhostReactorLevelSectionConnector::Init(::GlobalNamespace::GhostReactorManager*  grManager)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorLevelSectionConnector*>(),
                        {"Init", {}, {::i2c::type_of<::GlobalNamespace::GhostReactorManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, grManager);
}
inline void GlobalNamespace::GhostReactorLevelSectionConnector::Hide(bool  hide)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorLevelSectionConnector*>(),
                        {"Hide", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hide);
}
inline void GlobalNamespace::GhostReactorLevelSectionConnector::UpdateDisable(::UnityEngine::Vector3  playerPos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorLevelSectionConnector*>(),
                        {"UpdateDisable", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerPos);
}
inline void GlobalNamespace::GhostReactorLevelSectionConnector::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorLevelSectionConnector*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GhostReactorLevelSectionConnector* GlobalNamespace::GhostReactorLevelSectionConnector::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GhostReactorLevelSectionConnector*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GhostReactorLevelSectionConnector::GhostReactorLevelSectionConnector()   {
}
