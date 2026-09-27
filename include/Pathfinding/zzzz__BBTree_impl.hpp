#pragma once
// IWYU pragma private; include "Pathfinding/BBTree.hpp"
#include "Pathfinding/zzzz__BBTree_BBTreeBox_impl.hpp"
#include "Pathfinding/zzzz__TriangleMeshNode_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Pathfinding/zzzz__BBTree_def.hpp"
#include "Pathfinding/Util/zzzz__IAstarPooledObject_def.hpp"
#include "Pathfinding/zzzz__BBTree_BBTreeBox_def.hpp"
#include "Pathfinding/zzzz__IntRect_def.hpp"
#include "Pathfinding/zzzz__NNConstraint_def.hpp"
#include "Pathfinding/zzzz__NNInfoInternal_def.hpp"
#include "Pathfinding/zzzz__TriangleMeshNode_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Pathfinding::BBTree.get_Size
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (::Pathfinding::BBTree::*)()>(&::Pathfinding::BBTree::get_Size)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5e943bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::BBTree*>(),
                        {"get_Size", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::BBTree.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::BBTree::*)()>(&::Pathfinding::BBTree::Clear)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x5e94424;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::BBTree*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::BBTree.Pathfinding_Util_IAstarPooledObject_OnEnterPool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::BBTree::*)()>(&::Pathfinding::BBTree::Pathfinding_Util_IAstarPooledObject_OnEnterPool)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e945cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::BBTree*>(),
                        {"Pathfinding.Util.IAstarPooledObject.OnEnterPool", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::BBTree.EnsureCapacity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::BBTree::*)(int32_t)>(&::Pathfinding::BBTree::EnsureCapacity)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5e945d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::BBTree*>(),
                        {"EnsureCapacity", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::BBTree.EnsureNodeCapacity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::BBTree::*)(int32_t)>(&::Pathfinding::BBTree::EnsureNodeCapacity)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5e946b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::BBTree*>(),
                        {"EnsureNodeCapacity", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::BBTree.GetBox
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::BBTree::*)(::Pathfinding::IntRect)>(&::Pathfinding::BBTree::GetBox)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5e947a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::BBTree*>(),
                        {"GetBox", {}, {::i2c::type_of<::Pathfinding::IntRect>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::BBTree.RebuildFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::BBTree::*)(::ArrayW<::Pathfinding::TriangleMeshNode*>)>(&::Pathfinding::BBTree::RebuildFrom)> {
  constexpr static std::size_t size = 0x36c;
  constexpr static std::size_t addrs = 0x5e91e04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::BBTree*>(),
                        {"RebuildFrom", {}, {::i2c::type_of<::ArrayW<::Pathfinding::TriangleMeshNode*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::BBTree.SplitByX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<::Pathfinding::TriangleMeshNode*>, ::ArrayW<int32_t>, int32_t, int32_t, int32_t)>(&::Pathfinding::BBTree::SplitByX)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5e94b58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::BBTree*>(),
                        {"SplitByX", {}, {::i2c::type_of<::ArrayW<::Pathfinding::TriangleMeshNode*>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::BBTree.SplitByZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<::Pathfinding::TriangleMeshNode*>, ::ArrayW<int32_t>, int32_t, int32_t, int32_t)>(&::Pathfinding::BBTree::SplitByZ)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5e94bec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::BBTree*>(),
                        {"SplitByZ", {}, {::i2c::type_of<::ArrayW<::Pathfinding::TriangleMeshNode*>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::BBTree.RebuildFromInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::BBTree::*)(::ArrayW<::Pathfinding::TriangleMeshNode*>, ::ArrayW<int32_t>, ::ArrayW<::Pathfinding::IntRect>, int32_t, int32_t, bool)>(&::Pathfinding::BBTree::RebuildFromInternal)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x5e94844;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::BBTree*>(),
                        {"RebuildFromInternal", {}, {::i2c::type_of<::ArrayW<::Pathfinding::TriangleMeshNode*>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<::Pathfinding::IntRect>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::BBTree.NodeBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::IntRect (*)(::ArrayW<int32_t>, ::ArrayW<::Pathfinding::IntRect>, int32_t, int32_t)>(&::Pathfinding::BBTree::NodeBounds)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x5e94c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::BBTree*>(),
                        {"NodeBounds", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<::Pathfinding::IntRect>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::BBTree.DrawDebugRect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Pathfinding::IntRect)>(&::Pathfinding::BBTree::DrawDebugRect)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5e94de8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::BBTree*>(),
                        {"DrawDebugRect", {}, {::i2c::type_of<::Pathfinding::IntRect>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::BBTree.DrawDebugNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Pathfinding::TriangleMeshNode*, float_t, ::UnityEngine::Color)>(&::Pathfinding::BBTree::DrawDebugNode)> {
  constexpr static std::size_t size = 0x3d4;
  constexpr static std::size_t addrs = 0x5e94f08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::BBTree*>(),
                        {"DrawDebugNode", {}, {::i2c::type_of<::Pathfinding::TriangleMeshNode*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::BBTree.QueryClosest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::NNInfoInternal (::Pathfinding::BBTree::*)(::UnityEngine::Vector3, ::Pathfinding::NNConstraint*, ::by_ref<float_t>)>(&::Pathfinding::BBTree::QueryClosest)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5e952dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::BBTree*>(),
                        {"QueryClosest", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Pathfinding::NNConstraint*>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::BBTree.QueryClosestXZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::NNInfoInternal (::Pathfinding::BBTree::*)(::UnityEngine::Vector3, ::Pathfinding::NNConstraint*, ::by_ref<float_t>, ::Pathfinding::NNInfoInternal)>(&::Pathfinding::BBTree::QueryClosestXZ)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5e95478;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::BBTree*>(),
                        {"QueryClosestXZ", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Pathfinding::NNConstraint*>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::Pathfinding::NNInfoInternal>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::BBTree.SearchBoxClosestXZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::BBTree::*)(int32_t, ::UnityEngine::Vector3, ::by_ref<float_t>, ::Pathfinding::NNConstraint*, ::by_ref<::Pathfinding::NNInfoInternal>)>(&::Pathfinding::BBTree::SearchBoxClosestXZ)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x5e9563c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::BBTree*>(),
                        {"SearchBoxClosestXZ", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::Pathfinding::NNConstraint*>(), ::i2c::type_of<::by_ref<::Pathfinding::NNInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::BBTree.QueryClosest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::NNInfoInternal (::Pathfinding::BBTree::*)(::UnityEngine::Vector3, ::Pathfinding::NNConstraint*, ::by_ref<float_t>, ::Pathfinding::NNInfoInternal)>(&::Pathfinding::BBTree::QueryClosest)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5e95398;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::BBTree*>(),
                        {"QueryClosest", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Pathfinding::NNConstraint*>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::Pathfinding::NNInfoInternal>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::BBTree.SearchBoxClosest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::BBTree::*)(int32_t, ::UnityEngine::Vector3, ::by_ref<float_t>, ::Pathfinding::NNConstraint*, ::by_ref<::Pathfinding::NNInfoInternal>)>(&::Pathfinding::BBTree::SearchBoxClosest)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x5e95994;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::BBTree*>(),
                        {"SearchBoxClosest", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::Pathfinding::NNConstraint*>(), ::i2c::type_of<::by_ref<::Pathfinding::NNInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::BBTree.GetOrderedChildren
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::BBTree::*)(::by_ref<int32_t>, ::by_ref<int32_t>, ::by_ref<float_t>, ::by_ref<float_t>, ::UnityEngine::Vector3)>(&::Pathfinding::BBTree::GetOrderedChildren)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5e958b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::BBTree*>(),
                        {"GetOrderedChildren", {}, {::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::BBTree.QueryInside
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::TriangleMeshNode* (::Pathfinding::BBTree::*)(::UnityEngine::Vector3, ::Pathfinding::NNConstraint*)>(&::Pathfinding::BBTree::QueryInside)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5e95bc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::BBTree*>(),
                        {"QueryInside", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Pathfinding::NNConstraint*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::BBTree.SearchBoxInside
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::TriangleMeshNode* (::Pathfinding::BBTree::*)(int32_t, ::UnityEngine::Vector3, ::Pathfinding::NNConstraint*)>(&::Pathfinding::BBTree::SearchBoxInside)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x5e95ca8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::BBTree*>(),
                        {"SearchBoxInside", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Pathfinding::NNConstraint*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::BBTree.OnDrawGizmos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::BBTree::*)()>(&::Pathfinding::BBTree::OnDrawGizmos)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5e95ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::BBTree*>(),
                        {"OnDrawGizmos", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::BBTree.OnDrawGizmos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::BBTree::*)(int32_t, int32_t)>(&::Pathfinding::BBTree::OnDrawGizmos)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x5e95ee4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::BBTree*>(),
                        {"OnDrawGizmos", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::BBTree.NodeIntersectsCircle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Pathfinding::TriangleMeshNode*, ::UnityEngine::Vector3, float_t)>(&::Pathfinding::BBTree::NodeIntersectsCircle)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5e9605c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::BBTree*>(),
                        {"NodeIntersectsCircle", {}, {::i2c::type_of<::Pathfinding::TriangleMeshNode*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::BBTree.RectIntersectsCircle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Pathfinding::IntRect, ::UnityEngine::Vector3, float_t)>(&::Pathfinding::BBTree::RectIntersectsCircle)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5e960e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::BBTree*>(),
                        {"RectIntersectsCircle", {}, {::i2c::type_of<::Pathfinding::IntRect>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::BBTree.SquaredRectPointDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::Pathfinding::IntRect, ::UnityEngine::Vector3)>(&::Pathfinding::BBTree::SquaredRectPointDistance)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5e95558;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::BBTree*>(),
                        {"SquaredRectPointDistance", {}, {::i2c::type_of<::Pathfinding::IntRect>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::BBTree._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::BBTree::*)()>(&::Pathfinding::BBTree::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e91dfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::BBTree*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::BBTree_BBTreeBox>& Pathfinding::BBTree::__cordl_internal_get_tree()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tree;
}
constexpr ::ArrayW<::GlobalNamespace::BBTree_BBTreeBox> const& Pathfinding::BBTree::__cordl_internal_get_tree() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tree;
}
constexpr void Pathfinding::BBTree::__cordl_internal_set_tree(::ArrayW<::GlobalNamespace::BBTree_BBTreeBox>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tree = value;
}
constexpr ::ArrayW<::Pathfinding::TriangleMeshNode*>& Pathfinding::BBTree::__cordl_internal_get_nodeLookup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodeLookup;
}
constexpr ::ArrayW<::Pathfinding::TriangleMeshNode*> const& Pathfinding::BBTree::__cordl_internal_get_nodeLookup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodeLookup;
}
constexpr void Pathfinding::BBTree::__cordl_internal_set_nodeLookup(::ArrayW<::Pathfinding::TriangleMeshNode*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nodeLookup = value;
}
constexpr int32_t& Pathfinding::BBTree::__cordl_internal_get_count()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___count;
}
constexpr int32_t const& Pathfinding::BBTree::__cordl_internal_get_count() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___count;
}
constexpr void Pathfinding::BBTree::__cordl_internal_set_count(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___count = value;
}
constexpr int32_t& Pathfinding::BBTree::__cordl_internal_get_leafNodes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leafNodes;
}
constexpr int32_t const& Pathfinding::BBTree::__cordl_internal_get_leafNodes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leafNodes;
}
constexpr void Pathfinding::BBTree::__cordl_internal_set_leafNodes(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leafNodes = value;
}
inline ::UnityEngine::Rect Pathfinding::BBTree::get_Size()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::BBTree*>(),
                        {"get_Size", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(this, ___internal_method);
}
inline void Pathfinding::BBTree::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::BBTree*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::BBTree::Pathfinding_Util_IAstarPooledObject_OnEnterPool()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::BBTree*>(),
                        {"Pathfinding.Util.IAstarPooledObject.OnEnterPool", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::BBTree::EnsureCapacity(int32_t  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::BBTree*>(),
                        {"EnsureCapacity", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c);
}
inline void Pathfinding::BBTree::EnsureNodeCapacity(int32_t  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::BBTree*>(),
                        {"EnsureNodeCapacity", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c);
}
inline int32_t Pathfinding::BBTree::GetBox(::Pathfinding::IntRect  rect)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::BBTree*>(),
                        {"GetBox", {}, {::i2c::type_of<::Pathfinding::IntRect>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, rect);
}
inline void Pathfinding::BBTree::RebuildFrom(::ArrayW<::Pathfinding::TriangleMeshNode*>  nodes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::BBTree*>(),
                        {"RebuildFrom", {}, {::i2c::type_of<::ArrayW<::Pathfinding::TriangleMeshNode*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nodes);
}
inline int32_t Pathfinding::BBTree::SplitByX(::ArrayW<::Pathfinding::TriangleMeshNode*>  nodes, ::ArrayW<int32_t>  permutation, int32_t  from, int32_t  to, int32_t  divider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::BBTree*>(),
                        {"SplitByX", {}, {::i2c::type_of<::ArrayW<::Pathfinding::TriangleMeshNode*>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, nodes, permutation, from, to, divider);
}
inline int32_t Pathfinding::BBTree::SplitByZ(::ArrayW<::Pathfinding::TriangleMeshNode*>  nodes, ::ArrayW<int32_t>  permutation, int32_t  from, int32_t  to, int32_t  divider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::BBTree*>(),
                        {"SplitByZ", {}, {::i2c::type_of<::ArrayW<::Pathfinding::TriangleMeshNode*>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, nodes, permutation, from, to, divider);
}
inline int32_t Pathfinding::BBTree::RebuildFromInternal(::ArrayW<::Pathfinding::TriangleMeshNode*>  nodes, ::ArrayW<int32_t>  permutation, ::ArrayW<::Pathfinding::IntRect>  nodeBounds, int32_t  from, int32_t  to, bool  odd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::BBTree*>(),
                        {"RebuildFromInternal", {}, {::i2c::type_of<::ArrayW<::Pathfinding::TriangleMeshNode*>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<::Pathfinding::IntRect>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, nodes, permutation, nodeBounds, from, to, odd);
}
inline ::Pathfinding::IntRect Pathfinding::BBTree::NodeBounds(::ArrayW<int32_t>  permutation, ::ArrayW<::Pathfinding::IntRect>  nodeBounds, int32_t  from, int32_t  to)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::BBTree*>(),
                        {"NodeBounds", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<::Pathfinding::IntRect>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::IntRect>(nullptr, ___internal_method, permutation, nodeBounds, from, to);
}
inline void Pathfinding::BBTree::DrawDebugRect(::Pathfinding::IntRect  rect)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::BBTree*>(),
                        {"DrawDebugRect", {}, {::i2c::type_of<::Pathfinding::IntRect>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rect);
}
inline void Pathfinding::BBTree::DrawDebugNode(::Pathfinding::TriangleMeshNode*  node, float_t  yoffset, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::BBTree*>(),
                        {"DrawDebugNode", {}, {::i2c::type_of<::Pathfinding::TriangleMeshNode*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, node, yoffset, color);
}
inline ::Pathfinding::NNInfoInternal Pathfinding::BBTree::QueryClosest(::UnityEngine::Vector3  p, ::Pathfinding::NNConstraint*  constraint, ::by_ref<float_t>  distance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::BBTree*>(),
                        {"QueryClosest", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Pathfinding::NNConstraint*>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::NNInfoInternal>(this, ___internal_method, p, constraint, distance);
}
inline ::Pathfinding::NNInfoInternal Pathfinding::BBTree::QueryClosestXZ(::UnityEngine::Vector3  p, ::Pathfinding::NNConstraint*  constraint, ::by_ref<float_t>  distance, ::Pathfinding::NNInfoInternal  previous)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::BBTree*>(),
                        {"QueryClosestXZ", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Pathfinding::NNConstraint*>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::Pathfinding::NNInfoInternal>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::NNInfoInternal>(this, ___internal_method, p, constraint, distance, previous);
}
inline void Pathfinding::BBTree::SearchBoxClosestXZ(int32_t  boxi, ::UnityEngine::Vector3  p, ::by_ref<float_t>  closestSqrDist, ::Pathfinding::NNConstraint*  constraint, ::by_ref<::Pathfinding::NNInfoInternal>  nnInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::BBTree*>(),
                        {"SearchBoxClosestXZ", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::Pathfinding::NNConstraint*>(), ::i2c::type_of<::by_ref<::Pathfinding::NNInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, boxi, p, closestSqrDist, constraint, nnInfo);
}
inline ::Pathfinding::NNInfoInternal Pathfinding::BBTree::QueryClosest(::UnityEngine::Vector3  p, ::Pathfinding::NNConstraint*  constraint, ::by_ref<float_t>  distance, ::Pathfinding::NNInfoInternal  previous)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::BBTree*>(),
                        {"QueryClosest", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Pathfinding::NNConstraint*>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::Pathfinding::NNInfoInternal>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::NNInfoInternal>(this, ___internal_method, p, constraint, distance, previous);
}
inline void Pathfinding::BBTree::SearchBoxClosest(int32_t  boxi, ::UnityEngine::Vector3  p, ::by_ref<float_t>  closestSqrDist, ::Pathfinding::NNConstraint*  constraint, ::by_ref<::Pathfinding::NNInfoInternal>  nnInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::BBTree*>(),
                        {"SearchBoxClosest", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::Pathfinding::NNConstraint*>(), ::i2c::type_of<::by_ref<::Pathfinding::NNInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, boxi, p, closestSqrDist, constraint, nnInfo);
}
inline void Pathfinding::BBTree::GetOrderedChildren(::by_ref<int32_t>  first, ::by_ref<int32_t>  second, ::by_ref<float_t>  firstDist, ::by_ref<float_t>  secondDist, ::UnityEngine::Vector3  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::BBTree*>(),
                        {"GetOrderedChildren", {}, {::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, first, second, firstDist, secondDist, p);
}
inline ::Pathfinding::TriangleMeshNode* Pathfinding::BBTree::QueryInside(::UnityEngine::Vector3  p, ::Pathfinding::NNConstraint*  constraint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::BBTree*>(),
                        {"QueryInside", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Pathfinding::NNConstraint*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::TriangleMeshNode*>(this, ___internal_method, p, constraint);
}
inline ::Pathfinding::TriangleMeshNode* Pathfinding::BBTree::SearchBoxInside(int32_t  boxi, ::UnityEngine::Vector3  p, ::Pathfinding::NNConstraint*  constraint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::BBTree*>(),
                        {"SearchBoxInside", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Pathfinding::NNConstraint*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::TriangleMeshNode*>(this, ___internal_method, boxi, p, constraint);
}
inline void Pathfinding::BBTree::OnDrawGizmos()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::BBTree*>(),
                        {"OnDrawGizmos", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::BBTree::OnDrawGizmos(int32_t  boxi, int32_t  depth)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::BBTree*>(),
                        {"OnDrawGizmos", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, boxi, depth);
}
inline bool Pathfinding::BBTree::NodeIntersectsCircle(::Pathfinding::TriangleMeshNode*  node, ::UnityEngine::Vector3  p, float_t  radius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::BBTree*>(),
                        {"NodeIntersectsCircle", {}, {::i2c::type_of<::Pathfinding::TriangleMeshNode*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, node, p, radius);
}
inline bool Pathfinding::BBTree::RectIntersectsCircle(::Pathfinding::IntRect  r, ::UnityEngine::Vector3  p, float_t  radius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::BBTree*>(),
                        {"RectIntersectsCircle", {}, {::i2c::type_of<::Pathfinding::IntRect>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, r, p, radius);
}
inline float_t Pathfinding::BBTree::SquaredRectPointDistance(::Pathfinding::IntRect  r, ::UnityEngine::Vector3  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::BBTree*>(),
                        {"SquaredRectPointDistance", {}, {::i2c::type_of<::Pathfinding::IntRect>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, r, p);
}
inline void Pathfinding::BBTree::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::BBTree*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::BBTree* Pathfinding::BBTree::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::BBTree*>());
}
/// @brief Convert operator to "::Pathfinding::Util::IAstarPooledObject"
constexpr  Pathfinding::BBTree::operator ::Pathfinding::Util::IAstarPooledObject*() noexcept {
return static_cast<::Pathfinding::Util::IAstarPooledObject*>(static_cast<void*>(this));
}
/// @brief Convert to "::Pathfinding::Util::IAstarPooledObject"
constexpr ::Pathfinding::Util::IAstarPooledObject* Pathfinding::BBTree::i___Pathfinding__Util__IAstarPooledObject() noexcept {
return static_cast<::Pathfinding::Util::IAstarPooledObject*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Pathfinding::BBTree::BBTree()   {
}
