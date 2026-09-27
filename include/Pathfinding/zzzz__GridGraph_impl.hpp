#pragma once
// IWYU pragma private; include "Pathfinding/GridGraph.hpp"
#include "Pathfinding/zzzz__GridGraph_TextureData_ChannelUse_impl.hpp"
#include "Pathfinding/zzzz__GridNodeBase_impl.hpp"
#include "Pathfinding/zzzz__InspectorGridHexagonNodeSize_impl.hpp"
#include "Pathfinding/zzzz__InspectorGridMode_impl.hpp"
#include "Pathfinding/zzzz__NavGraph_impl.hpp"
#include "Pathfinding/zzzz__NumNeighbours_impl.hpp"
#include "Pathfinding/zzzz__Progress_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color32_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Pathfinding/zzzz__GridGraph_def.hpp"
#include "Pathfinding/Serialization/zzzz__GraphSerializationContext_def.hpp"
#include "Pathfinding/Util/zzzz__GraphGizmoHelper_def.hpp"
#include "Pathfinding/Util/zzzz__GraphTransform_def.hpp"
#include "Pathfinding/Util/zzzz__RetainedGizmos_def.hpp"
#include "Pathfinding/zzzz__GraphCollision_def.hpp"
#include "Pathfinding/zzzz__GraphHitInfo_def.hpp"
#include "Pathfinding/zzzz__GraphNode_def.hpp"
#include "Pathfinding/zzzz__GraphUpdateObject_def.hpp"
#include "Pathfinding/zzzz__GraphUpdateShape_def.hpp"
#include "Pathfinding/zzzz__GraphUpdateThreading_def.hpp"
#include "Pathfinding/zzzz__GridGraph_TextureData_ChannelUse_def.hpp"
#include "Pathfinding/zzzz__GridGraph_def.hpp"
#include "Pathfinding/zzzz__GridHitInfo_def.hpp"
#include "Pathfinding/zzzz__GridNodeBase_def.hpp"
#include "Pathfinding/zzzz__GridNode_def.hpp"
#include "Pathfinding/zzzz__IRaycastableGraph_def.hpp"
#include "Pathfinding/zzzz__ITransformedGraph_def.hpp"
#include "Pathfinding/zzzz__IUpdatableGraph_def.hpp"
#include "Pathfinding/zzzz__InspectorGridHexagonNodeSize_def.hpp"
#include "Pathfinding/zzzz__InspectorGridMode_def.hpp"
#include "Pathfinding/zzzz__Int2_def.hpp"
#include "Pathfinding/zzzz__Int3_def.hpp"
#include "Pathfinding/zzzz__IntRect_def.hpp"
#include "Pathfinding/zzzz__NNConstraint_def.hpp"
#include "Pathfinding/zzzz__NNInfoInternal_def.hpp"
#include "Pathfinding/zzzz__Progress_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Pathfinding::GridGraph.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GridGraph::*)()>(&::Pathfinding::GridGraph::OnDestroy)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5e6e1bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::GridGraph*>(),
                    {::i2c::class_of<::Pathfinding::GridGraph*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridGraph.DestroyAllNodes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GridGraph::*)()>(&::Pathfinding::GridGraph::DestroyAllNodes)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5e6e25c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::GridGraph*>(),
                    {::i2c::class_of<::Pathfinding::GridGraph*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridGraph.RemoveGridGraphFromStatic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GridGraph::*)()>(&::Pathfinding::GridGraph::RemoveGridGraphFromStatic)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5e6e1d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"RemoveGridGraphFromStatic", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridGraph.get_uniformWidthDepthGrid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::GridGraph::*)()>(&::Pathfinding::GridGraph::get_uniformWidthDepthGrid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e6e350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::GridGraph*>(),
                    {::i2c::class_of<::Pathfinding::GridGraph*>(), 36}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridGraph.get_LayerCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::GridGraph::*)()>(&::Pathfinding::GridGraph::get_LayerCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e6e358;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::GridGraph*>(),
                    {::i2c::class_of<::Pathfinding::GridGraph*>(), 37}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridGraph.CountNodes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::GridGraph::*)()>(&::Pathfinding::GridGraph::CountNodes)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5e6e360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::GridGraph*>(),
                    {::i2c::class_of<::Pathfinding::GridGraph*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridGraph.GetNodes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GridGraph::*)(::System::Action_1<::Pathfinding::GraphNode*>*)>(&::Pathfinding::GridGraph::GetNodes)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e6e378;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::GridGraph*>(),
                    {::i2c::class_of<::Pathfinding::GridGraph*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridGraph.get_useRaycastNormal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::GridGraph::*)()>(&::Pathfinding::GridGraph::get_useRaycastNormal)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5e6e3e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"get_useRaycastNormal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridGraph.get_size
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::Pathfinding::GridGraph::*)()>(&::Pathfinding::GridGraph::get_size)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e6e45c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"get_size", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridGraph.set_size
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GridGraph::*)(::UnityEngine::Vector2)>(&::Pathfinding::GridGraph::set_size)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e6e468;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"set_size", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridGraph.get_transform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Util::GraphTransform* (::Pathfinding::GridGraph::*)()>(&::Pathfinding::GridGraph::get_transform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e6e474;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"get_transform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridGraph.set_transform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GridGraph::*)(::Pathfinding::Util::GraphTransform*)>(&::Pathfinding::GridGraph::set_transform)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5e6e47c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"set_transform", {}, {::i2c::type_of<::Pathfinding::Util::GraphTransform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridGraph.get_is2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::GridGraph::*)()>(&::Pathfinding::GridGraph::get_is2D)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5e6e48c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"get_is2D", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridGraph.set_is2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GridGraph::*)(bool)>(&::Pathfinding::GridGraph::set_is2D)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5e6e5ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"set_is2D", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridGraph._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GridGraph::*)()>(&::Pathfinding::GridGraph::_ctor)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x5e6e620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridGraph.RelocateNodes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GridGraph::*)(::UnityEngine::Matrix4x4)>(&::Pathfinding::GridGraph::RelocateNodes)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5e6e8e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::GridGraph*>(),
                    {::i2c::class_of<::Pathfinding::GridGraph*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridGraph.RelocateNodes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GridGraph::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, float_t, float_t, float_t)>(&::Pathfinding::GridGraph::RelocateNodes)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x5e6e930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"RelocateNodes", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridGraph.GraphPointToWorld
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Int3 (::Pathfinding::GridGraph::*)(int32_t, int32_t, float_t)>(&::Pathfinding::GridGraph::GraphPointToWorld)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5e6eaf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"GraphPointToWorld", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridGraph.ConvertHexagonSizeToNodeSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::Pathfinding::InspectorGridHexagonNodeSize, float_t)>(&::Pathfinding::GridGraph::ConvertHexagonSizeToNodeSize)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5e6eb3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"ConvertHexagonSizeToNodeSize", {}, {::i2c::type_of<::Pathfinding::InspectorGridHexagonNodeSize>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridGraph.ConvertNodeSizeToHexagonSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::Pathfinding::InspectorGridHexagonNodeSize, float_t)>(&::Pathfinding::GridGraph::ConvertNodeSizeToHexagonSize)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5e6ebd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"ConvertNodeSizeToHexagonSize", {}, {::i2c::type_of<::Pathfinding::InspectorGridHexagonNodeSize>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridGraph.get_Width
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::GridGraph::*)()>(&::Pathfinding::GridGraph::get_Width)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e6ec74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"get_Width", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridGraph.set_Width
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GridGraph::*)(int32_t)>(&::Pathfinding::GridGraph::set_Width)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e6ec7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"set_Width", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridGraph.get_Depth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::GridGraph::*)()>(&::Pathfinding::GridGraph::get_Depth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e6ec84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"get_Depth", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridGraph.set_Depth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GridGraph::*)(int32_t)>(&::Pathfinding::GridGraph::set_Depth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e6ec8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"set_Depth", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridGraph.GetConnectionCost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Pathfinding::GridGraph::*)(int32_t)>(&::Pathfinding::GridGraph::GetConnectionCost)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5e6ec94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"GetConnectionCost", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridGraph.GetNodeConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::GridNode* (::Pathfinding::GridGraph::*)(::Pathfinding::GridNode*, int32_t)>(&::Pathfinding::GridGraph::GetNodeConnection)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5e6ecc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"GetNodeConnection", {}, {::i2c::type_of<::Pathfinding::GridNode*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridGraph.HasNodeConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::GridGraph::*)(::Pathfinding::GridNode*, int32_t)>(&::Pathfinding::GridGraph::HasNodeConnection)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5e6ef78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"HasNodeConnection", {}, {::i2c::type_of<::Pathfinding::GridNode*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridGraph.SetNodeConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GridGraph::*)(::Pathfinding::GridNode*, int32_t, bool)>(&::Pathfinding::GridGraph::SetNodeConnection)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5e6f0e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"SetNodeConnection", {}, {::i2c::type_of<::Pathfinding::GridNode*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridGraph.GetNodeConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::GridNode* (::Pathfinding::GridGraph::*)(int32_t, int32_t, int32_t, int32_t)>(&::Pathfinding::GridGraph::GetNodeConnection)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x5e6ee00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"GetNodeConnection", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridGraph.SetNodeConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GridGraph::*)(int32_t, int32_t, int32_t, int32_t, bool)>(&::Pathfinding::GridGraph::SetNodeConnection)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5e6f124;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"SetNodeConnection", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridGraph.HasNodeConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::GridGraph::*)(int32_t, int32_t, int32_t, int32_t)>(&::Pathfinding::GridGraph::HasNodeConnection)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5e6f008;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"HasNodeConnection", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridGraph.SetGridShape
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GridGraph::*)(::Pathfinding::InspectorGridMode)>(&::Pathfinding::GridGraph::SetGridShape)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5e6f1d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"SetGridShape", {}, {::i2c::type_of<::Pathfinding::InspectorGridMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridGraph.SetDimensions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GridGraph::*)(int32_t, int32_t, float_t)>(&::Pathfinding::GridGraph::SetDimensions)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e6ead8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"SetDimensions", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridGraph.UpdateSizeFromWidthDepth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GridGraph::*)()>(&::Pathfinding::GridGraph::UpdateSizeFromWidthDepth)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5e6f308;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"UpdateSizeFromWidthDepth", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridGraph.GenerateMatrix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GridGraph::*)()>(&::Pathfinding::GridGraph::GenerateMatrix)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e6f324;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"GenerateMatrix", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridGraph.UpdateTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GridGraph::*)()>(&::Pathfinding::GridGraph::UpdateTransform)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5e6f2d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"UpdateTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridGraph.CalculateTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Util::GraphTransform* (::Pathfinding::GridGraph::*)()>(&::Pathfinding::GridGraph::CalculateTransform)> {
  constexpr static std::size_t size = 0x4fc;
  constexpr static std::size_t addrs = 0x5e6f6d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"CalculateTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridGraph.CalculateDimensions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GridGraph::*)(::by_ref<int32_t>, ::by_ref<int32_t>, ::by_ref<float_t>)>(&::Pathfinding::GridGraph::CalculateDimensions)> {
  constexpr static std::size_t size = 0x3a8;
  constexpr static std::size_t addrs = 0x5e6f328;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"CalculateDimensions", {}, {::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridGraph.GetNearest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::NNInfoInternal (::Pathfinding::GridGraph::*)(::UnityEngine::Vector3, ::Pathfinding::NNConstraint*, ::Pathfinding::GraphNode*)>(&::Pathfinding::GridGraph::GetNearest)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x5e6fbcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::GridGraph*>(),
                    {::i2c::class_of<::Pathfinding::GridGraph*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridGraph.GetNearestFromGraphSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::GridNodeBase* (::Pathfinding::GridGraph::*)(::UnityEngine::Vector3)>(&::Pathfinding::GridGraph::GetNearestFromGraphSpace)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5e6fd80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::GridGraph*>(),
                    {::i2c::class_of<::Pathfinding::GridGraph*>(), 38}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridGraph.GetNearestForce
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::NNInfoInternal (::Pathfinding::GridGraph::*)(::UnityEngine::Vector3, ::Pathfinding::NNConstraint*)>(&::Pathfinding::GridGraph::GetNearestForce)> {
  constexpr static std::size_t size = 0x594;
  constexpr static std::size_t addrs = 0x5e6fe10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::GridGraph*>(),
                    {::i2c::class_of<::Pathfinding::GridGraph*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridGraph.SetUpOffsetsAndCosts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GridGraph::*)()>(&::Pathfinding::GridGraph::SetUpOffsetsAndCosts)> {
  constexpr static std::size_t size = 0x3cc;
  constexpr static std::size_t addrs = 0x5e703a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::GridGraph*>(),
                    {::i2c::class_of<::Pathfinding::GridGraph*>(), 39}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridGraph.ScanInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>* (::Pathfinding::GridGraph::*)()>(&::Pathfinding::GridGraph::ScanInternal)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e70770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::GridGraph*>(),
                    {::i2c::class_of<::Pathfinding::GridGraph*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridGraph.UpdateNodePositionCollision
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GridGraph::*)(::Pathfinding::GridNode*, int32_t, int32_t, bool)>(&::Pathfinding::GridGraph::UpdateNodePositionCollision)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e70824;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::GridGraph*>(),
                    {::i2c::class_of<::Pathfinding::GridGraph*>(), 40}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridGraph.RecalculateCell
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GridGraph::*)(int32_t, int32_t, bool, bool)>(&::Pathfinding::GridGraph::RecalculateCell)> {
  constexpr static std::size_t size = 0x4d0;
  constexpr static std::size_t addrs = 0x5e70844;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::GridGraph*>(),
                    {::i2c::class_of<::Pathfinding::GridGraph*>(), 41}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridGraph.ErosionAnyFalseConnections
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::GridGraph::*)(::Pathfinding::GraphNode*)>(&::Pathfinding::GridGraph::ErosionAnyFalseConnections)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5e70d14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::GridGraph*>(),
                    {::i2c::class_of<::Pathfinding::GridGraph*>(), 42}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridGraph.ErodeNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GridGraph::*)(::Pathfinding::GraphNode*)>(&::Pathfinding::GridGraph::ErodeNode)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5e70e54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"ErodeNode", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridGraph.ErodeNodeWithTagsInit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GridGraph::*)(::Pathfinding::GraphNode*)>(&::Pathfinding::GridGraph::ErodeNodeWithTagsInit)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5e70ebc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"ErodeNodeWithTagsInit", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridGraph.ErodeNodeWithTags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GridGraph::*)(::Pathfinding::GraphNode*, int32_t)>(&::Pathfinding::GridGraph::ErodeNodeWithTags)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x5e70f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"ErodeNodeWithTags", {}, {::i2c::type_of<::Pathfinding::GraphNode*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridGraph.ErodeWalkableArea
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GridGraph::*)()>(&::Pathfinding::GridGraph::ErodeWalkableArea)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5e71110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::GridGraph*>(),
                    {::i2c::class_of<::Pathfinding::GridGraph*>(), 43}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridGraph.ErodeWalkableArea
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GridGraph::*)(int32_t, int32_t, int32_t, int32_t)>(&::Pathfinding::GridGraph::ErodeWalkableArea)> {
  constexpr static std::size_t size = 0x438;
  constexpr static std::size_t addrs = 0x5e71120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"ErodeWalkableArea", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridGraph.IsValidConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::GridGraph::*)(::Pathfinding::GridNodeBase*, ::Pathfinding::GridNodeBase*)>(&::Pathfinding::GridGraph::IsValidConnection)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x5e71558;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::GridGraph*>(),
                    {::i2c::class_of<::Pathfinding::GridGraph*>(), 44}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridGraph.CalculateConnectionsForCellAndNeighbours
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GridGraph::*)(int32_t, int32_t)>(&::Pathfinding::GridGraph::CalculateConnectionsForCellAndNeighbours)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5e716ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"CalculateConnectionsForCellAndNeighbours", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridGraph.CalculateConnections
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Pathfinding::GridNode*)>(&::Pathfinding::GridGraph::CalculateConnections)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5e717ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"CalculateConnections", {}, {::i2c::type_of<::Pathfinding::GridNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridGraph.CalculateConnections
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GridGraph::*)(::Pathfinding::GridNodeBase*)>(&::Pathfinding::GridGraph::CalculateConnections)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5e71838;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::GridGraph*>(),
                    {::i2c::class_of<::Pathfinding::GridGraph*>(), 45}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridGraph.CalculateConnections
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GridGraph::*)(int32_t, int32_t, ::Pathfinding::GridNode*)>(&::Pathfinding::GridGraph::CalculateConnections)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5e71878;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::GridGraph*>(),
                    {::i2c::class_of<::Pathfinding::GridGraph*>(), 46}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridGraph.CalculateConnections
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GridGraph::*)(int32_t, int32_t)>(&::Pathfinding::GridGraph::CalculateConnections)> {
  constexpr static std::size_t size = 0x528;
  constexpr static std::size_t addrs = 0x5e71888;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::GridGraph*>(),
                    {::i2c::class_of<::Pathfinding::GridGraph*>(), 47}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridGraph.OnDrawGizmos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GridGraph::*)(::Pathfinding::Util::RetainedGizmos*, bool)>(&::Pathfinding::GridGraph::OnDrawGizmos)> {
  constexpr static std::size_t size = 0x868;
  constexpr static std::size_t addrs = 0x5e71db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::GridGraph*>(),
                    {::i2c::class_of<::Pathfinding::GridGraph*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridGraph.CreateNavmeshSurfaceVisualization
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GridGraph::*)(::ArrayW<::Pathfinding::GridNodeBase*>, int32_t, ::Pathfinding::Util::GraphGizmoHelper*)>(&::Pathfinding::GridGraph::CreateNavmeshSurfaceVisualization)> {
  constexpr static std::size_t size = 0x9f8;
  constexpr static std::size_t addrs = 0x5e72618;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"CreateNavmeshSurfaceVisualization", {}, {::i2c::type_of<::ArrayW<::Pathfinding::GridNodeBase*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Pathfinding::Util::GraphGizmoHelper*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridGraph.GetRectFromBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::IntRect (::Pathfinding::GridGraph::*)(::UnityEngine::Bounds)>(&::Pathfinding::GridGraph::GetRectFromBounds)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x5e73010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"GetRectFromBounds", {}, {::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridGraph.GetNodesInArea
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>* (::Pathfinding::GridGraph::*)(::UnityEngine::Bounds)>(&::Pathfinding::GridGraph::GetNodesInArea)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5e733b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"GetNodesInArea", {}, {::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridGraph.GetNodesInArea
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>* (::Pathfinding::GridGraph::*)(::Pathfinding::GraphUpdateShape*)>(&::Pathfinding::GridGraph::GetNodesInArea)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e73428;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"GetNodesInArea", {}, {::i2c::type_of<::Pathfinding::GraphUpdateShape*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridGraph.GetNodesInArea
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>* (::Pathfinding::GridGraph::*)(::UnityEngine::Bounds, ::Pathfinding::GraphUpdateShape*)>(&::Pathfinding::GridGraph::GetNodesInArea)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5e73494;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"GetNodesInArea", {}, {::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<::Pathfinding::GraphUpdateShape*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridGraph.GetNodesInRegion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>* (::Pathfinding::GridGraph::*)(::UnityEngine::Bounds)>(&::Pathfinding::GridGraph::GetNodesInRegion)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5e733ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"GetNodesInRegion", {}, {::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridGraph.GetNodesInRegion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>* (::Pathfinding::GridGraph::*)(::Pathfinding::GraphUpdateShape*)>(&::Pathfinding::GridGraph::GetNodesInRegion)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5e7342c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"GetNodesInRegion", {}, {::i2c::type_of<::Pathfinding::GraphUpdateShape*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridGraph.GetNodesInRegion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>* (::Pathfinding::GridGraph::*)(::UnityEngine::Bounds, ::Pathfinding::GraphUpdateShape*)>(&::Pathfinding::GridGraph::GetNodesInRegion)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x5e734cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::GridGraph*>(),
                    {::i2c::class_of<::Pathfinding::GridGraph*>(), 48}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridGraph.GetNodesInRegion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>* (::Pathfinding::GridGraph::*)(::Pathfinding::IntRect)>(&::Pathfinding::GridGraph::GetNodesInRegion)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x5e73764;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::GridGraph*>(),
                    {::i2c::class_of<::Pathfinding::GridGraph*>(), 49}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridGraph.GetNodesInRegion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::GridGraph::*)(::Pathfinding::IntRect, ::ArrayW<::Pathfinding::GridNodeBase*>)>(&::Pathfinding::GridGraph::GetNodesInRegion)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x5e73994;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::GridGraph*>(),
                    {::i2c::class_of<::Pathfinding::GridGraph*>(), 50}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridGraph.GetNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::GridNodeBase* (::Pathfinding::GridGraph::*)(int32_t, int32_t)>(&::Pathfinding::GridGraph::GetNode)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5e73b34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::GridGraph*>(),
                    {::i2c::class_of<::Pathfinding::GridGraph*>(), 51}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridGraph.Pathfinding_IUpdatableGraph_CanUpdateAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::GraphUpdateThreading (::Pathfinding::GridGraph::*)(::Pathfinding::GraphUpdateObject*)>(&::Pathfinding::GridGraph::Pathfinding_IUpdatableGraph_CanUpdateAsync)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e73b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"Pathfinding.IUpdatableGraph.CanUpdateAsync", {}, {::i2c::type_of<::Pathfinding::GraphUpdateObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridGraph.Pathfinding_IUpdatableGraph_UpdateAreaInit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GridGraph::*)(::Pathfinding::GraphUpdateObject*)>(&::Pathfinding::GridGraph::Pathfinding_IUpdatableGraph_UpdateAreaInit)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e73b98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"Pathfinding.IUpdatableGraph.UpdateAreaInit", {}, {::i2c::type_of<::Pathfinding::GraphUpdateObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridGraph.Pathfinding_IUpdatableGraph_UpdateAreaPost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GridGraph::*)(::Pathfinding::GraphUpdateObject*)>(&::Pathfinding::GridGraph::Pathfinding_IUpdatableGraph_UpdateAreaPost)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e73b9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"Pathfinding.IUpdatableGraph.UpdateAreaPost", {}, {::i2c::type_of<::Pathfinding::GraphUpdateObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridGraph.CalculateAffectedRegions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GridGraph::*)(::Pathfinding::GraphUpdateObject*, ::by_ref<::Pathfinding::IntRect>, ::by_ref<::Pathfinding::IntRect>, ::by_ref<::Pathfinding::IntRect>, ::by_ref<bool>, ::by_ref<int32_t>)>(&::Pathfinding::GridGraph::CalculateAffectedRegions)> {
  constexpr static std::size_t size = 0x7a0;
  constexpr static std::size_t addrs = 0x5e73ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"CalculateAffectedRegions", {}, {::i2c::type_of<::Pathfinding::GraphUpdateObject*>(), ::i2c::type_of<::by_ref<::Pathfinding::IntRect>>(), ::i2c::type_of<::by_ref<::Pathfinding::IntRect>>(), ::i2c::type_of<::by_ref<::Pathfinding::IntRect>>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridGraph.Pathfinding_IUpdatableGraph_UpdateArea
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GridGraph::*)(::Pathfinding::GraphUpdateObject*)>(&::Pathfinding::GridGraph::Pathfinding_IUpdatableGraph_UpdateArea)> {
  constexpr static std::size_t size = 0x670;
  constexpr static std::size_t addrs = 0x5e74340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"Pathfinding.IUpdatableGraph.UpdateArea", {}, {::i2c::type_of<::Pathfinding::GraphUpdateObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridGraph.Linecast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::GridGraph::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::Pathfinding::GridGraph::Linecast)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5e749b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"Linecast", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridGraph.Linecast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::GridGraph::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Pathfinding::GraphNode*)>(&::Pathfinding::GridGraph::Linecast)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5e74d68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"Linecast", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridGraph.Linecast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::GridGraph::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Pathfinding::GraphNode*, ::by_ref<::Pathfinding::GraphHitInfo>)>(&::Pathfinding::GridGraph::Linecast)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5e74da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"Linecast", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Pathfinding::GraphNode*>(), ::i2c::type_of<::by_ref<::Pathfinding::GraphHitInfo>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridGraph.CrossMagnitude
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::Pathfinding::Int2, ::Pathfinding::Int2)>(&::Pathfinding::GridGraph::CrossMagnitude)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5e74dc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"CrossMagnitude", {}, {::i2c::type_of<::Pathfinding::Int2>(), ::i2c::type_of<::Pathfinding::Int2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridGraph.ClipLineSegmentToBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::GridGraph::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>)>(&::Pathfinding::GridGraph::ClipLineSegmentToBounds)> {
  constexpr static std::size_t size = 0x4b4;
  constexpr static std::size_t addrs = 0x5e74ddc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"ClipLineSegmentToBounds", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridGraph.Linecast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::GridGraph::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Pathfinding::GraphNode*, ::by_ref<::Pathfinding::GraphHitInfo>, ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*)>(&::Pathfinding::GridGraph::Linecast)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5e74db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"Linecast", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Pathfinding::GraphNode*>(), ::i2c::type_of<::by_ref<::Pathfinding::GraphHitInfo>>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridGraph.Linecast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::GridGraph::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::by_ref<::Pathfinding::GraphHitInfo>, ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*, ::System::Func_2<::Pathfinding::GraphNode*,bool>*)>(&::Pathfinding::GridGraph::Linecast)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x5e749e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"Linecast", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::Pathfinding::GraphHitInfo>>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*>(), ::i2c::type_of<::System::Func_2<::Pathfinding::GraphNode*,bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridGraph.SnappedLinecast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::GridGraph::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Pathfinding::GraphNode*, ::by_ref<::Pathfinding::GraphHitInfo>)>(&::Pathfinding::GridGraph::SnappedLinecast)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5e7555c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"SnappedLinecast", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Pathfinding::GraphNode*>(), ::i2c::type_of<::by_ref<::Pathfinding::GraphHitInfo>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridGraph.Linecast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::GridGraph::*)(::Pathfinding::GridNodeBase*, ::Pathfinding::GridNodeBase*, ::System::Func_2<::Pathfinding::GraphNode*,bool>*)>(&::Pathfinding::GridGraph::Linecast)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5e75644;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"Linecast", {}, {::i2c::type_of<::Pathfinding::GridNodeBase*>(), ::i2c::type_of<::Pathfinding::GridNodeBase*>(), ::i2c::type_of<::System::Func_2<::Pathfinding::GraphNode*,bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridGraph.Linecast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::GridGraph::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::by_ref<::Pathfinding::GridHitInfo>, ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*, ::System::Func_2<::Pathfinding::GraphNode*,bool>*)>(&::Pathfinding::GridGraph::Linecast)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x5e75290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"Linecast", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::Pathfinding::GridHitInfo>>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*>(), ::i2c::type_of<::System::Func_2<::Pathfinding::GraphNode*,bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridGraph.Linecast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::GridGraph::*)(::Pathfinding::GridNodeBase*, ::UnityEngine::Vector2, ::Pathfinding::GridNodeBase*, ::UnityEngine::Vector2, ::by_ref<::Pathfinding::GridHitInfo>, ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*, ::System::Func_2<::Pathfinding::GraphNode*,bool>*, bool)>(&::Pathfinding::GridGraph::Linecast)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0x5e75684;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"Linecast", {}, {::i2c::type_of<::Pathfinding::GridNodeBase*>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::Pathfinding::GridNodeBase*>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::by_ref<::Pathfinding::GridHitInfo>>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*>(), ::i2c::type_of<::System::Func_2<::Pathfinding::GraphNode*,bool>*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridGraph.Linecast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::GridGraph::*)(::Pathfinding::GridNodeBase*, ::Pathfinding::Int2, ::Pathfinding::GridNodeBase*, ::Pathfinding::Int2, ::by_ref<::Pathfinding::GridHitInfo>, ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*, ::System::Func_2<::Pathfinding::GraphNode*,bool>*, bool)>(&::Pathfinding::GridGraph::Linecast)> {
  constexpr static std::size_t size = 0xdcc;
  constexpr static std::size_t addrs = 0x5e75978;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"Linecast", {}, {::i2c::type_of<::Pathfinding::GridNodeBase*>(), ::i2c::type_of<::Pathfinding::Int2>(), ::i2c::type_of<::Pathfinding::GridNodeBase*>(), ::i2c::type_of<::Pathfinding::Int2>(), ::i2c::type_of<::by_ref<::Pathfinding::GridHitInfo>>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*>(), ::i2c::type_of<::System::Func_2<::Pathfinding::GraphNode*,bool>*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridGraph.CheckConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::GridGraph::*)(::Pathfinding::GridNode*, int32_t)>(&::Pathfinding::GridGraph::CheckConnection)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x5e76744;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"CheckConnection", {}, {::i2c::type_of<::Pathfinding::GridNode*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridGraph.SerializeExtraInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GridGraph::*)(::Pathfinding::Serialization::GraphSerializationContext*)>(&::Pathfinding::GridGraph::SerializeExtraInfo)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5e768f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::GridGraph*>(),
                    {::i2c::class_of<::Pathfinding::GridGraph*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridGraph.DeserializeExtraInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GridGraph::*)(::Pathfinding::Serialization::GraphSerializationContext*)>(&::Pathfinding::GridGraph::DeserializeExtraInfo)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x5e769b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::GridGraph*>(),
                    {::i2c::class_of<::Pathfinding::GridGraph*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridGraph.DeserializeSettingsCompatibility
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GridGraph::*)(::Pathfinding::Serialization::GraphSerializationContext*)>(&::Pathfinding::GridGraph::DeserializeSettingsCompatibility)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x5e76b3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::GridGraph*>(),
                    {::i2c::class_of<::Pathfinding::GridGraph*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridGraph.PostDeserialization
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GridGraph::*)(::Pathfinding::Serialization::GraphSerializationContext*)>(&::Pathfinding::GridGraph::PostDeserialization)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x5e76ddc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::GridGraph*>(),
                    {::i2c::class_of<::Pathfinding::GridGraph*>(), 23}
                ));
    return ___internal_method;
  }
};
constexpr ::Pathfinding::InspectorGridMode& Pathfinding::GridGraph::__cordl_internal_get_inspectorGridMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inspectorGridMode;
}
constexpr ::Pathfinding::InspectorGridMode const& Pathfinding::GridGraph::__cordl_internal_get_inspectorGridMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inspectorGridMode;
}
constexpr void Pathfinding::GridGraph::__cordl_internal_set_inspectorGridMode(::Pathfinding::InspectorGridMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inspectorGridMode = value;
}
constexpr ::Pathfinding::InspectorGridHexagonNodeSize& Pathfinding::GridGraph::__cordl_internal_get_inspectorHexagonSizeMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inspectorHexagonSizeMode;
}
constexpr ::Pathfinding::InspectorGridHexagonNodeSize const& Pathfinding::GridGraph::__cordl_internal_get_inspectorHexagonSizeMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inspectorHexagonSizeMode;
}
constexpr void Pathfinding::GridGraph::__cordl_internal_set_inspectorHexagonSizeMode(::Pathfinding::InspectorGridHexagonNodeSize  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inspectorHexagonSizeMode = value;
}
constexpr int32_t& Pathfinding::GridGraph::__cordl_internal_get_width()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___width;
}
constexpr int32_t const& Pathfinding::GridGraph::__cordl_internal_get_width() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___width;
}
constexpr void Pathfinding::GridGraph::__cordl_internal_set_width(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___width = value;
}
constexpr int32_t& Pathfinding::GridGraph::__cordl_internal_get_depth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depth;
}
constexpr int32_t const& Pathfinding::GridGraph::__cordl_internal_get_depth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depth;
}
constexpr void Pathfinding::GridGraph::__cordl_internal_set_depth(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___depth = value;
}
constexpr float_t& Pathfinding::GridGraph::__cordl_internal_get_aspectRatio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___aspectRatio;
}
constexpr float_t const& Pathfinding::GridGraph::__cordl_internal_get_aspectRatio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___aspectRatio;
}
constexpr void Pathfinding::GridGraph::__cordl_internal_set_aspectRatio(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___aspectRatio = value;
}
constexpr float_t& Pathfinding::GridGraph::__cordl_internal_get_isometricAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isometricAngle;
}
constexpr float_t const& Pathfinding::GridGraph::__cordl_internal_get_isometricAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isometricAngle;
}
constexpr void Pathfinding::GridGraph::__cordl_internal_set_isometricAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isometricAngle = value;
}
constexpr bool& Pathfinding::GridGraph::__cordl_internal_get_uniformEdgeCosts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uniformEdgeCosts;
}
constexpr bool const& Pathfinding::GridGraph::__cordl_internal_get_uniformEdgeCosts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uniformEdgeCosts;
}
constexpr void Pathfinding::GridGraph::__cordl_internal_set_uniformEdgeCosts(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___uniformEdgeCosts = value;
}
constexpr ::UnityEngine::Vector3& Pathfinding::GridGraph::__cordl_internal_get_rotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotation;
}
constexpr ::UnityEngine::Vector3 const& Pathfinding::GridGraph::__cordl_internal_get_rotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotation;
}
constexpr void Pathfinding::GridGraph::__cordl_internal_set_rotation(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotation = value;
}
constexpr ::UnityEngine::Vector3& Pathfinding::GridGraph::__cordl_internal_get_center()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___center;
}
constexpr ::UnityEngine::Vector3 const& Pathfinding::GridGraph::__cordl_internal_get_center() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___center;
}
constexpr void Pathfinding::GridGraph::__cordl_internal_set_center(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___center = value;
}
constexpr ::UnityEngine::Vector2& Pathfinding::GridGraph::__cordl_internal_get_unclampedSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unclampedSize;
}
constexpr ::UnityEngine::Vector2 const& Pathfinding::GridGraph::__cordl_internal_get_unclampedSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unclampedSize;
}
constexpr void Pathfinding::GridGraph::__cordl_internal_set_unclampedSize(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unclampedSize = value;
}
constexpr float_t& Pathfinding::GridGraph::__cordl_internal_get_nodeSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodeSize;
}
constexpr float_t const& Pathfinding::GridGraph::__cordl_internal_get_nodeSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodeSize;
}
constexpr void Pathfinding::GridGraph::__cordl_internal_set_nodeSize(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nodeSize = value;
}
constexpr ::Pathfinding::GraphCollision*& Pathfinding::GridGraph::__cordl_internal_get_collision()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collision;
}
constexpr ::Pathfinding::GraphCollision* const& Pathfinding::GridGraph::__cordl_internal_get_collision() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collision;
}
constexpr void Pathfinding::GridGraph::__cordl_internal_set_collision(::Pathfinding::GraphCollision*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___collision = value;
}
constexpr float_t& Pathfinding::GridGraph::__cordl_internal_get_maxClimb()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxClimb;
}
constexpr float_t const& Pathfinding::GridGraph::__cordl_internal_get_maxClimb() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxClimb;
}
constexpr void Pathfinding::GridGraph::__cordl_internal_set_maxClimb(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxClimb = value;
}
constexpr float_t& Pathfinding::GridGraph::__cordl_internal_get_maxSlope()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxSlope;
}
constexpr float_t const& Pathfinding::GridGraph::__cordl_internal_get_maxSlope() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxSlope;
}
constexpr void Pathfinding::GridGraph::__cordl_internal_set_maxSlope(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxSlope = value;
}
constexpr int32_t& Pathfinding::GridGraph::__cordl_internal_get_erodeIterations()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___erodeIterations;
}
constexpr int32_t const& Pathfinding::GridGraph::__cordl_internal_get_erodeIterations() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___erodeIterations;
}
constexpr void Pathfinding::GridGraph::__cordl_internal_set_erodeIterations(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___erodeIterations = value;
}
constexpr bool& Pathfinding::GridGraph::__cordl_internal_get_erosionUseTags()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___erosionUseTags;
}
constexpr bool const& Pathfinding::GridGraph::__cordl_internal_get_erosionUseTags() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___erosionUseTags;
}
constexpr void Pathfinding::GridGraph::__cordl_internal_set_erosionUseTags(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___erosionUseTags = value;
}
constexpr int32_t& Pathfinding::GridGraph::__cordl_internal_get_erosionFirstTag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___erosionFirstTag;
}
constexpr int32_t const& Pathfinding::GridGraph::__cordl_internal_get_erosionFirstTag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___erosionFirstTag;
}
constexpr void Pathfinding::GridGraph::__cordl_internal_set_erosionFirstTag(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___erosionFirstTag = value;
}
constexpr ::Pathfinding::NumNeighbours& Pathfinding::GridGraph::__cordl_internal_get_neighbours()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___neighbours;
}
constexpr ::Pathfinding::NumNeighbours const& Pathfinding::GridGraph::__cordl_internal_get_neighbours() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___neighbours;
}
constexpr void Pathfinding::GridGraph::__cordl_internal_set_neighbours(::Pathfinding::NumNeighbours  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___neighbours = value;
}
constexpr bool& Pathfinding::GridGraph::__cordl_internal_get_cutCorners()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cutCorners;
}
constexpr bool const& Pathfinding::GridGraph::__cordl_internal_get_cutCorners() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cutCorners;
}
constexpr void Pathfinding::GridGraph::__cordl_internal_set_cutCorners(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cutCorners = value;
}
constexpr float_t& Pathfinding::GridGraph::__cordl_internal_get_penaltyPositionOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___penaltyPositionOffset;
}
constexpr float_t const& Pathfinding::GridGraph::__cordl_internal_get_penaltyPositionOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___penaltyPositionOffset;
}
constexpr void Pathfinding::GridGraph::__cordl_internal_set_penaltyPositionOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___penaltyPositionOffset = value;
}
constexpr bool& Pathfinding::GridGraph::__cordl_internal_get_penaltyPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___penaltyPosition;
}
constexpr bool const& Pathfinding::GridGraph::__cordl_internal_get_penaltyPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___penaltyPosition;
}
constexpr void Pathfinding::GridGraph::__cordl_internal_set_penaltyPosition(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___penaltyPosition = value;
}
constexpr float_t& Pathfinding::GridGraph::__cordl_internal_get_penaltyPositionFactor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___penaltyPositionFactor;
}
constexpr float_t const& Pathfinding::GridGraph::__cordl_internal_get_penaltyPositionFactor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___penaltyPositionFactor;
}
constexpr void Pathfinding::GridGraph::__cordl_internal_set_penaltyPositionFactor(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___penaltyPositionFactor = value;
}
constexpr bool& Pathfinding::GridGraph::__cordl_internal_get_penaltyAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___penaltyAngle;
}
constexpr bool const& Pathfinding::GridGraph::__cordl_internal_get_penaltyAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___penaltyAngle;
}
constexpr void Pathfinding::GridGraph::__cordl_internal_set_penaltyAngle(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___penaltyAngle = value;
}
constexpr float_t& Pathfinding::GridGraph::__cordl_internal_get_penaltyAngleFactor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___penaltyAngleFactor;
}
constexpr float_t const& Pathfinding::GridGraph::__cordl_internal_get_penaltyAngleFactor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___penaltyAngleFactor;
}
constexpr void Pathfinding::GridGraph::__cordl_internal_set_penaltyAngleFactor(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___penaltyAngleFactor = value;
}
constexpr float_t& Pathfinding::GridGraph::__cordl_internal_get_penaltyAnglePower()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___penaltyAnglePower;
}
constexpr float_t const& Pathfinding::GridGraph::__cordl_internal_get_penaltyAnglePower() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___penaltyAnglePower;
}
constexpr void Pathfinding::GridGraph::__cordl_internal_set_penaltyAnglePower(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___penaltyAnglePower = value;
}
constexpr bool& Pathfinding::GridGraph::__cordl_internal_get_useJumpPointSearch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useJumpPointSearch;
}
constexpr bool const& Pathfinding::GridGraph::__cordl_internal_get_useJumpPointSearch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useJumpPointSearch;
}
constexpr void Pathfinding::GridGraph::__cordl_internal_set_useJumpPointSearch(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useJumpPointSearch = value;
}
constexpr bool& Pathfinding::GridGraph::__cordl_internal_get_showMeshOutline()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showMeshOutline;
}
constexpr bool const& Pathfinding::GridGraph::__cordl_internal_get_showMeshOutline() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showMeshOutline;
}
constexpr void Pathfinding::GridGraph::__cordl_internal_set_showMeshOutline(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showMeshOutline = value;
}
constexpr bool& Pathfinding::GridGraph::__cordl_internal_get_showNodeConnections()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showNodeConnections;
}
constexpr bool const& Pathfinding::GridGraph::__cordl_internal_get_showNodeConnections() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showNodeConnections;
}
constexpr void Pathfinding::GridGraph::__cordl_internal_set_showNodeConnections(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showNodeConnections = value;
}
constexpr bool& Pathfinding::GridGraph::__cordl_internal_get_showMeshSurface()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showMeshSurface;
}
constexpr bool const& Pathfinding::GridGraph::__cordl_internal_get_showMeshSurface() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showMeshSurface;
}
constexpr void Pathfinding::GridGraph::__cordl_internal_set_showMeshSurface(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showMeshSurface = value;
}
constexpr ::Pathfinding::GridGraph_TextureData*& Pathfinding::GridGraph::__cordl_internal_get_textureData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textureData;
}
constexpr ::Pathfinding::GridGraph_TextureData* const& Pathfinding::GridGraph::__cordl_internal_get_textureData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textureData;
}
constexpr void Pathfinding::GridGraph::__cordl_internal_set_textureData(::Pathfinding::GridGraph_TextureData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textureData = value;
}
constexpr ::UnityEngine::Vector2& Pathfinding::GridGraph::__cordl_internal_get__size_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____size_k__BackingField;
}
constexpr ::UnityEngine::Vector2 const& Pathfinding::GridGraph::__cordl_internal_get__size_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____size_k__BackingField;
}
constexpr void Pathfinding::GridGraph::__cordl_internal_set__size_k__BackingField(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____size_k__BackingField = value;
}
constexpr ::ArrayW<int32_t>& Pathfinding::GridGraph::__cordl_internal_get_neighbourOffsets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___neighbourOffsets;
}
constexpr ::ArrayW<int32_t> const& Pathfinding::GridGraph::__cordl_internal_get_neighbourOffsets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___neighbourOffsets;
}
constexpr void Pathfinding::GridGraph::__cordl_internal_set_neighbourOffsets(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___neighbourOffsets = value;
}
constexpr ::ArrayW<uint32_t>& Pathfinding::GridGraph::__cordl_internal_get_neighbourCosts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___neighbourCosts;
}
constexpr ::ArrayW<uint32_t> const& Pathfinding::GridGraph::__cordl_internal_get_neighbourCosts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___neighbourCosts;
}
constexpr void Pathfinding::GridGraph::__cordl_internal_set_neighbourCosts(::ArrayW<uint32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___neighbourCosts = value;
}
constexpr ::ArrayW<int32_t>& Pathfinding::GridGraph::__cordl_internal_get_neighbourXOffsets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___neighbourXOffsets;
}
constexpr ::ArrayW<int32_t> const& Pathfinding::GridGraph::__cordl_internal_get_neighbourXOffsets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___neighbourXOffsets;
}
constexpr void Pathfinding::GridGraph::__cordl_internal_set_neighbourXOffsets(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___neighbourXOffsets = value;
}
constexpr ::ArrayW<int32_t>& Pathfinding::GridGraph::__cordl_internal_get_neighbourZOffsets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___neighbourZOffsets;
}
constexpr ::ArrayW<int32_t> const& Pathfinding::GridGraph::__cordl_internal_get_neighbourZOffsets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___neighbourZOffsets;
}
constexpr void Pathfinding::GridGraph::__cordl_internal_set_neighbourZOffsets(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___neighbourZOffsets = value;
}
constexpr ::ArrayW<::Pathfinding::GridNodeBase*>& Pathfinding::GridGraph::__cordl_internal_get_nodes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodes;
}
constexpr ::ArrayW<::Pathfinding::GridNodeBase*> const& Pathfinding::GridGraph::__cordl_internal_get_nodes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodes;
}
constexpr void Pathfinding::GridGraph::__cordl_internal_set_nodes(::ArrayW<::Pathfinding::GridNodeBase*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nodes = value;
}
constexpr ::Pathfinding::Util::GraphTransform*& Pathfinding::GridGraph::__cordl_internal_get__transform_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transform_k__BackingField;
}
constexpr ::Pathfinding::Util::GraphTransform* const& Pathfinding::GridGraph::__cordl_internal_get__transform_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transform_k__BackingField;
}
constexpr void Pathfinding::GridGraph::__cordl_internal_set__transform_k__BackingField(::Pathfinding::Util::GraphTransform*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____transform_k__BackingField = value;
}
inline void Pathfinding::GridGraph::setStaticF_StandardIsometricAngle(float_t  value)  {
::cordl_internals::setStaticField<float_t, "StandardIsometricAngle", ::Pathfinding::GridGraph*>(std::forward<float_t>(value));
}
inline float_t Pathfinding::GridGraph::getStaticF_StandardIsometricAngle()  {
return ::cordl_internals::getStaticField<float_t, "StandardIsometricAngle", ::Pathfinding::GridGraph*>();
}
inline void Pathfinding::GridGraph::setStaticF_StandardDimetricAngle(float_t  value)  {
::cordl_internals::setStaticField<float_t, "StandardDimetricAngle", ::Pathfinding::GridGraph*>(std::forward<float_t>(value));
}
inline float_t Pathfinding::GridGraph::getStaticF_StandardDimetricAngle()  {
return ::cordl_internals::getStaticField<float_t, "StandardDimetricAngle", ::Pathfinding::GridGraph*>();
}
inline void Pathfinding::GridGraph::setStaticF_hexagonNeighbourIndices(::ArrayW<int32_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<int32_t>, "hexagonNeighbourIndices", ::Pathfinding::GridGraph*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> Pathfinding::GridGraph::getStaticF_hexagonNeighbourIndices()  {
return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "hexagonNeighbourIndices", ::Pathfinding::GridGraph*>();
}
inline void Pathfinding::GridGraph::OnDestroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::GridGraph*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::GridGraph::DestroyAllNodes()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::GridGraph*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::GridGraph::RemoveGridGraphFromStatic()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"RemoveGridGraphFromStatic", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Pathfinding::GridGraph::get_uniformWidthDepthGrid()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::GridGraph*>(), 36}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t Pathfinding::GridGraph::get_LayerCount()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::GridGraph*>(), 37}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Pathfinding::GridGraph::CountNodes()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::GridGraph*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Pathfinding::GridGraph::GetNodes(::System::Action_1<::Pathfinding::GraphNode*>*  action)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::GridGraph*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, action);
}
inline bool Pathfinding::GridGraph::get_useRaycastNormal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"get_useRaycastNormal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 Pathfinding::GridGraph::get_size()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"get_size", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline void Pathfinding::GridGraph::set_size(::UnityEngine::Vector2  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"set_size", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Pathfinding::Util::GraphTransform* Pathfinding::GridGraph::get_transform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"get_transform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Util::GraphTransform*>(this, ___internal_method);
}
inline void Pathfinding::GridGraph::set_transform(::Pathfinding::Util::GraphTransform*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"set_transform", {}, {::i2c::type_of<::Pathfinding::Util::GraphTransform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Pathfinding::GridGraph::get_is2D()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"get_is2D", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Pathfinding::GridGraph::set_is2D(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"set_is2D", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Pathfinding::GridGraph::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::GridGraph::RelocateNodes(::UnityEngine::Matrix4x4  deltaMatrix)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::GridGraph*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaMatrix);
}
inline void Pathfinding::GridGraph::RelocateNodes(::UnityEngine::Vector3  center, ::UnityEngine::Quaternion  rotation, float_t  nodeSize, float_t  aspectRatio, float_t  isometricAngle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"RelocateNodes", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, center, rotation, nodeSize, aspectRatio, isometricAngle);
}
inline ::Pathfinding::Int3 Pathfinding::GridGraph::GraphPointToWorld(int32_t  x, int32_t  z, float_t  height)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"GraphPointToWorld", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Int3>(this, ___internal_method, x, z, height);
}
inline float_t Pathfinding::GridGraph::ConvertHexagonSizeToNodeSize(::Pathfinding::InspectorGridHexagonNodeSize  mode, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"ConvertHexagonSizeToNodeSize", {}, {::i2c::type_of<::Pathfinding::InspectorGridHexagonNodeSize>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, mode, value);
}
inline float_t Pathfinding::GridGraph::ConvertNodeSizeToHexagonSize(::Pathfinding::InspectorGridHexagonNodeSize  mode, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"ConvertNodeSizeToHexagonSize", {}, {::i2c::type_of<::Pathfinding::InspectorGridHexagonNodeSize>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, mode, value);
}
inline int32_t Pathfinding::GridGraph::get_Width()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"get_Width", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Pathfinding::GridGraph::set_Width(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"set_Width", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Pathfinding::GridGraph::get_Depth()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"get_Depth", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Pathfinding::GridGraph::set_Depth(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"set_Depth", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline uint32_t Pathfinding::GridGraph::GetConnectionCost(int32_t  dir)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"GetConnectionCost", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, dir);
}
inline ::Pathfinding::GridNode* Pathfinding::GridGraph::GetNodeConnection(::Pathfinding::GridNode*  node, int32_t  dir)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"GetNodeConnection", {}, {::i2c::type_of<::Pathfinding::GridNode*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::GridNode*>(this, ___internal_method, node, dir);
}
inline bool Pathfinding::GridGraph::HasNodeConnection(::Pathfinding::GridNode*  node, int32_t  dir)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"HasNodeConnection", {}, {::i2c::type_of<::Pathfinding::GridNode*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, node, dir);
}
inline void Pathfinding::GridGraph::SetNodeConnection(::Pathfinding::GridNode*  node, int32_t  dir, bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"SetNodeConnection", {}, {::i2c::type_of<::Pathfinding::GridNode*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node, dir, value);
}
inline ::Pathfinding::GridNode* Pathfinding::GridGraph::GetNodeConnection(int32_t  index, int32_t  x, int32_t  z, int32_t  dir)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"GetNodeConnection", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::GridNode*>(this, ___internal_method, index, x, z, dir);
}
inline void Pathfinding::GridGraph::SetNodeConnection(int32_t  index, int32_t  x, int32_t  z, int32_t  dir, bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"SetNodeConnection", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, x, z, dir, value);
}
inline bool Pathfinding::GridGraph::HasNodeConnection(int32_t  index, int32_t  x, int32_t  z, int32_t  dir)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"HasNodeConnection", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, index, x, z, dir);
}
inline void Pathfinding::GridGraph::SetGridShape(::Pathfinding::InspectorGridMode  shape)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"SetGridShape", {}, {::i2c::type_of<::Pathfinding::InspectorGridMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, shape);
}
inline void Pathfinding::GridGraph::SetDimensions(int32_t  width, int32_t  depth, float_t  nodeSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"SetDimensions", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, width, depth, nodeSize);
}
inline void Pathfinding::GridGraph::UpdateSizeFromWidthDepth()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"UpdateSizeFromWidthDepth", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::GridGraph::GenerateMatrix()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"GenerateMatrix", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::GridGraph::UpdateTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"UpdateTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::Util::GraphTransform* Pathfinding::GridGraph::CalculateTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"CalculateTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Util::GraphTransform*>(this, ___internal_method);
}
inline void Pathfinding::GridGraph::CalculateDimensions(::by_ref<int32_t>  width, ::by_ref<int32_t>  depth, ::by_ref<float_t>  nodeSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"CalculateDimensions", {}, {::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, width, depth, nodeSize);
}
inline ::Pathfinding::NNInfoInternal Pathfinding::GridGraph::GetNearest(::UnityEngine::Vector3  position, ::Pathfinding::NNConstraint*  constraint, ::Pathfinding::GraphNode*  hint)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::GridGraph*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::NNInfoInternal>(this, ___internal_method, position, constraint, hint);
}
inline ::Pathfinding::GridNodeBase* Pathfinding::GridGraph::GetNearestFromGraphSpace(::UnityEngine::Vector3  positionGraphSpace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::GridGraph*>(), 38}
                        )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::GridNodeBase*>(this, ___internal_method, positionGraphSpace);
}
inline ::Pathfinding::NNInfoInternal Pathfinding::GridGraph::GetNearestForce(::UnityEngine::Vector3  position, ::Pathfinding::NNConstraint*  constraint)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::GridGraph*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::NNInfoInternal>(this, ___internal_method, position, constraint);
}
inline void Pathfinding::GridGraph::SetUpOffsetsAndCosts()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::GridGraph*>(), 39}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>* Pathfinding::GridGraph::ScanInternal()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::GridGraph*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>*>(this, ___internal_method);
}
inline void Pathfinding::GridGraph::UpdateNodePositionCollision(::Pathfinding::GridNode*  node, int32_t  x, int32_t  z, bool  resetPenalty)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::GridGraph*>(), 40}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node, x, z, resetPenalty);
}
inline void Pathfinding::GridGraph::RecalculateCell(int32_t  x, int32_t  z, bool  resetPenalties, bool  resetTags)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::GridGraph*>(), 41}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x, z, resetPenalties, resetTags);
}
inline bool Pathfinding::GridGraph::ErosionAnyFalseConnections(::Pathfinding::GraphNode*  baseNode)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::GridGraph*>(), 42}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, baseNode);
}
inline void Pathfinding::GridGraph::ErodeNode(::Pathfinding::GraphNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"ErodeNode", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline void Pathfinding::GridGraph::ErodeNodeWithTagsInit(::Pathfinding::GraphNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"ErodeNodeWithTagsInit", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline void Pathfinding::GridGraph::ErodeNodeWithTags(::Pathfinding::GraphNode*  node, int32_t  iteration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"ErodeNodeWithTags", {}, {::i2c::type_of<::Pathfinding::GraphNode*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node, iteration);
}
inline void Pathfinding::GridGraph::ErodeWalkableArea()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::GridGraph*>(), 43}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::GridGraph::ErodeWalkableArea(int32_t  xmin, int32_t  zmin, int32_t  xmax, int32_t  zmax)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"ErodeWalkableArea", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xmin, zmin, xmax, zmax);
}
inline bool Pathfinding::GridGraph::IsValidConnection(::Pathfinding::GridNodeBase*  node1, ::Pathfinding::GridNodeBase*  node2)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::GridGraph*>(), 44}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, node1, node2);
}
inline void Pathfinding::GridGraph::CalculateConnectionsForCellAndNeighbours(int32_t  x, int32_t  z)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"CalculateConnectionsForCellAndNeighbours", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x, z);
}
inline void Pathfinding::GridGraph::CalculateConnections(::Pathfinding::GridNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"CalculateConnections", {}, {::i2c::type_of<::Pathfinding::GridNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, node);
}
inline void Pathfinding::GridGraph::CalculateConnections(::Pathfinding::GridNodeBase*  node)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::GridGraph*>(), 45}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline void Pathfinding::GridGraph::CalculateConnections(int32_t  x, int32_t  z, ::Pathfinding::GridNode*  node)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::GridGraph*>(), 46}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x, z, node);
}
inline void Pathfinding::GridGraph::CalculateConnections(int32_t  x, int32_t  z)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::GridGraph*>(), 47}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x, z);
}
inline void Pathfinding::GridGraph::OnDrawGizmos(::Pathfinding::Util::RetainedGizmos*  gizmos, bool  drawNodes)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::GridGraph*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gizmos, drawNodes);
}
inline void Pathfinding::GridGraph::CreateNavmeshSurfaceVisualization(::ArrayW<::Pathfinding::GridNodeBase*>  nodes, int32_t  nodeCount, ::Pathfinding::Util::GraphGizmoHelper*  helper)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"CreateNavmeshSurfaceVisualization", {}, {::i2c::type_of<::ArrayW<::Pathfinding::GridNodeBase*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Pathfinding::Util::GraphGizmoHelper*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nodes, nodeCount, helper);
}
inline ::Pathfinding::IntRect Pathfinding::GridGraph::GetRectFromBounds(::UnityEngine::Bounds  bounds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"GetRectFromBounds", {}, {::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::IntRect>(this, ___internal_method, bounds);
}
inline ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>* Pathfinding::GridGraph::GetNodesInArea(::UnityEngine::Bounds  bounds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"GetNodesInArea", {}, {::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*>(this, ___internal_method, bounds);
}
inline ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>* Pathfinding::GridGraph::GetNodesInArea(::Pathfinding::GraphUpdateShape*  shape)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"GetNodesInArea", {}, {::i2c::type_of<::Pathfinding::GraphUpdateShape*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*>(this, ___internal_method, shape);
}
inline ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>* Pathfinding::GridGraph::GetNodesInArea(::UnityEngine::Bounds  bounds, ::Pathfinding::GraphUpdateShape*  shape)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"GetNodesInArea", {}, {::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<::Pathfinding::GraphUpdateShape*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*>(this, ___internal_method, bounds, shape);
}
inline ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>* Pathfinding::GridGraph::GetNodesInRegion(::UnityEngine::Bounds  bounds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"GetNodesInRegion", {}, {::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*>(this, ___internal_method, bounds);
}
inline ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>* Pathfinding::GridGraph::GetNodesInRegion(::Pathfinding::GraphUpdateShape*  shape)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"GetNodesInRegion", {}, {::i2c::type_of<::Pathfinding::GraphUpdateShape*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*>(this, ___internal_method, shape);
}
inline ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>* Pathfinding::GridGraph::GetNodesInRegion(::UnityEngine::Bounds  bounds, ::Pathfinding::GraphUpdateShape*  shape)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::GridGraph*>(), 48}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*>(this, ___internal_method, bounds, shape);
}
inline ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>* Pathfinding::GridGraph::GetNodesInRegion(::Pathfinding::IntRect  rect)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::GridGraph*>(), 49}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*>(this, ___internal_method, rect);
}
inline int32_t Pathfinding::GridGraph::GetNodesInRegion(::Pathfinding::IntRect  rect, ::ArrayW<::Pathfinding::GridNodeBase*>  buffer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::GridGraph*>(), 50}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, rect, buffer);
}
inline ::Pathfinding::GridNodeBase* Pathfinding::GridGraph::GetNode(int32_t  x, int32_t  z)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::GridGraph*>(), 51}
                        )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::GridNodeBase*>(this, ___internal_method, x, z);
}
inline ::Pathfinding::GraphUpdateThreading Pathfinding::GridGraph::Pathfinding_IUpdatableGraph_CanUpdateAsync(::Pathfinding::GraphUpdateObject*  o)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"Pathfinding.IUpdatableGraph.CanUpdateAsync", {}, {::i2c::type_of<::Pathfinding::GraphUpdateObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::GraphUpdateThreading>(this, ___internal_method, o);
}
inline void Pathfinding::GridGraph::Pathfinding_IUpdatableGraph_UpdateAreaInit(::Pathfinding::GraphUpdateObject*  o)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"Pathfinding.IUpdatableGraph.UpdateAreaInit", {}, {::i2c::type_of<::Pathfinding::GraphUpdateObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, o);
}
inline void Pathfinding::GridGraph::Pathfinding_IUpdatableGraph_UpdateAreaPost(::Pathfinding::GraphUpdateObject*  o)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"Pathfinding.IUpdatableGraph.UpdateAreaPost", {}, {::i2c::type_of<::Pathfinding::GraphUpdateObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, o);
}
inline void Pathfinding::GridGraph::CalculateAffectedRegions(::Pathfinding::GraphUpdateObject*  o, ::by_ref<::Pathfinding::IntRect>  originalRect, ::by_ref<::Pathfinding::IntRect>  affectRect, ::by_ref<::Pathfinding::IntRect>  physicsRect, ::by_ref<bool>  willChangeWalkability, ::by_ref<int32_t>  erosion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"CalculateAffectedRegions", {}, {::i2c::type_of<::Pathfinding::GraphUpdateObject*>(), ::i2c::type_of<::by_ref<::Pathfinding::IntRect>>(), ::i2c::type_of<::by_ref<::Pathfinding::IntRect>>(), ::i2c::type_of<::by_ref<::Pathfinding::IntRect>>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, o, originalRect, affectRect, physicsRect, willChangeWalkability, erosion);
}
inline void Pathfinding::GridGraph::Pathfinding_IUpdatableGraph_UpdateArea(::Pathfinding::GraphUpdateObject*  o)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"Pathfinding.IUpdatableGraph.UpdateArea", {}, {::i2c::type_of<::Pathfinding::GraphUpdateObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, o);
}
inline bool Pathfinding::GridGraph::Linecast(::UnityEngine::Vector3  from, ::UnityEngine::Vector3  to)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"Linecast", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, from, to);
}
inline bool Pathfinding::GridGraph::Linecast(::UnityEngine::Vector3  from, ::UnityEngine::Vector3  to, ::Pathfinding::GraphNode*  hint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"Linecast", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, from, to, hint);
}
inline bool Pathfinding::GridGraph::Linecast(::UnityEngine::Vector3  from, ::UnityEngine::Vector3  to, ::Pathfinding::GraphNode*  hint, ::by_ref<::Pathfinding::GraphHitInfo>  hit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"Linecast", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Pathfinding::GraphNode*>(), ::i2c::type_of<::by_ref<::Pathfinding::GraphHitInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, from, to, hint, hit);
}
inline int64_t Pathfinding::GridGraph::CrossMagnitude(::Pathfinding::Int2  a, ::Pathfinding::Int2  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"CrossMagnitude", {}, {::i2c::type_of<::Pathfinding::Int2>(), ::i2c::type_of<::Pathfinding::Int2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, a, b);
}
inline bool Pathfinding::GridGraph::ClipLineSegmentToBounds(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b, ::by_ref<::UnityEngine::Vector3>  outA, ::by_ref<::UnityEngine::Vector3>  outB)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"ClipLineSegmentToBounds", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, a, b, outA, outB);
}
inline bool Pathfinding::GridGraph::Linecast(::UnityEngine::Vector3  from, ::UnityEngine::Vector3  to, ::Pathfinding::GraphNode*  hint, ::by_ref<::Pathfinding::GraphHitInfo>  hit, ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*  trace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"Linecast", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Pathfinding::GraphNode*>(), ::i2c::type_of<::by_ref<::Pathfinding::GraphHitInfo>>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, from, to, hint, hit, trace);
}
inline bool Pathfinding::GridGraph::Linecast(::UnityEngine::Vector3  from, ::UnityEngine::Vector3  to, ::by_ref<::Pathfinding::GraphHitInfo>  hit, ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*  trace, ::System::Func_2<::Pathfinding::GraphNode*,bool>*  filter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"Linecast", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::Pathfinding::GraphHitInfo>>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*>(), ::i2c::type_of<::System::Func_2<::Pathfinding::GraphNode*,bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, from, to, hit, trace, filter);
}
inline bool Pathfinding::GridGraph::SnappedLinecast(::UnityEngine::Vector3  from, ::UnityEngine::Vector3  to, ::Pathfinding::GraphNode*  hint, ::by_ref<::Pathfinding::GraphHitInfo>  hit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"SnappedLinecast", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Pathfinding::GraphNode*>(), ::i2c::type_of<::by_ref<::Pathfinding::GraphHitInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, from, to, hint, hit);
}
inline bool Pathfinding::GridGraph::Linecast(::Pathfinding::GridNodeBase*  fromNode, ::Pathfinding::GridNodeBase*  toNode, ::System::Func_2<::Pathfinding::GraphNode*,bool>*  filter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"Linecast", {}, {::i2c::type_of<::Pathfinding::GridNodeBase*>(), ::i2c::type_of<::Pathfinding::GridNodeBase*>(), ::i2c::type_of<::System::Func_2<::Pathfinding::GraphNode*,bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, fromNode, toNode, filter);
}
inline bool Pathfinding::GridGraph::Linecast(::UnityEngine::Vector3  from, ::UnityEngine::Vector3  to, ::by_ref<::Pathfinding::GridHitInfo>  hit, ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*  trace, ::System::Func_2<::Pathfinding::GraphNode*,bool>*  filter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"Linecast", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::Pathfinding::GridHitInfo>>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*>(), ::i2c::type_of<::System::Func_2<::Pathfinding::GraphNode*,bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, from, to, hit, trace, filter);
}
inline bool Pathfinding::GridGraph::Linecast(::Pathfinding::GridNodeBase*  fromNode, ::UnityEngine::Vector2  normalizedFromPoint, ::Pathfinding::GridNodeBase*  toNode, ::UnityEngine::Vector2  normalizedToPoint, ::by_ref<::Pathfinding::GridHitInfo>  hit, ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*  trace, ::System::Func_2<::Pathfinding::GraphNode*,bool>*  filter, bool  continuePastEnd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"Linecast", {}, {::i2c::type_of<::Pathfinding::GridNodeBase*>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::Pathfinding::GridNodeBase*>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::by_ref<::Pathfinding::GridHitInfo>>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*>(), ::i2c::type_of<::System::Func_2<::Pathfinding::GraphNode*,bool>*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, fromNode, normalizedFromPoint, toNode, normalizedToPoint, hit, trace, filter, continuePastEnd);
}
inline bool Pathfinding::GridGraph::Linecast(::Pathfinding::GridNodeBase*  fromNode, ::Pathfinding::Int2  fixedNormalizedFromPoint, ::Pathfinding::GridNodeBase*  toNode, ::Pathfinding::Int2  fixedNormalizedToPoint, ::by_ref<::Pathfinding::GridHitInfo>  hit, ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*  trace, ::System::Func_2<::Pathfinding::GraphNode*,bool>*  filter, bool  continuePastEnd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"Linecast", {}, {::i2c::type_of<::Pathfinding::GridNodeBase*>(), ::i2c::type_of<::Pathfinding::Int2>(), ::i2c::type_of<::Pathfinding::GridNodeBase*>(), ::i2c::type_of<::Pathfinding::Int2>(), ::i2c::type_of<::by_ref<::Pathfinding::GridHitInfo>>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*>(), ::i2c::type_of<::System::Func_2<::Pathfinding::GraphNode*,bool>*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, fromNode, fixedNormalizedFromPoint, toNode, fixedNormalizedToPoint, hit, trace, filter, continuePastEnd);
}
inline bool Pathfinding::GridGraph::CheckConnection(::Pathfinding::GridNode*  node, int32_t  dir)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph*>(),
                        {"CheckConnection", {}, {::i2c::type_of<::Pathfinding::GridNode*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, node, dir);
}
inline void Pathfinding::GridGraph::SerializeExtraInfo(::Pathfinding::Serialization::GraphSerializationContext*  ctx)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::GridGraph*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ctx);
}
inline void Pathfinding::GridGraph::DeserializeExtraInfo(::Pathfinding::Serialization::GraphSerializationContext*  ctx)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::GridGraph*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ctx);
}
inline void Pathfinding::GridGraph::DeserializeSettingsCompatibility(::Pathfinding::Serialization::GraphSerializationContext*  ctx)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::GridGraph*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ctx);
}
inline void Pathfinding::GridGraph::PostDeserialization(::Pathfinding::Serialization::GraphSerializationContext*  ctx)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::GridGraph*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ctx);
}
inline ::Pathfinding::GridGraph* Pathfinding::GridGraph::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::GridGraph*>());
}
/// @brief Convert operator to "::Pathfinding::IUpdatableGraph"
constexpr  Pathfinding::GridGraph::operator ::Pathfinding::IUpdatableGraph*() noexcept {
return static_cast<::Pathfinding::IUpdatableGraph*>(static_cast<void*>(this));
}
/// @brief Convert to "::Pathfinding::IUpdatableGraph"
constexpr ::Pathfinding::IUpdatableGraph* Pathfinding::GridGraph::i___Pathfinding__IUpdatableGraph() noexcept {
return static_cast<::Pathfinding::IUpdatableGraph*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Pathfinding::ITransformedGraph"
constexpr  Pathfinding::GridGraph::operator ::Pathfinding::ITransformedGraph*() noexcept {
return static_cast<::Pathfinding::ITransformedGraph*>(static_cast<void*>(this));
}
/// @brief Convert to "::Pathfinding::ITransformedGraph"
constexpr ::Pathfinding::ITransformedGraph* Pathfinding::GridGraph::i___Pathfinding__ITransformedGraph() noexcept {
return static_cast<::Pathfinding::ITransformedGraph*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Pathfinding::IRaycastableGraph"
constexpr  Pathfinding::GridGraph::operator ::Pathfinding::IRaycastableGraph*() noexcept {
return static_cast<::Pathfinding::IRaycastableGraph*>(static_cast<void*>(this));
}
/// @brief Convert to "::Pathfinding::IRaycastableGraph"
constexpr ::Pathfinding::IRaycastableGraph* Pathfinding::GridGraph::i___Pathfinding__IRaycastableGraph() noexcept {
return static_cast<::Pathfinding::IRaycastableGraph*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Pathfinding::GridGraph::GridGraph()   {
}
//  Writing Method size for method: ::Pathfinding::GridGraph__ScanInternal_d__92._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GridGraph__ScanInternal_d__92::*)(int32_t)>(&::Pathfinding::GridGraph__ScanInternal_d__92::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5e707f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph__ScanInternal_d__92*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridGraph__ScanInternal_d__92.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GridGraph__ScanInternal_d__92::*)()>(&::Pathfinding::GridGraph__ScanInternal_d__92::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e777b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph__ScanInternal_d__92*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridGraph__ScanInternal_d__92.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::GridGraph__ScanInternal_d__92::*)()>(&::Pathfinding::GridGraph__ScanInternal_d__92::MoveNext)> {
  constexpr static std::size_t size = 0x650;
  constexpr static std::size_t addrs = 0x5e777b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph__ScanInternal_d__92*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridGraph__ScanInternal_d__92.System_Collections_Generic_IEnumerator_Pathfinding_Progress__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Progress (::Pathfinding::GridGraph__ScanInternal_d__92::*)()>(&::Pathfinding::GridGraph__ScanInternal_d__92::System_Collections_Generic_IEnumerator_Pathfinding_Progress__get_Current)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e77e08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph__ScanInternal_d__92*>(),
                        {"System.Collections.Generic.IEnumerator<Pathfinding.Progress>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridGraph__ScanInternal_d__92.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GridGraph__ScanInternal_d__92::*)()>(&::Pathfinding::GridGraph__ScanInternal_d__92::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5e77e14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph__ScanInternal_d__92*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridGraph__ScanInternal_d__92.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Pathfinding::GridGraph__ScanInternal_d__92::*)()>(&::Pathfinding::GridGraph__ScanInternal_d__92::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5e77e4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph__ScanInternal_d__92*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridGraph__ScanInternal_d__92.System_Collections_Generic_IEnumerable_Pathfinding_Progress__GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>* (::Pathfinding::GridGraph__ScanInternal_d__92::*)()>(&::Pathfinding::GridGraph__ScanInternal_d__92::System_Collections_Generic_IEnumerable_Pathfinding_Progress__GetEnumerator)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5e77ea8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph__ScanInternal_d__92*>(),
                        {"System.Collections.Generic.IEnumerable<Pathfinding.Progress>.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridGraph__ScanInternal_d__92.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Pathfinding::GridGraph__ScanInternal_d__92::*)()>(&::Pathfinding::GridGraph__ScanInternal_d__92::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e77f4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph__ScanInternal_d__92*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Pathfinding::GridGraph__ScanInternal_d__92::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Pathfinding::GridGraph__ScanInternal_d__92::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Pathfinding::GridGraph__ScanInternal_d__92::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::Pathfinding::Progress& Pathfinding::GridGraph__ScanInternal_d__92::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::Pathfinding::Progress const& Pathfinding::GridGraph__ScanInternal_d__92::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Pathfinding::GridGraph__ScanInternal_d__92::__cordl_internal_set___2__current(::Pathfinding::Progress  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr int32_t& Pathfinding::GridGraph__ScanInternal_d__92::__cordl_internal_get___l__initialThreadId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
constexpr int32_t const& Pathfinding::GridGraph__ScanInternal_d__92::__cordl_internal_get___l__initialThreadId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
constexpr void Pathfinding::GridGraph__ScanInternal_d__92::__cordl_internal_set___l__initialThreadId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____l__initialThreadId = value;
}
constexpr ::Pathfinding::GridGraph*& Pathfinding::GridGraph__ScanInternal_d__92::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Pathfinding::GridGraph* const& Pathfinding::GridGraph__ScanInternal_d__92::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Pathfinding::GridGraph__ScanInternal_d__92::__cordl_internal_set___4__this(::Pathfinding::GridGraph*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr int32_t& Pathfinding::GridGraph__ScanInternal_d__92::__cordl_internal_get__progressCounter_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____progressCounter_5__2;
}
constexpr int32_t const& Pathfinding::GridGraph__ScanInternal_d__92::__cordl_internal_get__progressCounter_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____progressCounter_5__2;
}
constexpr void Pathfinding::GridGraph__ScanInternal_d__92::__cordl_internal_set__progressCounter_5__2(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____progressCounter_5__2 = value;
}
constexpr int32_t& Pathfinding::GridGraph__ScanInternal_d__92::__cordl_internal_get__z_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____z_5__3;
}
constexpr int32_t const& Pathfinding::GridGraph__ScanInternal_d__92::__cordl_internal_get__z_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____z_5__3;
}
constexpr void Pathfinding::GridGraph__ScanInternal_d__92::__cordl_internal_set__z_5__3(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____z_5__3 = value;
}
inline void Pathfinding::GridGraph__ScanInternal_d__92::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph__ScanInternal_d__92*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Pathfinding::GridGraph__ScanInternal_d__92::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph__ScanInternal_d__92*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Pathfinding::GridGraph__ScanInternal_d__92::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph__ScanInternal_d__92*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Pathfinding::Progress Pathfinding::GridGraph__ScanInternal_d__92::System_Collections_Generic_IEnumerator_Pathfinding_Progress__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph__ScanInternal_d__92*>(),
                        {"System.Collections.Generic.IEnumerator<Pathfinding.Progress>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Progress>(this, ___internal_method);
}
inline void Pathfinding::GridGraph__ScanInternal_d__92::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph__ScanInternal_d__92*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Pathfinding::GridGraph__ScanInternal_d__92::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph__ScanInternal_d__92*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>* Pathfinding::GridGraph__ScanInternal_d__92::System_Collections_Generic_IEnumerable_Pathfinding_Progress__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph__ScanInternal_d__92*>(),
                        {"System.Collections.Generic.IEnumerable<Pathfinding.Progress>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Pathfinding::GridGraph__ScanInternal_d__92::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph__ScanInternal_d__92*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Pathfinding::GridGraph__ScanInternal_d__92* Pathfinding::GridGraph__ScanInternal_d__92::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::GridGraph__ScanInternal_d__92*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>"
constexpr  Pathfinding::GridGraph__ScanInternal_d__92::operator ::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>* Pathfinding::GridGraph__ScanInternal_d__92::i___System__Collections__Generic__IEnumerable_1___Pathfinding__Progress_() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  Pathfinding::GridGraph__ScanInternal_d__92::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* Pathfinding::GridGraph__ScanInternal_d__92::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>"
constexpr  Pathfinding::GridGraph__ScanInternal_d__92::operator ::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>* Pathfinding::GridGraph__ScanInternal_d__92::i___System__Collections__Generic__IEnumerator_1___Pathfinding__Progress_() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Pathfinding::GridGraph__ScanInternal_d__92::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Pathfinding::GridGraph__ScanInternal_d__92::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Pathfinding::GridGraph__ScanInternal_d__92::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Pathfinding::GridGraph__ScanInternal_d__92::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Pathfinding::GridGraph__ScanInternal_d__92::GridGraph__ScanInternal_d__92()   {
}
//  Writing Method size for method: ::Pathfinding::GridGraph___c__DisplayClass64_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GridGraph___c__DisplayClass64_0::*)()>(&::Pathfinding::GridGraph___c__DisplayClass64_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e6ead0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph___c__DisplayClass64_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridGraph___c__DisplayClass64_0._RelocateNodes_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GridGraph___c__DisplayClass64_0::*)(::Pathfinding::GraphNode*)>(&::Pathfinding::GridGraph___c__DisplayClass64_0::_RelocateNodes_b__0)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5e776b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph___c__DisplayClass64_0*>(),
                        {"<RelocateNodes>b__0", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Pathfinding::Util::GraphTransform*& Pathfinding::GridGraph___c__DisplayClass64_0::__cordl_internal_get_previousTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previousTransform;
}
constexpr ::Pathfinding::Util::GraphTransform* const& Pathfinding::GridGraph___c__DisplayClass64_0::__cordl_internal_get_previousTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previousTransform;
}
constexpr void Pathfinding::GridGraph___c__DisplayClass64_0::__cordl_internal_set_previousTransform(::Pathfinding::Util::GraphTransform*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___previousTransform = value;
}
constexpr ::Pathfinding::GridGraph*& Pathfinding::GridGraph___c__DisplayClass64_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Pathfinding::GridGraph* const& Pathfinding::GridGraph___c__DisplayClass64_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Pathfinding::GridGraph___c__DisplayClass64_0::__cordl_internal_set___4__this(::Pathfinding::GridGraph*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void Pathfinding::GridGraph___c__DisplayClass64_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph___c__DisplayClass64_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::GridGraph___c__DisplayClass64_0::_RelocateNodes_b__0(::Pathfinding::GraphNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph___c__DisplayClass64_0*>(),
                        {"<RelocateNodes>b__0", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline ::Pathfinding::GridGraph___c__DisplayClass64_0* Pathfinding::GridGraph___c__DisplayClass64_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::GridGraph___c__DisplayClass64_0*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::GridGraph___c__DisplayClass64_0::GridGraph___c__DisplayClass64_0()   {
}
//  Writing Method size for method: ::Pathfinding::GridGraph___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GridGraph___c::*)()>(&::Pathfinding::GridGraph___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e77610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridGraph___c._DestroyAllNodes_b__1_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GridGraph___c::*)(::Pathfinding::GraphNode*)>(&::Pathfinding::GridGraph___c::_DestroyAllNodes_b__1_0)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5e77618;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph___c*>(),
                        {"<DestroyAllNodes>b__1_0", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Pathfinding::GridGraph___c::setStaticF___9(::Pathfinding::GridGraph___c*  value)  {
::cordl_internals::setStaticField<::Pathfinding::GridGraph___c*, "<>9", ::Pathfinding::GridGraph___c*>(std::forward<::Pathfinding::GridGraph___c*>(value));
}
inline ::Pathfinding::GridGraph___c* Pathfinding::GridGraph___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Pathfinding::GridGraph___c*, "<>9", ::Pathfinding::GridGraph___c*>();
}
inline void Pathfinding::GridGraph___c::setStaticF___9__1_0(::System::Action_1<::Pathfinding::GraphNode*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::Pathfinding::GraphNode*>*, "<>9__1_0", ::Pathfinding::GridGraph___c*>(std::forward<::System::Action_1<::Pathfinding::GraphNode*>*>(value));
}
inline ::System::Action_1<::Pathfinding::GraphNode*>* Pathfinding::GridGraph___c::getStaticF___9__1_0()  {
return ::cordl_internals::getStaticField<::System::Action_1<::Pathfinding::GraphNode*>*, "<>9__1_0", ::Pathfinding::GridGraph___c*>();
}
inline void Pathfinding::GridGraph___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::GridGraph___c::_DestroyAllNodes_b__1_0(::Pathfinding::GraphNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph___c*>(),
                        {"<DestroyAllNodes>b__1_0", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline ::Pathfinding::GridGraph___c* Pathfinding::GridGraph___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::GridGraph___c*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::GridGraph___c::GridGraph___c()   {
}
//  Writing Method size for method: ::Pathfinding::GridGraph_TextureData.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GridGraph_TextureData::*)()>(&::Pathfinding::GridGraph_TextureData::Initialize)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x5e77050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph_TextureData*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridGraph_TextureData.Apply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GridGraph_TextureData::*)(::Pathfinding::GridNodeBase*, int32_t, int32_t)>(&::Pathfinding::GridGraph_TextureData::Apply)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x5e771f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph_TextureData*>(),
                        {"Apply", {}, {::i2c::type_of<::Pathfinding::GridNodeBase*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridGraph_TextureData.ApplyChannel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GridGraph_TextureData::*)(::Pathfinding::GridNodeBase*, int32_t, int32_t, int32_t, ::GlobalNamespace::TextureData_GridGraph_ChannelUse, float_t)>(&::Pathfinding::GridGraph_TextureData::ApplyChannel)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x5e773a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph_TextureData*>(),
                        {"ApplyChannel", {}, {::i2c::type_of<::Pathfinding::GridNodeBase*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::TextureData_GridGraph_ChannelUse>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GridGraph_TextureData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GridGraph_TextureData::*)()>(&::Pathfinding::GridGraph_TextureData::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5e6e848;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph_TextureData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Pathfinding::GridGraph_TextureData::__cordl_internal_get_enabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enabled;
}
constexpr bool const& Pathfinding::GridGraph_TextureData::__cordl_internal_get_enabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enabled;
}
constexpr void Pathfinding::GridGraph_TextureData::__cordl_internal_set_enabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enabled = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& Pathfinding::GridGraph_TextureData::__cordl_internal_get_source()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& Pathfinding::GridGraph_TextureData::__cordl_internal_get_source() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
constexpr void Pathfinding::GridGraph_TextureData::__cordl_internal_set_source(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___source = value;
}
constexpr ::ArrayW<float_t>& Pathfinding::GridGraph_TextureData::__cordl_internal_get_factors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___factors;
}
constexpr ::ArrayW<float_t> const& Pathfinding::GridGraph_TextureData::__cordl_internal_get_factors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___factors;
}
constexpr void Pathfinding::GridGraph_TextureData::__cordl_internal_set_factors(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___factors = value;
}
constexpr ::ArrayW<::GlobalNamespace::TextureData_GridGraph_ChannelUse>& Pathfinding::GridGraph_TextureData::__cordl_internal_get_channels()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___channels;
}
constexpr ::ArrayW<::GlobalNamespace::TextureData_GridGraph_ChannelUse> const& Pathfinding::GridGraph_TextureData::__cordl_internal_get_channels() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___channels;
}
constexpr void Pathfinding::GridGraph_TextureData::__cordl_internal_set_channels(::ArrayW<::GlobalNamespace::TextureData_GridGraph_ChannelUse>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___channels = value;
}
constexpr ::ArrayW<::UnityEngine::Color32>& Pathfinding::GridGraph_TextureData::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::ArrayW<::UnityEngine::Color32> const& Pathfinding::GridGraph_TextureData::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void Pathfinding::GridGraph_TextureData::__cordl_internal_set_data(::ArrayW<::UnityEngine::Color32>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
inline void Pathfinding::GridGraph_TextureData::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph_TextureData*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::GridGraph_TextureData::Apply(::Pathfinding::GridNodeBase*  node, int32_t  x, int32_t  z)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph_TextureData*>(),
                        {"Apply", {}, {::i2c::type_of<::Pathfinding::GridNodeBase*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node, x, z);
}
inline void Pathfinding::GridGraph_TextureData::ApplyChannel(::Pathfinding::GridNodeBase*  node, int32_t  x, int32_t  z, int32_t  value, ::GlobalNamespace::TextureData_GridGraph_ChannelUse  channelUse, float_t  factor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph_TextureData*>(),
                        {"ApplyChannel", {}, {::i2c::type_of<::Pathfinding::GridNodeBase*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::TextureData_GridGraph_ChannelUse>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node, x, z, value, channelUse, factor);
}
inline void Pathfinding::GridGraph_TextureData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GridGraph_TextureData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::GridGraph_TextureData* Pathfinding::GridGraph_TextureData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::GridGraph_TextureData*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::GridGraph_TextureData::GridGraph_TextureData()   {
}
