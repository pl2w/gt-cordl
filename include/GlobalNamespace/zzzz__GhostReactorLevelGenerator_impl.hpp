#pragma once
// IWYU pragma private; include "GlobalNamespace/GhostReactorLevelGenerator.hpp"
#include "GlobalNamespace/zzzz__GhostReactorLevelGenerator_NodeType_impl.hpp"
#include "GlobalNamespace/zzzz__MonoBehaviourTick_impl.hpp"
#include "GlobalNamespace/zzzz__SRand_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "GlobalNamespace/zzzz__GhostReactorLevelGenerator_def.hpp"
#include "GlobalNamespace/zzzz__GRPatrolPath_def.hpp"
#include "GlobalNamespace/zzzz__GameEntityId_def.hpp"
#include "GlobalNamespace/zzzz__GhostReactorLevelDepthConfig_def.hpp"
#include "GlobalNamespace/zzzz__GhostReactorLevelGeneratorV2_TreeLevelConfig_def.hpp"
#include "GlobalNamespace/zzzz__GhostReactorLevelGenerator_NodeType_def.hpp"
#include "GlobalNamespace/zzzz__GhostReactorLevelGenerator_def.hpp"
#include "GlobalNamespace/zzzz__GhostReactorLevelSectionConnector_def.hpp"
#include "GlobalNamespace/zzzz__GhostReactorLevelSection_def.hpp"
#include "GlobalNamespace/zzzz__GhostReactorSpawnConfig_def.hpp"
#include "GlobalNamespace/zzzz__GhostReactor_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__BoxCollider_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GhostReactorLevelGenerator.get_TreeLevels
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::GhostReactorLevelGeneratorV2_TreeLevelConfig>* (::GlobalNamespace::GhostReactorLevelGenerator::*)()>(&::GlobalNamespace::GhostReactorLevelGenerator::get_TreeLevels)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5848478;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorLevelGenerator*>(),
                        {"get_TreeLevels", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorLevelGenerator.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorLevelGenerator::*)()>(&::GlobalNamespace::GhostReactorLevelGenerator::Awake)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x5848788;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorLevelGenerator*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorLevelGenerator.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorLevelGenerator::*)(::GlobalNamespace::GhostReactor*)>(&::GlobalNamespace::GhostReactorLevelGenerator::Init)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x584894c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorLevelGenerator*>(),
                        {"Init", {}, {::i2c::type_of<::GlobalNamespace::GhostReactor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorLevelGenerator.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorLevelGenerator::*)()>(&::GlobalNamespace::GhostReactorLevelGenerator::Tick)> {
  constexpr static std::size_t size = 0x358;
  constexpr static std::size_t addrs = 0x5848954;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GhostReactorLevelGenerator*>(),
                    {::i2c::class_of<::GlobalNamespace::GhostReactorLevelGenerator*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorLevelGenerator.GetTreeLevels
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::GhostReactorLevelGeneratorV2_TreeLevelConfig>* (::GlobalNamespace::GhostReactorLevelGenerator::*)()>(&::GlobalNamespace::GhostReactorLevelGenerator::GetTreeLevels)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0x584847c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorLevelGenerator*>(),
                        {"GetTreeLevels", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorLevelGenerator.TreeLevelIsEnabledNow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::GhostReactorLevelGeneratorV2_TreeLevelConfig)>(&::GlobalNamespace::GhostReactorLevelGenerator::TreeLevelIsEnabledNow)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x5848cac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorLevelGenerator*>(),
                        {"TreeLevelIsEnabledNow", {}, {::i2c::type_of<::GlobalNamespace::GhostReactorLevelGeneratorV2_TreeLevelConfig>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorLevelGenerator.TestForCollision
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GhostReactorLevelGenerator::*)(::GlobalNamespace::GhostReactorLevelSection*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, int32_t, int32_t, int32_t)>(&::GlobalNamespace::GhostReactorLevelGenerator::TestForCollision)> {
  constexpr static std::size_t size = 0xf8c;
  constexpr static std::size_t addrs = 0x5848e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorLevelGenerator*>(),
                        {"TestForCollision", {}, {::i2c::type_of<::GlobalNamespace::GhostReactorLevelSection*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorLevelGenerator.DebugGenerate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorLevelGenerator::*)()>(&::GlobalNamespace::GhostReactorLevelGenerator::DebugGenerate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5849e1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorLevelGenerator*>(),
                        {"DebugGenerate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorLevelGenerator.Generate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorLevelGenerator::*)(int32_t)>(&::GlobalNamespace::GhostReactorLevelGenerator::Generate)> {
  constexpr static std::size_t size = 0x1c34;
  constexpr static std::size_t addrs = 0x5849e24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorLevelGenerator*>(),
                        {"Generate", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorLevelGenerator.DebugClear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorLevelGenerator::*)()>(&::GlobalNamespace::GhostReactorLevelGenerator::DebugClear)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x584bebc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorLevelGenerator*>(),
                        {"DebugClear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorLevelGenerator.ClearLevelSections
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorLevelGenerator::*)()>(&::GlobalNamespace::GhostReactorLevelGenerator::ClearLevelSections)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x584ba58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorLevelGenerator*>(),
                        {"ClearLevelSections", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorLevelGenerator.SpawnEntitiesInEachSection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorLevelGenerator::*)(float_t)>(&::GlobalNamespace::GhostReactorLevelGenerator::SpawnEntitiesInEachSection)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x584bec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorLevelGenerator*>(),
                        {"SpawnEntitiesInEachSection", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorLevelGenerator.RespawnEntity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorLevelGenerator::*)(int32_t, int64_t, ::GlobalNamespace::GameEntityId)>(&::GlobalNamespace::GhostReactorLevelGenerator::RespawnEntity)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x58454ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorLevelGenerator*>(),
                        {"RespawnEntity", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::GlobalNamespace::GameEntityId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorLevelGenerator.GetPatrolPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::GRPatrolPath> (::GlobalNamespace::GhostReactorLevelGenerator::*)(int64_t)>(&::GlobalNamespace::GhostReactorLevelGenerator::GetPatrolPath)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5844b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorLevelGenerator*>(),
                        {"GetPatrolPath", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorLevelGenerator.RandomizeIndices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorLevelGenerator::*)(::by_ref<::System::Collections::Generic::List_1<int32_t>*>, int32_t)>(&::GlobalNamespace::GhostReactorLevelGenerator::RandomizeIndices)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x584bdb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorLevelGenerator*>(),
                        {"RandomizeIndices", {}, {::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<int32_t>*>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorLevelGenerator.GetExitFromCurrentSection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GhostReactorLevelGenerator::*)(::UnityEngine::Vector3, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Quaternion>, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*)>(&::GlobalNamespace::GhostReactorLevelGenerator::GetExitFromCurrentSection)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0x584c220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorLevelGenerator*>(),
                        {"GetExitFromCurrentSection", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorLevelGenerator.GetCurrentNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GhostReactorLevelGenerator_Node* (::GlobalNamespace::GhostReactorLevelGenerator::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::GhostReactorLevelGenerator::GetCurrentNode)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x584c558;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorLevelGenerator*>(),
                        {"GetCurrentNode", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorLevelGenerator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorLevelGenerator::*)()>(&::GlobalNamespace::GhostReactorLevelGenerator::_ctor)> {
  constexpr static std::size_t size = 0x11fc;
  constexpr static std::size_t addrs = 0x584c6ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorLevelGenerator*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GhostReactorLevelDepthConfig>>*& GlobalNamespace::GhostReactorLevelGenerator::__cordl_internal_get_depthConfigs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depthConfigs;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GhostReactorLevelDepthConfig>>* const& GlobalNamespace::GhostReactorLevelGenerator::__cordl_internal_get_depthConfigs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depthConfigs;
}
constexpr void GlobalNamespace::GhostReactorLevelGenerator::__cordl_internal_set_depthConfigs(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GhostReactorLevelDepthConfig>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___depthConfigs = value;
}
constexpr ::UnityW<::GlobalNamespace::GhostReactorLevelSection>& GlobalNamespace::GhostReactorLevelGenerator::__cordl_internal_get_mainHub()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mainHub;
}
constexpr ::UnityW<::GlobalNamespace::GhostReactorLevelSection> const& GlobalNamespace::GhostReactorLevelGenerator::__cordl_internal_get_mainHub() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mainHub;
}
constexpr void GlobalNamespace::GhostReactorLevelGenerator::__cordl_internal_set_mainHub(::UnityW<::GlobalNamespace::GhostReactorLevelSection>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mainHub = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GhostReactorSpawnConfig>>*& GlobalNamespace::GhostReactorLevelGenerator::__cordl_internal_get_mainHubSpawnConfigs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mainHubSpawnConfigs;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GhostReactorSpawnConfig>>* const& GlobalNamespace::GhostReactorLevelGenerator::__cordl_internal_get_mainHubSpawnConfigs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mainHubSpawnConfigs;
}
constexpr void GlobalNamespace::GhostReactorLevelGenerator::__cordl_internal_set_mainHubSpawnConfigs(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GhostReactorSpawnConfig>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mainHubSpawnConfigs = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*& GlobalNamespace::GhostReactorLevelGenerator::__cordl_internal_get_nonOverlapZones()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nonOverlapZones;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* const& GlobalNamespace::GhostReactorLevelGenerator::__cordl_internal_get_nonOverlapZones() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nonOverlapZones;
}
constexpr void GlobalNamespace::GhostReactorLevelGenerator::__cordl_internal_set_nonOverlapZones(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nonOverlapZones = value;
}
constexpr int32_t& GlobalNamespace::GhostReactorLevelGenerator::__cordl_internal_get_seed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seed;
}
constexpr int32_t const& GlobalNamespace::GhostReactorLevelGenerator::__cordl_internal_get_seed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seed;
}
constexpr void GlobalNamespace::GhostReactorLevelGenerator::__cordl_internal_set_seed(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___seed = value;
}
constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::GlobalNamespace::GhostReactorLevelGenerator_Node*>*>*& GlobalNamespace::GhostReactorLevelGenerator::__cordl_internal_get_nodeTree()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodeTree;
}
constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::GlobalNamespace::GhostReactorLevelGenerator_Node*>*>* const& GlobalNamespace::GhostReactorLevelGenerator::__cordl_internal_get_nodeTree() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodeTree;
}
constexpr void GlobalNamespace::GhostReactorLevelGenerator::__cordl_internal_set_nodeTree(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::GlobalNamespace::GhostReactorLevelGenerator_Node*>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nodeTree = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GhostReactorLevelGenerator_Node*>*& GlobalNamespace::GhostReactorLevelGenerator::__cordl_internal_get_nodeList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodeList;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GhostReactorLevelGenerator_Node*>* const& GlobalNamespace::GhostReactorLevelGenerator::__cordl_internal_get_nodeList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodeList;
}
constexpr void GlobalNamespace::GhostReactorLevelGenerator::__cordl_internal_set_nodeList(::System::Collections::Generic::List_1<::GlobalNamespace::GhostReactorLevelGenerator_Node*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nodeList = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& GlobalNamespace::GhostReactorLevelGenerator::__cordl_internal_get_spawnedHubHashSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnedHubHashSet;
}
constexpr ::System::Collections::Generic::HashSet_1<::StringW>* const& GlobalNamespace::GhostReactorLevelGenerator::__cordl_internal_get_spawnedHubHashSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnedHubHashSet;
}
constexpr void GlobalNamespace::GhostReactorLevelGenerator::__cordl_internal_set_spawnedHubHashSet(::System::Collections::Generic::HashSet_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawnedHubHashSet = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& GlobalNamespace::GhostReactorLevelGenerator::__cordl_internal_get_hubOrder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hubOrder;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& GlobalNamespace::GhostReactorLevelGenerator::__cordl_internal_get_hubOrder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hubOrder;
}
constexpr void GlobalNamespace::GhostReactorLevelGenerator::__cordl_internal_set_hubOrder(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hubOrder = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& GlobalNamespace::GhostReactorLevelGenerator::__cordl_internal_get_connectorOrder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connectorOrder;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& GlobalNamespace::GhostReactorLevelGenerator::__cordl_internal_get_connectorOrder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connectorOrder;
}
constexpr void GlobalNamespace::GhostReactorLevelGenerator::__cordl_internal_set_connectorOrder(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___connectorOrder = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& GlobalNamespace::GhostReactorLevelGenerator::__cordl_internal_get_endCapOrder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endCapOrder;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& GlobalNamespace::GhostReactorLevelGenerator::__cordl_internal_get_endCapOrder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endCapOrder;
}
constexpr void GlobalNamespace::GhostReactorLevelGenerator::__cordl_internal_set_endCapOrder(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___endCapOrder = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& GlobalNamespace::GhostReactorLevelGenerator::__cordl_internal_get_blockerOrder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blockerOrder;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& GlobalNamespace::GhostReactorLevelGenerator::__cordl_internal_get_blockerOrder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blockerOrder;
}
constexpr void GlobalNamespace::GhostReactorLevelGenerator::__cordl_internal_set_blockerOrder(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blockerOrder = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& GlobalNamespace::GhostReactorLevelGenerator::__cordl_internal_get_entryAnchorOrder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entryAnchorOrder;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& GlobalNamespace::GhostReactorLevelGenerator::__cordl_internal_get_entryAnchorOrder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entryAnchorOrder;
}
constexpr void GlobalNamespace::GhostReactorLevelGenerator::__cordl_internal_set_entryAnchorOrder(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___entryAnchorOrder = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*& GlobalNamespace::GhostReactorLevelGenerator::__cordl_internal_get_treeParents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___treeParents;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* const& GlobalNamespace::GhostReactorLevelGenerator::__cordl_internal_get_treeParents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___treeParents;
}
constexpr void GlobalNamespace::GhostReactorLevelGenerator::__cordl_internal_set_treeParents(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___treeParents = value;
}
constexpr ::StringW& GlobalNamespace::GhostReactorLevelGenerator::__cordl_internal_get_generationOutput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___generationOutput;
}
constexpr ::StringW const& GlobalNamespace::GhostReactorLevelGenerator::__cordl_internal_get_generationOutput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___generationOutput;
}
constexpr void GlobalNamespace::GhostReactorLevelGenerator::__cordl_internal_set_generationOutput(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___generationOutput = value;
}
constexpr ::GlobalNamespace::SRand& GlobalNamespace::GhostReactorLevelGenerator::__cordl_internal_get_randomGenerator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___randomGenerator;
}
constexpr ::GlobalNamespace::SRand const& GlobalNamespace::GhostReactorLevelGenerator::__cordl_internal_get_randomGenerator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___randomGenerator;
}
constexpr void GlobalNamespace::GhostReactorLevelGenerator::__cordl_internal_set_randomGenerator(::GlobalNamespace::SRand  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___randomGenerator = value;
}
constexpr ::UnityW<::UnityEngine::BoxCollider>& GlobalNamespace::GhostReactorLevelGenerator::__cordl_internal_get_testColliderA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___testColliderA;
}
constexpr ::UnityW<::UnityEngine::BoxCollider> const& GlobalNamespace::GhostReactorLevelGenerator::__cordl_internal_get_testColliderA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___testColliderA;
}
constexpr void GlobalNamespace::GhostReactorLevelGenerator::__cordl_internal_set_testColliderA(::UnityW<::UnityEngine::BoxCollider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___testColliderA = value;
}
constexpr ::UnityW<::UnityEngine::BoxCollider>& GlobalNamespace::GhostReactorLevelGenerator::__cordl_internal_get_testColliderB()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___testColliderB;
}
constexpr ::UnityW<::UnityEngine::BoxCollider> const& GlobalNamespace::GhostReactorLevelGenerator::__cordl_internal_get_testColliderB() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___testColliderB;
}
constexpr void GlobalNamespace::GhostReactorLevelGenerator::__cordl_internal_set_testColliderB(::UnityW<::UnityEngine::BoxCollider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___testColliderB = value;
}
constexpr ::UnityW<::GlobalNamespace::GhostReactor>& GlobalNamespace::GhostReactorLevelGenerator::__cordl_internal_get_reactor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reactor;
}
constexpr ::UnityW<::GlobalNamespace::GhostReactor> const& GlobalNamespace::GhostReactorLevelGenerator::__cordl_internal_get_reactor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reactor;
}
constexpr void GlobalNamespace::GhostReactorLevelGenerator::__cordl_internal_set_reactor(::UnityW<::GlobalNamespace::GhostReactor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reactor = value;
}
constexpr int32_t& GlobalNamespace::GhostReactorLevelGenerator::__cordl_internal_get_depthConfigIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depthConfigIndex;
}
constexpr int32_t const& GlobalNamespace::GhostReactorLevelGenerator::__cordl_internal_get_depthConfigIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depthConfigIndex;
}
constexpr void GlobalNamespace::GhostReactorLevelGenerator::__cordl_internal_set_depthConfigIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___depthConfigIndex = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::GhostReactorLevelGenerator::__cordl_internal_get_flip180()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flip180;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::GhostReactorLevelGenerator::__cordl_internal_get_flip180() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flip180;
}
constexpr void GlobalNamespace::GhostReactorLevelGenerator::__cordl_internal_set_flip180(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flip180 = value;
}
constexpr int32_t& GlobalNamespace::GhostReactorLevelGenerator::__cordl_internal_get_nextVisCheckNodeIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextVisCheckNodeIndex;
}
constexpr int32_t const& GlobalNamespace::GhostReactorLevelGenerator::__cordl_internal_get_nextVisCheckNodeIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextVisCheckNodeIndex;
}
constexpr void GlobalNamespace::GhostReactorLevelGenerator::__cordl_internal_set_nextVisCheckNodeIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextVisCheckNodeIndex = value;
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::GhostReactorLevelGeneratorV2_TreeLevelConfig>* GlobalNamespace::GhostReactorLevelGenerator::get_TreeLevels()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorLevelGenerator*>(),
                        {"get_TreeLevels", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::GhostReactorLevelGeneratorV2_TreeLevelConfig>*>(this, ___internal_method);
}
inline void GlobalNamespace::GhostReactorLevelGenerator::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorLevelGenerator*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GhostReactorLevelGenerator::Init(::GlobalNamespace::GhostReactor*  reactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorLevelGenerator*>(),
                        {"Init", {}, {::i2c::type_of<::GlobalNamespace::GhostReactor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reactor);
}
inline void GlobalNamespace::GhostReactorLevelGenerator::Tick()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GhostReactorLevelGenerator*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::GhostReactorLevelGeneratorV2_TreeLevelConfig>* GlobalNamespace::GhostReactorLevelGenerator::GetTreeLevels()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorLevelGenerator*>(),
                        {"GetTreeLevels", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::GhostReactorLevelGeneratorV2_TreeLevelConfig>*>(this, ___internal_method);
}
inline bool GlobalNamespace::GhostReactorLevelGenerator::TreeLevelIsEnabledNow(::GlobalNamespace::GhostReactorLevelGeneratorV2_TreeLevelConfig  treeLevel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorLevelGenerator*>(),
                        {"TreeLevelIsEnabledNow", {}, {::i2c::type_of<::GlobalNamespace::GhostReactorLevelGeneratorV2_TreeLevelConfig>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, treeLevel);
}
inline bool GlobalNamespace::GhostReactorLevelGenerator::TestForCollision(::GlobalNamespace::GhostReactorLevelSection*  section, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, int32_t  selfi, int32_t  selfj, int32_t  selfk)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorLevelGenerator*>(),
                        {"TestForCollision", {}, {::i2c::type_of<::GlobalNamespace::GhostReactorLevelSection*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, section, position, rotation, selfi, selfj, selfk);
}
inline void GlobalNamespace::GhostReactorLevelGenerator::DebugGenerate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorLevelGenerator*>(),
                        {"DebugGenerate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GhostReactorLevelGenerator::Generate(int32_t  inputSeed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorLevelGenerator*>(),
                        {"Generate", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inputSeed);
}
inline void GlobalNamespace::GhostReactorLevelGenerator::DebugClear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorLevelGenerator*>(),
                        {"DebugClear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GhostReactorLevelGenerator::ClearLevelSections()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorLevelGenerator*>(),
                        {"ClearLevelSections", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GhostReactorLevelGenerator::SpawnEntitiesInEachSection(float_t  respawnCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorLevelGenerator*>(),
                        {"SpawnEntitiesInEachSection", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, respawnCount);
}
inline void GlobalNamespace::GhostReactorLevelGenerator::RespawnEntity(int32_t  entityId, int64_t  entityCreateData, ::GlobalNamespace::GameEntityId  createdByEntityId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorLevelGenerator*>(),
                        {"RespawnEntity", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::GlobalNamespace::GameEntityId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entityId, entityCreateData, createdByEntityId);
}
inline ::UnityW<::GlobalNamespace::GRPatrolPath> GlobalNamespace::GhostReactorLevelGenerator::GetPatrolPath(int64_t  createData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorLevelGenerator*>(),
                        {"GetPatrolPath", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::GRPatrolPath>>(this, ___internal_method, createData);
}
inline void GlobalNamespace::GhostReactorLevelGenerator::RandomizeIndices(::by_ref<::System::Collections::Generic::List_1<int32_t>*>  list, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorLevelGenerator*>(),
                        {"RandomizeIndices", {}, {::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<int32_t>*>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, list, count);
}
inline bool GlobalNamespace::GhostReactorLevelGenerator::GetExitFromCurrentSection(::UnityEngine::Vector3  pos, ::by_ref<::UnityEngine::Vector3>  exitPos, ::by_ref<::UnityEngine::Quaternion>  exitRot, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  connectorCorners)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorLevelGenerator*>(),
                        {"GetExitFromCurrentSection", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pos, exitPos, exitRot, connectorCorners);
}
inline ::GlobalNamespace::GhostReactorLevelGenerator_Node* GlobalNamespace::GhostReactorLevelGenerator::GetCurrentNode(::UnityEngine::Vector3  pos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorLevelGenerator*>(),
                        {"GetCurrentNode", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GhostReactorLevelGenerator_Node*>(this, ___internal_method, pos);
}
inline void GlobalNamespace::GhostReactorLevelGenerator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorLevelGenerator*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GhostReactorLevelGenerator* GlobalNamespace::GhostReactorLevelGenerator::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GhostReactorLevelGenerator*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GhostReactorLevelGenerator::GhostReactorLevelGenerator()   {
}
//  Writing Method size for method: ::GlobalNamespace::GhostReactorLevelGenerator_Node._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorLevelGenerator_Node::*)()>(&::GlobalNamespace::GhostReactorLevelGenerator_Node::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x584d8e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorLevelGenerator_Node*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::GhostReactorLevelGenerator_NodeType& GlobalNamespace::GhostReactorLevelGenerator_Node::__cordl_internal_get_type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___type;
}
constexpr ::GlobalNamespace::GhostReactorLevelGenerator_NodeType const& GlobalNamespace::GhostReactorLevelGenerator_Node::__cordl_internal_get_type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___type;
}
constexpr void GlobalNamespace::GhostReactorLevelGenerator_Node::__cordl_internal_set_type(::GlobalNamespace::GhostReactorLevelGenerator_NodeType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___type = value;
}
constexpr int32_t& GlobalNamespace::GhostReactorLevelGenerator_Node::__cordl_internal_get_configIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___configIndex;
}
constexpr int32_t const& GlobalNamespace::GhostReactorLevelGenerator_Node::__cordl_internal_get_configIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___configIndex;
}
constexpr void GlobalNamespace::GhostReactorLevelGenerator_Node::__cordl_internal_set_configIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___configIndex = value;
}
constexpr int32_t& GlobalNamespace::GhostReactorLevelGenerator_Node::__cordl_internal_get_parentAnchorIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentAnchorIndex;
}
constexpr int32_t const& GlobalNamespace::GhostReactorLevelGenerator_Node::__cordl_internal_get_parentAnchorIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentAnchorIndex;
}
constexpr void GlobalNamespace::GhostReactorLevelGenerator_Node::__cordl_internal_set_parentAnchorIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parentAnchorIndex = value;
}
constexpr int32_t& GlobalNamespace::GhostReactorLevelGenerator_Node::__cordl_internal_get_attachAnchorIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attachAnchorIndex;
}
constexpr int32_t const& GlobalNamespace::GhostReactorLevelGenerator_Node::__cordl_internal_get_attachAnchorIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attachAnchorIndex;
}
constexpr void GlobalNamespace::GhostReactorLevelGenerator_Node::__cordl_internal_set_attachAnchorIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___attachAnchorIndex = value;
}
constexpr int32_t& GlobalNamespace::GhostReactorLevelGenerator_Node::__cordl_internal_get_anchorCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anchorCount;
}
constexpr int32_t const& GlobalNamespace::GhostReactorLevelGenerator_Node::__cordl_internal_get_anchorCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anchorCount;
}
constexpr void GlobalNamespace::GhostReactorLevelGenerator_Node::__cordl_internal_set_anchorCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___anchorCount = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& GlobalNamespace::GhostReactorLevelGenerator_Node::__cordl_internal_get_anchorOrder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anchorOrder;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& GlobalNamespace::GhostReactorLevelGenerator_Node::__cordl_internal_get_anchorOrder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anchorOrder;
}
constexpr void GlobalNamespace::GhostReactorLevelGenerator_Node::__cordl_internal_set_anchorOrder(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___anchorOrder = value;
}
constexpr ::UnityW<::GlobalNamespace::GhostReactorLevelSection>& GlobalNamespace::GhostReactorLevelGenerator_Node::__cordl_internal_get_sectionInstance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sectionInstance;
}
constexpr ::UnityW<::GlobalNamespace::GhostReactorLevelSection> const& GlobalNamespace::GhostReactorLevelGenerator_Node::__cordl_internal_get_sectionInstance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sectionInstance;
}
constexpr void GlobalNamespace::GhostReactorLevelGenerator_Node::__cordl_internal_set_sectionInstance(::UnityW<::GlobalNamespace::GhostReactorLevelSection>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sectionInstance = value;
}
constexpr ::UnityW<::GlobalNamespace::GhostReactorLevelSectionConnector>& GlobalNamespace::GhostReactorLevelGenerator_Node::__cordl_internal_get_connectorInstance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connectorInstance;
}
constexpr ::UnityW<::GlobalNamespace::GhostReactorLevelSectionConnector> const& GlobalNamespace::GhostReactorLevelGenerator_Node::__cordl_internal_get_connectorInstance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connectorInstance;
}
constexpr void GlobalNamespace::GhostReactorLevelGenerator_Node::__cordl_internal_set_connectorInstance(::UnityW<::GlobalNamespace::GhostReactorLevelSectionConnector>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___connectorInstance = value;
}
constexpr ::ArrayW<::GlobalNamespace::GhostReactorLevelGenerator_Node*>& GlobalNamespace::GhostReactorLevelGenerator_Node::__cordl_internal_get_children()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___children;
}
constexpr ::ArrayW<::GlobalNamespace::GhostReactorLevelGenerator_Node*> const& GlobalNamespace::GhostReactorLevelGenerator_Node::__cordl_internal_get_children() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___children;
}
constexpr void GlobalNamespace::GhostReactorLevelGenerator_Node::__cordl_internal_set_children(::ArrayW<::GlobalNamespace::GhostReactorLevelGenerator_Node*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___children = value;
}
inline void GlobalNamespace::GhostReactorLevelGenerator_Node::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorLevelGenerator_Node*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GhostReactorLevelGenerator_Node* GlobalNamespace::GhostReactorLevelGenerator_Node::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GhostReactorLevelGenerator_Node*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GhostReactorLevelGenerator_Node::GhostReactorLevelGenerator_Node()   {
}
