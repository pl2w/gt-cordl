#pragma once
// IWYU pragma private; include "Fusion/LagCompensation/BVHNode.hpp"
#include "Fusion/LagCompensation/zzzz__AABB_impl.hpp"
#include "UnityEngine/zzzz__Bounds_impl.hpp"
#include "Fusion/LagCompensation/zzzz__BVHNode_def.hpp"
#include "Fusion/LagCompensation/zzzz__BVHNode_Rot_def.hpp"
#include "Fusion/LagCompensation/zzzz__BVH_def.hpp"
#include "Fusion/zzzz__HitboxRoot_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Fusion::LagCompensation::BVHNode.get_Index
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::LagCompensation::BVHNode::*)()>(&::Fusion::LagCompensation::BVHNode::get_Index)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x600e924;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVHNode>(),
                        {"get_Index", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::BVHNode.get_IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::LagCompensation::BVHNode::*)()>(&::Fusion::LagCompensation::BVHNode::get_IsValid)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x600e92c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVHNode>(),
                        {"get_IsValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::BVHNode.get_IsRootNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::LagCompensation::BVHNode::*)()>(&::Fusion::LagCompensation::BVHNode::get_IsRootNode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x600e93c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVHNode>(),
                        {"get_IsRootNode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::BVHNode.get_HasParent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::LagCompensation::BVHNode::*)()>(&::Fusion::LagCompensation::BVHNode::get_HasParent)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x600e94c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVHNode>(),
                        {"get_HasParent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::BVHNode.get_HasLeft
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::LagCompensation::BVHNode::*)()>(&::Fusion::LagCompensation::BVHNode::get_HasLeft)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x600e95c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVHNode>(),
                        {"get_HasLeft", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::BVHNode.get_HasRight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::LagCompensation::BVHNode::*)()>(&::Fusion::LagCompensation::BVHNode::get_HasRight)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x600e96c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVHNode>(),
                        {"get_HasRight", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::BVHNode.GetParent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::Fusion::LagCompensation::BVHNode> (::Fusion::LagCompensation::BVHNode::*)(::Fusion::LagCompensation::BVH*)>(&::Fusion::LagCompensation::BVHNode::GetParent)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x600e97c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVHNode>(),
                        {"GetParent", {}, {::i2c::type_of<::Fusion::LagCompensation::BVH*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::BVHNode.GetRight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::Fusion::LagCompensation::BVHNode> (::Fusion::LagCompensation::BVHNode::*)(::Fusion::LagCompensation::BVH*)>(&::Fusion::LagCompensation::BVHNode::GetRight)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x600e9b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVHNode>(),
                        {"GetRight", {}, {::i2c::type_of<::Fusion::LagCompensation::BVH*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::BVHNode.GetLeft
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::Fusion::LagCompensation::BVHNode> (::Fusion::LagCompensation::BVHNode::*)(::Fusion::LagCompensation::BVH*)>(&::Fusion::LagCompensation::BVHNode::GetLeft)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x600e9f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVHNode>(),
                        {"GetLeft", {}, {::i2c::type_of<::Fusion::LagCompensation::BVH*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::BVHNode.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::LagCompensation::BVHNode::*)()>(&::Fusion::LagCompensation::BVHNode::ToString)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x600ea30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::LagCompensation::BVHNode>(),
                    {::i2c::class_of<::Fusion::LagCompensation::BVHNode>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::BVHNode.get_IsLeaf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::LagCompensation::BVHNode::*)()>(&::Fusion::LagCompensation::BVHNode::get_IsLeaf)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x600eaa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVHNode>(),
                        {"get_IsLeaf", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::BVHNode.get_HasValidRoot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::LagCompensation::BVHNode::*)()>(&::Fusion::LagCompensation::BVHNode::get_HasValidRoot)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x600eab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVHNode>(),
                        {"get_HasValidRoot", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::BVHNode.RefitObjectChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::LagCompensation::BVHNode::*)(::Fusion::LagCompensation::BVH*)>(&::Fusion::LagCompensation::BVHNode::RefitObjectChanged)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x600eae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVHNode>(),
                        {"RefitObjectChanged", {}, {::i2c::type_of<::Fusion::LagCompensation::BVH*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::BVHNode.ExpandVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::LagCompensation::BVHNode::*)(::Fusion::LagCompensation::BVH*, ::UnityEngine::Vector3, float_t, ::by_ref<::UnityEngine::Bounds>, bool)>(&::Fusion::LagCompensation::BVHNode::ExpandVolume)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0x600ec1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVHNode>(),
                        {"ExpandVolume", {}, {::i2c::type_of<::Fusion::LagCompensation::BVH*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::BVHNode.AssignVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::LagCompensation::BVHNode::*)(::UnityEngine::Vector3, float_t, ::by_ref<::UnityEngine::Bounds>)>(&::Fusion::LagCompensation::BVHNode::AssignVolume)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x600f2c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVHNode>(),
                        {"AssignVolume", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::BVHNode.ComputeVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::LagCompensation::BVHNode::*)(::Fusion::LagCompensation::BVH*)>(&::Fusion::LagCompensation::BVHNode::ComputeVolume)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x600f34c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVHNode>(),
                        {"ComputeVolume", {}, {::i2c::type_of<::Fusion::LagCompensation::BVH*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::BVHNode.ComputeMinVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (::Fusion::LagCompensation::BVHNode::*)(::Fusion::LagCompensation::BVH*)>(&::Fusion::LagCompensation::BVHNode::ComputeMinVolume)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x600f80c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVHNode>(),
                        {"ComputeMinVolume", {}, {::i2c::type_of<::Fusion::LagCompensation::BVH*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::BVHNode.RefitVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::LagCompensation::BVHNode::*)(::Fusion::LagCompensation::BVH*)>(&::Fusion::LagCompensation::BVHNode::RefitVolume)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x600f974;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVHNode>(),
                        {"RefitVolume", {}, {::i2c::type_of<::Fusion::LagCompensation::BVH*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::BVHNode.SA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Bounds)>(&::Fusion::LagCompensation::BVHNode::SA)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x600fb28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVHNode>(),
                        {"SA", {}, {::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::BVHNode.SA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::by_ref<::UnityEngine::Bounds>)>(&::Fusion::LagCompensation::BVHNode::SA)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x600d310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVHNode>(),
                        {"SA", {}, {::i2c::type_of<::by_ref<::UnityEngine::Bounds>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::BVHNode.SA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::by_ref<::Fusion::LagCompensation::BVHNode>)>(&::Fusion::LagCompensation::BVHNode::SA)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x600fb74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVHNode>(),
                        {"SA", {}, {::i2c::type_of<::by_ref<::Fusion::LagCompensation::BVHNode>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::BVHNode.AABBofPair
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (*)(::by_ref<::Fusion::LagCompensation::BVHNode>, ::by_ref<::Fusion::LagCompensation::BVHNode>)>(&::Fusion::LagCompensation::BVHNode::AABBofPair)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x600fbc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVHNode>(),
                        {"AABBofPair", {}, {::i2c::type_of<::by_ref<::Fusion::LagCompensation::BVHNode>>(), ::i2c::type_of<::by_ref<::Fusion::LagCompensation::BVHNode>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::BVHNode.GetEntryBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (*)(::Fusion::HitboxRoot*)>(&::Fusion::LagCompensation::BVHNode::GetEntryBounds)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x600fc9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVHNode>(),
                        {"GetEntryBounds", {}, {::i2c::type_of<::Fusion::HitboxRoot*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::BVHNode.SAofList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::Collections::Generic::List_1<::UnityW<::Fusion::HitboxRoot>>*)>(&::Fusion::LagCompensation::BVHNode::SAofList)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x600fce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVHNode>(),
                        {"SAofList", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::Fusion::HitboxRoot>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::BVHNode.SplitNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::LagCompensation::BVHNode::*)(::Fusion::LagCompensation::BVH*, ::System::Collections::Generic::List_1<::UnityW<::Fusion::HitboxRoot>>*)>(&::Fusion::LagCompensation::BVHNode::SplitNode)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x6010004;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVHNode>(),
                        {"SplitNode", {}, {::i2c::type_of<::Fusion::LagCompensation::BVH*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::Fusion::HitboxRoot>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::BVHNode.AddObjectPushdown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::LagCompensation::BVH*, ::by_ref<::Fusion::LagCompensation::BVHNode>, ::Fusion::HitboxRoot*)>(&::Fusion::LagCompensation::BVHNode::AddObjectPushdown)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x6010394;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVHNode>(),
                        {"AddObjectPushdown", {}, {::i2c::type_of<::Fusion::LagCompensation::BVH*>(), ::i2c::type_of<::by_ref<::Fusion::LagCompensation::BVHNode>>(), ::i2c::type_of<::Fusion::HitboxRoot*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::BVHNode.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::LagCompensation::BVH*, ::by_ref<::Fusion::LagCompensation::BVHNode>, ::Fusion::HitboxRoot*, ::by_ref<::UnityEngine::Bounds>, float_t)>(&::Fusion::LagCompensation::BVHNode::Add)> {
  constexpr static std::size_t size = 0x80c;
  constexpr static std::size_t addrs = 0x600d35c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVHNode>(),
                        {"Add", {}, {::i2c::type_of<::Fusion::LagCompensation::BVH*>(), ::i2c::type_of<::by_ref<::Fusion::LagCompensation::BVHNode>>(), ::i2c::type_of<::Fusion::HitboxRoot*>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::BVHNode.NodesCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::LagCompensation::BVHNode::*)(::Fusion::LagCompensation::BVH*)>(&::Fusion::LagCompensation::BVHNode::NodesCount)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x60105bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVHNode>(),
                        {"NodesCount", {}, {::i2c::type_of<::Fusion::LagCompensation::BVH*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::BVHNode.Remove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::LagCompensation::BVHNode::*)(::Fusion::LagCompensation::BVH*, ::Fusion::HitboxRoot*)>(&::Fusion::LagCompensation::BVHNode::Remove)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x600dcc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVHNode>(),
                        {"Remove", {}, {::i2c::type_of<::Fusion::LagCompensation::BVH*>(), ::i2c::type_of<::Fusion::HitboxRoot*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::BVHNode.SetDepth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::LagCompensation::BVHNode::*)(::Fusion::LagCompensation::BVH*, int32_t)>(&::Fusion::LagCompensation::BVHNode::SetDepth)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x6010bac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVHNode>(),
                        {"SetDepth", {}, {::i2c::type_of<::Fusion::LagCompensation::BVH*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::BVHNode.RemoveLeaf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::LagCompensation::BVHNode::*)(::Fusion::LagCompensation::BVH*, int32_t)>(&::Fusion::LagCompensation::BVHNode::RemoveLeaf)> {
  constexpr static std::size_t size = 0x518;
  constexpr static std::size_t addrs = 0x6010694;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVHNode>(),
                        {"RemoveLeaf", {}, {::i2c::type_of<::Fusion::LagCompensation::BVH*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::BVHNode.FindOverlappingLeaves
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::LagCompensation::BVHNode::*)(::Fusion::LagCompensation::BVH*, ::UnityEngine::Vector3, float_t, ::System::Collections::Generic::List_1<::Fusion::LagCompensation::BVHNode>*)>(&::Fusion::LagCompensation::BVHNode::FindOverlappingLeaves)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x6010cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVHNode>(),
                        {"FindOverlappingLeaves", {}, {::i2c::type_of<::Fusion::LagCompensation::BVH*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Fusion::LagCompensation::BVHNode>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::BVHNode.BoundsIntersectsSphere
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::LagCompensation::BVHNode::*)(::UnityEngine::Bounds, ::UnityEngine::Vector3, float_t)>(&::Fusion::LagCompensation::BVHNode::BoundsIntersectsSphere)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6010f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVHNode>(),
                        {"BoundsIntersectsSphere", {}, {::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::BVHNode.FindOverlappingLeaves
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::LagCompensation::BVHNode::*)(::Fusion::LagCompensation::BVH*, ::UnityEngine::Bounds, ::System::Collections::Generic::List_1<::Fusion::LagCompensation::BVHNode>*)>(&::Fusion::LagCompensation::BVHNode::FindOverlappingLeaves)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x6010fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVHNode>(),
                        {"FindOverlappingLeaves", {}, {::i2c::type_of<::Fusion::LagCompensation::BVH*>(), ::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Fusion::LagCompensation::BVHNode>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::BVHNode.ToBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (::Fusion::LagCompensation::BVHNode::*)()>(&::Fusion::LagCompensation::BVHNode::ToBounds)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6010ec4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVHNode>(),
                        {"ToBounds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::BVHNode.ChildExpanded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::LagCompensation::BVHNode::*)(::Fusion::LagCompensation::BVH*, ::by_ref<::Fusion::LagCompensation::BVHNode>)>(&::Fusion::LagCompensation::BVHNode::ChildExpanded)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x600ef48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVHNode>(),
                        {"ChildExpanded", {}, {::i2c::type_of<::Fusion::LagCompensation::BVH*>(), ::i2c::type_of<::by_ref<::Fusion::LagCompensation::BVHNode>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::BVHNode.UpdateBoundsCache
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::LagCompensation::BVHNode::*)()>(&::Fusion::LagCompensation::BVHNode::UpdateBoundsCache)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6011228;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVHNode>(),
                        {"UpdateBoundsCache", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::BVHNode.ChildRefit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::LagCompensation::BVHNode::*)(::Fusion::LagCompensation::BVH*, bool)>(&::Fusion::LagCompensation::BVHNode::ChildRefit)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6011280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVHNode>(),
                        {"ChildRefit", {}, {::i2c::type_of<::Fusion::LagCompensation::BVH*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::BVHNode.ChildRefit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::LagCompensation::BVH*, int32_t, bool)>(&::Fusion::LagCompensation::BVHNode::ChildRefit)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x600f4ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVHNode>(),
                        {"ChildRefit", {}, {::i2c::type_of<::Fusion::LagCompensation::BVH*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::BVHNode.InitNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Fusion::LagCompensation::BVHNode>, ::Fusion::LagCompensation::BVH*, int32_t, int32_t, int32_t, ::System::Collections::Generic::List_1<::UnityW<::Fusion::HitboxRoot>>*)>(&::Fusion::LagCompensation::BVHNode::InitNode)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x600e0a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVHNode>(),
                        {"InitNode", {}, {::i2c::type_of<::by_ref<::Fusion::LagCompensation::BVHNode>>(), ::i2c::type_of<::Fusion::LagCompensation::BVH*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::Fusion::HitboxRoot>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::BVHNode.BuildLog
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::LagCompensation::BVHNode::*)(::System::Text::StringBuilder*)>(&::Fusion::LagCompensation::BVHNode::BuildLog)> {
  constexpr static std::size_t size = 0x39c;
  constexpr static std::size_t addrs = 0x600e510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVHNode>(),
                        {"BuildLog", {}, {::i2c::type_of<::System::Text::StringBuilder*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::LagCompensation::BVHNode::setStaticF_ComparerX(::Fusion::HitboxRoot_HitboxComparerX*  value)  {
::cordl_internals::setStaticField<::Fusion::HitboxRoot_HitboxComparerX*, "ComparerX", ::Fusion::LagCompensation::BVHNode>(std::forward<::Fusion::HitboxRoot_HitboxComparerX*>(value));
}
inline ::Fusion::HitboxRoot_HitboxComparerX* Fusion::LagCompensation::BVHNode::getStaticF_ComparerX()  {
return ::cordl_internals::getStaticField<::Fusion::HitboxRoot_HitboxComparerX*, "ComparerX", ::Fusion::LagCompensation::BVHNode>();
}
inline void Fusion::LagCompensation::BVHNode::setStaticF_ComparerY(::Fusion::HitboxRoot_HitboxComparerY*  value)  {
::cordl_internals::setStaticField<::Fusion::HitboxRoot_HitboxComparerY*, "ComparerY", ::Fusion::LagCompensation::BVHNode>(std::forward<::Fusion::HitboxRoot_HitboxComparerY*>(value));
}
inline ::Fusion::HitboxRoot_HitboxComparerY* Fusion::LagCompensation::BVHNode::getStaticF_ComparerY()  {
return ::cordl_internals::getStaticField<::Fusion::HitboxRoot_HitboxComparerY*, "ComparerY", ::Fusion::LagCompensation::BVHNode>();
}
inline void Fusion::LagCompensation::BVHNode::setStaticF_ComparerZ(::Fusion::HitboxRoot_HitboxComparerZ*  value)  {
::cordl_internals::setStaticField<::Fusion::HitboxRoot_HitboxComparerZ*, "ComparerZ", ::Fusion::LagCompensation::BVHNode>(std::forward<::Fusion::HitboxRoot_HitboxComparerZ*>(value));
}
inline ::Fusion::HitboxRoot_HitboxComparerZ* Fusion::LagCompensation::BVHNode::getStaticF_ComparerZ()  {
return ::cordl_internals::getStaticField<::Fusion::HitboxRoot_HitboxComparerZ*, "ComparerZ", ::Fusion::LagCompensation::BVHNode>();
}
inline int32_t Fusion::LagCompensation::BVHNode::get_Index()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVHNode>(),
                        {"get_Index", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool Fusion::LagCompensation::BVHNode::get_IsValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVHNode>(),
                        {"get_IsValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Fusion::LagCompensation::BVHNode::get_IsRootNode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVHNode>(),
                        {"get_IsRootNode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Fusion::LagCompensation::BVHNode::get_HasParent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVHNode>(),
                        {"get_HasParent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Fusion::LagCompensation::BVHNode::get_HasLeft()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVHNode>(),
                        {"get_HasLeft", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Fusion::LagCompensation::BVHNode::get_HasRight()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVHNode>(),
                        {"get_HasRight", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::by_ref<::Fusion::LagCompensation::BVHNode> Fusion::LagCompensation::BVHNode::GetParent(::Fusion::LagCompensation::BVH*  bvh)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVHNode>(),
                        {"GetParent", {}, {::i2c::type_of<::Fusion::LagCompensation::BVH*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::Fusion::LagCompensation::BVHNode>>(*this, ___internal_method, bvh);
}
inline ::by_ref<::Fusion::LagCompensation::BVHNode> Fusion::LagCompensation::BVHNode::GetRight(::Fusion::LagCompensation::BVH*  bvh)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVHNode>(),
                        {"GetRight", {}, {::i2c::type_of<::Fusion::LagCompensation::BVH*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::Fusion::LagCompensation::BVHNode>>(*this, ___internal_method, bvh);
}
inline ::by_ref<::Fusion::LagCompensation::BVHNode> Fusion::LagCompensation::BVHNode::GetLeft(::Fusion::LagCompensation::BVH*  bvh)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVHNode>(),
                        {"GetLeft", {}, {::i2c::type_of<::Fusion::LagCompensation::BVH*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::Fusion::LagCompensation::BVHNode>>(*this, ___internal_method, bvh);
}
inline ::StringW Fusion::LagCompensation::BVHNode::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::LagCompensation::BVHNode>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline bool Fusion::LagCompensation::BVHNode::get_IsLeaf()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVHNode>(),
                        {"get_IsLeaf", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Fusion::LagCompensation::BVHNode::get_HasValidRoot()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVHNode>(),
                        {"get_HasValidRoot", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void Fusion::LagCompensation::BVHNode::RefitObjectChanged(::Fusion::LagCompensation::BVH*  bvh)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVHNode>(),
                        {"RefitObjectChanged", {}, {::i2c::type_of<::Fusion::LagCompensation::BVH*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, bvh);
}
inline void Fusion::LagCompensation::BVHNode::ExpandVolume(::Fusion::LagCompensation::BVH*  bvh, ::UnityEngine::Vector3  objectpos, float_t  radius, ::by_ref<::UnityEngine::Bounds>  bounds, bool  expandParent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVHNode>(),
                        {"ExpandVolume", {}, {::i2c::type_of<::Fusion::LagCompensation::BVH*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, bvh, objectpos, radius, bounds, expandParent);
}
inline void Fusion::LagCompensation::BVHNode::AssignVolume(::UnityEngine::Vector3  pos, float_t  radius, ::by_ref<::UnityEngine::Bounds>  bounds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVHNode>(),
                        {"AssignVolume", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, pos, radius, bounds);
}
inline void Fusion::LagCompensation::BVHNode::ComputeVolume(::Fusion::LagCompensation::BVH*  bvh)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVHNode>(),
                        {"ComputeVolume", {}, {::i2c::type_of<::Fusion::LagCompensation::BVH*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, bvh);
}
inline ::UnityEngine::Bounds Fusion::LagCompensation::BVHNode::ComputeMinVolume(::Fusion::LagCompensation::BVH*  bvh)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVHNode>(),
                        {"ComputeMinVolume", {}, {::i2c::type_of<::Fusion::LagCompensation::BVH*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(*this, ___internal_method, bvh);
}
inline bool Fusion::LagCompensation::BVHNode::RefitVolume(::Fusion::LagCompensation::BVH*  bvh)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVHNode>(),
                        {"RefitVolume", {}, {::i2c::type_of<::Fusion::LagCompensation::BVH*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, bvh);
}
inline float_t Fusion::LagCompensation::BVHNode::SA(::UnityEngine::Bounds  box)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVHNode>(),
                        {"SA", {}, {::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, box);
}
inline float_t Fusion::LagCompensation::BVHNode::SA(::by_ref<::UnityEngine::Bounds>  box)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVHNode>(),
                        {"SA", {}, {::i2c::type_of<::by_ref<::UnityEngine::Bounds>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, box);
}
inline float_t Fusion::LagCompensation::BVHNode::SA(::by_ref<::Fusion::LagCompensation::BVHNode>  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVHNode>(),
                        {"SA", {}, {::i2c::type_of<::by_ref<::Fusion::LagCompensation::BVHNode>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, node);
}
inline ::UnityEngine::Bounds Fusion::LagCompensation::BVHNode::AABBofPair(::by_ref<::Fusion::LagCompensation::BVHNode>  nodea, ::by_ref<::Fusion::LagCompensation::BVHNode>  nodeb)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVHNode>(),
                        {"AABBofPair", {}, {::i2c::type_of<::by_ref<::Fusion::LagCompensation::BVHNode>>(), ::i2c::type_of<::by_ref<::Fusion::LagCompensation::BVHNode>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(nullptr, ___internal_method, nodea, nodeb);
}
inline ::UnityEngine::Bounds Fusion::LagCompensation::BVHNode::GetEntryBounds(::Fusion::HitboxRoot*  entry)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVHNode>(),
                        {"GetEntryBounds", {}, {::i2c::type_of<::Fusion::HitboxRoot*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(nullptr, ___internal_method, entry);
}
inline float_t Fusion::LagCompensation::BVHNode::SAofList(::System::Collections::Generic::List_1<::UnityW<::Fusion::HitboxRoot>>*  entries)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVHNode>(),
                        {"SAofList", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::Fusion::HitboxRoot>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, entries);
}
inline void Fusion::LagCompensation::BVHNode::SplitNode(::Fusion::LagCompensation::BVH*  bvh, ::System::Collections::Generic::List_1<::UnityW<::Fusion::HitboxRoot>>*  entries)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVHNode>(),
                        {"SplitNode", {}, {::i2c::type_of<::Fusion::LagCompensation::BVH*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::Fusion::HitboxRoot>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, bvh, entries);
}
inline void Fusion::LagCompensation::BVHNode::AddObjectPushdown(::Fusion::LagCompensation::BVH*  bvh, ::by_ref<::Fusion::LagCompensation::BVHNode>  curNode, ::Fusion::HitboxRoot*  entry)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVHNode>(),
                        {"AddObjectPushdown", {}, {::i2c::type_of<::Fusion::LagCompensation::BVH*>(), ::i2c::type_of<::by_ref<::Fusion::LagCompensation::BVHNode>>(), ::i2c::type_of<::Fusion::HitboxRoot*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, bvh, curNode, entry);
}
inline void Fusion::LagCompensation::BVHNode::Add(::Fusion::LagCompensation::BVH*  bvh, ::by_ref<::Fusion::LagCompensation::BVHNode>  startNode, ::Fusion::HitboxRoot*  entry, ::by_ref<::UnityEngine::Bounds>  newObBox, float_t  newObSah)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVHNode>(),
                        {"Add", {}, {::i2c::type_of<::Fusion::LagCompensation::BVH*>(), ::i2c::type_of<::by_ref<::Fusion::LagCompensation::BVHNode>>(), ::i2c::type_of<::Fusion::HitboxRoot*>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, bvh, startNode, entry, newObBox, newObSah);
}
inline int32_t Fusion::LagCompensation::BVHNode::NodesCount(::Fusion::LagCompensation::BVH*  bvh)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVHNode>(),
                        {"NodesCount", {}, {::i2c::type_of<::Fusion::LagCompensation::BVH*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, bvh);
}
inline void Fusion::LagCompensation::BVHNode::Remove(::Fusion::LagCompensation::BVH*  bvh, ::Fusion::HitboxRoot*  entry)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVHNode>(),
                        {"Remove", {}, {::i2c::type_of<::Fusion::LagCompensation::BVH*>(), ::i2c::type_of<::Fusion::HitboxRoot*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, bvh, entry);
}
inline void Fusion::LagCompensation::BVHNode::SetDepth(::Fusion::LagCompensation::BVH*  bvh, int32_t  newdepth)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVHNode>(),
                        {"SetDepth", {}, {::i2c::type_of<::Fusion::LagCompensation::BVH*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, bvh, newdepth);
}
inline void Fusion::LagCompensation::BVHNode::RemoveLeaf(::Fusion::LagCompensation::BVH*  bvh, int32_t  removeIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVHNode>(),
                        {"RemoveLeaf", {}, {::i2c::type_of<::Fusion::LagCompensation::BVH*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, bvh, removeIndex);
}
inline void Fusion::LagCompensation::BVHNode::FindOverlappingLeaves(::Fusion::LagCompensation::BVH*  bvh, ::UnityEngine::Vector3  origin, float_t  radius, ::System::Collections::Generic::List_1<::Fusion::LagCompensation::BVHNode>*  overlapList)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVHNode>(),
                        {"FindOverlappingLeaves", {}, {::i2c::type_of<::Fusion::LagCompensation::BVH*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Fusion::LagCompensation::BVHNode>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, bvh, origin, radius, overlapList);
}
inline bool Fusion::LagCompensation::BVHNode::BoundsIntersectsSphere(::UnityEngine::Bounds  bounds, ::UnityEngine::Vector3  origin, float_t  radius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVHNode>(),
                        {"BoundsIntersectsSphere", {}, {::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, bounds, origin, radius);
}
inline void Fusion::LagCompensation::BVHNode::FindOverlappingLeaves(::Fusion::LagCompensation::BVH*  bvh, ::UnityEngine::Bounds  aabb, ::System::Collections::Generic::List_1<::Fusion::LagCompensation::BVHNode>*  overlapList)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVHNode>(),
                        {"FindOverlappingLeaves", {}, {::i2c::type_of<::Fusion::LagCompensation::BVH*>(), ::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Fusion::LagCompensation::BVHNode>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, bvh, aabb, overlapList);
}
inline ::UnityEngine::Bounds Fusion::LagCompensation::BVHNode::ToBounds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVHNode>(),
                        {"ToBounds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(*this, ___internal_method);
}
inline void Fusion::LagCompensation::BVHNode::ChildExpanded(::Fusion::LagCompensation::BVH*  bvh, ::by_ref<::Fusion::LagCompensation::BVHNode>  child)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVHNode>(),
                        {"ChildExpanded", {}, {::i2c::type_of<::Fusion::LagCompensation::BVH*>(), ::i2c::type_of<::by_ref<::Fusion::LagCompensation::BVHNode>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, bvh, child);
}
inline void Fusion::LagCompensation::BVHNode::UpdateBoundsCache()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVHNode>(),
                        {"UpdateBoundsCache", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Fusion::LagCompensation::BVHNode::ChildRefit(::Fusion::LagCompensation::BVH*  bvh, bool  propagate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVHNode>(),
                        {"ChildRefit", {}, {::i2c::type_of<::Fusion::LagCompensation::BVH*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, bvh, propagate);
}
inline void Fusion::LagCompensation::BVHNode::ChildRefit(::Fusion::LagCompensation::BVH*  bvh, int32_t  nodeIndex, bool  propagate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVHNode>(),
                        {"ChildRefit", {}, {::i2c::type_of<::Fusion::LagCompensation::BVH*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, bvh, nodeIndex, propagate);
}
inline void Fusion::LagCompensation::BVHNode::InitNode(::by_ref<::Fusion::LagCompensation::BVHNode>  node, ::Fusion::LagCompensation::BVH*  bvh, int32_t  index, int32_t  parentIndex, int32_t  curDepth, ::System::Collections::Generic::List_1<::UnityW<::Fusion::HitboxRoot>>*  entries)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVHNode>(),
                        {"InitNode", {}, {::i2c::type_of<::by_ref<::Fusion::LagCompensation::BVHNode>>(), ::i2c::type_of<::Fusion::LagCompensation::BVH*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::Fusion::HitboxRoot>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, node, bvh, index, parentIndex, curDepth, entries);
}
inline void Fusion::LagCompensation::BVHNode::BuildLog(::System::Text::StringBuilder*  builder)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVHNode>(),
                        {"BuildLog", {}, {::i2c::type_of<::System::Text::StringBuilder*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, builder);
}
// Ctor Parameters [CppParam { name: "Box", ty: "::UnityEngine::Bounds", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_cachedBounds", ty: "::Fusion::LagCompensation::AABB", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_nodeIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_parentIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_leftIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_rightIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Active", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Depth", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Used", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Next", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_root", ty: "::UnityW<::Fusion::HitboxRoot>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_isLeaf", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::LagCompensation::BVHNode::BVHNode(::UnityEngine::Bounds  Box, ::Fusion::LagCompensation::AABB  _cachedBounds, int32_t  _nodeIndex, int32_t  _parentIndex, int32_t  _leftIndex, int32_t  _rightIndex, bool  Active, int32_t  Depth, bool  Used, int32_t  Next, ::UnityW<::Fusion::HitboxRoot>  _root, bool  _isLeaf) noexcept  {
this->Box = Box;
this->_cachedBounds = _cachedBounds;
this->_nodeIndex = _nodeIndex;
this->_parentIndex = _parentIndex;
this->_leftIndex = _leftIndex;
this->_rightIndex = _rightIndex;
this->Active = Active;
this->Depth = Depth;
this->Used = Used;
this->Next = Next;
this->_root = _root;
this->_isLeaf = _isLeaf;
}
// Ctor Parameters []
constexpr ::Fusion::LagCompensation::BVHNode::BVHNode()   {
}
