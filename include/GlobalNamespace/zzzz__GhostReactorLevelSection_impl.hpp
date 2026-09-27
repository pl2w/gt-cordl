#pragma once
// IWYU pragma private; include "GlobalNamespace/GhostReactorLevelSection.hpp"
#include "GlobalNamespace/zzzz__GhostReactorLevelSection_SectionType_impl.hpp"
#include "GlobalNamespace/zzzz__GhostReactorSpawnConfig_SpawnPointType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GhostReactorLevelSection_def.hpp"
#include "GlobalNamespace/zzzz__GREntitySpawnPoint_def.hpp"
#include "GlobalNamespace/zzzz__GRHazardousMaterial_def.hpp"
#include "GlobalNamespace/zzzz__GRPatrolPath_def.hpp"
#include "GlobalNamespace/zzzz__GameEntityCreateData_def.hpp"
#include "GlobalNamespace/zzzz__GameEntityId_def.hpp"
#include "GlobalNamespace/zzzz__GameEntityManager_def.hpp"
#include "GlobalNamespace/zzzz__GameEntity_def.hpp"
#include "GlobalNamespace/zzzz__GhostReactorLevelSectionConnector_def.hpp"
#include "GlobalNamespace/zzzz__GhostReactorLevelSection_SectionType_def.hpp"
#include "GlobalNamespace/zzzz__GhostReactorLevelSection_def.hpp"
#include "GlobalNamespace/zzzz__GhostReactorSpawnConfig_def.hpp"
#include "GlobalNamespace/zzzz__GhostReactor_def.hpp"
#include "GlobalNamespace/zzzz__SRand_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__BoxCollider_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GhostReactorLevelSection.get_Anchor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::GlobalNamespace::GhostReactorLevelSection::*)()>(&::GlobalNamespace::GhostReactorLevelSection::get_Anchor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x584d8f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorLevelSection*>(),
                        {"get_Anchor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorLevelSection.get_Anchors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* (::GlobalNamespace::GhostReactorLevelSection::*)()>(&::GlobalNamespace::GhostReactorLevelSection::get_Anchors)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x584d8f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorLevelSection*>(),
                        {"get_Anchors", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorLevelSection.get_Type
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GhostReactorLevelSection_SectionType (::GlobalNamespace::GhostReactorLevelSection::*)()>(&::GlobalNamespace::GhostReactorLevelSection::get_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x584d900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorLevelSection*>(),
                        {"get_Type", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorLevelSection.get_BoundingCollider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::BoxCollider> (::GlobalNamespace::GhostReactorLevelSection::*)()>(&::GlobalNamespace::GhostReactorLevelSection::get_BoundingCollider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x584d908;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorLevelSection*>(),
                        {"get_BoundingCollider", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorLevelSection.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorLevelSection::*)()>(&::GlobalNamespace::GhostReactorLevelSection::Awake)> {
  constexpr static std::size_t size = 0x6e8;
  constexpr static std::size_t addrs = 0x584d910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorLevelSection*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorLevelSection.RandomizeIndices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::List_1<int32_t>*, int32_t, ::by_ref<::GlobalNamespace::SRand>)>(&::GlobalNamespace::GhostReactorLevelSection::RandomizeIndices)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x584dff8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorLevelSection*>(),
                        {"RandomizeIndices", {}, {::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::SRand>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorLevelSection.InitLevelSection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorLevelSection::*)(int32_t, ::GlobalNamespace::GhostReactor*)>(&::GlobalNamespace::GhostReactorLevelSection::InitLevelSection)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x584e0f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorLevelSection*>(),
                        {"InitLevelSection", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::GhostReactor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorLevelSection.SpawnSectionEntities
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorLevelSection::*)(::by_ref<::GlobalNamespace::SRand>, ::GlobalNamespace::GameEntityManager*, ::GlobalNamespace::GhostReactor*, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GhostReactorSpawnConfig>>*, float_t)>(&::GlobalNamespace::GhostReactorLevelSection::SpawnSectionEntities)> {
  constexpr static std::size_t size = 0xb20;
  constexpr static std::size_t addrs = 0x584e19c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorLevelSection*>(),
                        {"SpawnSectionEntities", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::SRand>>(), ::i2c::type_of<::GlobalNamespace::GameEntityManager*>(), ::i2c::type_of<::GlobalNamespace::GhostReactor*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GhostReactorSpawnConfig>>*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorLevelSection.RespawnEntity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorLevelSection::*)(::by_ref<::GlobalNamespace::SRand>, ::GlobalNamespace::GameEntityManager*, int32_t, int64_t, ::GlobalNamespace::GameEntityId)>(&::GlobalNamespace::GhostReactorLevelSection::RespawnEntity)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x584ed6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorLevelSection*>(),
                        {"RespawnEntity", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::SRand>>(), ::i2c::type_of<::GlobalNamespace::GameEntityManager*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::GlobalNamespace::GameEntityId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorLevelSection.GetPatrolPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::GRPatrolPath> (::GlobalNamespace::GhostReactorLevelSection::*)(int32_t)>(&::GlobalNamespace::GhostReactorLevelSection::GetPatrolPath)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x584efa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorLevelSection*>(),
                        {"GetPatrolPath", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorLevelSection.Hide
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorLevelSection::*)(bool)>(&::GlobalNamespace::GhostReactorLevelSection::Hide)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x584f02c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorLevelSection*>(),
                        {"Hide", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorLevelSection.UpdateDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorLevelSection::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::GhostReactorLevelSection::UpdateDisable)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x584f128;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorLevelSection*>(),
                        {"UpdateDisable", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorLevelSection.GetDistSq
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::GhostReactorLevelSection::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::GhostReactorLevelSection::GetDistSq)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x584f218;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorLevelSection*>(),
                        {"GetDistSq", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorLevelSection.GetAnchor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::GlobalNamespace::GhostReactorLevelSection::*)(int32_t)>(&::GlobalNamespace::GhostReactorLevelSection::GetAnchor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x584f274;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorLevelSection*>(),
                        {"GetAnchor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorLevelSection._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorLevelSection::*)()>(&::GlobalNamespace::GhostReactorLevelSection::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x584f2cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorLevelSection*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::GhostReactorLevelSection_SectionType& GlobalNamespace::GhostReactorLevelSection::__cordl_internal_get_sectionType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sectionType;
}
constexpr ::GlobalNamespace::GhostReactorLevelSection_SectionType const& GlobalNamespace::GhostReactorLevelSection::__cordl_internal_get_sectionType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sectionType;
}
constexpr void GlobalNamespace::GhostReactorLevelSection::__cordl_internal_set_sectionType(::GlobalNamespace::GhostReactorLevelSection_SectionType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sectionType = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GhostReactorLevelSection::__cordl_internal_get_anchorTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anchorTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GhostReactorLevelSection::__cordl_internal_get_anchorTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anchorTransform;
}
constexpr void GlobalNamespace::GhostReactorLevelSection::__cordl_internal_set_anchorTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___anchorTransform = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*& GlobalNamespace::GhostReactorLevelSection::__cordl_internal_get_anchors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anchors;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* const& GlobalNamespace::GhostReactorLevelSection::__cordl_internal_get_anchors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anchors;
}
constexpr void GlobalNamespace::GhostReactorLevelSection::__cordl_internal_set_anchors(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___anchors = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GhostReactorLevelSection_SpawnPointGroup*>*& GlobalNamespace::GhostReactorLevelSection::__cordl_internal_get_spawnPointGroups()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnPointGroups;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GhostReactorLevelSection_SpawnPointGroup*>* const& GlobalNamespace::GhostReactorLevelSection::__cordl_internal_get_spawnPointGroups() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnPointGroups;
}
constexpr void GlobalNamespace::GhostReactorLevelSection::__cordl_internal_set_spawnPointGroups(::System::Collections::Generic::List_1<::GlobalNamespace::GhostReactorLevelSection_SpawnPointGroup*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawnPointGroups = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GhostReactorSpawnConfig>>*& GlobalNamespace::GhostReactorLevelSection::__cordl_internal_get_spawnConfigs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnConfigs;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GhostReactorSpawnConfig>>* const& GlobalNamespace::GhostReactorLevelSection::__cordl_internal_get_spawnConfigs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnConfigs;
}
constexpr void GlobalNamespace::GhostReactorLevelSection::__cordl_internal_set_spawnConfigs(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GhostReactorSpawnConfig>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawnConfigs = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRPatrolPath>>*& GlobalNamespace::GhostReactorLevelSection::__cordl_internal_get_patrolPaths()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___patrolPaths;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRPatrolPath>>* const& GlobalNamespace::GhostReactorLevelSection::__cordl_internal_get_patrolPaths() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___patrolPaths;
}
constexpr void GlobalNamespace::GhostReactorLevelSection::__cordl_internal_set_patrolPaths(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRPatrolPath>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___patrolPaths = value;
}
constexpr ::UnityW<::UnityEngine::BoxCollider>& GlobalNamespace::GhostReactorLevelSection::__cordl_internal_get_boundingCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boundingCollider;
}
constexpr ::UnityW<::UnityEngine::BoxCollider> const& GlobalNamespace::GhostReactorLevelSection::__cordl_internal_get_boundingCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boundingCollider;
}
constexpr void GlobalNamespace::GhostReactorLevelSection::__cordl_internal_set_boundingCollider(::UnityW<::UnityEngine::BoxCollider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___boundingCollider = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*& GlobalNamespace::GhostReactorLevelSection::__cordl_internal_get_renderers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderers;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>* const& GlobalNamespace::GhostReactorLevelSection::__cordl_internal_get_renderers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderers;
}
constexpr void GlobalNamespace::GhostReactorLevelSection::__cordl_internal_set_renderers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___renderers = value;
}
constexpr bool& GlobalNamespace::GhostReactorLevelSection::__cordl_internal_get_hidden()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hidden;
}
constexpr bool const& GlobalNamespace::GhostReactorLevelSection::__cordl_internal_get_hidden() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hidden;
}
constexpr void GlobalNamespace::GhostReactorLevelSection::__cordl_internal_set_hidden(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hidden = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRHazardousMaterial>>*& GlobalNamespace::GhostReactorLevelSection::__cordl_internal_get_hazardousMaterials()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hazardousMaterials;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRHazardousMaterial>>* const& GlobalNamespace::GhostReactorLevelSection::__cordl_internal_get_hazardousMaterials() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hazardousMaterials;
}
constexpr void GlobalNamespace::GhostReactorLevelSection::__cordl_internal_set_hazardousMaterials(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRHazardousMaterial>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hazardousMaterials = value;
}
constexpr ::UnityW<::GlobalNamespace::GhostReactorLevelSectionConnector>& GlobalNamespace::GhostReactorLevelSection::__cordl_internal_get_sectionConnector()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sectionConnector;
}
constexpr ::UnityW<::GlobalNamespace::GhostReactorLevelSectionConnector> const& GlobalNamespace::GhostReactorLevelSection::__cordl_internal_get_sectionConnector() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sectionConnector;
}
constexpr void GlobalNamespace::GhostReactorLevelSection::__cordl_internal_set_sectionConnector(::UnityW<::GlobalNamespace::GhostReactorLevelSectionConnector>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sectionConnector = value;
}
constexpr int32_t& GlobalNamespace::GhostReactorLevelSection::__cordl_internal_get_hubAnchorIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hubAnchorIndex;
}
constexpr int32_t const& GlobalNamespace::GhostReactorLevelSection::__cordl_internal_get_hubAnchorIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hubAnchorIndex;
}
constexpr void GlobalNamespace::GhostReactorLevelSection::__cordl_internal_set_hubAnchorIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hubAnchorIndex = value;
}
constexpr int32_t& GlobalNamespace::GhostReactorLevelSection::__cordl_internal_get_index()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___index;
}
constexpr int32_t const& GlobalNamespace::GhostReactorLevelSection::__cordl_internal_get_index() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___index;
}
constexpr void GlobalNamespace::GhostReactorLevelSection::__cordl_internal_set_index(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___index = value;
}
constexpr ::ArrayW<::GlobalNamespace::GhostReactorLevelSection_SpawnPointGroup*>& GlobalNamespace::GhostReactorLevelSection::__cordl_internal_get_spawnPointGroupLookup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnPointGroupLookup;
}
constexpr ::ArrayW<::GlobalNamespace::GhostReactorLevelSection_SpawnPointGroup*> const& GlobalNamespace::GhostReactorLevelSection::__cordl_internal_get_spawnPointGroupLookup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnPointGroupLookup;
}
constexpr void GlobalNamespace::GhostReactorLevelSection::__cordl_internal_set_spawnPointGroupLookup(::ArrayW<::GlobalNamespace::GhostReactorLevelSection_SpawnPointGroup*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawnPointGroupLookup = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>*& GlobalNamespace::GhostReactorLevelSection::__cordl_internal_get_prePlacedGameEntities()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prePlacedGameEntities;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>* const& GlobalNamespace::GhostReactorLevelSection::__cordl_internal_get_prePlacedGameEntities() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prePlacedGameEntities;
}
constexpr void GlobalNamespace::GhostReactorLevelSection::__cordl_internal_set_prePlacedGameEntities(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prePlacedGameEntities = value;
}
constexpr int32_t& GlobalNamespace::GhostReactorLevelSection::__cordl_internal_get_rotatingIndexForRespawn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotatingIndexForRespawn;
}
constexpr int32_t const& GlobalNamespace::GhostReactorLevelSection::__cordl_internal_get_rotatingIndexForRespawn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotatingIndexForRespawn;
}
constexpr void GlobalNamespace::GhostReactorLevelSection::__cordl_internal_set_rotatingIndexForRespawn(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotatingIndexForRespawn = value;
}
inline void GlobalNamespace::GhostReactorLevelSection::setStaticF_tempCreateEntitiesList(::System::Collections::Generic::List_1<::GlobalNamespace::GameEntityCreateData>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::GlobalNamespace::GameEntityCreateData>*, "tempCreateEntitiesList", ::GlobalNamespace::GhostReactorLevelSection*>(std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::GameEntityCreateData>*>(value));
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::GameEntityCreateData>* GlobalNamespace::GhostReactorLevelSection::getStaticF_tempCreateEntitiesList()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::GlobalNamespace::GameEntityCreateData>*, "tempCreateEntitiesList", ::GlobalNamespace::GhostReactorLevelSection*>();
}
inline ::UnityW<::UnityEngine::Transform> GlobalNamespace::GhostReactorLevelSection::get_Anchor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorLevelSection*>(),
                        {"get_Anchor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* GlobalNamespace::GhostReactorLevelSection::get_Anchors()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorLevelSection*>(),
                        {"get_Anchors", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*>(this, ___internal_method);
}
inline ::GlobalNamespace::GhostReactorLevelSection_SectionType GlobalNamespace::GhostReactorLevelSection::get_Type()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorLevelSection*>(),
                        {"get_Type", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GhostReactorLevelSection_SectionType>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::BoxCollider> GlobalNamespace::GhostReactorLevelSection::get_BoundingCollider()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorLevelSection*>(),
                        {"get_BoundingCollider", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::BoxCollider>>(this, ___internal_method);
}
inline void GlobalNamespace::GhostReactorLevelSection::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorLevelSection*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GhostReactorLevelSection::RandomizeIndices(::System::Collections::Generic::List_1<int32_t>*  list, int32_t  count, ::by_ref<::GlobalNamespace::SRand>  randomGenerator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorLevelSection*>(),
                        {"RandomizeIndices", {}, {::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::SRand>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, list, count, randomGenerator);
}
inline void GlobalNamespace::GhostReactorLevelSection::InitLevelSection(int32_t  sectionIndex, ::GlobalNamespace::GhostReactor*  reactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorLevelSection*>(),
                        {"InitLevelSection", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::GhostReactor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sectionIndex, reactor);
}
inline void GlobalNamespace::GhostReactorLevelSection::SpawnSectionEntities(::by_ref<::GlobalNamespace::SRand>  randomGenerator, ::GlobalNamespace::GameEntityManager*  gameEntityManager, ::GlobalNamespace::GhostReactor*  reactor, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GhostReactorSpawnConfig>>*  spawnConfigs, float_t  respawnCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorLevelSection*>(),
                        {"SpawnSectionEntities", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::SRand>>(), ::i2c::type_of<::GlobalNamespace::GameEntityManager*>(), ::i2c::type_of<::GlobalNamespace::GhostReactor*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GhostReactorSpawnConfig>>*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, randomGenerator, gameEntityManager, reactor, spawnConfigs, respawnCount);
}
inline void GlobalNamespace::GhostReactorLevelSection::RespawnEntity(::by_ref<::GlobalNamespace::SRand>  randomGenerator, ::GlobalNamespace::GameEntityManager*  gameEntityManager, int32_t  entityId, int64_t  entityCreateData, ::GlobalNamespace::GameEntityId  createdByEntityId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorLevelSection*>(),
                        {"RespawnEntity", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::SRand>>(), ::i2c::type_of<::GlobalNamespace::GameEntityManager*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::GlobalNamespace::GameEntityId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, randomGenerator, gameEntityManager, entityId, entityCreateData, createdByEntityId);
}
inline ::UnityW<::GlobalNamespace::GRPatrolPath> GlobalNamespace::GhostReactorLevelSection::GetPatrolPath(int32_t  patrolPathIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorLevelSection*>(),
                        {"GetPatrolPath", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::GRPatrolPath>>(this, ___internal_method, patrolPathIndex);
}
inline void GlobalNamespace::GhostReactorLevelSection::Hide(bool  hide)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorLevelSection*>(),
                        {"Hide", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hide);
}
inline void GlobalNamespace::GhostReactorLevelSection::UpdateDisable(::UnityEngine::Vector3  playerPos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorLevelSection*>(),
                        {"UpdateDisable", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerPos);
}
inline float_t GlobalNamespace::GhostReactorLevelSection::GetDistSq(::UnityEngine::Vector3  pos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorLevelSection*>(),
                        {"GetDistSq", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, pos);
}
inline ::UnityW<::UnityEngine::Transform> GlobalNamespace::GhostReactorLevelSection::GetAnchor(int32_t  anchorIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorLevelSection*>(),
                        {"GetAnchor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method, anchorIndex);
}
inline void GlobalNamespace::GhostReactorLevelSection::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorLevelSection*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GhostReactorLevelSection* GlobalNamespace::GhostReactorLevelSection::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GhostReactorLevelSection*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GhostReactorLevelSection::GhostReactorLevelSection()   {
}
//  Writing Method size for method: ::GlobalNamespace::GhostReactorLevelSection_SpawnPointGroup.get_NeedsRandomization
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GhostReactorLevelSection_SpawnPointGroup::*)()>(&::GlobalNamespace::GhostReactorLevelSection_SpawnPointGroup::get_NeedsRandomization)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x584f3f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorLevelSection_SpawnPointGroup*>(),
                        {"get_NeedsRandomization", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorLevelSection_SpawnPointGroup.set_NeedsRandomization
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorLevelSection_SpawnPointGroup::*)(bool)>(&::GlobalNamespace::GhostReactorLevelSection_SpawnPointGroup::set_NeedsRandomization)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x584f3f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorLevelSection_SpawnPointGroup*>(),
                        {"set_NeedsRandomization", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorLevelSection_SpawnPointGroup.get_CurrentIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GhostReactorLevelSection_SpawnPointGroup::*)()>(&::GlobalNamespace::GhostReactorLevelSection_SpawnPointGroup::get_CurrentIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x584f400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorLevelSection_SpawnPointGroup*>(),
                        {"get_CurrentIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorLevelSection_SpawnPointGroup.set_CurrentIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorLevelSection_SpawnPointGroup::*)(int32_t)>(&::GlobalNamespace::GhostReactorLevelSection_SpawnPointGroup::set_CurrentIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x584f408;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorLevelSection_SpawnPointGroup*>(),
                        {"set_CurrentIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorLevelSection_SpawnPointGroup.get_SpawnPointIndexes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<int32_t>* (::GlobalNamespace::GhostReactorLevelSection_SpawnPointGroup::*)()>(&::GlobalNamespace::GhostReactorLevelSection_SpawnPointGroup::get_SpawnPointIndexes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x584f410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorLevelSection_SpawnPointGroup*>(),
                        {"get_SpawnPointIndexes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorLevelSection_SpawnPointGroup.set_SpawnPointIndexes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorLevelSection_SpawnPointGroup::*)(::System::Collections::Generic::List_1<int32_t>*)>(&::GlobalNamespace::GhostReactorLevelSection_SpawnPointGroup::set_SpawnPointIndexes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x584f418;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorLevelSection_SpawnPointGroup*>(),
                        {"set_SpawnPointIndexes", {}, {::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorLevelSection_SpawnPointGroup.GetNextSpawnPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::GREntitySpawnPoint> (::GlobalNamespace::GhostReactorLevelSection_SpawnPointGroup::*)()>(&::GlobalNamespace::GhostReactorLevelSection_SpawnPointGroup::GetNextSpawnPoint)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x584ecbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorLevelSection_SpawnPointGroup*>(),
                        {"GetNextSpawnPoint", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorLevelSection_SpawnPointGroup._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorLevelSection_SpawnPointGroup::*)()>(&::GlobalNamespace::GhostReactorLevelSection_SpawnPointGroup::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x584f420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorLevelSection_SpawnPointGroup*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::GhostReactorSpawnConfig_SpawnPointType& GlobalNamespace::GhostReactorLevelSection_SpawnPointGroup::__cordl_internal_get_type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___type;
}
constexpr ::GlobalNamespace::GhostReactorSpawnConfig_SpawnPointType const& GlobalNamespace::GhostReactorLevelSection_SpawnPointGroup::__cordl_internal_get_type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___type;
}
constexpr void GlobalNamespace::GhostReactorLevelSection_SpawnPointGroup::__cordl_internal_set_type(::GlobalNamespace::GhostReactorSpawnConfig_SpawnPointType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___type = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GREntitySpawnPoint>>*& GlobalNamespace::GhostReactorLevelSection_SpawnPointGroup::__cordl_internal_get_spawnPoints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnPoints;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GREntitySpawnPoint>>* const& GlobalNamespace::GhostReactorLevelSection_SpawnPointGroup::__cordl_internal_get_spawnPoints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnPoints;
}
constexpr void GlobalNamespace::GhostReactorLevelSection_SpawnPointGroup::__cordl_internal_set_spawnPoints(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GREntitySpawnPoint>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawnPoints = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& GlobalNamespace::GhostReactorLevelSection_SpawnPointGroup::__cordl_internal_get_spawnPointIndexes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnPointIndexes;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& GlobalNamespace::GhostReactorLevelSection_SpawnPointGroup::__cordl_internal_get_spawnPointIndexes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnPointIndexes;
}
constexpr void GlobalNamespace::GhostReactorLevelSection_SpawnPointGroup::__cordl_internal_set_spawnPointIndexes(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawnPointIndexes = value;
}
constexpr bool& GlobalNamespace::GhostReactorLevelSection_SpawnPointGroup::__cordl_internal_get_needsRandomization()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___needsRandomization;
}
constexpr bool const& GlobalNamespace::GhostReactorLevelSection_SpawnPointGroup::__cordl_internal_get_needsRandomization() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___needsRandomization;
}
constexpr void GlobalNamespace::GhostReactorLevelSection_SpawnPointGroup::__cordl_internal_set_needsRandomization(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___needsRandomization = value;
}
constexpr int32_t& GlobalNamespace::GhostReactorLevelSection_SpawnPointGroup::__cordl_internal_get_currentIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentIndex;
}
constexpr int32_t const& GlobalNamespace::GhostReactorLevelSection_SpawnPointGroup::__cordl_internal_get_currentIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentIndex;
}
constexpr void GlobalNamespace::GhostReactorLevelSection_SpawnPointGroup::__cordl_internal_set_currentIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentIndex = value;
}
inline bool GlobalNamespace::GhostReactorLevelSection_SpawnPointGroup::get_NeedsRandomization()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorLevelSection_SpawnPointGroup*>(),
                        {"get_NeedsRandomization", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GhostReactorLevelSection_SpawnPointGroup::set_NeedsRandomization(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorLevelSection_SpawnPointGroup*>(),
                        {"set_NeedsRandomization", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::GhostReactorLevelSection_SpawnPointGroup::get_CurrentIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorLevelSection_SpawnPointGroup*>(),
                        {"get_CurrentIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::GhostReactorLevelSection_SpawnPointGroup::set_CurrentIndex(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorLevelSection_SpawnPointGroup*>(),
                        {"set_CurrentIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<int32_t>* GlobalNamespace::GhostReactorLevelSection_SpawnPointGroup::get_SpawnPointIndexes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorLevelSection_SpawnPointGroup*>(),
                        {"get_SpawnPointIndexes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<int32_t>*>(this, ___internal_method);
}
inline void GlobalNamespace::GhostReactorLevelSection_SpawnPointGroup::set_SpawnPointIndexes(::System::Collections::Generic::List_1<int32_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorLevelSection_SpawnPointGroup*>(),
                        {"set_SpawnPointIndexes", {}, {::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::GlobalNamespace::GREntitySpawnPoint> GlobalNamespace::GhostReactorLevelSection_SpawnPointGroup::GetNextSpawnPoint()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorLevelSection_SpawnPointGroup*>(),
                        {"GetNextSpawnPoint", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::GREntitySpawnPoint>>(this, ___internal_method);
}
inline void GlobalNamespace::GhostReactorLevelSection_SpawnPointGroup::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorLevelSection_SpawnPointGroup*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GhostReactorLevelSection_SpawnPointGroup* GlobalNamespace::GhostReactorLevelSection_SpawnPointGroup::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GhostReactorLevelSection_SpawnPointGroup*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GhostReactorLevelSection_SpawnPointGroup::GhostReactorLevelSection_SpawnPointGroup()   {
}
