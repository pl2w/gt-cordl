#pragma once
// IWYU pragma private; include "Pathfinding/NavGraph.hpp"
#include "Pathfinding/Util/zzzz__Guid_impl.hpp"
#include "Pathfinding/Util/zzzz__RetainedGizmos_Hasher_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Pathfinding/zzzz__NavGraph_def.hpp"
#include "GlobalNamespace/zzzz__AstarPath_def.hpp"
#include "Pathfinding/Serialization/zzzz__GraphSerializationContext_def.hpp"
#include "Pathfinding/Util/zzzz__RetainedGizmos_def.hpp"
#include "Pathfinding/zzzz__GraphNode_def.hpp"
#include "Pathfinding/zzzz__IGraphInternals_def.hpp"
#include "Pathfinding/zzzz__NNConstraint_def.hpp"
#include "Pathfinding/zzzz__NNInfoInternal_def.hpp"
#include "Pathfinding/zzzz__NavGraph_def.hpp"
#include "Pathfinding/zzzz__Progress_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Pathfinding::NavGraph.get_exists
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::NavGraph::*)()>(&::Pathfinding::NavGraph::get_exists)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5e6c218;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavGraph*>(),
                        {"get_exists", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavGraph.CountNodes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::NavGraph::*)()>(&::Pathfinding::NavGraph::CountNodes)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5e6c278;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::NavGraph*>(),
                    {::i2c::class_of<::Pathfinding::NavGraph*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavGraph.GetNodes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavGraph::*)(::System::Func_2<::Pathfinding::GraphNode*,bool>*)>(&::Pathfinding::NavGraph::GetNodes)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5e6c338;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavGraph*>(),
                        {"GetNodes", {}, {::i2c::type_of<::System::Func_2<::Pathfinding::GraphNode*,bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavGraph.GetNodes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavGraph::*)(::System::Action_1<::Pathfinding::GraphNode*>*)>(&::Pathfinding::NavGraph::GetNodes)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::NavGraph*>(),
                    {::i2c::class_of<::Pathfinding::NavGraph*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavGraph.SetMatrix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavGraph::*)(::UnityEngine::Matrix4x4)>(&::Pathfinding::NavGraph::SetMatrix)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5e6c410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavGraph*>(),
                        {"SetMatrix", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavGraph.RelocateNodes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavGraph::*)(::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4)>(&::Pathfinding::NavGraph::RelocateNodes)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5e6c458;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavGraph*>(),
                        {"RelocateNodes", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavGraph.AssertSafeToUpdateGraph
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavGraph::*)()>(&::Pathfinding::NavGraph::AssertSafeToUpdateGraph)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e6c4f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavGraph*>(),
                        {"AssertSafeToUpdateGraph", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavGraph.RelocateNodes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavGraph::*)(::UnityEngine::Matrix4x4)>(&::Pathfinding::NavGraph::RelocateNodes)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5e6c574;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::NavGraph*>(),
                    {::i2c::class_of<::Pathfinding::NavGraph*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavGraph.GetNearest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::NNInfoInternal (::Pathfinding::NavGraph::*)(::UnityEngine::Vector3)>(&::Pathfinding::NavGraph::GetNearest)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5e6c648;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavGraph*>(),
                        {"GetNearest", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavGraph.GetNearest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::NNInfoInternal (::Pathfinding::NavGraph::*)(::UnityEngine::Vector3, ::Pathfinding::NNConstraint*)>(&::Pathfinding::NavGraph::GetNearest)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5e6c6d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavGraph*>(),
                        {"GetNearest", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Pathfinding::NNConstraint*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavGraph.GetNearest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::NNInfoInternal (::Pathfinding::NavGraph::*)(::UnityEngine::Vector3, ::Pathfinding::NNConstraint*, ::Pathfinding::GraphNode*)>(&::Pathfinding::NavGraph::GetNearest)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x5e6c714;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::NavGraph*>(),
                    {::i2c::class_of<::Pathfinding::NavGraph*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavGraph.GetNearestForce
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::NNInfoInternal (::Pathfinding::NavGraph::*)(::UnityEngine::Vector3, ::Pathfinding::NNConstraint*)>(&::Pathfinding::NavGraph::GetNearestForce)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5e6c948;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::NavGraph*>(),
                    {::i2c::class_of<::Pathfinding::NavGraph*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavGraph.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavGraph::*)()>(&::Pathfinding::NavGraph::OnDestroy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5e6c98c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::NavGraph*>(),
                    {::i2c::class_of<::Pathfinding::NavGraph*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavGraph.DestroyAllNodes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavGraph::*)()>(&::Pathfinding::NavGraph::DestroyAllNodes)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5e6c99c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::NavGraph*>(),
                    {::i2c::class_of<::Pathfinding::NavGraph*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavGraph.ScanGraph
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavGraph::*)()>(&::Pathfinding::NavGraph::ScanGraph)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e6ca90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavGraph*>(),
                        {"ScanGraph", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavGraph.Scan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavGraph::*)()>(&::Pathfinding::NavGraph::Scan)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5e6ca94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavGraph*>(),
                        {"Scan", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavGraph.ScanInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>* (::Pathfinding::NavGraph::*)()>(&::Pathfinding::NavGraph::ScanInternal)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::NavGraph*>(),
                    {::i2c::class_of<::Pathfinding::NavGraph*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavGraph.SerializeExtraInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavGraph::*)(::Pathfinding::Serialization::GraphSerializationContext*)>(&::Pathfinding::NavGraph::SerializeExtraInfo)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e6cab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::NavGraph*>(),
                    {::i2c::class_of<::Pathfinding::NavGraph*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavGraph.DeserializeExtraInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavGraph::*)(::Pathfinding::Serialization::GraphSerializationContext*)>(&::Pathfinding::NavGraph::DeserializeExtraInfo)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e6cab4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::NavGraph*>(),
                    {::i2c::class_of<::Pathfinding::NavGraph*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavGraph.PostDeserialization
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavGraph::*)(::Pathfinding::Serialization::GraphSerializationContext*)>(&::Pathfinding::NavGraph::PostDeserialization)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e6cab8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::NavGraph*>(),
                    {::i2c::class_of<::Pathfinding::NavGraph*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavGraph.DeserializeSettingsCompatibility
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavGraph::*)(::Pathfinding::Serialization::GraphSerializationContext*)>(&::Pathfinding::NavGraph::DeserializeSettingsCompatibility)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5e6cabc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::NavGraph*>(),
                    {::i2c::class_of<::Pathfinding::NavGraph*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavGraph.OnDrawGizmos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavGraph::*)(::Pathfinding::Util::RetainedGizmos*, bool)>(&::Pathfinding::NavGraph::OnDrawGizmos)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x5e6cbc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::NavGraph*>(),
                    {::i2c::class_of<::Pathfinding::NavGraph*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavGraph.DrawUnwalkableNodes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavGraph::*)(float_t)>(&::Pathfinding::NavGraph::DrawUnwalkableNodes)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5e6ce6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavGraph*>(),
                        {"DrawUnwalkableNodes", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavGraph.Pathfinding_IGraphInternals_get_SerializedEditorSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Pathfinding::NavGraph::*)()>(&::Pathfinding::NavGraph::Pathfinding_IGraphInternals_get_SerializedEditorSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e6cf74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavGraph*>(),
                        {"Pathfinding.IGraphInternals.get_SerializedEditorSettings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavGraph.Pathfinding_IGraphInternals_set_SerializedEditorSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavGraph::*)(::StringW)>(&::Pathfinding::NavGraph::Pathfinding_IGraphInternals_set_SerializedEditorSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e6cf7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavGraph*>(),
                        {"Pathfinding.IGraphInternals.set_SerializedEditorSettings", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavGraph.Pathfinding_IGraphInternals_OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavGraph::*)()>(&::Pathfinding::NavGraph::Pathfinding_IGraphInternals_OnDestroy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5e6cf84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavGraph*>(),
                        {"Pathfinding.IGraphInternals.OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavGraph.Pathfinding_IGraphInternals_DestroyAllNodes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavGraph::*)()>(&::Pathfinding::NavGraph::Pathfinding_IGraphInternals_DestroyAllNodes)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5e6cf94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavGraph*>(),
                        {"Pathfinding.IGraphInternals.DestroyAllNodes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavGraph.Pathfinding_IGraphInternals_ScanInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>* (::Pathfinding::NavGraph::*)()>(&::Pathfinding::NavGraph::Pathfinding_IGraphInternals_ScanInternal)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5e6cfa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavGraph*>(),
                        {"Pathfinding.IGraphInternals.ScanInternal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavGraph.Pathfinding_IGraphInternals_SerializeExtraInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavGraph::*)(::Pathfinding::Serialization::GraphSerializationContext*)>(&::Pathfinding::NavGraph::Pathfinding_IGraphInternals_SerializeExtraInfo)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5e6cfb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavGraph*>(),
                        {"Pathfinding.IGraphInternals.SerializeExtraInfo", {}, {::i2c::type_of<::Pathfinding::Serialization::GraphSerializationContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavGraph.Pathfinding_IGraphInternals_DeserializeExtraInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavGraph::*)(::Pathfinding::Serialization::GraphSerializationContext*)>(&::Pathfinding::NavGraph::Pathfinding_IGraphInternals_DeserializeExtraInfo)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5e6cfc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavGraph*>(),
                        {"Pathfinding.IGraphInternals.DeserializeExtraInfo", {}, {::i2c::type_of<::Pathfinding::Serialization::GraphSerializationContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavGraph.Pathfinding_IGraphInternals_PostDeserialization
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavGraph::*)(::Pathfinding::Serialization::GraphSerializationContext*)>(&::Pathfinding::NavGraph::Pathfinding_IGraphInternals_PostDeserialization)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5e6cfd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavGraph*>(),
                        {"Pathfinding.IGraphInternals.PostDeserialization", {}, {::i2c::type_of<::Pathfinding::Serialization::GraphSerializationContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavGraph.Pathfinding_IGraphInternals_DeserializeSettingsCompatibility
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavGraph::*)(::Pathfinding::Serialization::GraphSerializationContext*)>(&::Pathfinding::NavGraph::Pathfinding_IGraphInternals_DeserializeSettingsCompatibility)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5e6cfe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavGraph*>(),
                        {"Pathfinding.IGraphInternals.DeserializeSettingsCompatibility", {}, {::i2c::type_of<::Pathfinding::Serialization::GraphSerializationContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavGraph._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavGraph::*)()>(&::Pathfinding::NavGraph::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5e6cff4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavGraph*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::AstarPath>& Pathfinding::NavGraph::__cordl_internal_get_active()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___active;
}
constexpr ::UnityW<::GlobalNamespace::AstarPath> const& Pathfinding::NavGraph::__cordl_internal_get_active() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___active;
}
constexpr void Pathfinding::NavGraph::__cordl_internal_set_active(::UnityW<::GlobalNamespace::AstarPath>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___active = value;
}
constexpr ::Pathfinding::Util::Guid& Pathfinding::NavGraph::__cordl_internal_get_guid()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___guid;
}
constexpr ::Pathfinding::Util::Guid const& Pathfinding::NavGraph::__cordl_internal_get_guid() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___guid;
}
constexpr void Pathfinding::NavGraph::__cordl_internal_set_guid(::Pathfinding::Util::Guid  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___guid = value;
}
constexpr uint32_t& Pathfinding::NavGraph::__cordl_internal_get_initialPenalty()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialPenalty;
}
constexpr uint32_t const& Pathfinding::NavGraph::__cordl_internal_get_initialPenalty() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialPenalty;
}
constexpr void Pathfinding::NavGraph::__cordl_internal_set_initialPenalty(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initialPenalty = value;
}
constexpr bool& Pathfinding::NavGraph::__cordl_internal_get_open()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___open;
}
constexpr bool const& Pathfinding::NavGraph::__cordl_internal_get_open() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___open;
}
constexpr void Pathfinding::NavGraph::__cordl_internal_set_open(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___open = value;
}
constexpr uint32_t& Pathfinding::NavGraph::__cordl_internal_get_graphIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___graphIndex;
}
constexpr uint32_t const& Pathfinding::NavGraph::__cordl_internal_get_graphIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___graphIndex;
}
constexpr void Pathfinding::NavGraph::__cordl_internal_set_graphIndex(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___graphIndex = value;
}
constexpr ::StringW& Pathfinding::NavGraph::__cordl_internal_get_name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr ::StringW const& Pathfinding::NavGraph::__cordl_internal_get_name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr void Pathfinding::NavGraph::__cordl_internal_set_name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___name = value;
}
constexpr bool& Pathfinding::NavGraph::__cordl_internal_get_drawGizmos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drawGizmos;
}
constexpr bool const& Pathfinding::NavGraph::__cordl_internal_get_drawGizmos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drawGizmos;
}
constexpr void Pathfinding::NavGraph::__cordl_internal_set_drawGizmos(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___drawGizmos = value;
}
constexpr bool& Pathfinding::NavGraph::__cordl_internal_get_infoScreenOpen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___infoScreenOpen;
}
constexpr bool const& Pathfinding::NavGraph::__cordl_internal_get_infoScreenOpen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___infoScreenOpen;
}
constexpr void Pathfinding::NavGraph::__cordl_internal_set_infoScreenOpen(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___infoScreenOpen = value;
}
constexpr ::StringW& Pathfinding::NavGraph::__cordl_internal_get_serializedEditorSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serializedEditorSettings;
}
constexpr ::StringW const& Pathfinding::NavGraph::__cordl_internal_get_serializedEditorSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serializedEditorSettings;
}
constexpr void Pathfinding::NavGraph::__cordl_internal_set_serializedEditorSettings(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___serializedEditorSettings = value;
}
constexpr ::UnityEngine::Matrix4x4& Pathfinding::NavGraph::__cordl_internal_get_matrix()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___matrix;
}
constexpr ::UnityEngine::Matrix4x4 const& Pathfinding::NavGraph::__cordl_internal_get_matrix() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___matrix;
}
constexpr void Pathfinding::NavGraph::__cordl_internal_set_matrix(::UnityEngine::Matrix4x4  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___matrix = value;
}
constexpr ::UnityEngine::Matrix4x4& Pathfinding::NavGraph::__cordl_internal_get_inverseMatrix()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inverseMatrix;
}
constexpr ::UnityEngine::Matrix4x4 const& Pathfinding::NavGraph::__cordl_internal_get_inverseMatrix() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inverseMatrix;
}
constexpr void Pathfinding::NavGraph::__cordl_internal_set_inverseMatrix(::UnityEngine::Matrix4x4  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inverseMatrix = value;
}
inline bool Pathfinding::NavGraph::get_exists()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavGraph*>(),
                        {"get_exists", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t Pathfinding::NavGraph::CountNodes()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::NavGraph*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Pathfinding::NavGraph::GetNodes(::System::Func_2<::Pathfinding::GraphNode*,bool>*  action)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavGraph*>(),
                        {"GetNodes", {}, {::i2c::type_of<::System::Func_2<::Pathfinding::GraphNode*,bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, action);
}
inline void Pathfinding::NavGraph::GetNodes(::System::Action_1<::Pathfinding::GraphNode*>*  action)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::NavGraph*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, action);
}
inline void Pathfinding::NavGraph::SetMatrix(::UnityEngine::Matrix4x4  m)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavGraph*>(),
                        {"SetMatrix", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, m);
}
inline void Pathfinding::NavGraph::RelocateNodes(::UnityEngine::Matrix4x4  oldMatrix, ::UnityEngine::Matrix4x4  newMatrix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavGraph*>(),
                        {"RelocateNodes", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oldMatrix, newMatrix);
}
inline void Pathfinding::NavGraph::AssertSafeToUpdateGraph()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavGraph*>(),
                        {"AssertSafeToUpdateGraph", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::NavGraph::RelocateNodes(::UnityEngine::Matrix4x4  deltaMatrix)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::NavGraph*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaMatrix);
}
inline ::Pathfinding::NNInfoInternal Pathfinding::NavGraph::GetNearest(::UnityEngine::Vector3  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavGraph*>(),
                        {"GetNearest", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::NNInfoInternal>(this, ___internal_method, position);
}
inline ::Pathfinding::NNInfoInternal Pathfinding::NavGraph::GetNearest(::UnityEngine::Vector3  position, ::Pathfinding::NNConstraint*  constraint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavGraph*>(),
                        {"GetNearest", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Pathfinding::NNConstraint*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::NNInfoInternal>(this, ___internal_method, position, constraint);
}
inline ::Pathfinding::NNInfoInternal Pathfinding::NavGraph::GetNearest(::UnityEngine::Vector3  position, ::Pathfinding::NNConstraint*  constraint, ::Pathfinding::GraphNode*  hint)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::NavGraph*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::NNInfoInternal>(this, ___internal_method, position, constraint, hint);
}
inline ::Pathfinding::NNInfoInternal Pathfinding::NavGraph::GetNearestForce(::UnityEngine::Vector3  position, ::Pathfinding::NNConstraint*  constraint)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::NavGraph*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::NNInfoInternal>(this, ___internal_method, position, constraint);
}
inline void Pathfinding::NavGraph::OnDestroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::NavGraph*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::NavGraph::DestroyAllNodes()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::NavGraph*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::NavGraph::ScanGraph()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavGraph*>(),
                        {"ScanGraph", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::NavGraph::Scan()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavGraph*>(),
                        {"Scan", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>* Pathfinding::NavGraph::ScanInternal()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::NavGraph*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>*>(this, ___internal_method);
}
inline void Pathfinding::NavGraph::SerializeExtraInfo(::Pathfinding::Serialization::GraphSerializationContext*  ctx)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::NavGraph*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ctx);
}
inline void Pathfinding::NavGraph::DeserializeExtraInfo(::Pathfinding::Serialization::GraphSerializationContext*  ctx)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::NavGraph*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ctx);
}
inline void Pathfinding::NavGraph::PostDeserialization(::Pathfinding::Serialization::GraphSerializationContext*  ctx)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::NavGraph*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ctx);
}
inline void Pathfinding::NavGraph::DeserializeSettingsCompatibility(::Pathfinding::Serialization::GraphSerializationContext*  ctx)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::NavGraph*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ctx);
}
inline void Pathfinding::NavGraph::OnDrawGizmos(::Pathfinding::Util::RetainedGizmos*  gizmos, bool  drawNodes)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::NavGraph*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gizmos, drawNodes);
}
inline void Pathfinding::NavGraph::DrawUnwalkableNodes(float_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavGraph*>(),
                        {"DrawUnwalkableNodes", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, size);
}
inline ::StringW Pathfinding::NavGraph::Pathfinding_IGraphInternals_get_SerializedEditorSettings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavGraph*>(),
                        {"Pathfinding.IGraphInternals.get_SerializedEditorSettings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Pathfinding::NavGraph::Pathfinding_IGraphInternals_set_SerializedEditorSettings(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavGraph*>(),
                        {"Pathfinding.IGraphInternals.set_SerializedEditorSettings", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Pathfinding::NavGraph::Pathfinding_IGraphInternals_OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavGraph*>(),
                        {"Pathfinding.IGraphInternals.OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::NavGraph::Pathfinding_IGraphInternals_DestroyAllNodes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavGraph*>(),
                        {"Pathfinding.IGraphInternals.DestroyAllNodes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>* Pathfinding::NavGraph::Pathfinding_IGraphInternals_ScanInternal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavGraph*>(),
                        {"Pathfinding.IGraphInternals.ScanInternal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>*>(this, ___internal_method);
}
inline void Pathfinding::NavGraph::Pathfinding_IGraphInternals_SerializeExtraInfo(::Pathfinding::Serialization::GraphSerializationContext*  ctx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavGraph*>(),
                        {"Pathfinding.IGraphInternals.SerializeExtraInfo", {}, {::i2c::type_of<::Pathfinding::Serialization::GraphSerializationContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ctx);
}
inline void Pathfinding::NavGraph::Pathfinding_IGraphInternals_DeserializeExtraInfo(::Pathfinding::Serialization::GraphSerializationContext*  ctx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavGraph*>(),
                        {"Pathfinding.IGraphInternals.DeserializeExtraInfo", {}, {::i2c::type_of<::Pathfinding::Serialization::GraphSerializationContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ctx);
}
inline void Pathfinding::NavGraph::Pathfinding_IGraphInternals_PostDeserialization(::Pathfinding::Serialization::GraphSerializationContext*  ctx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavGraph*>(),
                        {"Pathfinding.IGraphInternals.PostDeserialization", {}, {::i2c::type_of<::Pathfinding::Serialization::GraphSerializationContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ctx);
}
inline void Pathfinding::NavGraph::Pathfinding_IGraphInternals_DeserializeSettingsCompatibility(::Pathfinding::Serialization::GraphSerializationContext*  ctx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavGraph*>(),
                        {"Pathfinding.IGraphInternals.DeserializeSettingsCompatibility", {}, {::i2c::type_of<::Pathfinding::Serialization::GraphSerializationContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ctx);
}
inline void Pathfinding::NavGraph::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavGraph*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::NavGraph* Pathfinding::NavGraph::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::NavGraph*>());
}
/// @brief Convert operator to "::Pathfinding::IGraphInternals"
constexpr  Pathfinding::NavGraph::operator ::Pathfinding::IGraphInternals*() noexcept {
return static_cast<::Pathfinding::IGraphInternals*>(static_cast<void*>(this));
}
/// @brief Convert to "::Pathfinding::IGraphInternals"
constexpr ::Pathfinding::IGraphInternals* Pathfinding::NavGraph::i___Pathfinding__IGraphInternals() noexcept {
return static_cast<::Pathfinding::IGraphInternals*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Pathfinding::NavGraph::NavGraph()   {
}
//  Writing Method size for method: ::Pathfinding::NavGraph___c__DisplayClass34_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavGraph___c__DisplayClass34_0::*)()>(&::Pathfinding::NavGraph___c__DisplayClass34_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e6d2a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavGraph___c__DisplayClass34_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavGraph___c__DisplayClass34_0._DrawUnwalkableNodes_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavGraph___c__DisplayClass34_0::*)(::Pathfinding::GraphNode*)>(&::Pathfinding::NavGraph___c__DisplayClass34_0::_DrawUnwalkableNodes_b__0)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5e6d2b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavGraph___c__DisplayClass34_0*>(),
                        {"<DrawUnwalkableNodes>b__0", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Pathfinding::NavGraph___c__DisplayClass34_0::__cordl_internal_get_size()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___size;
}
constexpr float_t const& Pathfinding::NavGraph___c__DisplayClass34_0::__cordl_internal_get_size() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___size;
}
constexpr void Pathfinding::NavGraph___c__DisplayClass34_0::__cordl_internal_set_size(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___size = value;
}
inline void Pathfinding::NavGraph___c__DisplayClass34_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavGraph___c__DisplayClass34_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::NavGraph___c__DisplayClass34_0::_DrawUnwalkableNodes_b__0(::Pathfinding::GraphNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavGraph___c__DisplayClass34_0*>(),
                        {"<DrawUnwalkableNodes>b__0", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline ::Pathfinding::NavGraph___c__DisplayClass34_0* Pathfinding::NavGraph___c__DisplayClass34_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::NavGraph___c__DisplayClass34_0*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::NavGraph___c__DisplayClass34_0::NavGraph___c__DisplayClass34_0()   {
}
//  Writing Method size for method: ::Pathfinding::NavGraph___c__DisplayClass33_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavGraph___c__DisplayClass33_0::*)()>(&::Pathfinding::NavGraph___c__DisplayClass33_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e6d294;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavGraph___c__DisplayClass33_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavGraph___c__DisplayClass33_0._OnDrawGizmos_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavGraph___c__DisplayClass33_0::*)(::Pathfinding::GraphNode*)>(&::Pathfinding::NavGraph___c__DisplayClass33_0::_OnDrawGizmos_b__0)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e6d29c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavGraph___c__DisplayClass33_0*>(),
                        {"<OnDrawGizmos>b__0", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::RetainedGizmos_Hasher& Pathfinding::NavGraph___c__DisplayClass33_0::__cordl_internal_get_hasher()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasher;
}
constexpr ::GlobalNamespace::RetainedGizmos_Hasher const& Pathfinding::NavGraph___c__DisplayClass33_0::__cordl_internal_get_hasher() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasher;
}
constexpr void Pathfinding::NavGraph___c__DisplayClass33_0::__cordl_internal_set_hasher(::GlobalNamespace::RetainedGizmos_Hasher  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasher = value;
}
inline void Pathfinding::NavGraph___c__DisplayClass33_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavGraph___c__DisplayClass33_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::NavGraph___c__DisplayClass33_0::_OnDrawGizmos_b__0(::Pathfinding::GraphNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavGraph___c__DisplayClass33_0*>(),
                        {"<OnDrawGizmos>b__0", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline ::Pathfinding::NavGraph___c__DisplayClass33_0* Pathfinding::NavGraph___c__DisplayClass33_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::NavGraph___c__DisplayClass33_0*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::NavGraph___c__DisplayClass33_0::NavGraph___c__DisplayClass33_0()   {
}
//  Writing Method size for method: ::Pathfinding::NavGraph___c__DisplayClass22_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavGraph___c__DisplayClass22_0::*)()>(&::Pathfinding::NavGraph___c__DisplayClass22_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e6d1a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavGraph___c__DisplayClass22_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavGraph___c__DisplayClass22_0._GetNearest_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavGraph___c__DisplayClass22_0::*)(::Pathfinding::GraphNode*)>(&::Pathfinding::NavGraph___c__DisplayClass22_0::_GetNearest_b__0)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5e6d1b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavGraph___c__DisplayClass22_0*>(),
                        {"<GetNearest>b__0", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& Pathfinding::NavGraph___c__DisplayClass22_0::__cordl_internal_get_position()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___position;
}
constexpr ::UnityEngine::Vector3 const& Pathfinding::NavGraph___c__DisplayClass22_0::__cordl_internal_get_position() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___position;
}
constexpr void Pathfinding::NavGraph___c__DisplayClass22_0::__cordl_internal_set_position(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___position = value;
}
constexpr float_t& Pathfinding::NavGraph___c__DisplayClass22_0::__cordl_internal_get_minDist()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minDist;
}
constexpr float_t const& Pathfinding::NavGraph___c__DisplayClass22_0::__cordl_internal_get_minDist() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minDist;
}
constexpr void Pathfinding::NavGraph___c__DisplayClass22_0::__cordl_internal_set_minDist(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minDist = value;
}
constexpr ::Pathfinding::GraphNode*& Pathfinding::NavGraph___c__DisplayClass22_0::__cordl_internal_get_minNode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minNode;
}
constexpr ::Pathfinding::GraphNode* const& Pathfinding::NavGraph___c__DisplayClass22_0::__cordl_internal_get_minNode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minNode;
}
constexpr void Pathfinding::NavGraph___c__DisplayClass22_0::__cordl_internal_set_minNode(::Pathfinding::GraphNode*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minNode = value;
}
constexpr float_t& Pathfinding::NavGraph___c__DisplayClass22_0::__cordl_internal_get_minConstDist()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minConstDist;
}
constexpr float_t const& Pathfinding::NavGraph___c__DisplayClass22_0::__cordl_internal_get_minConstDist() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minConstDist;
}
constexpr void Pathfinding::NavGraph___c__DisplayClass22_0::__cordl_internal_set_minConstDist(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minConstDist = value;
}
constexpr float_t& Pathfinding::NavGraph___c__DisplayClass22_0::__cordl_internal_get_maxDistSqr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDistSqr;
}
constexpr float_t const& Pathfinding::NavGraph___c__DisplayClass22_0::__cordl_internal_get_maxDistSqr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDistSqr;
}
constexpr void Pathfinding::NavGraph___c__DisplayClass22_0::__cordl_internal_set_maxDistSqr(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxDistSqr = value;
}
constexpr ::Pathfinding::NNConstraint*& Pathfinding::NavGraph___c__DisplayClass22_0::__cordl_internal_get_constraint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___constraint;
}
constexpr ::Pathfinding::NNConstraint* const& Pathfinding::NavGraph___c__DisplayClass22_0::__cordl_internal_get_constraint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___constraint;
}
constexpr void Pathfinding::NavGraph___c__DisplayClass22_0::__cordl_internal_set_constraint(::Pathfinding::NNConstraint*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___constraint = value;
}
constexpr ::Pathfinding::GraphNode*& Pathfinding::NavGraph___c__DisplayClass22_0::__cordl_internal_get_minConstNode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minConstNode;
}
constexpr ::Pathfinding::GraphNode* const& Pathfinding::NavGraph___c__DisplayClass22_0::__cordl_internal_get_minConstNode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minConstNode;
}
constexpr void Pathfinding::NavGraph___c__DisplayClass22_0::__cordl_internal_set_minConstNode(::Pathfinding::GraphNode*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minConstNode = value;
}
inline void Pathfinding::NavGraph___c__DisplayClass22_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavGraph___c__DisplayClass22_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::NavGraph___c__DisplayClass22_0::_GetNearest_b__0(::Pathfinding::GraphNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavGraph___c__DisplayClass22_0*>(),
                        {"<GetNearest>b__0", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline ::Pathfinding::NavGraph___c__DisplayClass22_0* Pathfinding::NavGraph___c__DisplayClass22_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::NavGraph___c__DisplayClass22_0*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::NavGraph___c__DisplayClass22_0::NavGraph___c__DisplayClass22_0()   {
}
//  Writing Method size for method: ::Pathfinding::NavGraph___c__DisplayClass19_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavGraph___c__DisplayClass19_0::*)()>(&::Pathfinding::NavGraph___c__DisplayClass19_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e6d150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavGraph___c__DisplayClass19_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavGraph___c__DisplayClass19_0._RelocateNodes_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavGraph___c__DisplayClass19_0::*)(::Pathfinding::GraphNode*)>(&::Pathfinding::NavGraph___c__DisplayClass19_0::_RelocateNodes_b__0)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5e6d158;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavGraph___c__DisplayClass19_0*>(),
                        {"<RelocateNodes>b__0", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Matrix4x4& Pathfinding::NavGraph___c__DisplayClass19_0::__cordl_internal_get_deltaMatrix()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deltaMatrix;
}
constexpr ::UnityEngine::Matrix4x4 const& Pathfinding::NavGraph___c__DisplayClass19_0::__cordl_internal_get_deltaMatrix() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deltaMatrix;
}
constexpr void Pathfinding::NavGraph___c__DisplayClass19_0::__cordl_internal_set_deltaMatrix(::UnityEngine::Matrix4x4  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___deltaMatrix = value;
}
inline void Pathfinding::NavGraph___c__DisplayClass19_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavGraph___c__DisplayClass19_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::NavGraph___c__DisplayClass19_0::_RelocateNodes_b__0(::Pathfinding::GraphNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavGraph___c__DisplayClass19_0*>(),
                        {"<RelocateNodes>b__0", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline ::Pathfinding::NavGraph___c__DisplayClass19_0* Pathfinding::NavGraph___c__DisplayClass19_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::NavGraph___c__DisplayClass19_0*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::NavGraph___c__DisplayClass19_0::NavGraph___c__DisplayClass19_0()   {
}
//  Writing Method size for method: ::Pathfinding::NavGraph___c__DisplayClass12_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavGraph___c__DisplayClass12_0::*)()>(&::Pathfinding::NavGraph___c__DisplayClass12_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e6d10c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavGraph___c__DisplayClass12_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavGraph___c__DisplayClass12_0._GetNodes_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavGraph___c__DisplayClass12_0::*)(::Pathfinding::GraphNode*)>(&::Pathfinding::NavGraph___c__DisplayClass12_0::_GetNodes_b__0)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5e6d114;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavGraph___c__DisplayClass12_0*>(),
                        {"<GetNodes>b__0", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Pathfinding::NavGraph___c__DisplayClass12_0::__cordl_internal_get_cont()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cont;
}
constexpr bool const& Pathfinding::NavGraph___c__DisplayClass12_0::__cordl_internal_get_cont() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cont;
}
constexpr void Pathfinding::NavGraph___c__DisplayClass12_0::__cordl_internal_set_cont(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cont = value;
}
constexpr ::System::Func_2<::Pathfinding::GraphNode*,bool>*& Pathfinding::NavGraph___c__DisplayClass12_0::__cordl_internal_get_action()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___action;
}
constexpr ::System::Func_2<::Pathfinding::GraphNode*,bool>* const& Pathfinding::NavGraph___c__DisplayClass12_0::__cordl_internal_get_action() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___action;
}
constexpr void Pathfinding::NavGraph___c__DisplayClass12_0::__cordl_internal_set_action(::System::Func_2<::Pathfinding::GraphNode*,bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___action = value;
}
inline void Pathfinding::NavGraph___c__DisplayClass12_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavGraph___c__DisplayClass12_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::NavGraph___c__DisplayClass12_0::_GetNodes_b__0(::Pathfinding::GraphNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavGraph___c__DisplayClass12_0*>(),
                        {"<GetNodes>b__0", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline ::Pathfinding::NavGraph___c__DisplayClass12_0* Pathfinding::NavGraph___c__DisplayClass12_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::NavGraph___c__DisplayClass12_0*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::NavGraph___c__DisplayClass12_0::NavGraph___c__DisplayClass12_0()   {
}
//  Writing Method size for method: ::Pathfinding::NavGraph___c__DisplayClass11_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavGraph___c__DisplayClass11_0::*)()>(&::Pathfinding::NavGraph___c__DisplayClass11_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e6d0f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavGraph___c__DisplayClass11_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavGraph___c__DisplayClass11_0._CountNodes_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavGraph___c__DisplayClass11_0::*)(::Pathfinding::GraphNode*)>(&::Pathfinding::NavGraph___c__DisplayClass11_0::_CountNodes_b__0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5e6d0fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavGraph___c__DisplayClass11_0*>(),
                        {"<CountNodes>b__0", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Pathfinding::NavGraph___c__DisplayClass11_0::__cordl_internal_get_count()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___count;
}
constexpr int32_t const& Pathfinding::NavGraph___c__DisplayClass11_0::__cordl_internal_get_count() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___count;
}
constexpr void Pathfinding::NavGraph___c__DisplayClass11_0::__cordl_internal_set_count(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___count = value;
}
inline void Pathfinding::NavGraph___c__DisplayClass11_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavGraph___c__DisplayClass11_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::NavGraph___c__DisplayClass11_0::_CountNodes_b__0(::Pathfinding::GraphNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavGraph___c__DisplayClass11_0*>(),
                        {"<CountNodes>b__0", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline ::Pathfinding::NavGraph___c__DisplayClass11_0* Pathfinding::NavGraph___c__DisplayClass11_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::NavGraph___c__DisplayClass11_0*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::NavGraph___c__DisplayClass11_0::NavGraph___c__DisplayClass11_0()   {
}
//  Writing Method size for method: ::Pathfinding::NavGraph___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavGraph___c::*)()>(&::Pathfinding::NavGraph___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e6d0d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavGraph___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavGraph___c._DestroyAllNodes_b__25_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavGraph___c::*)(::Pathfinding::GraphNode*)>(&::Pathfinding::NavGraph___c::_DestroyAllNodes_b__25_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5e6d0dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavGraph___c*>(),
                        {"<DestroyAllNodes>b__25_0", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Pathfinding::NavGraph___c::setStaticF___9(::Pathfinding::NavGraph___c*  value)  {
::cordl_internals::setStaticField<::Pathfinding::NavGraph___c*, "<>9", ::Pathfinding::NavGraph___c*>(std::forward<::Pathfinding::NavGraph___c*>(value));
}
inline ::Pathfinding::NavGraph___c* Pathfinding::NavGraph___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Pathfinding::NavGraph___c*, "<>9", ::Pathfinding::NavGraph___c*>();
}
inline void Pathfinding::NavGraph___c::setStaticF___9__25_0(::System::Action_1<::Pathfinding::GraphNode*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::Pathfinding::GraphNode*>*, "<>9__25_0", ::Pathfinding::NavGraph___c*>(std::forward<::System::Action_1<::Pathfinding::GraphNode*>*>(value));
}
inline ::System::Action_1<::Pathfinding::GraphNode*>* Pathfinding::NavGraph___c::getStaticF___9__25_0()  {
return ::cordl_internals::getStaticField<::System::Action_1<::Pathfinding::GraphNode*>*, "<>9__25_0", ::Pathfinding::NavGraph___c*>();
}
inline void Pathfinding::NavGraph___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavGraph___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::NavGraph___c::_DestroyAllNodes_b__25_0(::Pathfinding::GraphNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavGraph___c*>(),
                        {"<DestroyAllNodes>b__25_0", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline ::Pathfinding::NavGraph___c* Pathfinding::NavGraph___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::NavGraph___c*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::NavGraph___c::NavGraph___c()   {
}
