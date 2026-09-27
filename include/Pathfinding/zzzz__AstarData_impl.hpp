#pragma once
// IWYU pragma private; include "Pathfinding/AstarData.hpp"
#include "Pathfinding/zzzz__NavGraph_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__Type_impl.hpp"
#include "Pathfinding/zzzz__AstarData_def.hpp"
#include "GlobalNamespace/zzzz__AstarPath_def.hpp"
#include "Pathfinding/Serialization/zzzz__AstarSerializer_def.hpp"
#include "Pathfinding/Serialization/zzzz__SerializeSettings_def.hpp"
#include "Pathfinding/zzzz__AstarData_def.hpp"
#include "Pathfinding/zzzz__GraphNode_def.hpp"
#include "Pathfinding/zzzz__GridGraph_def.hpp"
#include "Pathfinding/zzzz__LayerGridGraph_def.hpp"
#include "Pathfinding/zzzz__NavGraph_def.hpp"
#include "Pathfinding/zzzz__NavMeshGraph_def.hpp"
#include "Pathfinding/zzzz__PathProcessor_GraphUpdateLock_def.hpp"
#include "Pathfinding/zzzz__PointGraph_def.hpp"
#include "Pathfinding/zzzz__RecastGraph_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/zzzz__TextAsset_def.hpp"
//  Writing Method size for method: ::Pathfinding::AstarData.get_active
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::AstarPath> (*)()>(&::Pathfinding::AstarData::get_active)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5e49f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData*>(),
                        {"get_active", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarData.get_navmesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::NavMeshGraph* (::Pathfinding::AstarData::*)()>(&::Pathfinding::AstarData::get_navmesh)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e49fa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData*>(),
                        {"get_navmesh", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarData.set_navmesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AstarData::*)(::Pathfinding::NavMeshGraph*)>(&::Pathfinding::AstarData::set_navmesh)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e49fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData*>(),
                        {"set_navmesh", {}, {::i2c::type_of<::Pathfinding::NavMeshGraph*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarData.get_gridGraph
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::GridGraph* (::Pathfinding::AstarData::*)()>(&::Pathfinding::AstarData::get_gridGraph)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e49fb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData*>(),
                        {"get_gridGraph", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarData.set_gridGraph
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AstarData::*)(::Pathfinding::GridGraph*)>(&::Pathfinding::AstarData::set_gridGraph)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e49fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData*>(),
                        {"set_gridGraph", {}, {::i2c::type_of<::Pathfinding::GridGraph*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarData.get_layerGridGraph
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::LayerGridGraph* (::Pathfinding::AstarData::*)()>(&::Pathfinding::AstarData::get_layerGridGraph)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e49fc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData*>(),
                        {"get_layerGridGraph", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarData.set_layerGridGraph
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AstarData::*)(::Pathfinding::LayerGridGraph*)>(&::Pathfinding::AstarData::set_layerGridGraph)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e49fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData*>(),
                        {"set_layerGridGraph", {}, {::i2c::type_of<::Pathfinding::LayerGridGraph*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarData.get_pointGraph
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::PointGraph* (::Pathfinding::AstarData::*)()>(&::Pathfinding::AstarData::get_pointGraph)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e49fd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData*>(),
                        {"get_pointGraph", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarData.set_pointGraph
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AstarData::*)(::Pathfinding::PointGraph*)>(&::Pathfinding::AstarData::set_pointGraph)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e49fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData*>(),
                        {"set_pointGraph", {}, {::i2c::type_of<::Pathfinding::PointGraph*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarData.get_recastGraph
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::RecastGraph* (::Pathfinding::AstarData::*)()>(&::Pathfinding::AstarData::get_recastGraph)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e49fe8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData*>(),
                        {"get_recastGraph", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarData.set_recastGraph
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AstarData::*)(::Pathfinding::RecastGraph*)>(&::Pathfinding::AstarData::set_recastGraph)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e49ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData*>(),
                        {"set_recastGraph", {}, {::i2c::type_of<::Pathfinding::RecastGraph*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarData.get_graphTypes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Type*> (::Pathfinding::AstarData::*)()>(&::Pathfinding::AstarData::get_graphTypes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e49ff8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData*>(),
                        {"get_graphTypes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarData.set_graphTypes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AstarData::*)(::ArrayW<::System::Type*>)>(&::Pathfinding::AstarData::set_graphTypes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e4a000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData*>(),
                        {"set_graphTypes", {}, {::i2c::type_of<::ArrayW<::System::Type*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarData.get_data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Pathfinding::AstarData::*)()>(&::Pathfinding::AstarData::get_data)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5e4a008;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData*>(),
                        {"get_data", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarData.set_data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AstarData::*)(::ArrayW<uint8_t>)>(&::Pathfinding::AstarData::set_data)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e4a0a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData*>(),
                        {"set_data", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarData.GetData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Pathfinding::AstarData::*)()>(&::Pathfinding::AstarData::GetData)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e4a124;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData*>(),
                        {"GetData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarData.SetData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AstarData::*)(::ArrayW<uint8_t>)>(&::Pathfinding::AstarData::SetData)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e4a128;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData*>(),
                        {"SetData", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarData.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AstarData::*)()>(&::Pathfinding::AstarData::Awake)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5e4a12c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarData.LockGraphStructure
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AstarData::*)(bool)>(&::Pathfinding::AstarData::LockGraphStructure)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5e4a340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData*>(),
                        {"LockGraphStructure", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarData.UnlockGraphStructure
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AstarData::*)()>(&::Pathfinding::AstarData::UnlockGraphStructure)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5e4a3e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData*>(),
                        {"UnlockGraphStructure", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarData.AssertSafe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PathProcessor_GraphUpdateLock (::Pathfinding::AstarData::*)(bool)>(&::Pathfinding::AstarData::AssertSafe)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x5e4a484;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData*>(),
                        {"AssertSafe", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarData.GetNodes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AstarData::*)(::System::Action_1<::Pathfinding::GraphNode*>*)>(&::Pathfinding::AstarData::GetNodes)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5e4a6b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData*>(),
                        {"GetNodes", {}, {::i2c::type_of<::System::Action_1<::Pathfinding::GraphNode*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarData.UpdateShortcuts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AstarData::*)()>(&::Pathfinding::AstarData::UpdateShortcuts)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x5e4a724;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData*>(),
                        {"UpdateShortcuts", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarData.LoadFromCache
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AstarData::*)()>(&::Pathfinding::AstarData::LoadFromCache)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5e4a1e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData*>(),
                        {"LoadFromCache", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarData.SerializeGraphs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Pathfinding::AstarData::*)()>(&::Pathfinding::AstarData::SerializeGraphs)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5e4ab1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData*>(),
                        {"SerializeGraphs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarData.SerializeGraphs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Pathfinding::AstarData::*)(::Pathfinding::Serialization::SerializeSettings*)>(&::Pathfinding::AstarData::SerializeGraphs)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5e4ab50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData*>(),
                        {"SerializeGraphs", {}, {::i2c::type_of<::Pathfinding::Serialization::SerializeSettings*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarData.SerializeGraphs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Pathfinding::AstarData::*)(::Pathfinding::Serialization::SerializeSettings*, ::by_ref<uint32_t>)>(&::Pathfinding::AstarData::SerializeGraphs)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5e4ab68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData*>(),
                        {"SerializeGraphs", {}, {::i2c::type_of<::Pathfinding::Serialization::SerializeSettings*>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarData.DeserializeGraphs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AstarData::*)()>(&::Pathfinding::AstarData::DeserializeGraphs)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5e4a310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData*>(),
                        {"DeserializeGraphs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarData.ClearGraphs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AstarData::*)()>(&::Pathfinding::AstarData::ClearGraphs)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x5e4aca4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData*>(),
                        {"ClearGraphs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarData.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AstarData::*)()>(&::Pathfinding::AstarData::OnDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e4ae08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarData.DeserializeGraphs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AstarData::*)(::ArrayW<uint8_t>)>(&::Pathfinding::AstarData::DeserializeGraphs)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5e4aac8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData*>(),
                        {"DeserializeGraphs", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarData.DeserializeGraphsAdditive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AstarData::*)(::ArrayW<uint8_t>)>(&::Pathfinding::AstarData::DeserializeGraphsAdditive)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0x5e4ae0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData*>(),
                        {"DeserializeGraphsAdditive", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarData.DeserializeGraphsPartAdditive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AstarData::*)(::Pathfinding::Serialization::AstarSerializer*)>(&::Pathfinding::AstarData::DeserializeGraphsPartAdditive)> {
  constexpr static std::size_t size = 0x3f4;
  constexpr static std::size_t addrs = 0x5e4b134;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData*>(),
                        {"DeserializeGraphsPartAdditive", {}, {::i2c::type_of<::Pathfinding::Serialization::AstarSerializer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarData.FindGraphTypes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AstarData::*)()>(&::Pathfinding::AstarData::FindGraphTypes)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x5e4b528;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData*>(),
                        {"FindGraphTypes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarData.GetGraphType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::Pathfinding::AstarData::*)(::StringW)>(&::Pathfinding::AstarData::GetGraphType)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5e4b828;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData*>(),
                        {"GetGraphType", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarData.CreateGraph
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::NavGraph* (::Pathfinding::AstarData::*)(::StringW)>(&::Pathfinding::AstarData::CreateGraph)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x5e4b8c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData*>(),
                        {"CreateGraph", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarData.CreateGraph
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::NavGraph* (::Pathfinding::AstarData::*)(::System::Type*)>(&::Pathfinding::AstarData::CreateGraph)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5e4ba68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData*>(),
                        {"CreateGraph", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarData.AddGraph
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::NavGraph* (::Pathfinding::AstarData::*)(::StringW)>(&::Pathfinding::AstarData::AddGraph)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5e4bb48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData*>(),
                        {"AddGraph", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarData.AddGraph
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::NavGraph* (::Pathfinding::AstarData::*)(::System::Type*)>(&::Pathfinding::AstarData::AddGraph)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x5e4bfa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData*>(),
                        {"AddGraph", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarData.AddGraph
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AstarData::*)(::Pathfinding::NavGraph*)>(&::Pathfinding::AstarData::AddGraph)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0x5e4bc94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData*>(),
                        {"AddGraph", {}, {::i2c::type_of<::Pathfinding::NavGraph*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarData.RemoveGraph
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::AstarData::*)(::Pathfinding::NavGraph*)>(&::Pathfinding::AstarData::RemoveGraph)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5e4c1dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData*>(),
                        {"RemoveGraph", {}, {::i2c::type_of<::Pathfinding::NavGraph*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarData.GetGraph
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::NavGraph* (*)(::Pathfinding::GraphNode*)>(&::Pathfinding::AstarData::GetGraph)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5e4c328;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData*>(),
                        {"GetGraph", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarData.FindGraph
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::NavGraph* (::Pathfinding::AstarData::*)(::System::Func_2<::Pathfinding::NavGraph*,bool>*)>(&::Pathfinding::AstarData::FindGraph)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5e49980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData*>(),
                        {"FindGraph", {}, {::i2c::type_of<::System::Func_2<::Pathfinding::NavGraph*,bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarData.FindGraphOfType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::NavGraph* (::Pathfinding::AstarData::*)(::System::Type*)>(&::Pathfinding::AstarData::FindGraphOfType)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5e4aa04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData*>(),
                        {"FindGraphOfType", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarData.FindGraphWhichInheritsFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::NavGraph* (::Pathfinding::AstarData::*)(::System::Type*)>(&::Pathfinding::AstarData::FindGraphWhichInheritsFrom)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5e4c42c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData*>(),
                        {"FindGraphWhichInheritsFrom", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarData.FindGraphsOfType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerable* (::Pathfinding::AstarData::*)(::System::Type*)>(&::Pathfinding::AstarData::FindGraphsOfType)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5e4c4f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData*>(),
                        {"FindGraphsOfType", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarData.GetUpdateableGraphs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerable* (::Pathfinding::AstarData::*)()>(&::Pathfinding::AstarData::GetUpdateableGraphs)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e4c5c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData*>(),
                        {"GetUpdateableGraphs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarData.GetRaycastableGraphs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerable* (::Pathfinding::AstarData::*)()>(&::Pathfinding::AstarData::GetRaycastableGraphs)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e4c67c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData*>(),
                        {"GetRaycastableGraphs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarData.GetGraphIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::AstarData::*)(::Pathfinding::NavGraph*)>(&::Pathfinding::AstarData::GetGraphIndex)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5e4c730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData*>(),
                        {"GetGraphIndex", {}, {::i2c::type_of<::Pathfinding::NavGraph*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AstarData::*)()>(&::Pathfinding::AstarData::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5e4c824;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Pathfinding::NavMeshGraph*& Pathfinding::AstarData::__cordl_internal_get__navmesh_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____navmesh_k__BackingField;
}
constexpr ::Pathfinding::NavMeshGraph* const& Pathfinding::AstarData::__cordl_internal_get__navmesh_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____navmesh_k__BackingField;
}
constexpr void Pathfinding::AstarData::__cordl_internal_set__navmesh_k__BackingField(::Pathfinding::NavMeshGraph*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____navmesh_k__BackingField = value;
}
constexpr ::Pathfinding::GridGraph*& Pathfinding::AstarData::__cordl_internal_get__gridGraph_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gridGraph_k__BackingField;
}
constexpr ::Pathfinding::GridGraph* const& Pathfinding::AstarData::__cordl_internal_get__gridGraph_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gridGraph_k__BackingField;
}
constexpr void Pathfinding::AstarData::__cordl_internal_set__gridGraph_k__BackingField(::Pathfinding::GridGraph*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____gridGraph_k__BackingField = value;
}
constexpr ::Pathfinding::LayerGridGraph*& Pathfinding::AstarData::__cordl_internal_get__layerGridGraph_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____layerGridGraph_k__BackingField;
}
constexpr ::Pathfinding::LayerGridGraph* const& Pathfinding::AstarData::__cordl_internal_get__layerGridGraph_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____layerGridGraph_k__BackingField;
}
constexpr void Pathfinding::AstarData::__cordl_internal_set__layerGridGraph_k__BackingField(::Pathfinding::LayerGridGraph*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____layerGridGraph_k__BackingField = value;
}
constexpr ::Pathfinding::PointGraph*& Pathfinding::AstarData::__cordl_internal_get__pointGraph_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pointGraph_k__BackingField;
}
constexpr ::Pathfinding::PointGraph* const& Pathfinding::AstarData::__cordl_internal_get__pointGraph_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pointGraph_k__BackingField;
}
constexpr void Pathfinding::AstarData::__cordl_internal_set__pointGraph_k__BackingField(::Pathfinding::PointGraph*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pointGraph_k__BackingField = value;
}
constexpr ::Pathfinding::RecastGraph*& Pathfinding::AstarData::__cordl_internal_get__recastGraph_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____recastGraph_k__BackingField;
}
constexpr ::Pathfinding::RecastGraph* const& Pathfinding::AstarData::__cordl_internal_get__recastGraph_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____recastGraph_k__BackingField;
}
constexpr void Pathfinding::AstarData::__cordl_internal_set__recastGraph_k__BackingField(::Pathfinding::RecastGraph*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____recastGraph_k__BackingField = value;
}
constexpr ::ArrayW<::System::Type*>& Pathfinding::AstarData::__cordl_internal_get__graphTypes_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____graphTypes_k__BackingField;
}
constexpr ::ArrayW<::System::Type*> const& Pathfinding::AstarData::__cordl_internal_get__graphTypes_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____graphTypes_k__BackingField;
}
constexpr void Pathfinding::AstarData::__cordl_internal_set__graphTypes_k__BackingField(::ArrayW<::System::Type*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____graphTypes_k__BackingField = value;
}
constexpr ::ArrayW<::Pathfinding::NavGraph*>& Pathfinding::AstarData::__cordl_internal_get_graphs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___graphs;
}
constexpr ::ArrayW<::Pathfinding::NavGraph*> const& Pathfinding::AstarData::__cordl_internal_get_graphs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___graphs;
}
constexpr void Pathfinding::AstarData::__cordl_internal_set_graphs(::ArrayW<::Pathfinding::NavGraph*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___graphs = value;
}
constexpr ::StringW& Pathfinding::AstarData::__cordl_internal_get_dataString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dataString;
}
constexpr ::StringW const& Pathfinding::AstarData::__cordl_internal_get_dataString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dataString;
}
constexpr void Pathfinding::AstarData::__cordl_internal_set_dataString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dataString = value;
}
constexpr ::ArrayW<uint8_t>& Pathfinding::AstarData::__cordl_internal_get_upgradeData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upgradeData;
}
constexpr ::ArrayW<uint8_t> const& Pathfinding::AstarData::__cordl_internal_get_upgradeData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upgradeData;
}
constexpr void Pathfinding::AstarData::__cordl_internal_set_upgradeData(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___upgradeData = value;
}
constexpr ::UnityW<::UnityEngine::TextAsset>& Pathfinding::AstarData::__cordl_internal_get_file_cachedStartup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___file_cachedStartup;
}
constexpr ::UnityW<::UnityEngine::TextAsset> const& Pathfinding::AstarData::__cordl_internal_get_file_cachedStartup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___file_cachedStartup;
}
constexpr void Pathfinding::AstarData::__cordl_internal_set_file_cachedStartup(::UnityW<::UnityEngine::TextAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___file_cachedStartup = value;
}
constexpr ::ArrayW<uint8_t>& Pathfinding::AstarData::__cordl_internal_get_data_cachedStartup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data_cachedStartup;
}
constexpr ::ArrayW<uint8_t> const& Pathfinding::AstarData::__cordl_internal_get_data_cachedStartup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data_cachedStartup;
}
constexpr void Pathfinding::AstarData::__cordl_internal_set_data_cachedStartup(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data_cachedStartup = value;
}
constexpr bool& Pathfinding::AstarData::__cordl_internal_get_cacheStartup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cacheStartup;
}
constexpr bool const& Pathfinding::AstarData::__cordl_internal_get_cacheStartup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cacheStartup;
}
constexpr void Pathfinding::AstarData::__cordl_internal_set_cacheStartup(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cacheStartup = value;
}
constexpr ::System::Collections::Generic::List_1<bool>*& Pathfinding::AstarData::__cordl_internal_get_graphStructureLocked()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___graphStructureLocked;
}
constexpr ::System::Collections::Generic::List_1<bool>* const& Pathfinding::AstarData::__cordl_internal_get_graphStructureLocked() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___graphStructureLocked;
}
constexpr void Pathfinding::AstarData::__cordl_internal_set_graphStructureLocked(::System::Collections::Generic::List_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___graphStructureLocked = value;
}
inline ::UnityW<::GlobalNamespace::AstarPath> Pathfinding::AstarData::get_active()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData*>(),
                        {"get_active", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::AstarPath>>(nullptr, ___internal_method);
}
inline ::Pathfinding::NavMeshGraph* Pathfinding::AstarData::get_navmesh()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData*>(),
                        {"get_navmesh", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::NavMeshGraph*>(this, ___internal_method);
}
inline void Pathfinding::AstarData::set_navmesh(::Pathfinding::NavMeshGraph*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData*>(),
                        {"set_navmesh", {}, {::i2c::type_of<::Pathfinding::NavMeshGraph*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Pathfinding::GridGraph* Pathfinding::AstarData::get_gridGraph()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData*>(),
                        {"get_gridGraph", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::GridGraph*>(this, ___internal_method);
}
inline void Pathfinding::AstarData::set_gridGraph(::Pathfinding::GridGraph*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData*>(),
                        {"set_gridGraph", {}, {::i2c::type_of<::Pathfinding::GridGraph*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Pathfinding::LayerGridGraph* Pathfinding::AstarData::get_layerGridGraph()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData*>(),
                        {"get_layerGridGraph", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::LayerGridGraph*>(this, ___internal_method);
}
inline void Pathfinding::AstarData::set_layerGridGraph(::Pathfinding::LayerGridGraph*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData*>(),
                        {"set_layerGridGraph", {}, {::i2c::type_of<::Pathfinding::LayerGridGraph*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Pathfinding::PointGraph* Pathfinding::AstarData::get_pointGraph()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData*>(),
                        {"get_pointGraph", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::PointGraph*>(this, ___internal_method);
}
inline void Pathfinding::AstarData::set_pointGraph(::Pathfinding::PointGraph*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData*>(),
                        {"set_pointGraph", {}, {::i2c::type_of<::Pathfinding::PointGraph*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Pathfinding::RecastGraph* Pathfinding::AstarData::get_recastGraph()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData*>(),
                        {"get_recastGraph", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::RecastGraph*>(this, ___internal_method);
}
inline void Pathfinding::AstarData::set_recastGraph(::Pathfinding::RecastGraph*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData*>(),
                        {"set_recastGraph", {}, {::i2c::type_of<::Pathfinding::RecastGraph*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::System::Type*> Pathfinding::AstarData::get_graphTypes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData*>(),
                        {"get_graphTypes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Type*>>(this, ___internal_method);
}
inline void Pathfinding::AstarData::set_graphTypes(::ArrayW<::System::Type*>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData*>(),
                        {"set_graphTypes", {}, {::i2c::type_of<::ArrayW<::System::Type*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<uint8_t> Pathfinding::AstarData::get_data()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData*>(),
                        {"get_data", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void Pathfinding::AstarData::set_data(::ArrayW<uint8_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData*>(),
                        {"set_data", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<uint8_t> Pathfinding::AstarData::GetData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData*>(),
                        {"GetData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void Pathfinding::AstarData::SetData(::ArrayW<uint8_t>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData*>(),
                        {"SetData", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void Pathfinding::AstarData::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::AstarData::LockGraphStructure(bool  allowAddingGraphs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData*>(),
                        {"LockGraphStructure", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, allowAddingGraphs);
}
inline void Pathfinding::AstarData::UnlockGraphStructure()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData*>(),
                        {"UnlockGraphStructure", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PathProcessor_GraphUpdateLock Pathfinding::AstarData::AssertSafe(bool  onlyAddingGraph)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData*>(),
                        {"AssertSafe", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PathProcessor_GraphUpdateLock>(this, ___internal_method, onlyAddingGraph);
}
inline void Pathfinding::AstarData::GetNodes(::System::Action_1<::Pathfinding::GraphNode*>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData*>(),
                        {"GetNodes", {}, {::i2c::type_of<::System::Action_1<::Pathfinding::GraphNode*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
inline void Pathfinding::AstarData::UpdateShortcuts()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData*>(),
                        {"UpdateShortcuts", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::AstarData::LoadFromCache()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData*>(),
                        {"LoadFromCache", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Pathfinding::AstarData::SerializeGraphs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData*>(),
                        {"SerializeGraphs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Pathfinding::AstarData::SerializeGraphs(::Pathfinding::Serialization::SerializeSettings*  settings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData*>(),
                        {"SerializeGraphs", {}, {::i2c::type_of<::Pathfinding::Serialization::SerializeSettings*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, settings);
}
inline ::ArrayW<uint8_t> Pathfinding::AstarData::SerializeGraphs(::Pathfinding::Serialization::SerializeSettings*  settings, ::by_ref<uint32_t>  checksum)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData*>(),
                        {"SerializeGraphs", {}, {::i2c::type_of<::Pathfinding::Serialization::SerializeSettings*>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, settings, checksum);
}
inline void Pathfinding::AstarData::DeserializeGraphs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData*>(),
                        {"DeserializeGraphs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::AstarData::ClearGraphs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData*>(),
                        {"ClearGraphs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::AstarData::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::AstarData::DeserializeGraphs(::ArrayW<uint8_t>  bytes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData*>(),
                        {"DeserializeGraphs", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bytes);
}
inline void Pathfinding::AstarData::DeserializeGraphsAdditive(::ArrayW<uint8_t>  bytes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData*>(),
                        {"DeserializeGraphsAdditive", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bytes);
}
inline void Pathfinding::AstarData::DeserializeGraphsPartAdditive(::Pathfinding::Serialization::AstarSerializer*  sr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData*>(),
                        {"DeserializeGraphsPartAdditive", {}, {::i2c::type_of<::Pathfinding::Serialization::AstarSerializer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sr);
}
inline void Pathfinding::AstarData::FindGraphTypes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData*>(),
                        {"FindGraphTypes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Type* Pathfinding::AstarData::GetGraphType(::StringW  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData*>(),
                        {"GetGraphType", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, type);
}
inline ::Pathfinding::NavGraph* Pathfinding::AstarData::CreateGraph(::StringW  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData*>(),
                        {"CreateGraph", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::NavGraph*>(this, ___internal_method, type);
}
inline ::Pathfinding::NavGraph* Pathfinding::AstarData::CreateGraph(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData*>(),
                        {"CreateGraph", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::NavGraph*>(this, ___internal_method, type);
}
inline ::Pathfinding::NavGraph* Pathfinding::AstarData::AddGraph(::StringW  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData*>(),
                        {"AddGraph", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::NavGraph*>(this, ___internal_method, type);
}
inline ::Pathfinding::NavGraph* Pathfinding::AstarData::AddGraph(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData*>(),
                        {"AddGraph", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::NavGraph*>(this, ___internal_method, type);
}
inline void Pathfinding::AstarData::AddGraph(::Pathfinding::NavGraph*  graph)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData*>(),
                        {"AddGraph", {}, {::i2c::type_of<::Pathfinding::NavGraph*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, graph);
}
inline bool Pathfinding::AstarData::RemoveGraph(::Pathfinding::NavGraph*  graph)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData*>(),
                        {"RemoveGraph", {}, {::i2c::type_of<::Pathfinding::NavGraph*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, graph);
}
inline ::Pathfinding::NavGraph* Pathfinding::AstarData::GetGraph(::Pathfinding::GraphNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData*>(),
                        {"GetGraph", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::NavGraph*>(nullptr, ___internal_method, node);
}
inline ::Pathfinding::NavGraph* Pathfinding::AstarData::FindGraph(::System::Func_2<::Pathfinding::NavGraph*,bool>*  predicate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData*>(),
                        {"FindGraph", {}, {::i2c::type_of<::System::Func_2<::Pathfinding::NavGraph*,bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::NavGraph*>(this, ___internal_method, predicate);
}
inline ::Pathfinding::NavGraph* Pathfinding::AstarData::FindGraphOfType(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData*>(),
                        {"FindGraphOfType", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::NavGraph*>(this, ___internal_method, type);
}
inline ::Pathfinding::NavGraph* Pathfinding::AstarData::FindGraphWhichInheritsFrom(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData*>(),
                        {"FindGraphWhichInheritsFrom", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::NavGraph*>(this, ___internal_method, type);
}
inline ::System::Collections::IEnumerable* Pathfinding::AstarData::FindGraphsOfType(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData*>(),
                        {"FindGraphsOfType", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerable*>(this, ___internal_method, type);
}
inline ::System::Collections::IEnumerable* Pathfinding::AstarData::GetUpdateableGraphs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData*>(),
                        {"GetUpdateableGraphs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerable*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerable* Pathfinding::AstarData::GetRaycastableGraphs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData*>(),
                        {"GetRaycastableGraphs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerable*>(this, ___internal_method);
}
inline int32_t Pathfinding::AstarData::GetGraphIndex(::Pathfinding::NavGraph*  graph)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData*>(),
                        {"GetGraphIndex", {}, {::i2c::type_of<::Pathfinding::NavGraph*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, graph);
}
inline void Pathfinding::AstarData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::AstarData* Pathfinding::AstarData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::AstarData*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::AstarData::AstarData()   {
}
//  Writing Method size for method: ::Pathfinding::AstarData__GetUpdateableGraphs_d__67._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AstarData__GetUpdateableGraphs_d__67::*)(int32_t)>(&::Pathfinding::AstarData__GetUpdateableGraphs_d__67::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5e4c648;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData__GetUpdateableGraphs_d__67*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarData__GetUpdateableGraphs_d__67.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AstarData__GetUpdateableGraphs_d__67::*)()>(&::Pathfinding::AstarData__GetUpdateableGraphs_d__67::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e4cd64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData__GetUpdateableGraphs_d__67*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarData__GetUpdateableGraphs_d__67.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::AstarData__GetUpdateableGraphs_d__67::*)()>(&::Pathfinding::AstarData__GetUpdateableGraphs_d__67::MoveNext)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5e4cd68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData__GetUpdateableGraphs_d__67*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarData__GetUpdateableGraphs_d__67.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Pathfinding::AstarData__GetUpdateableGraphs_d__67::*)()>(&::Pathfinding::AstarData__GetUpdateableGraphs_d__67::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e4ce68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData__GetUpdateableGraphs_d__67*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarData__GetUpdateableGraphs_d__67.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AstarData__GetUpdateableGraphs_d__67::*)()>(&::Pathfinding::AstarData__GetUpdateableGraphs_d__67::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5e4ce70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData__GetUpdateableGraphs_d__67*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarData__GetUpdateableGraphs_d__67.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Pathfinding::AstarData__GetUpdateableGraphs_d__67::*)()>(&::Pathfinding::AstarData__GetUpdateableGraphs_d__67::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e4cea8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData__GetUpdateableGraphs_d__67*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarData__GetUpdateableGraphs_d__67.System_Collections_Generic_IEnumerable_System_Object__GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>* (::Pathfinding::AstarData__GetUpdateableGraphs_d__67::*)()>(&::Pathfinding::AstarData__GetUpdateableGraphs_d__67::System_Collections_Generic_IEnumerable_System_Object__GetEnumerator)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5e4ceb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData__GetUpdateableGraphs_d__67*>(),
                        {"System.Collections.Generic.IEnumerable<System.Object>.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarData__GetUpdateableGraphs_d__67.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Pathfinding::AstarData__GetUpdateableGraphs_d__67::*)()>(&::Pathfinding::AstarData__GetUpdateableGraphs_d__67::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e4cf54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData__GetUpdateableGraphs_d__67*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Pathfinding::AstarData__GetUpdateableGraphs_d__67::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Pathfinding::AstarData__GetUpdateableGraphs_d__67::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Pathfinding::AstarData__GetUpdateableGraphs_d__67::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Pathfinding::AstarData__GetUpdateableGraphs_d__67::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Pathfinding::AstarData__GetUpdateableGraphs_d__67::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Pathfinding::AstarData__GetUpdateableGraphs_d__67::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr int32_t& Pathfinding::AstarData__GetUpdateableGraphs_d__67::__cordl_internal_get___l__initialThreadId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
constexpr int32_t const& Pathfinding::AstarData__GetUpdateableGraphs_d__67::__cordl_internal_get___l__initialThreadId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
constexpr void Pathfinding::AstarData__GetUpdateableGraphs_d__67::__cordl_internal_set___l__initialThreadId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____l__initialThreadId = value;
}
constexpr ::Pathfinding::AstarData*& Pathfinding::AstarData__GetUpdateableGraphs_d__67::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Pathfinding::AstarData* const& Pathfinding::AstarData__GetUpdateableGraphs_d__67::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Pathfinding::AstarData__GetUpdateableGraphs_d__67::__cordl_internal_set___4__this(::Pathfinding::AstarData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr int32_t& Pathfinding::AstarData__GetUpdateableGraphs_d__67::__cordl_internal_get__i_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____i_5__2;
}
constexpr int32_t const& Pathfinding::AstarData__GetUpdateableGraphs_d__67::__cordl_internal_get__i_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____i_5__2;
}
constexpr void Pathfinding::AstarData__GetUpdateableGraphs_d__67::__cordl_internal_set__i_5__2(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____i_5__2 = value;
}
inline void Pathfinding::AstarData__GetUpdateableGraphs_d__67::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData__GetUpdateableGraphs_d__67*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Pathfinding::AstarData__GetUpdateableGraphs_d__67::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData__GetUpdateableGraphs_d__67*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Pathfinding::AstarData__GetUpdateableGraphs_d__67::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData__GetUpdateableGraphs_d__67*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Pathfinding::AstarData__GetUpdateableGraphs_d__67::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData__GetUpdateableGraphs_d__67*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Pathfinding::AstarData__GetUpdateableGraphs_d__67::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData__GetUpdateableGraphs_d__67*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Pathfinding::AstarData__GetUpdateableGraphs_d__67::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData__GetUpdateableGraphs_d__67*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Pathfinding::AstarData__GetUpdateableGraphs_d__67::System_Collections_Generic_IEnumerable_System_Object__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData__GetUpdateableGraphs_d__67*>(),
                        {"System.Collections.Generic.IEnumerable<System.Object>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Pathfinding::AstarData__GetUpdateableGraphs_d__67::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData__GetUpdateableGraphs_d__67*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Pathfinding::AstarData__GetUpdateableGraphs_d__67* Pathfinding::AstarData__GetUpdateableGraphs_d__67::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::AstarData__GetUpdateableGraphs_d__67*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Object*>"
constexpr  Pathfinding::AstarData__GetUpdateableGraphs_d__67::operator ::System::Collections::Generic::IEnumerable_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Object*>* Pathfinding::AstarData__GetUpdateableGraphs_d__67::i___System__Collections__Generic__IEnumerable_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  Pathfinding::AstarData__GetUpdateableGraphs_d__67::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* Pathfinding::AstarData__GetUpdateableGraphs_d__67::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Pathfinding::AstarData__GetUpdateableGraphs_d__67::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Pathfinding::AstarData__GetUpdateableGraphs_d__67::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Pathfinding::AstarData__GetUpdateableGraphs_d__67::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Pathfinding::AstarData__GetUpdateableGraphs_d__67::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Pathfinding::AstarData__GetUpdateableGraphs_d__67::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Pathfinding::AstarData__GetUpdateableGraphs_d__67::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Pathfinding::AstarData__GetUpdateableGraphs_d__67::AstarData__GetUpdateableGraphs_d__67()   {
}
//  Writing Method size for method: ::Pathfinding::AstarData__GetRaycastableGraphs_d__68._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AstarData__GetRaycastableGraphs_d__68::*)(int32_t)>(&::Pathfinding::AstarData__GetRaycastableGraphs_d__68::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5e4c6fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData__GetRaycastableGraphs_d__68*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarData__GetRaycastableGraphs_d__68.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AstarData__GetRaycastableGraphs_d__68::*)()>(&::Pathfinding::AstarData__GetRaycastableGraphs_d__68::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e4cb70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData__GetRaycastableGraphs_d__68*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarData__GetRaycastableGraphs_d__68.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::AstarData__GetRaycastableGraphs_d__68::*)()>(&::Pathfinding::AstarData__GetRaycastableGraphs_d__68::MoveNext)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5e4cb74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData__GetRaycastableGraphs_d__68*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarData__GetRaycastableGraphs_d__68.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Pathfinding::AstarData__GetRaycastableGraphs_d__68::*)()>(&::Pathfinding::AstarData__GetRaycastableGraphs_d__68::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e4cc74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData__GetRaycastableGraphs_d__68*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarData__GetRaycastableGraphs_d__68.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AstarData__GetRaycastableGraphs_d__68::*)()>(&::Pathfinding::AstarData__GetRaycastableGraphs_d__68::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5e4cc7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData__GetRaycastableGraphs_d__68*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarData__GetRaycastableGraphs_d__68.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Pathfinding::AstarData__GetRaycastableGraphs_d__68::*)()>(&::Pathfinding::AstarData__GetRaycastableGraphs_d__68::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e4ccb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData__GetRaycastableGraphs_d__68*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarData__GetRaycastableGraphs_d__68.System_Collections_Generic_IEnumerable_System_Object__GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>* (::Pathfinding::AstarData__GetRaycastableGraphs_d__68::*)()>(&::Pathfinding::AstarData__GetRaycastableGraphs_d__68::System_Collections_Generic_IEnumerable_System_Object__GetEnumerator)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5e4ccbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData__GetRaycastableGraphs_d__68*>(),
                        {"System.Collections.Generic.IEnumerable<System.Object>.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarData__GetRaycastableGraphs_d__68.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Pathfinding::AstarData__GetRaycastableGraphs_d__68::*)()>(&::Pathfinding::AstarData__GetRaycastableGraphs_d__68::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e4cd60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData__GetRaycastableGraphs_d__68*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Pathfinding::AstarData__GetRaycastableGraphs_d__68::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Pathfinding::AstarData__GetRaycastableGraphs_d__68::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Pathfinding::AstarData__GetRaycastableGraphs_d__68::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Pathfinding::AstarData__GetRaycastableGraphs_d__68::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Pathfinding::AstarData__GetRaycastableGraphs_d__68::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Pathfinding::AstarData__GetRaycastableGraphs_d__68::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr int32_t& Pathfinding::AstarData__GetRaycastableGraphs_d__68::__cordl_internal_get___l__initialThreadId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
constexpr int32_t const& Pathfinding::AstarData__GetRaycastableGraphs_d__68::__cordl_internal_get___l__initialThreadId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
constexpr void Pathfinding::AstarData__GetRaycastableGraphs_d__68::__cordl_internal_set___l__initialThreadId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____l__initialThreadId = value;
}
constexpr ::Pathfinding::AstarData*& Pathfinding::AstarData__GetRaycastableGraphs_d__68::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Pathfinding::AstarData* const& Pathfinding::AstarData__GetRaycastableGraphs_d__68::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Pathfinding::AstarData__GetRaycastableGraphs_d__68::__cordl_internal_set___4__this(::Pathfinding::AstarData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr int32_t& Pathfinding::AstarData__GetRaycastableGraphs_d__68::__cordl_internal_get__i_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____i_5__2;
}
constexpr int32_t const& Pathfinding::AstarData__GetRaycastableGraphs_d__68::__cordl_internal_get__i_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____i_5__2;
}
constexpr void Pathfinding::AstarData__GetRaycastableGraphs_d__68::__cordl_internal_set__i_5__2(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____i_5__2 = value;
}
inline void Pathfinding::AstarData__GetRaycastableGraphs_d__68::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData__GetRaycastableGraphs_d__68*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Pathfinding::AstarData__GetRaycastableGraphs_d__68::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData__GetRaycastableGraphs_d__68*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Pathfinding::AstarData__GetRaycastableGraphs_d__68::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData__GetRaycastableGraphs_d__68*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Pathfinding::AstarData__GetRaycastableGraphs_d__68::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData__GetRaycastableGraphs_d__68*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Pathfinding::AstarData__GetRaycastableGraphs_d__68::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData__GetRaycastableGraphs_d__68*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Pathfinding::AstarData__GetRaycastableGraphs_d__68::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData__GetRaycastableGraphs_d__68*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Pathfinding::AstarData__GetRaycastableGraphs_d__68::System_Collections_Generic_IEnumerable_System_Object__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData__GetRaycastableGraphs_d__68*>(),
                        {"System.Collections.Generic.IEnumerable<System.Object>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Pathfinding::AstarData__GetRaycastableGraphs_d__68::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData__GetRaycastableGraphs_d__68*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Pathfinding::AstarData__GetRaycastableGraphs_d__68* Pathfinding::AstarData__GetRaycastableGraphs_d__68::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::AstarData__GetRaycastableGraphs_d__68*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Object*>"
constexpr  Pathfinding::AstarData__GetRaycastableGraphs_d__68::operator ::System::Collections::Generic::IEnumerable_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Object*>* Pathfinding::AstarData__GetRaycastableGraphs_d__68::i___System__Collections__Generic__IEnumerable_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  Pathfinding::AstarData__GetRaycastableGraphs_d__68::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* Pathfinding::AstarData__GetRaycastableGraphs_d__68::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Pathfinding::AstarData__GetRaycastableGraphs_d__68::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Pathfinding::AstarData__GetRaycastableGraphs_d__68::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Pathfinding::AstarData__GetRaycastableGraphs_d__68::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Pathfinding::AstarData__GetRaycastableGraphs_d__68::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Pathfinding::AstarData__GetRaycastableGraphs_d__68::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Pathfinding::AstarData__GetRaycastableGraphs_d__68::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Pathfinding::AstarData__GetRaycastableGraphs_d__68::AstarData__GetRaycastableGraphs_d__68()   {
}
//  Writing Method size for method: ::Pathfinding::AstarData__FindGraphsOfType_d__66._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AstarData__FindGraphsOfType_d__66::*)(int32_t)>(&::Pathfinding::AstarData__FindGraphsOfType_d__66::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5e4c594;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData__FindGraphsOfType_d__66*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarData__FindGraphsOfType_d__66.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AstarData__FindGraphsOfType_d__66::*)()>(&::Pathfinding::AstarData__FindGraphsOfType_d__66::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e4c984;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData__FindGraphsOfType_d__66*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarData__FindGraphsOfType_d__66.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::AstarData__FindGraphsOfType_d__66::*)()>(&::Pathfinding::AstarData__FindGraphsOfType_d__66::MoveNext)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5e4c988;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData__FindGraphsOfType_d__66*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarData__FindGraphsOfType_d__66.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Pathfinding::AstarData__FindGraphsOfType_d__66::*)()>(&::Pathfinding::AstarData__FindGraphsOfType_d__66::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e4ca70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData__FindGraphsOfType_d__66*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarData__FindGraphsOfType_d__66.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AstarData__FindGraphsOfType_d__66::*)()>(&::Pathfinding::AstarData__FindGraphsOfType_d__66::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5e4ca78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData__FindGraphsOfType_d__66*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarData__FindGraphsOfType_d__66.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Pathfinding::AstarData__FindGraphsOfType_d__66::*)()>(&::Pathfinding::AstarData__FindGraphsOfType_d__66::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e4cab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData__FindGraphsOfType_d__66*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarData__FindGraphsOfType_d__66.System_Collections_Generic_IEnumerable_System_Object__GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>* (::Pathfinding::AstarData__FindGraphsOfType_d__66::*)()>(&::Pathfinding::AstarData__FindGraphsOfType_d__66::System_Collections_Generic_IEnumerable_System_Object__GetEnumerator)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5e4cab8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData__FindGraphsOfType_d__66*>(),
                        {"System.Collections.Generic.IEnumerable<System.Object>.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarData__FindGraphsOfType_d__66.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Pathfinding::AstarData__FindGraphsOfType_d__66::*)()>(&::Pathfinding::AstarData__FindGraphsOfType_d__66::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e4cb6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData__FindGraphsOfType_d__66*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Pathfinding::AstarData__FindGraphsOfType_d__66::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Pathfinding::AstarData__FindGraphsOfType_d__66::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Pathfinding::AstarData__FindGraphsOfType_d__66::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Pathfinding::AstarData__FindGraphsOfType_d__66::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Pathfinding::AstarData__FindGraphsOfType_d__66::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Pathfinding::AstarData__FindGraphsOfType_d__66::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr int32_t& Pathfinding::AstarData__FindGraphsOfType_d__66::__cordl_internal_get___l__initialThreadId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
constexpr int32_t const& Pathfinding::AstarData__FindGraphsOfType_d__66::__cordl_internal_get___l__initialThreadId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
constexpr void Pathfinding::AstarData__FindGraphsOfType_d__66::__cordl_internal_set___l__initialThreadId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____l__initialThreadId = value;
}
constexpr ::Pathfinding::AstarData*& Pathfinding::AstarData__FindGraphsOfType_d__66::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Pathfinding::AstarData* const& Pathfinding::AstarData__FindGraphsOfType_d__66::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Pathfinding::AstarData__FindGraphsOfType_d__66::__cordl_internal_set___4__this(::Pathfinding::AstarData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::System::Type*& Pathfinding::AstarData__FindGraphsOfType_d__66::__cordl_internal_get_type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___type;
}
constexpr ::System::Type* const& Pathfinding::AstarData__FindGraphsOfType_d__66::__cordl_internal_get_type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___type;
}
constexpr void Pathfinding::AstarData__FindGraphsOfType_d__66::__cordl_internal_set_type(::System::Type*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___type = value;
}
constexpr ::System::Type*& Pathfinding::AstarData__FindGraphsOfType_d__66::__cordl_internal_get___3__type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____3__type;
}
constexpr ::System::Type* const& Pathfinding::AstarData__FindGraphsOfType_d__66::__cordl_internal_get___3__type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____3__type;
}
constexpr void Pathfinding::AstarData__FindGraphsOfType_d__66::__cordl_internal_set___3__type(::System::Type*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____3__type = value;
}
constexpr int32_t& Pathfinding::AstarData__FindGraphsOfType_d__66::__cordl_internal_get__i_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____i_5__2;
}
constexpr int32_t const& Pathfinding::AstarData__FindGraphsOfType_d__66::__cordl_internal_get__i_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____i_5__2;
}
constexpr void Pathfinding::AstarData__FindGraphsOfType_d__66::__cordl_internal_set__i_5__2(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____i_5__2 = value;
}
inline void Pathfinding::AstarData__FindGraphsOfType_d__66::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData__FindGraphsOfType_d__66*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Pathfinding::AstarData__FindGraphsOfType_d__66::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData__FindGraphsOfType_d__66*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Pathfinding::AstarData__FindGraphsOfType_d__66::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData__FindGraphsOfType_d__66*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Pathfinding::AstarData__FindGraphsOfType_d__66::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData__FindGraphsOfType_d__66*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Pathfinding::AstarData__FindGraphsOfType_d__66::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData__FindGraphsOfType_d__66*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Pathfinding::AstarData__FindGraphsOfType_d__66::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData__FindGraphsOfType_d__66*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Pathfinding::AstarData__FindGraphsOfType_d__66::System_Collections_Generic_IEnumerable_System_Object__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData__FindGraphsOfType_d__66*>(),
                        {"System.Collections.Generic.IEnumerable<System.Object>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Pathfinding::AstarData__FindGraphsOfType_d__66::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData__FindGraphsOfType_d__66*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Pathfinding::AstarData__FindGraphsOfType_d__66* Pathfinding::AstarData__FindGraphsOfType_d__66::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::AstarData__FindGraphsOfType_d__66*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Object*>"
constexpr  Pathfinding::AstarData__FindGraphsOfType_d__66::operator ::System::Collections::Generic::IEnumerable_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Object*>* Pathfinding::AstarData__FindGraphsOfType_d__66::i___System__Collections__Generic__IEnumerable_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  Pathfinding::AstarData__FindGraphsOfType_d__66::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* Pathfinding::AstarData__FindGraphsOfType_d__66::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Pathfinding::AstarData__FindGraphsOfType_d__66::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Pathfinding::AstarData__FindGraphsOfType_d__66::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Pathfinding::AstarData__FindGraphsOfType_d__66::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Pathfinding::AstarData__FindGraphsOfType_d__66::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Pathfinding::AstarData__FindGraphsOfType_d__66::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Pathfinding::AstarData__FindGraphsOfType_d__66::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Pathfinding::AstarData__FindGraphsOfType_d__66::AstarData__FindGraphsOfType_d__66()   {
}
//  Writing Method size for method: ::Pathfinding::AstarData___c__DisplayClass65_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AstarData___c__DisplayClass65_0::*)()>(&::Pathfinding::AstarData___c__DisplayClass65_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e4c4f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData___c__DisplayClass65_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarData___c__DisplayClass65_0._FindGraphWhichInheritsFrom_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::AstarData___c__DisplayClass65_0::*)(::Pathfinding::NavGraph*)>(&::Pathfinding::AstarData___c__DisplayClass65_0::_FindGraphWhichInheritsFrom_b__0)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5e4c928;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData___c__DisplayClass65_0*>(),
                        {"<FindGraphWhichInheritsFrom>b__0", {}, {::i2c::type_of<::Pathfinding::NavGraph*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Type*& Pathfinding::AstarData___c__DisplayClass65_0::__cordl_internal_get_type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___type;
}
constexpr ::System::Type* const& Pathfinding::AstarData___c__DisplayClass65_0::__cordl_internal_get_type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___type;
}
constexpr void Pathfinding::AstarData___c__DisplayClass65_0::__cordl_internal_set_type(::System::Type*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___type = value;
}
inline void Pathfinding::AstarData___c__DisplayClass65_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData___c__DisplayClass65_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Pathfinding::AstarData___c__DisplayClass65_0::_FindGraphWhichInheritsFrom_b__0(::Pathfinding::NavGraph*  graph)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData___c__DisplayClass65_0*>(),
                        {"<FindGraphWhichInheritsFrom>b__0", {}, {::i2c::type_of<::Pathfinding::NavGraph*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, graph);
}
inline ::Pathfinding::AstarData___c__DisplayClass65_0* Pathfinding::AstarData___c__DisplayClass65_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::AstarData___c__DisplayClass65_0*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::AstarData___c__DisplayClass65_0::AstarData___c__DisplayClass65_0()   {
}
//  Writing Method size for method: ::Pathfinding::AstarData___c__DisplayClass64_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AstarData___c__DisplayClass64_0::*)()>(&::Pathfinding::AstarData___c__DisplayClass64_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e4c424;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData___c__DisplayClass64_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarData___c__DisplayClass64_0._FindGraphOfType_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::AstarData___c__DisplayClass64_0::*)(::Pathfinding::NavGraph*)>(&::Pathfinding::AstarData___c__DisplayClass64_0::_FindGraphOfType_b__0)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5e4c8fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData___c__DisplayClass64_0*>(),
                        {"<FindGraphOfType>b__0", {}, {::i2c::type_of<::Pathfinding::NavGraph*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Type*& Pathfinding::AstarData___c__DisplayClass64_0::__cordl_internal_get_type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___type;
}
constexpr ::System::Type* const& Pathfinding::AstarData___c__DisplayClass64_0::__cordl_internal_get_type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___type;
}
constexpr void Pathfinding::AstarData___c__DisplayClass64_0::__cordl_internal_set_type(::System::Type*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___type = value;
}
inline void Pathfinding::AstarData___c__DisplayClass64_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData___c__DisplayClass64_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Pathfinding::AstarData___c__DisplayClass64_0::_FindGraphOfType_b__0(::Pathfinding::NavGraph*  graph)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData___c__DisplayClass64_0*>(),
                        {"<FindGraphOfType>b__0", {}, {::i2c::type_of<::Pathfinding::NavGraph*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, graph);
}
inline ::Pathfinding::AstarData___c__DisplayClass64_0* Pathfinding::AstarData___c__DisplayClass64_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::AstarData___c__DisplayClass64_0*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::AstarData___c__DisplayClass64_0::AstarData___c__DisplayClass64_0()   {
}
//  Writing Method size for method: ::Pathfinding::AstarData___c__DisplayClass53_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AstarData___c__DisplayClass53_0::*)()>(&::Pathfinding::AstarData___c__DisplayClass53_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e4b820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData___c__DisplayClass53_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarData___c__DisplayClass53_0._DeserializeGraphsPartAdditive_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AstarData___c__DisplayClass53_0::*)(::Pathfinding::GraphNode*)>(&::Pathfinding::AstarData___c__DisplayClass53_0::_DeserializeGraphsPartAdditive_b__0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e4c8dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData___c__DisplayClass53_0*>(),
                        {"<DeserializeGraphsPartAdditive>b__0", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Pathfinding::AstarData___c__DisplayClass53_0::__cordl_internal_get_i()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___i;
}
constexpr int32_t const& Pathfinding::AstarData___c__DisplayClass53_0::__cordl_internal_get_i() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___i;
}
constexpr void Pathfinding::AstarData___c__DisplayClass53_0::__cordl_internal_set_i(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___i = value;
}
inline void Pathfinding::AstarData___c__DisplayClass53_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData___c__DisplayClass53_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::AstarData___c__DisplayClass53_0::_DeserializeGraphsPartAdditive_b__0(::Pathfinding::GraphNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarData___c__DisplayClass53_0*>(),
                        {"<DeserializeGraphsPartAdditive>b__0", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline ::Pathfinding::AstarData___c__DisplayClass53_0* Pathfinding::AstarData___c__DisplayClass53_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::AstarData___c__DisplayClass53_0*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::AstarData___c__DisplayClass53_0::AstarData___c__DisplayClass53_0()   {
}
