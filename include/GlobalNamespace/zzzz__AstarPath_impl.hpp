#pragma once
// IWYU pragma private; include "GlobalNamespace/AstarPath.hpp"
#include "GlobalNamespace/zzzz__AstarPath_AstarDistribution_impl.hpp"
#include "Pathfinding/zzzz__AstarWorkItem_impl.hpp"
#include "Pathfinding/zzzz__GraphDebugMode_impl.hpp"
#include "Pathfinding/zzzz__Heuristic_impl.hpp"
#include "Pathfinding/zzzz__NavGraph_impl.hpp"
#include "Pathfinding/zzzz__PathLog_impl.hpp"
#include "Pathfinding/zzzz__PathProcessor_GraphUpdateLock_impl.hpp"
#include "Pathfinding/zzzz__Progress_impl.hpp"
#include "Pathfinding/zzzz__ThreadCount_impl.hpp"
#include "Pathfinding/zzzz__VersionedMonoBehaviour_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__AstarPath_def.hpp"
#include "GlobalNamespace/zzzz__AstarPath_AstarDistribution_def.hpp"
#include "GlobalNamespace/zzzz__AstarPath_def.hpp"
#include "Pathfinding/Util/zzzz__RetainedGizmos_def.hpp"
#include "Pathfinding/zzzz__AstarColor_def.hpp"
#include "Pathfinding/zzzz__AstarData_def.hpp"
#include "Pathfinding/zzzz__AstarWorkItem_def.hpp"
#include "Pathfinding/zzzz__EuclideanEmbedding_def.hpp"
#include "Pathfinding/zzzz__GraphNode_def.hpp"
#include "Pathfinding/zzzz__GraphUpdateObject_def.hpp"
#include "Pathfinding/zzzz__GraphUpdateProcessor_def.hpp"
#include "Pathfinding/zzzz__HierarchicalGraph_def.hpp"
#include "Pathfinding/zzzz__IWorkItemContext_def.hpp"
#include "Pathfinding/zzzz__NNConstraint_def.hpp"
#include "Pathfinding/zzzz__NNInfo_def.hpp"
#include "Pathfinding/zzzz__NavGraph_def.hpp"
#include "Pathfinding/zzzz__NavmeshUpdates_def.hpp"
#include "Pathfinding/zzzz__OnGraphDelegate_def.hpp"
#include "Pathfinding/zzzz__OnPathDelegate_def.hpp"
#include "Pathfinding/zzzz__OnScanDelegate_def.hpp"
#include "Pathfinding/zzzz__PathHandler_def.hpp"
#include "Pathfinding/zzzz__PathProcessor_GraphUpdateLock_def.hpp"
#include "Pathfinding/zzzz__PathProcessor_def.hpp"
#include "Pathfinding/zzzz__PathReturnQueue_def.hpp"
#include "Pathfinding/zzzz__Path_def.hpp"
#include "Pathfinding/zzzz__Progress_def.hpp"
#include "Pathfinding/zzzz__ThreadCount_def.hpp"
#include "Pathfinding/zzzz__WorkItemProcessor_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Diagnostics/zzzz__Stopwatch_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__Version_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Ray_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AstarPath.get_graphTypes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Type*> (::GlobalNamespace::AstarPath::*)()>(&::GlobalNamespace::AstarPath::get_graphTypes)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5e3200c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"get_graphTypes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AstarPath.get_astarData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::AstarData* (::GlobalNamespace::AstarPath::*)()>(&::GlobalNamespace::AstarPath::get_astarData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e32024;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"get_astarData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AstarPath.get_graphs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Pathfinding::NavGraph*> (::GlobalNamespace::AstarPath::*)()>(&::GlobalNamespace::AstarPath::get_graphs)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5e3202c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"get_graphs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AstarPath.get_maxNearestNodeDistanceSqr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AstarPath::*)()>(&::GlobalNamespace::AstarPath::get_maxNearestNodeDistanceSqr)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e320a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"get_maxNearestNodeDistanceSqr", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AstarPath.get_limitGraphUpdates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AstarPath::*)()>(&::GlobalNamespace::AstarPath::get_limitGraphUpdates)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e320b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"get_limitGraphUpdates", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AstarPath.set_limitGraphUpdates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AstarPath::*)(bool)>(&::GlobalNamespace::AstarPath::set_limitGraphUpdates)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e320bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"set_limitGraphUpdates", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AstarPath.get_maxGraphUpdateFreq
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AstarPath::*)()>(&::GlobalNamespace::AstarPath::get_maxGraphUpdateFreq)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e320c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"get_maxGraphUpdateFreq", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AstarPath.set_maxGraphUpdateFreq
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AstarPath::*)(float_t)>(&::GlobalNamespace::AstarPath::set_maxGraphUpdateFreq)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e320cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"set_maxGraphUpdateFreq", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AstarPath.get_lastScanTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AstarPath::*)()>(&::GlobalNamespace::AstarPath::get_lastScanTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e320d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"get_lastScanTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AstarPath.set_lastScanTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AstarPath::*)(float_t)>(&::GlobalNamespace::AstarPath::set_lastScanTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e320dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"set_lastScanTime", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AstarPath.get_isScanning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AstarPath::*)()>(&::GlobalNamespace::AstarPath::get_isScanning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e320e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"get_isScanning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AstarPath.set_isScanning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AstarPath::*)(bool)>(&::GlobalNamespace::AstarPath::set_isScanning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e320ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"set_isScanning", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AstarPath.get_NumParallelThreads
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::AstarPath::*)()>(&::GlobalNamespace::AstarPath::get_NumParallelThreads)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5e320f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"get_NumParallelThreads", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AstarPath.get_IsUsingMultithreading
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AstarPath::*)()>(&::GlobalNamespace::AstarPath::get_IsUsingMultithreading)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5e3210c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"get_IsUsingMultithreading", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AstarPath.get_IsAnyGraphUpdatesQueued
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AstarPath::*)()>(&::GlobalNamespace::AstarPath::get_IsAnyGraphUpdatesQueued)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5e32124;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"get_IsAnyGraphUpdatesQueued", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AstarPath.get_IsAnyGraphUpdateQueued
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AstarPath::*)()>(&::GlobalNamespace::AstarPath::get_IsAnyGraphUpdateQueued)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5e3213c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"get_IsAnyGraphUpdateQueued", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AstarPath.get_IsAnyGraphUpdateInProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AstarPath::*)()>(&::GlobalNamespace::AstarPath::get_IsAnyGraphUpdateInProgress)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5e32154;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"get_IsAnyGraphUpdateInProgress", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AstarPath.get_IsAnyWorkItemInProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AstarPath::*)()>(&::GlobalNamespace::AstarPath::get_IsAnyWorkItemInProgress)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5e3216c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"get_IsAnyWorkItemInProgress", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AstarPath.get_IsInsideWorkItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AstarPath::*)()>(&::GlobalNamespace::AstarPath::get_IsInsideWorkItem)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5e32184;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"get_IsInsideWorkItem", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AstarPath._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AstarPath::*)()>(&::GlobalNamespace::AstarPath::_ctor)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0x5e3219c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AstarPath.GetTagNames
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::GlobalNamespace::AstarPath::*)()>(&::GlobalNamespace::AstarPath::GetTagNames)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5e324a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"GetTagNames", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AstarPath.FindAstarPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::AstarPath::FindAstarPath)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x5e325d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"FindAstarPath", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AstarPath.FindTagNames
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (*)()>(&::GlobalNamespace::AstarPath::FindTagNames)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5e327d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"FindTagNames", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AstarPath.GetNextPathID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::GlobalNamespace::AstarPath::*)()>(&::GlobalNamespace::AstarPath::GetNextPathID)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5e328f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"GetNextPathID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AstarPath.RecalculateDebugLimits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AstarPath::*)()>(&::GlobalNamespace::AstarPath::RecalculateDebugLimits)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x5e329bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"RecalculateDebugLimits", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AstarPath.OnDrawGizmos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AstarPath::*)()>(&::GlobalNamespace::AstarPath::OnDrawGizmos)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x5e32bc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"OnDrawGizmos", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AstarPath.LogPathResults
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AstarPath::*)(::Pathfinding::Path*)>(&::GlobalNamespace::AstarPath::LogPathResults)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x5e32e5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"LogPathResults", {}, {::i2c::type_of<::Pathfinding::Path*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AstarPath.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AstarPath::*)()>(&::GlobalNamespace::AstarPath::Update)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5e32fbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AstarPath.PerformBlockingActions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AstarPath::*)(bool)>(&::GlobalNamespace::AstarPath::PerformBlockingActions)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5e3306c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"PerformBlockingActions", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AstarPath.QueueWorkItemFloodFill
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AstarPath::*)()>(&::GlobalNamespace::AstarPath::QueueWorkItemFloodFill)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5e330f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"QueueWorkItemFloodFill", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AstarPath.EnsureValidFloodFill
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AstarPath::*)()>(&::GlobalNamespace::AstarPath::EnsureValidFloodFill)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5e33144;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"EnsureValidFloodFill", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AstarPath.AddWorkItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AstarPath::*)(::System::Action*)>(&::GlobalNamespace::AstarPath::AddWorkItem)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5e33190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"AddWorkItem", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AstarPath.AddWorkItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AstarPath::*)(::System::Action_1<::Pathfinding::IWorkItemContext*>*)>(&::GlobalNamespace::AstarPath::AddWorkItem)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5e33234;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"AddWorkItem", {}, {::i2c::type_of<::System::Action_1<::Pathfinding::IWorkItemContext*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AstarPath.AddWorkItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AstarPath::*)(::Pathfinding::AstarWorkItem)>(&::GlobalNamespace::AstarPath::AddWorkItem)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5e331d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"AddWorkItem", {}, {::i2c::type_of<::Pathfinding::AstarWorkItem>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AstarPath.QueueGraphUpdates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AstarPath::*)()>(&::GlobalNamespace::AstarPath::QueueGraphUpdates)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5e33294;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"QueueGraphUpdates", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AstarPath.DelayedGraphUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::AstarPath::*)()>(&::GlobalNamespace::AstarPath::DelayedGraphUpdate)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e333c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"DelayedGraphUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AstarPath.UpdateGraphs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AstarPath::*)(::UnityEngine::Bounds, float_t)>(&::GlobalNamespace::AstarPath::UpdateGraphs)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5e33454;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"UpdateGraphs", {}, {::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AstarPath.UpdateGraphs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AstarPath::*)(::Pathfinding::GraphUpdateObject*, float_t)>(&::GlobalNamespace::AstarPath::UpdateGraphs)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e334fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"UpdateGraphs", {}, {::i2c::type_of<::Pathfinding::GraphUpdateObject*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AstarPath.UpdateGraphsInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::AstarPath::*)(::Pathfinding::GraphUpdateObject*, float_t)>(&::GlobalNamespace::AstarPath::UpdateGraphsInternal)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5e3351c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"UpdateGraphsInternal", {}, {::i2c::type_of<::Pathfinding::GraphUpdateObject*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AstarPath.UpdateGraphs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AstarPath::*)(::UnityEngine::Bounds)>(&::GlobalNamespace::AstarPath::UpdateGraphs)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5e335dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"UpdateGraphs", {}, {::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AstarPath.UpdateGraphs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AstarPath::*)(::Pathfinding::GraphUpdateObject*)>(&::GlobalNamespace::AstarPath::UpdateGraphs)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5e33664;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"UpdateGraphs", {}, {::i2c::type_of<::Pathfinding::GraphUpdateObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AstarPath.FlushGraphUpdates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AstarPath::*)()>(&::GlobalNamespace::AstarPath::FlushGraphUpdates)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5e3373c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"FlushGraphUpdates", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AstarPath.FlushWorkItems
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AstarPath::*)()>(&::GlobalNamespace::AstarPath::FlushWorkItems)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5e33778;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"FlushWorkItems", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AstarPath.FlushWorkItems
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AstarPath::*)(bool, bool)>(&::GlobalNamespace::AstarPath::FlushWorkItems)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5e337ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"FlushWorkItems", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AstarPath.FlushThreadSafeCallbacks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AstarPath::*)()>(&::GlobalNamespace::AstarPath::FlushThreadSafeCallbacks)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e33834;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"FlushThreadSafeCallbacks", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AstarPath.CalculateThreadCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Pathfinding::ThreadCount)>(&::GlobalNamespace::AstarPath::CalculateThreadCount)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x5e33838;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"CalculateThreadCount", {}, {::i2c::type_of<::Pathfinding::ThreadCount>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AstarPath.EnsureInitialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AstarPath::*)()>(&::GlobalNamespace::AstarPath::EnsureInitialized)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5e339bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"EnsureInitialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AstarPath.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AstarPath::*)()>(&::GlobalNamespace::AstarPath::Awake)> {
  constexpr static std::size_t size = 0x3b4;
  constexpr static std::size_t addrs = 0x5e339d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                    {::i2c::class_of<::GlobalNamespace::AstarPath*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AstarPath.InitializePathProcessor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AstarPath::*)()>(&::GlobalNamespace::AstarPath::InitializePathProcessor)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x5e33d88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"InitializePathProcessor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AstarPath.VerifyIntegrity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AstarPath::*)()>(&::GlobalNamespace::AstarPath::VerifyIntegrity)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x5e34410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"VerifyIntegrity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AstarPath.ConfigureReferencesInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AstarPath::*)()>(&::GlobalNamespace::AstarPath::ConfigureReferencesInternal)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5e34020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"ConfigureReferencesInternal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AstarPath.InitializeProfiler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AstarPath::*)()>(&::GlobalNamespace::AstarPath::InitializeProfiler)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e3401c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"InitializeProfiler", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AstarPath.InitializeAstarData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AstarPath::*)()>(&::GlobalNamespace::AstarPath::InitializeAstarData)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5e34120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"InitializeAstarData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AstarPath.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AstarPath::*)()>(&::GlobalNamespace::AstarPath::OnDisable)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5e34580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AstarPath.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AstarPath::*)()>(&::GlobalNamespace::AstarPath::OnDestroy)> {
  constexpr static std::size_t size = 0x3a8;
  constexpr static std::size_t addrs = 0x5e34598;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AstarPath.FloodFill
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AstarPath::*)(::Pathfinding::GraphNode*)>(&::GlobalNamespace::AstarPath::FloodFill)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e34940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"FloodFill", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AstarPath.FloodFill
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AstarPath::*)(::Pathfinding::GraphNode*, uint32_t)>(&::GlobalNamespace::AstarPath::FloodFill)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e34944;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"FloodFill", {}, {::i2c::type_of<::Pathfinding::GraphNode*>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AstarPath.FloodFill
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AstarPath::*)()>(&::GlobalNamespace::AstarPath::FloodFill)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5e34948;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"FloodFill", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AstarPath.GetNewNodeIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::AstarPath::*)()>(&::GlobalNamespace::AstarPath::GetNewNodeIndex)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5e34978;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"GetNewNodeIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AstarPath.InitializeNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AstarPath::*)(::Pathfinding::GraphNode*)>(&::GlobalNamespace::AstarPath::InitializeNode)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5e34990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"InitializeNode", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AstarPath.DestroyNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AstarPath::*)(::Pathfinding::GraphNode*)>(&::GlobalNamespace::AstarPath::DestroyNode)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5e349a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"DestroyNode", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AstarPath.BlockUntilPathQueueBlocked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AstarPath::*)()>(&::GlobalNamespace::AstarPath::BlockUntilPathQueueBlocked)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e349c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"BlockUntilPathQueueBlocked", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AstarPath.PausePathfinding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PathProcessor_GraphUpdateLock (::GlobalNamespace::AstarPath::*)()>(&::GlobalNamespace::AstarPath::PausePathfinding)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5e337d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"PausePathfinding", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AstarPath.PausePathfindingSoon
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PathProcessor_GraphUpdateLock (::GlobalNamespace::AstarPath::*)()>(&::GlobalNamespace::AstarPath::PausePathfindingSoon)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5e33278;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"PausePathfindingSoon", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AstarPath.Scan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AstarPath::*)(::Pathfinding::NavGraph*)>(&::GlobalNamespace::AstarPath::Scan)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5e349c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"Scan", {}, {::i2c::type_of<::Pathfinding::NavGraph*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AstarPath.Scan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AstarPath::*)(::ArrayW<::Pathfinding::NavGraph*>)>(&::GlobalNamespace::AstarPath::Scan)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x5e34160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"Scan", {}, {::i2c::type_of<::ArrayW<::Pathfinding::NavGraph*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AstarPath.ScanAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>* (::GlobalNamespace::AstarPath::*)(::Pathfinding::NavGraph*)>(&::GlobalNamespace::AstarPath::ScanAsync)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5e34b38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"ScanAsync", {}, {::i2c::type_of<::Pathfinding::NavGraph*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AstarPath.ScanAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>* (::GlobalNamespace::AstarPath::*)(::ArrayW<::Pathfinding::NavGraph*>)>(&::GlobalNamespace::AstarPath::ScanAsync)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5e34a9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"ScanAsync", {}, {::i2c::type_of<::ArrayW<::Pathfinding::NavGraph*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AstarPath.ScanGraph
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>* (::GlobalNamespace::AstarPath::*)(::Pathfinding::NavGraph*)>(&::GlobalNamespace::AstarPath::ScanGraph)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e34c44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"ScanGraph", {}, {::i2c::type_of<::Pathfinding::NavGraph*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AstarPath.WaitForPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Pathfinding::Path*)>(&::GlobalNamespace::AstarPath::WaitForPath)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5e34cf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"WaitForPath", {}, {::i2c::type_of<::Pathfinding::Path*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AstarPath.BlockUntilCalculated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Pathfinding::Path*)>(&::GlobalNamespace::AstarPath::BlockUntilCalculated)> {
  constexpr static std::size_t size = 0x4d4;
  constexpr static std::size_t addrs = 0x5e34d4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"BlockUntilCalculated", {}, {::i2c::type_of<::Pathfinding::Path*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AstarPath.RegisterSafeUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::AstarPath::RegisterSafeUpdate)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5e35220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"RegisterSafeUpdate", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AstarPath.StartPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Pathfinding::Path*, bool)>(&::GlobalNamespace::AstarPath::StartPath)> {
  constexpr static std::size_t size = 0x3ec;
  constexpr static std::size_t addrs = 0x5e352bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"StartPath", {}, {::i2c::type_of<::Pathfinding::Path*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AstarPath.GetNearest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::NNInfo (::GlobalNamespace::AstarPath::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::AstarPath::GetNearest)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5e356a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"GetNearest", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AstarPath.GetNearest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::NNInfo (::GlobalNamespace::AstarPath::*)(::UnityEngine::Vector3, ::Pathfinding::NNConstraint*)>(&::GlobalNamespace::AstarPath::GetNearest)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5e3575c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"GetNearest", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Pathfinding::NNConstraint*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AstarPath.GetNearest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::NNInfo (::GlobalNamespace::AstarPath::*)(::UnityEngine::Vector3, ::Pathfinding::NNConstraint*, ::Pathfinding::GraphNode*)>(&::GlobalNamespace::AstarPath::GetNearest)> {
  constexpr static std::size_t size = 0x3d8;
  constexpr static std::size_t addrs = 0x5e3578c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"GetNearest", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Pathfinding::NNConstraint*>(), ::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AstarPath.GetNearest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::GraphNode* (::GlobalNamespace::AstarPath::*)(::UnityEngine::Ray)>(&::GlobalNamespace::AstarPath::GetNearest)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x5e35b64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"GetNearest", {}, {::i2c::type_of<::UnityEngine::Ray>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AstarPath.__ctor_b__92_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AstarPath::*)()>(&::GlobalNamespace::AstarPath::__ctor_b__92_0)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5e35de4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"<.ctor>b__92_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AstarPath._InitializePathProcessor_b__123_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AstarPath::*)(::Pathfinding::Path*)>(&::GlobalNamespace::AstarPath::_InitializePathProcessor_b__123_1)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5e35e80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"<InitializePathProcessor>b__123_1", {}, {::i2c::type_of<::Pathfinding::Path*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AstarPath._InitializePathProcessor_b__123_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AstarPath::*)()>(&::GlobalNamespace::AstarPath::_InitializePathProcessor_b__123_2)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e35f18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"<InitializePathProcessor>b__123_2", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Pathfinding::AstarData*& GlobalNamespace::AstarPath::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::Pathfinding::AstarData* const& GlobalNamespace::AstarPath::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void GlobalNamespace::AstarPath::__cordl_internal_set_data(::Pathfinding::AstarData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
constexpr bool& GlobalNamespace::AstarPath::__cordl_internal_get_showNavGraphs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showNavGraphs;
}
constexpr bool const& GlobalNamespace::AstarPath::__cordl_internal_get_showNavGraphs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showNavGraphs;
}
constexpr void GlobalNamespace::AstarPath::__cordl_internal_set_showNavGraphs(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showNavGraphs = value;
}
constexpr bool& GlobalNamespace::AstarPath::__cordl_internal_get_showUnwalkableNodes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showUnwalkableNodes;
}
constexpr bool const& GlobalNamespace::AstarPath::__cordl_internal_get_showUnwalkableNodes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showUnwalkableNodes;
}
constexpr void GlobalNamespace::AstarPath::__cordl_internal_set_showUnwalkableNodes(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showUnwalkableNodes = value;
}
constexpr ::Pathfinding::GraphDebugMode& GlobalNamespace::AstarPath::__cordl_internal_get_debugMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugMode;
}
constexpr ::Pathfinding::GraphDebugMode const& GlobalNamespace::AstarPath::__cordl_internal_get_debugMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugMode;
}
constexpr void GlobalNamespace::AstarPath::__cordl_internal_set_debugMode(::Pathfinding::GraphDebugMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugMode = value;
}
constexpr float_t& GlobalNamespace::AstarPath::__cordl_internal_get_debugFloor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugFloor;
}
constexpr float_t const& GlobalNamespace::AstarPath::__cordl_internal_get_debugFloor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugFloor;
}
constexpr void GlobalNamespace::AstarPath::__cordl_internal_set_debugFloor(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugFloor = value;
}
constexpr float_t& GlobalNamespace::AstarPath::__cordl_internal_get_debugRoof()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugRoof;
}
constexpr float_t const& GlobalNamespace::AstarPath::__cordl_internal_get_debugRoof() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugRoof;
}
constexpr void GlobalNamespace::AstarPath::__cordl_internal_set_debugRoof(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugRoof = value;
}
constexpr bool& GlobalNamespace::AstarPath::__cordl_internal_get_manualDebugFloorRoof()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___manualDebugFloorRoof;
}
constexpr bool const& GlobalNamespace::AstarPath::__cordl_internal_get_manualDebugFloorRoof() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___manualDebugFloorRoof;
}
constexpr void GlobalNamespace::AstarPath::__cordl_internal_set_manualDebugFloorRoof(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___manualDebugFloorRoof = value;
}
constexpr bool& GlobalNamespace::AstarPath::__cordl_internal_get_showSearchTree()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showSearchTree;
}
constexpr bool const& GlobalNamespace::AstarPath::__cordl_internal_get_showSearchTree() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showSearchTree;
}
constexpr void GlobalNamespace::AstarPath::__cordl_internal_set_showSearchTree(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showSearchTree = value;
}
constexpr float_t& GlobalNamespace::AstarPath::__cordl_internal_get_unwalkableNodeDebugSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unwalkableNodeDebugSize;
}
constexpr float_t const& GlobalNamespace::AstarPath::__cordl_internal_get_unwalkableNodeDebugSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unwalkableNodeDebugSize;
}
constexpr void GlobalNamespace::AstarPath::__cordl_internal_set_unwalkableNodeDebugSize(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unwalkableNodeDebugSize = value;
}
constexpr ::Pathfinding::PathLog& GlobalNamespace::AstarPath::__cordl_internal_get_logPathResults()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logPathResults;
}
constexpr ::Pathfinding::PathLog const& GlobalNamespace::AstarPath::__cordl_internal_get_logPathResults() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logPathResults;
}
constexpr void GlobalNamespace::AstarPath::__cordl_internal_set_logPathResults(::Pathfinding::PathLog  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logPathResults = value;
}
constexpr float_t& GlobalNamespace::AstarPath::__cordl_internal_get_maxNearestNodeDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxNearestNodeDistance;
}
constexpr float_t const& GlobalNamespace::AstarPath::__cordl_internal_get_maxNearestNodeDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxNearestNodeDistance;
}
constexpr void GlobalNamespace::AstarPath::__cordl_internal_set_maxNearestNodeDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxNearestNodeDistance = value;
}
constexpr bool& GlobalNamespace::AstarPath::__cordl_internal_get_scanOnStartup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scanOnStartup;
}
constexpr bool const& GlobalNamespace::AstarPath::__cordl_internal_get_scanOnStartup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scanOnStartup;
}
constexpr void GlobalNamespace::AstarPath::__cordl_internal_set_scanOnStartup(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scanOnStartup = value;
}
constexpr bool& GlobalNamespace::AstarPath::__cordl_internal_get_fullGetNearestSearch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fullGetNearestSearch;
}
constexpr bool const& GlobalNamespace::AstarPath::__cordl_internal_get_fullGetNearestSearch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fullGetNearestSearch;
}
constexpr void GlobalNamespace::AstarPath::__cordl_internal_set_fullGetNearestSearch(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fullGetNearestSearch = value;
}
constexpr bool& GlobalNamespace::AstarPath::__cordl_internal_get_prioritizeGraphs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prioritizeGraphs;
}
constexpr bool const& GlobalNamespace::AstarPath::__cordl_internal_get_prioritizeGraphs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prioritizeGraphs;
}
constexpr void GlobalNamespace::AstarPath::__cordl_internal_set_prioritizeGraphs(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prioritizeGraphs = value;
}
constexpr float_t& GlobalNamespace::AstarPath::__cordl_internal_get_prioritizeGraphsLimit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prioritizeGraphsLimit;
}
constexpr float_t const& GlobalNamespace::AstarPath::__cordl_internal_get_prioritizeGraphsLimit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prioritizeGraphsLimit;
}
constexpr void GlobalNamespace::AstarPath::__cordl_internal_set_prioritizeGraphsLimit(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prioritizeGraphsLimit = value;
}
constexpr ::Pathfinding::AstarColor*& GlobalNamespace::AstarPath::__cordl_internal_get_colorSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colorSettings;
}
constexpr ::Pathfinding::AstarColor* const& GlobalNamespace::AstarPath::__cordl_internal_get_colorSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colorSettings;
}
constexpr void GlobalNamespace::AstarPath::__cordl_internal_set_colorSettings(::Pathfinding::AstarColor*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___colorSettings = value;
}
constexpr ::ArrayW<::StringW>& GlobalNamespace::AstarPath::__cordl_internal_get_tagNames()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tagNames;
}
constexpr ::ArrayW<::StringW> const& GlobalNamespace::AstarPath::__cordl_internal_get_tagNames() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tagNames;
}
constexpr void GlobalNamespace::AstarPath::__cordl_internal_set_tagNames(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tagNames = value;
}
constexpr ::Pathfinding::Heuristic& GlobalNamespace::AstarPath::__cordl_internal_get_heuristic()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heuristic;
}
constexpr ::Pathfinding::Heuristic const& GlobalNamespace::AstarPath::__cordl_internal_get_heuristic() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heuristic;
}
constexpr void GlobalNamespace::AstarPath::__cordl_internal_set_heuristic(::Pathfinding::Heuristic  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___heuristic = value;
}
constexpr float_t& GlobalNamespace::AstarPath::__cordl_internal_get_heuristicScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heuristicScale;
}
constexpr float_t const& GlobalNamespace::AstarPath::__cordl_internal_get_heuristicScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heuristicScale;
}
constexpr void GlobalNamespace::AstarPath::__cordl_internal_set_heuristicScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___heuristicScale = value;
}
constexpr ::Pathfinding::ThreadCount& GlobalNamespace::AstarPath::__cordl_internal_get_threadCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___threadCount;
}
constexpr ::Pathfinding::ThreadCount const& GlobalNamespace::AstarPath::__cordl_internal_get_threadCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___threadCount;
}
constexpr void GlobalNamespace::AstarPath::__cordl_internal_set_threadCount(::Pathfinding::ThreadCount  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___threadCount = value;
}
constexpr float_t& GlobalNamespace::AstarPath::__cordl_internal_get_maxFrameTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxFrameTime;
}
constexpr float_t const& GlobalNamespace::AstarPath::__cordl_internal_get_maxFrameTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxFrameTime;
}
constexpr void GlobalNamespace::AstarPath::__cordl_internal_set_maxFrameTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxFrameTime = value;
}
constexpr bool& GlobalNamespace::AstarPath::__cordl_internal_get_batchGraphUpdates()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___batchGraphUpdates;
}
constexpr bool const& GlobalNamespace::AstarPath::__cordl_internal_get_batchGraphUpdates() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___batchGraphUpdates;
}
constexpr void GlobalNamespace::AstarPath::__cordl_internal_set_batchGraphUpdates(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___batchGraphUpdates = value;
}
constexpr float_t& GlobalNamespace::AstarPath::__cordl_internal_get_graphUpdateBatchingInterval()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___graphUpdateBatchingInterval;
}
constexpr float_t const& GlobalNamespace::AstarPath::__cordl_internal_get_graphUpdateBatchingInterval() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___graphUpdateBatchingInterval;
}
constexpr void GlobalNamespace::AstarPath::__cordl_internal_set_graphUpdateBatchingInterval(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___graphUpdateBatchingInterval = value;
}
constexpr float_t& GlobalNamespace::AstarPath::__cordl_internal_get__lastScanTime_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastScanTime_k__BackingField;
}
constexpr float_t const& GlobalNamespace::AstarPath::__cordl_internal_get__lastScanTime_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastScanTime_k__BackingField;
}
constexpr void GlobalNamespace::AstarPath::__cordl_internal_set__lastScanTime_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastScanTime_k__BackingField = value;
}
constexpr ::Pathfinding::PathHandler*& GlobalNamespace::AstarPath::__cordl_internal_get_debugPathData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugPathData;
}
constexpr ::Pathfinding::PathHandler* const& GlobalNamespace::AstarPath::__cordl_internal_get_debugPathData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugPathData;
}
constexpr void GlobalNamespace::AstarPath::__cordl_internal_set_debugPathData(::Pathfinding::PathHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugPathData = value;
}
constexpr uint16_t& GlobalNamespace::AstarPath::__cordl_internal_get_debugPathID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugPathID;
}
constexpr uint16_t const& GlobalNamespace::AstarPath::__cordl_internal_get_debugPathID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugPathID;
}
constexpr void GlobalNamespace::AstarPath::__cordl_internal_set_debugPathID(uint16_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugPathID = value;
}
constexpr ::StringW& GlobalNamespace::AstarPath::__cordl_internal_get_inGameDebugPath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inGameDebugPath;
}
constexpr ::StringW const& GlobalNamespace::AstarPath::__cordl_internal_get_inGameDebugPath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inGameDebugPath;
}
constexpr void GlobalNamespace::AstarPath::__cordl_internal_set_inGameDebugPath(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inGameDebugPath = value;
}
constexpr bool& GlobalNamespace::AstarPath::__cordl_internal_get_isScanningBacking()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isScanningBacking;
}
constexpr bool const& GlobalNamespace::AstarPath::__cordl_internal_get_isScanningBacking() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isScanningBacking;
}
constexpr void GlobalNamespace::AstarPath::__cordl_internal_set_isScanningBacking(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isScanningBacking = value;
}
constexpr ::System::Action*& GlobalNamespace::AstarPath::__cordl_internal_get_OnGraphsWillBeUpdated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnGraphsWillBeUpdated;
}
constexpr ::System::Action* const& GlobalNamespace::AstarPath::__cordl_internal_get_OnGraphsWillBeUpdated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnGraphsWillBeUpdated;
}
constexpr void GlobalNamespace::AstarPath::__cordl_internal_set_OnGraphsWillBeUpdated(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnGraphsWillBeUpdated = value;
}
constexpr ::System::Action*& GlobalNamespace::AstarPath::__cordl_internal_get_OnGraphsWillBeUpdated2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnGraphsWillBeUpdated2;
}
constexpr ::System::Action* const& GlobalNamespace::AstarPath::__cordl_internal_get_OnGraphsWillBeUpdated2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnGraphsWillBeUpdated2;
}
constexpr void GlobalNamespace::AstarPath::__cordl_internal_set_OnGraphsWillBeUpdated2(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnGraphsWillBeUpdated2 = value;
}
constexpr ::Pathfinding::GraphUpdateProcessor*& GlobalNamespace::AstarPath::__cordl_internal_get_graphUpdates()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___graphUpdates;
}
constexpr ::Pathfinding::GraphUpdateProcessor* const& GlobalNamespace::AstarPath::__cordl_internal_get_graphUpdates() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___graphUpdates;
}
constexpr void GlobalNamespace::AstarPath::__cordl_internal_set_graphUpdates(::Pathfinding::GraphUpdateProcessor*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___graphUpdates = value;
}
constexpr ::Pathfinding::HierarchicalGraph*& GlobalNamespace::AstarPath::__cordl_internal_get_hierarchicalGraph()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hierarchicalGraph;
}
constexpr ::Pathfinding::HierarchicalGraph* const& GlobalNamespace::AstarPath::__cordl_internal_get_hierarchicalGraph() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hierarchicalGraph;
}
constexpr void GlobalNamespace::AstarPath::__cordl_internal_set_hierarchicalGraph(::Pathfinding::HierarchicalGraph*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hierarchicalGraph = value;
}
constexpr ::Pathfinding::NavmeshUpdates*& GlobalNamespace::AstarPath::__cordl_internal_get_navmeshUpdates()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___navmeshUpdates;
}
constexpr ::Pathfinding::NavmeshUpdates* const& GlobalNamespace::AstarPath::__cordl_internal_get_navmeshUpdates() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___navmeshUpdates;
}
constexpr void GlobalNamespace::AstarPath::__cordl_internal_set_navmeshUpdates(::Pathfinding::NavmeshUpdates*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___navmeshUpdates = value;
}
constexpr ::Pathfinding::WorkItemProcessor*& GlobalNamespace::AstarPath::__cordl_internal_get_workItems()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___workItems;
}
constexpr ::Pathfinding::WorkItemProcessor* const& GlobalNamespace::AstarPath::__cordl_internal_get_workItems() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___workItems;
}
constexpr void GlobalNamespace::AstarPath::__cordl_internal_set_workItems(::Pathfinding::WorkItemProcessor*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___workItems = value;
}
constexpr ::Pathfinding::PathProcessor*& GlobalNamespace::AstarPath::__cordl_internal_get_pathProcessor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pathProcessor;
}
constexpr ::Pathfinding::PathProcessor* const& GlobalNamespace::AstarPath::__cordl_internal_get_pathProcessor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pathProcessor;
}
constexpr void GlobalNamespace::AstarPath::__cordl_internal_set_pathProcessor(::Pathfinding::PathProcessor*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pathProcessor = value;
}
constexpr bool& GlobalNamespace::AstarPath::__cordl_internal_get_graphUpdateRoutineRunning()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___graphUpdateRoutineRunning;
}
constexpr bool const& GlobalNamespace::AstarPath::__cordl_internal_get_graphUpdateRoutineRunning() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___graphUpdateRoutineRunning;
}
constexpr void GlobalNamespace::AstarPath::__cordl_internal_set_graphUpdateRoutineRunning(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___graphUpdateRoutineRunning = value;
}
constexpr bool& GlobalNamespace::AstarPath::__cordl_internal_get_graphUpdatesWorkItemAdded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___graphUpdatesWorkItemAdded;
}
constexpr bool const& GlobalNamespace::AstarPath::__cordl_internal_get_graphUpdatesWorkItemAdded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___graphUpdatesWorkItemAdded;
}
constexpr void GlobalNamespace::AstarPath::__cordl_internal_set_graphUpdatesWorkItemAdded(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___graphUpdatesWorkItemAdded = value;
}
constexpr float_t& GlobalNamespace::AstarPath::__cordl_internal_get_lastGraphUpdate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastGraphUpdate;
}
constexpr float_t const& GlobalNamespace::AstarPath::__cordl_internal_get_lastGraphUpdate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastGraphUpdate;
}
constexpr void GlobalNamespace::AstarPath::__cordl_internal_set_lastGraphUpdate(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastGraphUpdate = value;
}
constexpr ::GlobalNamespace::PathProcessor_GraphUpdateLock& GlobalNamespace::AstarPath::__cordl_internal_get_workItemLock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___workItemLock;
}
constexpr ::GlobalNamespace::PathProcessor_GraphUpdateLock const& GlobalNamespace::AstarPath::__cordl_internal_get_workItemLock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___workItemLock;
}
constexpr void GlobalNamespace::AstarPath::__cordl_internal_set_workItemLock(::GlobalNamespace::PathProcessor_GraphUpdateLock  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___workItemLock = value;
}
constexpr ::Pathfinding::PathReturnQueue*& GlobalNamespace::AstarPath::__cordl_internal_get_pathReturnQueue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pathReturnQueue;
}
constexpr ::Pathfinding::PathReturnQueue* const& GlobalNamespace::AstarPath::__cordl_internal_get_pathReturnQueue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pathReturnQueue;
}
constexpr void GlobalNamespace::AstarPath::__cordl_internal_set_pathReturnQueue(::Pathfinding::PathReturnQueue*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pathReturnQueue = value;
}
constexpr ::Pathfinding::EuclideanEmbedding*& GlobalNamespace::AstarPath::__cordl_internal_get_euclideanEmbedding()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___euclideanEmbedding;
}
constexpr ::Pathfinding::EuclideanEmbedding* const& GlobalNamespace::AstarPath::__cordl_internal_get_euclideanEmbedding() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___euclideanEmbedding;
}
constexpr void GlobalNamespace::AstarPath::__cordl_internal_set_euclideanEmbedding(::Pathfinding::EuclideanEmbedding*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___euclideanEmbedding = value;
}
constexpr bool& GlobalNamespace::AstarPath::__cordl_internal_get_showGraphs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showGraphs;
}
constexpr bool const& GlobalNamespace::AstarPath::__cordl_internal_get_showGraphs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showGraphs;
}
constexpr void GlobalNamespace::AstarPath::__cordl_internal_set_showGraphs(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showGraphs = value;
}
constexpr uint16_t& GlobalNamespace::AstarPath::__cordl_internal_get_nextFreePathID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextFreePathID;
}
constexpr uint16_t const& GlobalNamespace::AstarPath::__cordl_internal_get_nextFreePathID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextFreePathID;
}
constexpr void GlobalNamespace::AstarPath::__cordl_internal_set_nextFreePathID(uint16_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextFreePathID = value;
}
constexpr ::Pathfinding::Util::RetainedGizmos*& GlobalNamespace::AstarPath::__cordl_internal_get_gizmos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gizmos;
}
constexpr ::Pathfinding::Util::RetainedGizmos* const& GlobalNamespace::AstarPath::__cordl_internal_get_gizmos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gizmos;
}
constexpr void GlobalNamespace::AstarPath::__cordl_internal_set_gizmos(::Pathfinding::Util::RetainedGizmos*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gizmos = value;
}
constexpr bool& GlobalNamespace::AstarPath::__cordl_internal_get_initialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialized;
}
constexpr bool const& GlobalNamespace::AstarPath::__cordl_internal_get_initialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialized;
}
constexpr void GlobalNamespace::AstarPath::__cordl_internal_set_initialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initialized = value;
}
inline void GlobalNamespace::AstarPath::setStaticF_Version(::System::Version*  value)  {
::cordl_internals::setStaticField<::System::Version*, "Version", ::GlobalNamespace::AstarPath*>(std::forward<::System::Version*>(value));
}
inline ::System::Version* GlobalNamespace::AstarPath::getStaticF_Version()  {
return ::cordl_internals::getStaticField<::System::Version*, "Version", ::GlobalNamespace::AstarPath*>();
}
inline void GlobalNamespace::AstarPath::setStaticF_Distribution(::GlobalNamespace::AstarPath_AstarDistribution  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::AstarPath_AstarDistribution, "Distribution", ::GlobalNamespace::AstarPath*>(std::forward<::GlobalNamespace::AstarPath_AstarDistribution>(value));
}
inline ::GlobalNamespace::AstarPath_AstarDistribution GlobalNamespace::AstarPath::getStaticF_Distribution()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::AstarPath_AstarDistribution, "Distribution", ::GlobalNamespace::AstarPath*>();
}
inline void GlobalNamespace::AstarPath::setStaticF_Branch(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "Branch", ::GlobalNamespace::AstarPath*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::AstarPath::getStaticF_Branch()  {
return ::cordl_internals::getStaticField<::StringW, "Branch", ::GlobalNamespace::AstarPath*>();
}
inline void GlobalNamespace::AstarPath::setStaticF_active(::UnityW<::GlobalNamespace::AstarPath>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::AstarPath>, "active", ::GlobalNamespace::AstarPath*>(std::forward<::UnityW<::GlobalNamespace::AstarPath>>(value));
}
inline ::UnityW<::GlobalNamespace::AstarPath> GlobalNamespace::AstarPath::getStaticF_active()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::AstarPath>, "active", ::GlobalNamespace::AstarPath*>();
}
inline void GlobalNamespace::AstarPath::setStaticF_OnAwakeSettings(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "OnAwakeSettings", ::GlobalNamespace::AstarPath*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* GlobalNamespace::AstarPath::getStaticF_OnAwakeSettings()  {
return ::cordl_internals::getStaticField<::System::Action*, "OnAwakeSettings", ::GlobalNamespace::AstarPath*>();
}
inline void GlobalNamespace::AstarPath::setStaticF_OnGraphPreScan(::Pathfinding::OnGraphDelegate*  value)  {
::cordl_internals::setStaticField<::Pathfinding::OnGraphDelegate*, "OnGraphPreScan", ::GlobalNamespace::AstarPath*>(std::forward<::Pathfinding::OnGraphDelegate*>(value));
}
inline ::Pathfinding::OnGraphDelegate* GlobalNamespace::AstarPath::getStaticF_OnGraphPreScan()  {
return ::cordl_internals::getStaticField<::Pathfinding::OnGraphDelegate*, "OnGraphPreScan", ::GlobalNamespace::AstarPath*>();
}
inline void GlobalNamespace::AstarPath::setStaticF_OnGraphPostScan(::Pathfinding::OnGraphDelegate*  value)  {
::cordl_internals::setStaticField<::Pathfinding::OnGraphDelegate*, "OnGraphPostScan", ::GlobalNamespace::AstarPath*>(std::forward<::Pathfinding::OnGraphDelegate*>(value));
}
inline ::Pathfinding::OnGraphDelegate* GlobalNamespace::AstarPath::getStaticF_OnGraphPostScan()  {
return ::cordl_internals::getStaticField<::Pathfinding::OnGraphDelegate*, "OnGraphPostScan", ::GlobalNamespace::AstarPath*>();
}
inline void GlobalNamespace::AstarPath::setStaticF_OnPathPreSearch(::Pathfinding::OnPathDelegate*  value)  {
::cordl_internals::setStaticField<::Pathfinding::OnPathDelegate*, "OnPathPreSearch", ::GlobalNamespace::AstarPath*>(std::forward<::Pathfinding::OnPathDelegate*>(value));
}
inline ::Pathfinding::OnPathDelegate* GlobalNamespace::AstarPath::getStaticF_OnPathPreSearch()  {
return ::cordl_internals::getStaticField<::Pathfinding::OnPathDelegate*, "OnPathPreSearch", ::GlobalNamespace::AstarPath*>();
}
inline void GlobalNamespace::AstarPath::setStaticF_OnPathPostSearch(::Pathfinding::OnPathDelegate*  value)  {
::cordl_internals::setStaticField<::Pathfinding::OnPathDelegate*, "OnPathPostSearch", ::GlobalNamespace::AstarPath*>(std::forward<::Pathfinding::OnPathDelegate*>(value));
}
inline ::Pathfinding::OnPathDelegate* GlobalNamespace::AstarPath::getStaticF_OnPathPostSearch()  {
return ::cordl_internals::getStaticField<::Pathfinding::OnPathDelegate*, "OnPathPostSearch", ::GlobalNamespace::AstarPath*>();
}
inline void GlobalNamespace::AstarPath::setStaticF_OnPreScan(::Pathfinding::OnScanDelegate*  value)  {
::cordl_internals::setStaticField<::Pathfinding::OnScanDelegate*, "OnPreScan", ::GlobalNamespace::AstarPath*>(std::forward<::Pathfinding::OnScanDelegate*>(value));
}
inline ::Pathfinding::OnScanDelegate* GlobalNamespace::AstarPath::getStaticF_OnPreScan()  {
return ::cordl_internals::getStaticField<::Pathfinding::OnScanDelegate*, "OnPreScan", ::GlobalNamespace::AstarPath*>();
}
inline void GlobalNamespace::AstarPath::setStaticF_OnPostScan(::Pathfinding::OnScanDelegate*  value)  {
::cordl_internals::setStaticField<::Pathfinding::OnScanDelegate*, "OnPostScan", ::GlobalNamespace::AstarPath*>(std::forward<::Pathfinding::OnScanDelegate*>(value));
}
inline ::Pathfinding::OnScanDelegate* GlobalNamespace::AstarPath::getStaticF_OnPostScan()  {
return ::cordl_internals::getStaticField<::Pathfinding::OnScanDelegate*, "OnPostScan", ::GlobalNamespace::AstarPath*>();
}
inline void GlobalNamespace::AstarPath::setStaticF_OnLatePostScan(::Pathfinding::OnScanDelegate*  value)  {
::cordl_internals::setStaticField<::Pathfinding::OnScanDelegate*, "OnLatePostScan", ::GlobalNamespace::AstarPath*>(std::forward<::Pathfinding::OnScanDelegate*>(value));
}
inline ::Pathfinding::OnScanDelegate* GlobalNamespace::AstarPath::getStaticF_OnLatePostScan()  {
return ::cordl_internals::getStaticField<::Pathfinding::OnScanDelegate*, "OnLatePostScan", ::GlobalNamespace::AstarPath*>();
}
inline void GlobalNamespace::AstarPath::setStaticF_OnGraphsUpdated(::Pathfinding::OnScanDelegate*  value)  {
::cordl_internals::setStaticField<::Pathfinding::OnScanDelegate*, "OnGraphsUpdated", ::GlobalNamespace::AstarPath*>(std::forward<::Pathfinding::OnScanDelegate*>(value));
}
inline ::Pathfinding::OnScanDelegate* GlobalNamespace::AstarPath::getStaticF_OnGraphsUpdated()  {
return ::cordl_internals::getStaticField<::Pathfinding::OnScanDelegate*, "OnGraphsUpdated", ::GlobalNamespace::AstarPath*>();
}
inline void GlobalNamespace::AstarPath::setStaticF_On65KOverflow(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "On65KOverflow", ::GlobalNamespace::AstarPath*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* GlobalNamespace::AstarPath::getStaticF_On65KOverflow()  {
return ::cordl_internals::getStaticField<::System::Action*, "On65KOverflow", ::GlobalNamespace::AstarPath*>();
}
inline void GlobalNamespace::AstarPath::setStaticF_waitForPathDepth(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "waitForPathDepth", ::GlobalNamespace::AstarPath*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::AstarPath::getStaticF_waitForPathDepth()  {
return ::cordl_internals::getStaticField<int32_t, "waitForPathDepth", ::GlobalNamespace::AstarPath*>();
}
inline void GlobalNamespace::AstarPath::setStaticF_NNConstraintNone(::Pathfinding::NNConstraint*  value)  {
::cordl_internals::setStaticField<::Pathfinding::NNConstraint*, "NNConstraintNone", ::GlobalNamespace::AstarPath*>(std::forward<::Pathfinding::NNConstraint*>(value));
}
inline ::Pathfinding::NNConstraint* GlobalNamespace::AstarPath::getStaticF_NNConstraintNone()  {
return ::cordl_internals::getStaticField<::Pathfinding::NNConstraint*, "NNConstraintNone", ::GlobalNamespace::AstarPath*>();
}
inline ::ArrayW<::System::Type*> GlobalNamespace::AstarPath::get_graphTypes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"get_graphTypes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Type*>>(this, ___internal_method);
}
inline ::Pathfinding::AstarData* GlobalNamespace::AstarPath::get_astarData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"get_astarData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::AstarData*>(this, ___internal_method);
}
inline ::ArrayW<::Pathfinding::NavGraph*> GlobalNamespace::AstarPath::get_graphs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"get_graphs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Pathfinding::NavGraph*>>(this, ___internal_method);
}
inline float_t GlobalNamespace::AstarPath::get_maxNearestNodeDistanceSqr()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"get_maxNearestNodeDistanceSqr", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool GlobalNamespace::AstarPath::get_limitGraphUpdates()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"get_limitGraphUpdates", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::AstarPath::set_limitGraphUpdates(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"set_limitGraphUpdates", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::AstarPath::get_maxGraphUpdateFreq()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"get_maxGraphUpdateFreq", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::AstarPath::set_maxGraphUpdateFreq(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"set_maxGraphUpdateFreq", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::AstarPath::get_lastScanTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"get_lastScanTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::AstarPath::set_lastScanTime(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"set_lastScanTime", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::AstarPath::get_isScanning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"get_isScanning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::AstarPath::set_isScanning(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"set_isScanning", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::AstarPath::get_NumParallelThreads()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"get_NumParallelThreads", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool GlobalNamespace::AstarPath::get_IsUsingMultithreading()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"get_IsUsingMultithreading", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::AstarPath::get_IsAnyGraphUpdatesQueued()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"get_IsAnyGraphUpdatesQueued", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::AstarPath::get_IsAnyGraphUpdateQueued()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"get_IsAnyGraphUpdateQueued", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::AstarPath::get_IsAnyGraphUpdateInProgress()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"get_IsAnyGraphUpdateInProgress", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::AstarPath::get_IsAnyWorkItemInProgress()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"get_IsAnyWorkItemInProgress", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::AstarPath::get_IsInsideWorkItem()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"get_IsInsideWorkItem", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::AstarPath::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ArrayW<::StringW> GlobalNamespace::AstarPath::GetTagNames()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"GetTagNames", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline void GlobalNamespace::AstarPath::FindAstarPath()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"FindAstarPath", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::ArrayW<::StringW> GlobalNamespace::AstarPath::FindTagNames()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"FindTagNames", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(nullptr, ___internal_method);
}
inline uint16_t GlobalNamespace::AstarPath::GetNextPathID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"GetNextPathID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(this, ___internal_method);
}
inline void GlobalNamespace::AstarPath::RecalculateDebugLimits()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"RecalculateDebugLimits", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AstarPath::OnDrawGizmos()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"OnDrawGizmos", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AstarPath::LogPathResults(::Pathfinding::Path*  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"LogPathResults", {}, {::i2c::type_of<::Pathfinding::Path*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, path);
}
inline void GlobalNamespace::AstarPath::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AstarPath::PerformBlockingActions(bool  force)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"PerformBlockingActions", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, force);
}
inline void GlobalNamespace::AstarPath::QueueWorkItemFloodFill()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"QueueWorkItemFloodFill", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AstarPath::EnsureValidFloodFill()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"EnsureValidFloodFill", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AstarPath::AddWorkItem(::System::Action*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"AddWorkItem", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
inline void GlobalNamespace::AstarPath::AddWorkItem(::System::Action_1<::Pathfinding::IWorkItemContext*>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"AddWorkItem", {}, {::i2c::type_of<::System::Action_1<::Pathfinding::IWorkItemContext*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
inline void GlobalNamespace::AstarPath::AddWorkItem(::Pathfinding::AstarWorkItem  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"AddWorkItem", {}, {::i2c::type_of<::Pathfinding::AstarWorkItem>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
inline void GlobalNamespace::AstarPath::QueueGraphUpdates()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"QueueGraphUpdates", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::AstarPath::DelayedGraphUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"DelayedGraphUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void GlobalNamespace::AstarPath::UpdateGraphs(::UnityEngine::Bounds  bounds, float_t  delay)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"UpdateGraphs", {}, {::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bounds, delay);
}
inline void GlobalNamespace::AstarPath::UpdateGraphs(::Pathfinding::GraphUpdateObject*  ob, float_t  delay)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"UpdateGraphs", {}, {::i2c::type_of<::Pathfinding::GraphUpdateObject*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ob, delay);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::AstarPath::UpdateGraphsInternal(::Pathfinding::GraphUpdateObject*  ob, float_t  delay)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"UpdateGraphsInternal", {}, {::i2c::type_of<::Pathfinding::GraphUpdateObject*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, ob, delay);
}
inline void GlobalNamespace::AstarPath::UpdateGraphs(::UnityEngine::Bounds  bounds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"UpdateGraphs", {}, {::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bounds);
}
inline void GlobalNamespace::AstarPath::UpdateGraphs(::Pathfinding::GraphUpdateObject*  ob)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"UpdateGraphs", {}, {::i2c::type_of<::Pathfinding::GraphUpdateObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ob);
}
inline void GlobalNamespace::AstarPath::FlushGraphUpdates()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"FlushGraphUpdates", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AstarPath::FlushWorkItems()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"FlushWorkItems", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AstarPath::FlushWorkItems(bool  unblockOnComplete, bool  block)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"FlushWorkItems", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, unblockOnComplete, block);
}
inline void GlobalNamespace::AstarPath::FlushThreadSafeCallbacks()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"FlushThreadSafeCallbacks", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GlobalNamespace::AstarPath::CalculateThreadCount(::Pathfinding::ThreadCount  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"CalculateThreadCount", {}, {::i2c::type_of<::Pathfinding::ThreadCount>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, count);
}
inline void GlobalNamespace::AstarPath::EnsureInitialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"EnsureInitialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AstarPath::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::AstarPath*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AstarPath::InitializePathProcessor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"InitializePathProcessor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AstarPath::VerifyIntegrity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"VerifyIntegrity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AstarPath::ConfigureReferencesInternal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"ConfigureReferencesInternal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AstarPath::InitializeProfiler()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"InitializeProfiler", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AstarPath::InitializeAstarData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"InitializeAstarData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AstarPath::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AstarPath::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AstarPath::FloodFill(::Pathfinding::GraphNode*  seed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"FloodFill", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seed);
}
inline void GlobalNamespace::AstarPath::FloodFill(::Pathfinding::GraphNode*  seed, uint32_t  area)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"FloodFill", {}, {::i2c::type_of<::Pathfinding::GraphNode*>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seed, area);
}
inline void GlobalNamespace::AstarPath::FloodFill()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"FloodFill", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GlobalNamespace::AstarPath::GetNewNodeIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"GetNewNodeIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::AstarPath::InitializeNode(::Pathfinding::GraphNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"InitializeNode", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline void GlobalNamespace::AstarPath::DestroyNode(::Pathfinding::GraphNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"DestroyNode", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline void GlobalNamespace::AstarPath::BlockUntilPathQueueBlocked()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"BlockUntilPathQueueBlocked", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PathProcessor_GraphUpdateLock GlobalNamespace::AstarPath::PausePathfinding()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"PausePathfinding", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PathProcessor_GraphUpdateLock>(this, ___internal_method);
}
inline ::GlobalNamespace::PathProcessor_GraphUpdateLock GlobalNamespace::AstarPath::PausePathfindingSoon()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"PausePathfindingSoon", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PathProcessor_GraphUpdateLock>(this, ___internal_method);
}
inline void GlobalNamespace::AstarPath::Scan(::Pathfinding::NavGraph*  graphToScan)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"Scan", {}, {::i2c::type_of<::Pathfinding::NavGraph*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, graphToScan);
}
inline void GlobalNamespace::AstarPath::Scan(::ArrayW<::Pathfinding::NavGraph*>  graphsToScan)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"Scan", {}, {::i2c::type_of<::ArrayW<::Pathfinding::NavGraph*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, graphsToScan);
}
inline ::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>* GlobalNamespace::AstarPath::ScanAsync(::Pathfinding::NavGraph*  graphToScan)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"ScanAsync", {}, {::i2c::type_of<::Pathfinding::NavGraph*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>*>(this, ___internal_method, graphToScan);
}
inline ::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>* GlobalNamespace::AstarPath::ScanAsync(::ArrayW<::Pathfinding::NavGraph*>  graphsToScan)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"ScanAsync", {}, {::i2c::type_of<::ArrayW<::Pathfinding::NavGraph*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>*>(this, ___internal_method, graphsToScan);
}
inline ::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>* GlobalNamespace::AstarPath::ScanGraph(::Pathfinding::NavGraph*  graph)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"ScanGraph", {}, {::i2c::type_of<::Pathfinding::NavGraph*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>*>(this, ___internal_method, graph);
}
inline void GlobalNamespace::AstarPath::WaitForPath(::Pathfinding::Path*  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"WaitForPath", {}, {::i2c::type_of<::Pathfinding::Path*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, path);
}
inline void GlobalNamespace::AstarPath::BlockUntilCalculated(::Pathfinding::Path*  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"BlockUntilCalculated", {}, {::i2c::type_of<::Pathfinding::Path*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, path);
}
inline void GlobalNamespace::AstarPath::RegisterSafeUpdate(::System::Action*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"RegisterSafeUpdate", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callback);
}
inline void GlobalNamespace::AstarPath::StartPath(::Pathfinding::Path*  path, bool  pushToFront)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"StartPath", {}, {::i2c::type_of<::Pathfinding::Path*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, path, pushToFront);
}
inline ::Pathfinding::NNInfo GlobalNamespace::AstarPath::GetNearest(::UnityEngine::Vector3  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"GetNearest", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::NNInfo>(this, ___internal_method, position);
}
inline ::Pathfinding::NNInfo GlobalNamespace::AstarPath::GetNearest(::UnityEngine::Vector3  position, ::Pathfinding::NNConstraint*  constraint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"GetNearest", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Pathfinding::NNConstraint*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::NNInfo>(this, ___internal_method, position, constraint);
}
inline ::Pathfinding::NNInfo GlobalNamespace::AstarPath::GetNearest(::UnityEngine::Vector3  position, ::Pathfinding::NNConstraint*  constraint, ::Pathfinding::GraphNode*  hint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"GetNearest", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Pathfinding::NNConstraint*>(), ::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::NNInfo>(this, ___internal_method, position, constraint, hint);
}
inline ::Pathfinding::GraphNode* GlobalNamespace::AstarPath::GetNearest(::UnityEngine::Ray  ray)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"GetNearest", {}, {::i2c::type_of<::UnityEngine::Ray>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::GraphNode*>(this, ___internal_method, ray);
}
inline void GlobalNamespace::AstarPath::__ctor_b__92_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"<.ctor>b__92_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AstarPath::_InitializePathProcessor_b__123_1(::Pathfinding::Path*  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"<InitializePathProcessor>b__123_1", {}, {::i2c::type_of<::Pathfinding::Path*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, path);
}
inline void GlobalNamespace::AstarPath::_InitializePathProcessor_b__123_2()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath*>(),
                        {"<InitializePathProcessor>b__123_2", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AstarPath* GlobalNamespace::AstarPath::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AstarPath*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AstarPath::AstarPath()   {
}
//  Writing Method size for method: ::GlobalNamespace::AstarPath__UpdateGraphsInternal_d__112._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AstarPath__UpdateGraphsInternal_d__112::*)(int32_t)>(&::GlobalNamespace::AstarPath__UpdateGraphsInternal_d__112::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5e335b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath__UpdateGraphsInternal_d__112*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AstarPath__UpdateGraphsInternal_d__112.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AstarPath__UpdateGraphsInternal_d__112::*)()>(&::GlobalNamespace::AstarPath__UpdateGraphsInternal_d__112::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e37a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath__UpdateGraphsInternal_d__112*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AstarPath__UpdateGraphsInternal_d__112.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AstarPath__UpdateGraphsInternal_d__112::*)()>(&::GlobalNamespace::AstarPath__UpdateGraphsInternal_d__112::MoveNext)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5e37a94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath__UpdateGraphsInternal_d__112*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AstarPath__UpdateGraphsInternal_d__112.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::AstarPath__UpdateGraphsInternal_d__112::*)()>(&::GlobalNamespace::AstarPath__UpdateGraphsInternal_d__112::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e37b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath__UpdateGraphsInternal_d__112*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AstarPath__UpdateGraphsInternal_d__112.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AstarPath__UpdateGraphsInternal_d__112::*)()>(&::GlobalNamespace::AstarPath__UpdateGraphsInternal_d__112::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5e37b58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath__UpdateGraphsInternal_d__112*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AstarPath__UpdateGraphsInternal_d__112.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::AstarPath__UpdateGraphsInternal_d__112::*)()>(&::GlobalNamespace::AstarPath__UpdateGraphsInternal_d__112::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e37b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath__UpdateGraphsInternal_d__112*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::AstarPath__UpdateGraphsInternal_d__112::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::AstarPath__UpdateGraphsInternal_d__112::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::AstarPath__UpdateGraphsInternal_d__112::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::AstarPath__UpdateGraphsInternal_d__112::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::AstarPath__UpdateGraphsInternal_d__112::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::AstarPath__UpdateGraphsInternal_d__112::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr float_t& GlobalNamespace::AstarPath__UpdateGraphsInternal_d__112::__cordl_internal_get_delay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___delay;
}
constexpr float_t const& GlobalNamespace::AstarPath__UpdateGraphsInternal_d__112::__cordl_internal_get_delay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___delay;
}
constexpr void GlobalNamespace::AstarPath__UpdateGraphsInternal_d__112::__cordl_internal_set_delay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___delay = value;
}
constexpr ::UnityW<::GlobalNamespace::AstarPath>& GlobalNamespace::AstarPath__UpdateGraphsInternal_d__112::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::AstarPath> const& GlobalNamespace::AstarPath__UpdateGraphsInternal_d__112::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::AstarPath__UpdateGraphsInternal_d__112::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::AstarPath>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::Pathfinding::GraphUpdateObject*& GlobalNamespace::AstarPath__UpdateGraphsInternal_d__112::__cordl_internal_get_ob()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ob;
}
constexpr ::Pathfinding::GraphUpdateObject* const& GlobalNamespace::AstarPath__UpdateGraphsInternal_d__112::__cordl_internal_get_ob() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ob;
}
constexpr void GlobalNamespace::AstarPath__UpdateGraphsInternal_d__112::__cordl_internal_set_ob(::Pathfinding::GraphUpdateObject*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ob = value;
}
inline void GlobalNamespace::AstarPath__UpdateGraphsInternal_d__112::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath__UpdateGraphsInternal_d__112*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::AstarPath__UpdateGraphsInternal_d__112::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath__UpdateGraphsInternal_d__112*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::AstarPath__UpdateGraphsInternal_d__112::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath__UpdateGraphsInternal_d__112*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::AstarPath__UpdateGraphsInternal_d__112::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath__UpdateGraphsInternal_d__112*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::AstarPath__UpdateGraphsInternal_d__112::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath__UpdateGraphsInternal_d__112*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::AstarPath__UpdateGraphsInternal_d__112::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath__UpdateGraphsInternal_d__112*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::AstarPath__UpdateGraphsInternal_d__112* GlobalNamespace::AstarPath__UpdateGraphsInternal_d__112::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AstarPath__UpdateGraphsInternal_d__112*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::AstarPath__UpdateGraphsInternal_d__112::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::AstarPath__UpdateGraphsInternal_d__112::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::AstarPath__UpdateGraphsInternal_d__112::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::AstarPath__UpdateGraphsInternal_d__112::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::AstarPath__UpdateGraphsInternal_d__112::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::AstarPath__UpdateGraphsInternal_d__112::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AstarPath__UpdateGraphsInternal_d__112::AstarPath__UpdateGraphsInternal_d__112()   {
}
//  Writing Method size for method: ::GlobalNamespace::AstarPath__ScanGraph_d__143._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AstarPath__ScanGraph_d__143::*)(int32_t)>(&::GlobalNamespace::AstarPath__ScanGraph_d__143::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5e34cc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath__ScanGraph_d__143*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AstarPath__ScanGraph_d__143.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AstarPath__ScanGraph_d__143::*)()>(&::GlobalNamespace::AstarPath__ScanGraph_d__143::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5e3719c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath__ScanGraph_d__143*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AstarPath__ScanGraph_d__143.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AstarPath__ScanGraph_d__143::*)()>(&::GlobalNamespace::AstarPath__ScanGraph_d__143::MoveNext)> {
  constexpr static std::size_t size = 0x6e0;
  constexpr static std::size_t addrs = 0x5e371b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath__ScanGraph_d__143*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AstarPath__ScanGraph_d__143.__m__Finally1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AstarPath__ScanGraph_d__143::*)()>(&::GlobalNamespace::AstarPath__ScanGraph_d__143::__m__Finally1)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5e37898;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath__ScanGraph_d__143*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AstarPath__ScanGraph_d__143.System_Collections_Generic_IEnumerator_Pathfinding_Progress__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Progress (::GlobalNamespace::AstarPath__ScanGraph_d__143::*)()>(&::GlobalNamespace::AstarPath__ScanGraph_d__143::System_Collections_Generic_IEnumerator_Pathfinding_Progress__get_Current)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e37948;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath__ScanGraph_d__143*>(),
                        {"System.Collections.Generic.IEnumerator<Pathfinding.Progress>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AstarPath__ScanGraph_d__143.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AstarPath__ScanGraph_d__143::*)()>(&::GlobalNamespace::AstarPath__ScanGraph_d__143::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5e37954;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath__ScanGraph_d__143*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AstarPath__ScanGraph_d__143.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::AstarPath__ScanGraph_d__143::*)()>(&::GlobalNamespace::AstarPath__ScanGraph_d__143::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5e3798c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath__ScanGraph_d__143*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AstarPath__ScanGraph_d__143.System_Collections_Generic_IEnumerable_Pathfinding_Progress__GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>* (::GlobalNamespace::AstarPath__ScanGraph_d__143::*)()>(&::GlobalNamespace::AstarPath__ScanGraph_d__143::System_Collections_Generic_IEnumerable_Pathfinding_Progress__GetEnumerator)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5e379e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath__ScanGraph_d__143*>(),
                        {"System.Collections.Generic.IEnumerable<Pathfinding.Progress>.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AstarPath__ScanGraph_d__143.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::AstarPath__ScanGraph_d__143::*)()>(&::GlobalNamespace::AstarPath__ScanGraph_d__143::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e37a8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath__ScanGraph_d__143*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::AstarPath__ScanGraph_d__143::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::AstarPath__ScanGraph_d__143::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::AstarPath__ScanGraph_d__143::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::Pathfinding::Progress& GlobalNamespace::AstarPath__ScanGraph_d__143::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::Pathfinding::Progress const& GlobalNamespace::AstarPath__ScanGraph_d__143::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::AstarPath__ScanGraph_d__143::__cordl_internal_set___2__current(::Pathfinding::Progress  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr int32_t& GlobalNamespace::AstarPath__ScanGraph_d__143::__cordl_internal_get___l__initialThreadId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
constexpr int32_t const& GlobalNamespace::AstarPath__ScanGraph_d__143::__cordl_internal_get___l__initialThreadId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
constexpr void GlobalNamespace::AstarPath__ScanGraph_d__143::__cordl_internal_set___l__initialThreadId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____l__initialThreadId = value;
}
constexpr ::Pathfinding::NavGraph*& GlobalNamespace::AstarPath__ScanGraph_d__143::__cordl_internal_get_graph()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___graph;
}
constexpr ::Pathfinding::NavGraph* const& GlobalNamespace::AstarPath__ScanGraph_d__143::__cordl_internal_get_graph() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___graph;
}
constexpr void GlobalNamespace::AstarPath__ScanGraph_d__143::__cordl_internal_set_graph(::Pathfinding::NavGraph*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___graph = value;
}
constexpr ::Pathfinding::NavGraph*& GlobalNamespace::AstarPath__ScanGraph_d__143::__cordl_internal_get___3__graph()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____3__graph;
}
constexpr ::Pathfinding::NavGraph* const& GlobalNamespace::AstarPath__ScanGraph_d__143::__cordl_internal_get___3__graph() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____3__graph;
}
constexpr void GlobalNamespace::AstarPath__ScanGraph_d__143::__cordl_internal_set___3__graph(::Pathfinding::NavGraph*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____3__graph = value;
}
constexpr ::GlobalNamespace::AstarPath___c__DisplayClass143_0*& GlobalNamespace::AstarPath__ScanGraph_d__143::__cordl_internal_get___8__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____8__1;
}
constexpr ::GlobalNamespace::AstarPath___c__DisplayClass143_0* const& GlobalNamespace::AstarPath__ScanGraph_d__143::__cordl_internal_get___8__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____8__1;
}
constexpr void GlobalNamespace::AstarPath__ScanGraph_d__143::__cordl_internal_set___8__1(::GlobalNamespace::AstarPath___c__DisplayClass143_0*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____8__1 = value;
}
constexpr ::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>*& GlobalNamespace::AstarPath__ScanGraph_d__143::__cordl_internal_get___7__wrap1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap1;
}
constexpr ::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>* const& GlobalNamespace::AstarPath__ScanGraph_d__143::__cordl_internal_get___7__wrap1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap1;
}
constexpr void GlobalNamespace::AstarPath__ScanGraph_d__143::__cordl_internal_set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____7__wrap1 = value;
}
inline void GlobalNamespace::AstarPath__ScanGraph_d__143::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath__ScanGraph_d__143*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::AstarPath__ScanGraph_d__143::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath__ScanGraph_d__143*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::AstarPath__ScanGraph_d__143::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath__ScanGraph_d__143*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::AstarPath__ScanGraph_d__143::__m__Finally1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath__ScanGraph_d__143*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::Progress GlobalNamespace::AstarPath__ScanGraph_d__143::System_Collections_Generic_IEnumerator_Pathfinding_Progress__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath__ScanGraph_d__143*>(),
                        {"System.Collections.Generic.IEnumerator<Pathfinding.Progress>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Progress>(this, ___internal_method);
}
inline void GlobalNamespace::AstarPath__ScanGraph_d__143::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath__ScanGraph_d__143*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::AstarPath__ScanGraph_d__143::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath__ScanGraph_d__143*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>* GlobalNamespace::AstarPath__ScanGraph_d__143::System_Collections_Generic_IEnumerable_Pathfinding_Progress__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath__ScanGraph_d__143*>(),
                        {"System.Collections.Generic.IEnumerable<Pathfinding.Progress>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::AstarPath__ScanGraph_d__143::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath__ScanGraph_d__143*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::AstarPath__ScanGraph_d__143* GlobalNamespace::AstarPath__ScanGraph_d__143::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AstarPath__ScanGraph_d__143*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>"
constexpr  GlobalNamespace::AstarPath__ScanGraph_d__143::operator ::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>* GlobalNamespace::AstarPath__ScanGraph_d__143::i___System__Collections__Generic__IEnumerable_1___Pathfinding__Progress_() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  GlobalNamespace::AstarPath__ScanGraph_d__143::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* GlobalNamespace::AstarPath__ScanGraph_d__143::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>"
constexpr  GlobalNamespace::AstarPath__ScanGraph_d__143::operator ::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>* GlobalNamespace::AstarPath__ScanGraph_d__143::i___System__Collections__Generic__IEnumerator_1___Pathfinding__Progress_() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::AstarPath__ScanGraph_d__143::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::AstarPath__ScanGraph_d__143::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::AstarPath__ScanGraph_d__143::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::AstarPath__ScanGraph_d__143::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AstarPath__ScanGraph_d__143::AstarPath__ScanGraph_d__143()   {
}
//  Writing Method size for method: ::GlobalNamespace::AstarPath__ScanAsync_d__142._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AstarPath__ScanAsync_d__142::*)(int32_t)>(&::GlobalNamespace::AstarPath__ScanAsync_d__142::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5e34c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath__ScanAsync_d__142*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AstarPath__ScanAsync_d__142.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AstarPath__ScanAsync_d__142::*)()>(&::GlobalNamespace::AstarPath__ScanAsync_d__142::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e363fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath__ScanAsync_d__142*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AstarPath__ScanAsync_d__142.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AstarPath__ScanAsync_d__142::*)()>(&::GlobalNamespace::AstarPath__ScanAsync_d__142::MoveNext)> {
  constexpr static std::size_t size = 0xc44;
  constexpr static std::size_t addrs = 0x5e36400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath__ScanAsync_d__142*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AstarPath__ScanAsync_d__142.System_Collections_Generic_IEnumerator_Pathfinding_Progress__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Progress (::GlobalNamespace::AstarPath__ScanAsync_d__142::*)()>(&::GlobalNamespace::AstarPath__ScanAsync_d__142::System_Collections_Generic_IEnumerator_Pathfinding_Progress__get_Current)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e37044;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath__ScanAsync_d__142*>(),
                        {"System.Collections.Generic.IEnumerator<Pathfinding.Progress>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AstarPath__ScanAsync_d__142.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AstarPath__ScanAsync_d__142::*)()>(&::GlobalNamespace::AstarPath__ScanAsync_d__142::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5e37050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath__ScanAsync_d__142*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AstarPath__ScanAsync_d__142.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::AstarPath__ScanAsync_d__142::*)()>(&::GlobalNamespace::AstarPath__ScanAsync_d__142::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5e37088;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath__ScanAsync_d__142*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AstarPath__ScanAsync_d__142.System_Collections_Generic_IEnumerable_Pathfinding_Progress__GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>* (::GlobalNamespace::AstarPath__ScanAsync_d__142::*)()>(&::GlobalNamespace::AstarPath__ScanAsync_d__142::System_Collections_Generic_IEnumerable_Pathfinding_Progress__GetEnumerator)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5e370e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath__ScanAsync_d__142*>(),
                        {"System.Collections.Generic.IEnumerable<Pathfinding.Progress>.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AstarPath__ScanAsync_d__142.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::AstarPath__ScanAsync_d__142::*)()>(&::GlobalNamespace::AstarPath__ScanAsync_d__142::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e37198;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath__ScanAsync_d__142*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::AstarPath__ScanAsync_d__142::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::AstarPath__ScanAsync_d__142::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::AstarPath__ScanAsync_d__142::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::Pathfinding::Progress& GlobalNamespace::AstarPath__ScanAsync_d__142::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::Pathfinding::Progress const& GlobalNamespace::AstarPath__ScanAsync_d__142::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::AstarPath__ScanAsync_d__142::__cordl_internal_set___2__current(::Pathfinding::Progress  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr int32_t& GlobalNamespace::AstarPath__ScanAsync_d__142::__cordl_internal_get___l__initialThreadId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
constexpr int32_t const& GlobalNamespace::AstarPath__ScanAsync_d__142::__cordl_internal_get___l__initialThreadId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
constexpr void GlobalNamespace::AstarPath__ScanAsync_d__142::__cordl_internal_set___l__initialThreadId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____l__initialThreadId = value;
}
constexpr ::ArrayW<::Pathfinding::NavGraph*>& GlobalNamespace::AstarPath__ScanAsync_d__142::__cordl_internal_get_graphsToScan()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___graphsToScan;
}
constexpr ::ArrayW<::Pathfinding::NavGraph*> const& GlobalNamespace::AstarPath__ScanAsync_d__142::__cordl_internal_get_graphsToScan() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___graphsToScan;
}
constexpr void GlobalNamespace::AstarPath__ScanAsync_d__142::__cordl_internal_set_graphsToScan(::ArrayW<::Pathfinding::NavGraph*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___graphsToScan = value;
}
constexpr ::ArrayW<::Pathfinding::NavGraph*>& GlobalNamespace::AstarPath__ScanAsync_d__142::__cordl_internal_get___3__graphsToScan()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____3__graphsToScan;
}
constexpr ::ArrayW<::Pathfinding::NavGraph*> const& GlobalNamespace::AstarPath__ScanAsync_d__142::__cordl_internal_get___3__graphsToScan() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____3__graphsToScan;
}
constexpr void GlobalNamespace::AstarPath__ScanAsync_d__142::__cordl_internal_set___3__graphsToScan(::ArrayW<::Pathfinding::NavGraph*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____3__graphsToScan = value;
}
constexpr ::UnityW<::GlobalNamespace::AstarPath>& GlobalNamespace::AstarPath__ScanAsync_d__142::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::AstarPath> const& GlobalNamespace::AstarPath__ScanAsync_d__142::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::AstarPath__ScanAsync_d__142::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::AstarPath>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::GlobalNamespace::PathProcessor_GraphUpdateLock& GlobalNamespace::AstarPath__ScanAsync_d__142::__cordl_internal_get__graphUpdateLock_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____graphUpdateLock_5__2;
}
constexpr ::GlobalNamespace::PathProcessor_GraphUpdateLock const& GlobalNamespace::AstarPath__ScanAsync_d__142::__cordl_internal_get__graphUpdateLock_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____graphUpdateLock_5__2;
}
constexpr void GlobalNamespace::AstarPath__ScanAsync_d__142::__cordl_internal_set__graphUpdateLock_5__2(::GlobalNamespace::PathProcessor_GraphUpdateLock  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____graphUpdateLock_5__2 = value;
}
constexpr ::System::Diagnostics::Stopwatch*& GlobalNamespace::AstarPath__ScanAsync_d__142::__cordl_internal_get__watch_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____watch_5__3;
}
constexpr ::System::Diagnostics::Stopwatch* const& GlobalNamespace::AstarPath__ScanAsync_d__142::__cordl_internal_get__watch_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____watch_5__3;
}
constexpr void GlobalNamespace::AstarPath__ScanAsync_d__142::__cordl_internal_set__watch_5__3(::System::Diagnostics::Stopwatch*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____watch_5__3 = value;
}
constexpr int32_t& GlobalNamespace::AstarPath__ScanAsync_d__142::__cordl_internal_get__i_5__4()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____i_5__4;
}
constexpr int32_t const& GlobalNamespace::AstarPath__ScanAsync_d__142::__cordl_internal_get__i_5__4() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____i_5__4;
}
constexpr void GlobalNamespace::AstarPath__ScanAsync_d__142::__cordl_internal_set__i_5__4(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____i_5__4 = value;
}
constexpr float_t& GlobalNamespace::AstarPath__ScanAsync_d__142::__cordl_internal_get__minp_5__5()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minp_5__5;
}
constexpr float_t const& GlobalNamespace::AstarPath__ScanAsync_d__142::__cordl_internal_get__minp_5__5() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minp_5__5;
}
constexpr void GlobalNamespace::AstarPath__ScanAsync_d__142::__cordl_internal_set__minp_5__5(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____minp_5__5 = value;
}
constexpr float_t& GlobalNamespace::AstarPath__ScanAsync_d__142::__cordl_internal_get__maxp_5__6()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxp_5__6;
}
constexpr float_t const& GlobalNamespace::AstarPath__ScanAsync_d__142::__cordl_internal_get__maxp_5__6() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxp_5__6;
}
constexpr void GlobalNamespace::AstarPath__ScanAsync_d__142::__cordl_internal_set__maxp_5__6(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxp_5__6 = value;
}
constexpr ::StringW& GlobalNamespace::AstarPath__ScanAsync_d__142::__cordl_internal_get__progressDescriptionPrefix_5__7()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____progressDescriptionPrefix_5__7;
}
constexpr ::StringW const& GlobalNamespace::AstarPath__ScanAsync_d__142::__cordl_internal_get__progressDescriptionPrefix_5__7() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____progressDescriptionPrefix_5__7;
}
constexpr void GlobalNamespace::AstarPath__ScanAsync_d__142::__cordl_internal_set__progressDescriptionPrefix_5__7(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____progressDescriptionPrefix_5__7 = value;
}
constexpr ::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>*& GlobalNamespace::AstarPath__ScanAsync_d__142::__cordl_internal_get__coroutine_5__8()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____coroutine_5__8;
}
constexpr ::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>* const& GlobalNamespace::AstarPath__ScanAsync_d__142::__cordl_internal_get__coroutine_5__8() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____coroutine_5__8;
}
constexpr void GlobalNamespace::AstarPath__ScanAsync_d__142::__cordl_internal_set__coroutine_5__8(::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____coroutine_5__8 = value;
}
inline void GlobalNamespace::AstarPath__ScanAsync_d__142::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath__ScanAsync_d__142*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::AstarPath__ScanAsync_d__142::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath__ScanAsync_d__142*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::AstarPath__ScanAsync_d__142::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath__ScanAsync_d__142*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Pathfinding::Progress GlobalNamespace::AstarPath__ScanAsync_d__142::System_Collections_Generic_IEnumerator_Pathfinding_Progress__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath__ScanAsync_d__142*>(),
                        {"System.Collections.Generic.IEnumerator<Pathfinding.Progress>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Progress>(this, ___internal_method);
}
inline void GlobalNamespace::AstarPath__ScanAsync_d__142::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath__ScanAsync_d__142*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::AstarPath__ScanAsync_d__142::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath__ScanAsync_d__142*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>* GlobalNamespace::AstarPath__ScanAsync_d__142::System_Collections_Generic_IEnumerable_Pathfinding_Progress__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath__ScanAsync_d__142*>(),
                        {"System.Collections.Generic.IEnumerable<Pathfinding.Progress>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::AstarPath__ScanAsync_d__142::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath__ScanAsync_d__142*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::AstarPath__ScanAsync_d__142* GlobalNamespace::AstarPath__ScanAsync_d__142::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AstarPath__ScanAsync_d__142*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>"
constexpr  GlobalNamespace::AstarPath__ScanAsync_d__142::operator ::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>* GlobalNamespace::AstarPath__ScanAsync_d__142::i___System__Collections__Generic__IEnumerable_1___Pathfinding__Progress_() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  GlobalNamespace::AstarPath__ScanAsync_d__142::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* GlobalNamespace::AstarPath__ScanAsync_d__142::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>"
constexpr  GlobalNamespace::AstarPath__ScanAsync_d__142::operator ::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>* GlobalNamespace::AstarPath__ScanAsync_d__142::i___System__Collections__Generic__IEnumerator_1___Pathfinding__Progress_() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::AstarPath__ScanAsync_d__142::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::AstarPath__ScanAsync_d__142::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::AstarPath__ScanAsync_d__142::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::AstarPath__ScanAsync_d__142::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AstarPath__ScanAsync_d__142::AstarPath__ScanAsync_d__142()   {
}
//  Writing Method size for method: ::GlobalNamespace::AstarPath__DelayedGraphUpdate_d__109._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AstarPath__DelayedGraphUpdate_d__109::*)(int32_t)>(&::GlobalNamespace::AstarPath__DelayedGraphUpdate_d__109::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5e3342c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath__DelayedGraphUpdate_d__109*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AstarPath__DelayedGraphUpdate_d__109.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AstarPath__DelayedGraphUpdate_d__109::*)()>(&::GlobalNamespace::AstarPath__DelayedGraphUpdate_d__109::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e362c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath__DelayedGraphUpdate_d__109*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AstarPath__DelayedGraphUpdate_d__109.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AstarPath__DelayedGraphUpdate_d__109::*)()>(&::GlobalNamespace::AstarPath__DelayedGraphUpdate_d__109::MoveNext)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5e362c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath__DelayedGraphUpdate_d__109*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AstarPath__DelayedGraphUpdate_d__109.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::AstarPath__DelayedGraphUpdate_d__109::*)()>(&::GlobalNamespace::AstarPath__DelayedGraphUpdate_d__109::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e363b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath__DelayedGraphUpdate_d__109*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AstarPath__DelayedGraphUpdate_d__109.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AstarPath__DelayedGraphUpdate_d__109::*)()>(&::GlobalNamespace::AstarPath__DelayedGraphUpdate_d__109::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5e363bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath__DelayedGraphUpdate_d__109*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AstarPath__DelayedGraphUpdate_d__109.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::AstarPath__DelayedGraphUpdate_d__109::*)()>(&::GlobalNamespace::AstarPath__DelayedGraphUpdate_d__109::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e363f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath__DelayedGraphUpdate_d__109*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::AstarPath__DelayedGraphUpdate_d__109::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::AstarPath__DelayedGraphUpdate_d__109::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::AstarPath__DelayedGraphUpdate_d__109::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::AstarPath__DelayedGraphUpdate_d__109::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::AstarPath__DelayedGraphUpdate_d__109::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::AstarPath__DelayedGraphUpdate_d__109::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::AstarPath>& GlobalNamespace::AstarPath__DelayedGraphUpdate_d__109::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::AstarPath> const& GlobalNamespace::AstarPath__DelayedGraphUpdate_d__109::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::AstarPath__DelayedGraphUpdate_d__109::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::AstarPath>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void GlobalNamespace::AstarPath__DelayedGraphUpdate_d__109::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath__DelayedGraphUpdate_d__109*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::AstarPath__DelayedGraphUpdate_d__109::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath__DelayedGraphUpdate_d__109*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::AstarPath__DelayedGraphUpdate_d__109::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath__DelayedGraphUpdate_d__109*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::AstarPath__DelayedGraphUpdate_d__109::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath__DelayedGraphUpdate_d__109*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::AstarPath__DelayedGraphUpdate_d__109::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath__DelayedGraphUpdate_d__109*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::AstarPath__DelayedGraphUpdate_d__109::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath__DelayedGraphUpdate_d__109*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::AstarPath__DelayedGraphUpdate_d__109* GlobalNamespace::AstarPath__DelayedGraphUpdate_d__109::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AstarPath__DelayedGraphUpdate_d__109*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::AstarPath__DelayedGraphUpdate_d__109::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::AstarPath__DelayedGraphUpdate_d__109::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::AstarPath__DelayedGraphUpdate_d__109::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::AstarPath__DelayedGraphUpdate_d__109::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::AstarPath__DelayedGraphUpdate_d__109::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::AstarPath__DelayedGraphUpdate_d__109::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AstarPath__DelayedGraphUpdate_d__109::AstarPath__DelayedGraphUpdate_d__109()   {
}
//  Writing Method size for method: ::GlobalNamespace::AstarPath___c__DisplayClass97_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AstarPath___c__DisplayClass97_0::*)()>(&::GlobalNamespace::AstarPath___c__DisplayClass97_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e32bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath___c__DisplayClass97_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AstarPath___c__DisplayClass97_0._RecalculateDebugLimits_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AstarPath___c__DisplayClass97_0::*)(::Pathfinding::GraphNode*)>(&::GlobalNamespace::AstarPath___c__DisplayClass97_0::_RecalculateDebugLimits_b__0)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5e3616c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath___c__DisplayClass97_0*>(),
                        {"<RecalculateDebugLimits>b__0", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::AstarPath___c__DisplayClass97_0::__cordl_internal_get_ignoreSearchTree()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ignoreSearchTree;
}
constexpr bool const& GlobalNamespace::AstarPath___c__DisplayClass97_0::__cordl_internal_get_ignoreSearchTree() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ignoreSearchTree;
}
constexpr void GlobalNamespace::AstarPath___c__DisplayClass97_0::__cordl_internal_set_ignoreSearchTree(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ignoreSearchTree = value;
}
constexpr ::UnityW<::GlobalNamespace::AstarPath>& GlobalNamespace::AstarPath___c__DisplayClass97_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::AstarPath> const& GlobalNamespace::AstarPath___c__DisplayClass97_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::AstarPath___c__DisplayClass97_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::AstarPath>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::System::Action_1<::Pathfinding::GraphNode*>*& GlobalNamespace::AstarPath___c__DisplayClass97_0::__cordl_internal_get___9__0()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__0;
}
constexpr ::System::Action_1<::Pathfinding::GraphNode*>* const& GlobalNamespace::AstarPath___c__DisplayClass97_0::__cordl_internal_get___9__0() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__0;
}
constexpr void GlobalNamespace::AstarPath___c__DisplayClass97_0::__cordl_internal_set___9__0(::System::Action_1<::Pathfinding::GraphNode*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____9__0 = value;
}
inline void GlobalNamespace::AstarPath___c__DisplayClass97_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath___c__DisplayClass97_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AstarPath___c__DisplayClass97_0::_RecalculateDebugLimits_b__0(::Pathfinding::GraphNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath___c__DisplayClass97_0*>(),
                        {"<RecalculateDebugLimits>b__0", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline ::GlobalNamespace::AstarPath___c__DisplayClass97_0* GlobalNamespace::AstarPath___c__DisplayClass97_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AstarPath___c__DisplayClass97_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AstarPath___c__DisplayClass97_0::AstarPath___c__DisplayClass97_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::AstarPath___c__DisplayClass153_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AstarPath___c__DisplayClass153_0::*)()>(&::GlobalNamespace::AstarPath___c__DisplayClass153_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e35cf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath___c__DisplayClass153_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AstarPath___c__DisplayClass153_0._GetNearest_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AstarPath___c__DisplayClass153_0::*)(::Pathfinding::GraphNode*)>(&::GlobalNamespace::AstarPath___c__DisplayClass153_0::_GetNearest_b__0)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5e360a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath___c__DisplayClass153_0*>(),
                        {"<GetNearest>b__0", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& GlobalNamespace::AstarPath___c__DisplayClass153_0::__cordl_internal_get_lineOrigin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lineOrigin;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::AstarPath___c__DisplayClass153_0::__cordl_internal_get_lineOrigin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lineOrigin;
}
constexpr void GlobalNamespace::AstarPath___c__DisplayClass153_0::__cordl_internal_set_lineOrigin(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lineOrigin = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::AstarPath___c__DisplayClass153_0::__cordl_internal_get_lineDirection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lineDirection;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::AstarPath___c__DisplayClass153_0::__cordl_internal_get_lineDirection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lineDirection;
}
constexpr void GlobalNamespace::AstarPath___c__DisplayClass153_0::__cordl_internal_set_lineDirection(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lineDirection = value;
}
constexpr float_t& GlobalNamespace::AstarPath___c__DisplayClass153_0::__cordl_internal_get_minDist()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minDist;
}
constexpr float_t const& GlobalNamespace::AstarPath___c__DisplayClass153_0::__cordl_internal_get_minDist() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minDist;
}
constexpr void GlobalNamespace::AstarPath___c__DisplayClass153_0::__cordl_internal_set_minDist(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minDist = value;
}
constexpr ::Pathfinding::GraphNode*& GlobalNamespace::AstarPath___c__DisplayClass153_0::__cordl_internal_get_nearestNode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nearestNode;
}
constexpr ::Pathfinding::GraphNode* const& GlobalNamespace::AstarPath___c__DisplayClass153_0::__cordl_internal_get_nearestNode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nearestNode;
}
constexpr void GlobalNamespace::AstarPath___c__DisplayClass153_0::__cordl_internal_set_nearestNode(::Pathfinding::GraphNode*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nearestNode = value;
}
constexpr ::System::Action_1<::Pathfinding::GraphNode*>*& GlobalNamespace::AstarPath___c__DisplayClass153_0::__cordl_internal_get___9__0()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__0;
}
constexpr ::System::Action_1<::Pathfinding::GraphNode*>* const& GlobalNamespace::AstarPath___c__DisplayClass153_0::__cordl_internal_get___9__0() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__0;
}
constexpr void GlobalNamespace::AstarPath___c__DisplayClass153_0::__cordl_internal_set___9__0(::System::Action_1<::Pathfinding::GraphNode*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____9__0 = value;
}
inline void GlobalNamespace::AstarPath___c__DisplayClass153_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath___c__DisplayClass153_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AstarPath___c__DisplayClass153_0::_GetNearest_b__0(::Pathfinding::GraphNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath___c__DisplayClass153_0*>(),
                        {"<GetNearest>b__0", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline ::GlobalNamespace::AstarPath___c__DisplayClass153_0* GlobalNamespace::AstarPath___c__DisplayClass153_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AstarPath___c__DisplayClass153_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AstarPath___c__DisplayClass153_0::AstarPath___c__DisplayClass153_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::AstarPath___c__DisplayClass143_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AstarPath___c__DisplayClass143_0::*)()>(&::GlobalNamespace::AstarPath___c__DisplayClass143_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e36070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath___c__DisplayClass143_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AstarPath___c__DisplayClass143_0._ScanGraph_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AstarPath___c__DisplayClass143_0::*)(::Pathfinding::GraphNode*)>(&::GlobalNamespace::AstarPath___c__DisplayClass143_0::_ScanGraph_b__0)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5e36078;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath___c__DisplayClass143_0*>(),
                        {"<ScanGraph>b__0", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Pathfinding::NavGraph*& GlobalNamespace::AstarPath___c__DisplayClass143_0::__cordl_internal_get_graph()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___graph;
}
constexpr ::Pathfinding::NavGraph* const& GlobalNamespace::AstarPath___c__DisplayClass143_0::__cordl_internal_get_graph() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___graph;
}
constexpr void GlobalNamespace::AstarPath___c__DisplayClass143_0::__cordl_internal_set_graph(::Pathfinding::NavGraph*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___graph = value;
}
inline void GlobalNamespace::AstarPath___c__DisplayClass143_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath___c__DisplayClass143_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AstarPath___c__DisplayClass143_0::_ScanGraph_b__0(::Pathfinding::GraphNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath___c__DisplayClass143_0*>(),
                        {"<ScanGraph>b__0", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline ::GlobalNamespace::AstarPath___c__DisplayClass143_0* GlobalNamespace::AstarPath___c__DisplayClass143_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AstarPath___c__DisplayClass143_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AstarPath___c__DisplayClass143_0::AstarPath___c__DisplayClass143_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::AstarPath___c__DisplayClass108_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AstarPath___c__DisplayClass108_0::*)()>(&::GlobalNamespace::AstarPath___c__DisplayClass108_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e333b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath___c__DisplayClass108_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AstarPath___c__DisplayClass108_0._QueueGraphUpdates_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AstarPath___c__DisplayClass108_0::*)()>(&::GlobalNamespace::AstarPath___c__DisplayClass108_0::_QueueGraphUpdates_b__0)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5e36028;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath___c__DisplayClass108_0*>(),
                        {"<QueueGraphUpdates>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::AstarPath>& GlobalNamespace::AstarPath___c__DisplayClass108_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::AstarPath> const& GlobalNamespace::AstarPath___c__DisplayClass108_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::AstarPath___c__DisplayClass108_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::AstarPath>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::Pathfinding::AstarWorkItem& GlobalNamespace::AstarPath___c__DisplayClass108_0::__cordl_internal_get_workItem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___workItem;
}
constexpr ::Pathfinding::AstarWorkItem const& GlobalNamespace::AstarPath___c__DisplayClass108_0::__cordl_internal_get_workItem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___workItem;
}
constexpr void GlobalNamespace::AstarPath___c__DisplayClass108_0::__cordl_internal_set_workItem(::Pathfinding::AstarWorkItem  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___workItem = value;
}
inline void GlobalNamespace::AstarPath___c__DisplayClass108_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath___c__DisplayClass108_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AstarPath___c__DisplayClass108_0::_QueueGraphUpdates_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath___c__DisplayClass108_0*>(),
                        {"<QueueGraphUpdates>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AstarPath___c__DisplayClass108_0* GlobalNamespace::AstarPath___c__DisplayClass108_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AstarPath___c__DisplayClass108_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AstarPath___c__DisplayClass108_0::AstarPath___c__DisplayClass108_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::AstarPath___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AstarPath___c::*)()>(&::GlobalNamespace::AstarPath___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e35fa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AstarPath___c._InitializePathProcessor_b__123_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AstarPath___c::*)(::Pathfinding::Path*)>(&::GlobalNamespace::AstarPath___c::_InitializePathProcessor_b__123_0)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5e35fac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath___c*>(),
                        {"<InitializePathProcessor>b__123_0", {}, {::i2c::type_of<::Pathfinding::Path*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::AstarPath___c::setStaticF___9(::GlobalNamespace::AstarPath___c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::AstarPath___c*, "<>9", ::GlobalNamespace::AstarPath___c*>(std::forward<::GlobalNamespace::AstarPath___c*>(value));
}
inline ::GlobalNamespace::AstarPath___c* GlobalNamespace::AstarPath___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::AstarPath___c*, "<>9", ::GlobalNamespace::AstarPath___c*>();
}
inline void GlobalNamespace::AstarPath___c::setStaticF___9__123_0(::System::Action_1<::Pathfinding::Path*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::Pathfinding::Path*>*, "<>9__123_0", ::GlobalNamespace::AstarPath___c*>(std::forward<::System::Action_1<::Pathfinding::Path*>*>(value));
}
inline ::System::Action_1<::Pathfinding::Path*>* GlobalNamespace::AstarPath___c::getStaticF___9__123_0()  {
return ::cordl_internals::getStaticField<::System::Action_1<::Pathfinding::Path*>*, "<>9__123_0", ::GlobalNamespace::AstarPath___c*>();
}
inline void GlobalNamespace::AstarPath___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AstarPath___c::_InitializePathProcessor_b__123_0(::Pathfinding::Path*  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AstarPath___c*>(),
                        {"<InitializePathProcessor>b__123_0", {}, {::i2c::type_of<::Pathfinding::Path*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, path);
}
inline ::GlobalNamespace::AstarPath___c* GlobalNamespace::AstarPath___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AstarPath___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AstarPath___c::AstarPath___c()   {
}
