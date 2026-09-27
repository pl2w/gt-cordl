#pragma once
// IWYU pragma private; include "GlobalNamespace/BSPTreeBuilder.hpp"
#include "GlobalNamespace/zzzz__BoundsInt_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__BSPTreeBuilder_def.hpp"
#include "GlobalNamespace/zzzz__BSPTreeBuilder_def.hpp"
#include "GlobalNamespace/zzzz__BoundsInt_def.hpp"
#include "GlobalNamespace/zzzz__MatrixBSPNode_def.hpp"
#include "GlobalNamespace/zzzz__MatrixZonePair_def.hpp"
#include "GlobalNamespace/zzzz__SerializableBSPNode_Axis_def.hpp"
#include "GlobalNamespace/zzzz__SerializableBSPNode_def.hpp"
#include "GlobalNamespace/zzzz__SerializableBSPTree_def.hpp"
#include "GlobalNamespace/zzzz__ZoneDef_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "UnityEngine/zzzz__BoxCollider_def.hpp"
#include "UnityEngine/zzzz__Vector3Int_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BSPTreeBuilder.BuildTree
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SerializableBSPTree* (*)(::ArrayW<::GlobalNamespace::ZoneDef*>)>(&::GlobalNamespace::BSPTreeBuilder::BuildTree)> {
  constexpr static std::size_t size = 0xe14;
  constexpr static std::size_t addrs = 0x5b44dac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BSPTreeBuilder*>(),
                        {"BuildTree", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::ZoneDef*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BSPTreeBuilder.BuildTreeRecursive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<::GlobalNamespace::ZoneDef*>, ::System::Collections::Generic::List_1<::GlobalNamespace::BSPTreeBuilder_BoxMetadata*>*, ::GlobalNamespace::BoundsInt, int32_t, ::GlobalNamespace::SerializableBSPNode_Axis, ::System::Collections::Generic::List_1<::GlobalNamespace::SerializableBSPNode>*, ::System::Collections::Generic::List_1<::GlobalNamespace::MatrixBSPNode>*, ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<int32_t,int32_t>,int32_t>*, ::by_ref<int32_t>)>(&::GlobalNamespace::BSPTreeBuilder::BuildTreeRecursive)> {
  constexpr static std::size_t size = 0xe48;
  constexpr static std::size_t addrs = 0x5b45d9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BSPTreeBuilder*>(),
                        {"BuildTreeRecursive", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::ZoneDef*>>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::BSPTreeBuilder_BoxMetadata*>*>(), ::i2c::type_of<::GlobalNamespace::BoundsInt>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::SerializableBSPNode_Axis>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::SerializableBSPNode>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::MatrixBSPNode>*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<int32_t,int32_t>,int32_t>*>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BSPTreeBuilder.FindBestAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SerializableBSPNode_Axis (*)(::System::Collections::Generic::List_1<::GlobalNamespace::BSPTreeBuilder_BoxMetadata*>*, ::GlobalNamespace::BoundsInt, ::GlobalNamespace::SerializableBSPNode_Axis, ::by_ref<int32_t>)>(&::GlobalNamespace::BSPTreeBuilder::FindBestAxis)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x5b478c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BSPTreeBuilder*>(),
                        {"FindBestAxis", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::BSPTreeBuilder_BoxMetadata*>*>(), ::i2c::type_of<::GlobalNamespace::BoundsInt>(), ::i2c::type_of<::GlobalNamespace::SerializableBSPNode_Axis>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BSPTreeBuilder.EvaluateBestSplit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Collections::Generic::List_1<::GlobalNamespace::BSPTreeBuilder_BoxMetadata*>*, ::GlobalNamespace::BoundsInt, ::GlobalNamespace::SerializableBSPNode_Axis, int32_t)>(&::GlobalNamespace::BSPTreeBuilder::EvaluateBestSplit)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5b48ae4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BSPTreeBuilder*>(),
                        {"EvaluateBestSplit", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::BSPTreeBuilder_BoxMetadata*>*>(), ::i2c::type_of<::GlobalNamespace::BoundsInt>(), ::i2c::type_of<::GlobalNamespace::SerializableBSPNode_Axis>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BSPTreeBuilder.FindOptimalSplit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Collections::Generic::List_1<::GlobalNamespace::BSPTreeBuilder_BoxMetadata*>*, ::GlobalNamespace::BoundsInt, ::GlobalNamespace::SerializableBSPNode_Axis, ::by_ref<int32_t>)>(&::GlobalNamespace::BSPTreeBuilder::FindOptimalSplit)> {
  constexpr static std::size_t size = 0x898;
  constexpr static std::size_t addrs = 0x5b4824c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BSPTreeBuilder*>(),
                        {"FindOptimalSplit", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::BSPTreeBuilder_BoxMetadata*>*>(), ::i2c::type_of<::GlobalNamespace::BoundsInt>(), ::i2c::type_of<::GlobalNamespace::SerializableBSPNode_Axis>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BSPTreeBuilder.GetFallbackSplit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::BoundsInt, ::GlobalNamespace::SerializableBSPNode_Axis)>(&::GlobalNamespace::BSPTreeBuilder::GetFallbackSplit)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5b481ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BSPTreeBuilder*>(),
                        {"GetFallbackSplit", {}, {::i2c::type_of<::GlobalNamespace::BoundsInt>(), ::i2c::type_of<::GlobalNamespace::SerializableBSPNode_Axis>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BSPTreeBuilder.EvaluateSplit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Collections::Generic::List_1<::GlobalNamespace::BSPTreeBuilder_BoxMetadata*>*, int32_t, ::GlobalNamespace::SerializableBSPNode_Axis, ::GlobalNamespace::BoundsInt)>(&::GlobalNamespace::BSPTreeBuilder::EvaluateSplit)> {
  constexpr static std::size_t size = 0x38c;
  constexpr static std::size_t addrs = 0x5b48b7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BSPTreeBuilder*>(),
                        {"EvaluateSplit", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::BSPTreeBuilder_BoxMetadata*>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::SerializableBSPNode_Axis>(), ::i2c::type_of<::GlobalNamespace::BoundsInt>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BSPTreeBuilder.GetEffectiveBoxes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::BSPTreeBuilder_BoxMetadata*>* (*)(::System::Collections::Generic::List_1<::GlobalNamespace::BSPTreeBuilder_BoxMetadata*>*, ::GlobalNamespace::BoundsInt)>(&::GlobalNamespace::BSPTreeBuilder::GetEffectiveBoxes)> {
  constexpr static std::size_t size = 0x598;
  constexpr static std::size_t addrs = 0x5b47c34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BSPTreeBuilder*>(),
                        {"GetEffectiveBoxes", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::BSPTreeBuilder_BoxMetadata*>*>(), ::i2c::type_of<::GlobalNamespace::BoundsInt>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BSPTreeBuilder.GetEffectiveSpanningBoxes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::BSPTreeBuilder_BoxMetadata*>* (*)(::System::Collections::Generic::List_1<::GlobalNamespace::BSPTreeBuilder_BoxMetadata*>*, ::GlobalNamespace::BoundsInt, ::GlobalNamespace::BoundsInt)>(&::GlobalNamespace::BSPTreeBuilder::GetEffectiveSpanningBoxes)> {
  constexpr static std::size_t size = 0x410;
  constexpr static std::size_t addrs = 0x5b48f34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BSPTreeBuilder*>(),
                        {"GetEffectiveSpanningBoxes", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::BSPTreeBuilder_BoxMetadata*>*>(), ::i2c::type_of<::GlobalNamespace::BoundsInt>(), ::i2c::type_of<::GlobalNamespace::BoundsInt>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BSPTreeBuilder.GetNextAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SerializableBSPNode_Axis (*)(::GlobalNamespace::SerializableBSPNode_Axis)>(&::GlobalNamespace::BSPTreeBuilder::GetNextAxis)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b481cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BSPTreeBuilder*>(),
                        {"GetNextAxis", {}, {::i2c::type_of<::GlobalNamespace::SerializableBSPNode_Axis>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BSPTreeBuilder.GetAxisValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Vector3Int, ::GlobalNamespace::SerializableBSPNode_Axis)>(&::GlobalNamespace::BSPTreeBuilder::GetAxisValue)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5b48f08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BSPTreeBuilder*>(),
                        {"GetAxisValue", {}, {::i2c::type_of<::UnityEngine::Vector3Int>(), ::i2c::type_of<::GlobalNamespace::SerializableBSPNode_Axis>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BSPTreeBuilder.CalculateWorldBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BoundsInt (*)(::System::Collections::Generic::List_1<::GlobalNamespace::BSPTreeBuilder_BoxMetadata*>*)>(&::GlobalNamespace::BSPTreeBuilder::CalculateWorldBounds)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5b45c88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BSPTreeBuilder*>(),
                        {"CalculateWorldBounds", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::BSPTreeBuilder_BoxMetadata*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BSPTreeBuilder.CalculateIntersectionVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::GlobalNamespace::BoundsInt, ::GlobalNamespace::BoundsInt)>(&::GlobalNamespace::BSPTreeBuilder::CalculateIntersectionVolume)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5b49344;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BSPTreeBuilder*>(),
                        {"CalculateIntersectionVolume", {}, {::i2c::type_of<::GlobalNamespace::BoundsInt>(), ::i2c::type_of<::GlobalNamespace::BoundsInt>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BSPTreeBuilder.CreateMatrixNodeTree
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<::GlobalNamespace::ZoneDef*>, ::System::Collections::Generic::List_1<::GlobalNamespace::BSPTreeBuilder_BoxMetadata*>*, ::System::Collections::Generic::List_1<::GlobalNamespace::MatrixBSPNode>*, ::GlobalNamespace::BoundsInt, ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<int32_t,int32_t>,int32_t>*, ::by_ref<int32_t>)>(&::GlobalNamespace::BSPTreeBuilder::CreateMatrixNodeTree)> {
  constexpr static std::size_t size = 0x794;
  constexpr static std::size_t addrs = 0x5b47130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BSPTreeBuilder*>(),
                        {"CreateMatrixNodeTree", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::ZoneDef*>>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::BSPTreeBuilder_BoxMetadata*>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::MatrixBSPNode>*>(), ::i2c::type_of<::GlobalNamespace::BoundsInt>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<int32_t,int32_t>,int32_t>*>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BSPTreeBuilder.CreateSequentialMatrixNodes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<::GlobalNamespace::ZoneDef*>, ::System::Collections::Generic::List_1<::GlobalNamespace::BSPTreeBuilder_BoxMetadata*>*, ::System::Collections::Generic::List_1<::GlobalNamespace::MatrixBSPNode>*, int32_t, ::ArrayW<::GlobalNamespace::ZoneDef*>, ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<int32_t,int32_t>,int32_t>*, ::by_ref<int32_t>)>(&::GlobalNamespace::BSPTreeBuilder::CreateSequentialMatrixNodes)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x5b496d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BSPTreeBuilder*>(),
                        {"CreateSequentialMatrixNodes", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::ZoneDef*>>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::BSPTreeBuilder_BoxMetadata*>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::MatrixBSPNode>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::ZoneDef*>>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<int32_t,int32_t>,int32_t>*>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BSPTreeBuilder.AddMatrixNodeWithCache
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::MatrixBSPNode, ::System::Collections::Generic::List_1<::GlobalNamespace::MatrixBSPNode>*, ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<int32_t,int32_t>,int32_t>*, ::by_ref<int32_t>)>(&::GlobalNamespace::BSPTreeBuilder::AddMatrixNodeWithCache)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x5b49418;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BSPTreeBuilder*>(),
                        {"AddMatrixNodeWithCache", {}, {::i2c::type_of<::GlobalNamespace::MatrixBSPNode>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::MatrixBSPNode>*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<int32_t,int32_t>,int32_t>*>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BSPTreeBuilder.SortBoxesByPriority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::BSPTreeBuilder_BoxMetadata*>* (*)(::System::Collections::Generic::List_1<::GlobalNamespace::BSPTreeBuilder_BoxMetadata*>*)>(&::GlobalNamespace::BSPTreeBuilder::SortBoxesByPriority)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x5b49588;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BSPTreeBuilder*>(),
                        {"SortBoxesByPriority", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::BSPTreeBuilder_BoxMetadata*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BSPTreeBuilder.CleanupUnreferencedMatrices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::List_1<::GlobalNamespace::MatrixBSPNode>*, ::System::Collections::Generic::List_1<::GlobalNamespace::MatrixZonePair>*)>(&::GlobalNamespace::BSPTreeBuilder::CleanupUnreferencedMatrices)> {
  constexpr static std::size_t size = 0x53c;
  constexpr static std::size_t addrs = 0x5b46be4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BSPTreeBuilder*>(),
                        {"CleanupUnreferencedMatrices", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::MatrixBSPNode>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::MatrixZonePair>*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BSPTreeBuilder::setStaticF_testPoint(::UnityEngine::Vector3  value)  {
::cordl_internals::setStaticField<::UnityEngine::Vector3, "testPoint", ::GlobalNamespace::BSPTreeBuilder*>(std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 GlobalNamespace::BSPTreeBuilder::getStaticF_testPoint()  {
return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "testPoint", ::GlobalNamespace::BSPTreeBuilder*>();
}
inline ::GlobalNamespace::SerializableBSPTree* GlobalNamespace::BSPTreeBuilder::BuildTree(::ArrayW<::GlobalNamespace::ZoneDef*>  zones)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BSPTreeBuilder*>(),
                        {"BuildTree", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::ZoneDef*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SerializableBSPTree*>(nullptr, ___internal_method, zones);
}
inline int32_t GlobalNamespace::BSPTreeBuilder::BuildTreeRecursive(::ArrayW<::GlobalNamespace::ZoneDef*>  zones, ::System::Collections::Generic::List_1<::GlobalNamespace::BSPTreeBuilder_BoxMetadata*>*  boxes, ::GlobalNamespace::BoundsInt  bounds, int32_t  depth, ::GlobalNamespace::SerializableBSPNode_Axis  axis, ::System::Collections::Generic::List_1<::GlobalNamespace::SerializableBSPNode>*  nodeList, ::System::Collections::Generic::List_1<::GlobalNamespace::MatrixBSPNode>*  matrixNodeList, /* [TupleElementNames(new[] { "matrixIndex", "outsideIndex" })] */ ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<int32_t,int32_t>,int32_t>*  matrixNodeCache, ::by_ref<int32_t>  matrixNodeCacheHits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BSPTreeBuilder*>(),
                        {"BuildTreeRecursive", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::ZoneDef*>>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::BSPTreeBuilder_BoxMetadata*>*>(), ::i2c::type_of<::GlobalNamespace::BoundsInt>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::SerializableBSPNode_Axis>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::SerializableBSPNode>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::MatrixBSPNode>*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<int32_t,int32_t>,int32_t>*>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, zones, boxes, bounds, depth, axis, nodeList, matrixNodeList, matrixNodeCache, matrixNodeCacheHits);
}
inline ::GlobalNamespace::SerializableBSPNode_Axis GlobalNamespace::BSPTreeBuilder::FindBestAxis(::System::Collections::Generic::List_1<::GlobalNamespace::BSPTreeBuilder_BoxMetadata*>*  boxes, ::GlobalNamespace::BoundsInt  bounds, ::GlobalNamespace::SerializableBSPNode_Axis  preferredAxis, ::by_ref<int32_t>  bestSplitValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BSPTreeBuilder*>(),
                        {"FindBestAxis", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::BSPTreeBuilder_BoxMetadata*>*>(), ::i2c::type_of<::GlobalNamespace::BoundsInt>(), ::i2c::type_of<::GlobalNamespace::SerializableBSPNode_Axis>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SerializableBSPNode_Axis>(nullptr, ___internal_method, boxes, bounds, preferredAxis, bestSplitValue);
}
inline int32_t GlobalNamespace::BSPTreeBuilder::EvaluateBestSplit(::System::Collections::Generic::List_1<::GlobalNamespace::BSPTreeBuilder_BoxMetadata*>*  boxes, ::GlobalNamespace::BoundsInt  bounds, ::GlobalNamespace::SerializableBSPNode_Axis  axis, int32_t  splitValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BSPTreeBuilder*>(),
                        {"EvaluateBestSplit", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::BSPTreeBuilder_BoxMetadata*>*>(), ::i2c::type_of<::GlobalNamespace::BoundsInt>(), ::i2c::type_of<::GlobalNamespace::SerializableBSPNode_Axis>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, boxes, bounds, axis, splitValue);
}
inline int32_t GlobalNamespace::BSPTreeBuilder::FindOptimalSplit(::System::Collections::Generic::List_1<::GlobalNamespace::BSPTreeBuilder_BoxMetadata*>*  boxes, ::GlobalNamespace::BoundsInt  bounds, ::GlobalNamespace::SerializableBSPNode_Axis  axis, ::by_ref<int32_t>  bestScore)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BSPTreeBuilder*>(),
                        {"FindOptimalSplit", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::BSPTreeBuilder_BoxMetadata*>*>(), ::i2c::type_of<::GlobalNamespace::BoundsInt>(), ::i2c::type_of<::GlobalNamespace::SerializableBSPNode_Axis>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, boxes, bounds, axis, bestScore);
}
inline int32_t GlobalNamespace::BSPTreeBuilder::GetFallbackSplit(::GlobalNamespace::BoundsInt  bounds, ::GlobalNamespace::SerializableBSPNode_Axis  axis)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BSPTreeBuilder*>(),
                        {"GetFallbackSplit", {}, {::i2c::type_of<::GlobalNamespace::BoundsInt>(), ::i2c::type_of<::GlobalNamespace::SerializableBSPNode_Axis>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, bounds, axis);
}
inline int32_t GlobalNamespace::BSPTreeBuilder::EvaluateSplit(::System::Collections::Generic::List_1<::GlobalNamespace::BSPTreeBuilder_BoxMetadata*>*  boxes, int32_t  splitValue, ::GlobalNamespace::SerializableBSPNode_Axis  axis, ::GlobalNamespace::BoundsInt  bounds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BSPTreeBuilder*>(),
                        {"EvaluateSplit", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::BSPTreeBuilder_BoxMetadata*>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::SerializableBSPNode_Axis>(), ::i2c::type_of<::GlobalNamespace::BoundsInt>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, boxes, splitValue, axis, bounds);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::BSPTreeBuilder_BoxMetadata*>* GlobalNamespace::BSPTreeBuilder::GetEffectiveBoxes(::System::Collections::Generic::List_1<::GlobalNamespace::BSPTreeBuilder_BoxMetadata*>*  boxes, ::GlobalNamespace::BoundsInt  region)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BSPTreeBuilder*>(),
                        {"GetEffectiveBoxes", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::BSPTreeBuilder_BoxMetadata*>*>(), ::i2c::type_of<::GlobalNamespace::BoundsInt>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::BSPTreeBuilder_BoxMetadata*>*>(nullptr, ___internal_method, boxes, region);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::BSPTreeBuilder_BoxMetadata*>* GlobalNamespace::BSPTreeBuilder::GetEffectiveSpanningBoxes(::System::Collections::Generic::List_1<::GlobalNamespace::BSPTreeBuilder_BoxMetadata*>*  boxes, ::GlobalNamespace::BoundsInt  leftBounds, ::GlobalNamespace::BoundsInt  rightBounds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BSPTreeBuilder*>(),
                        {"GetEffectiveSpanningBoxes", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::BSPTreeBuilder_BoxMetadata*>*>(), ::i2c::type_of<::GlobalNamespace::BoundsInt>(), ::i2c::type_of<::GlobalNamespace::BoundsInt>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::BSPTreeBuilder_BoxMetadata*>*>(nullptr, ___internal_method, boxes, leftBounds, rightBounds);
}
inline ::GlobalNamespace::SerializableBSPNode_Axis GlobalNamespace::BSPTreeBuilder::GetNextAxis(::GlobalNamespace::SerializableBSPNode_Axis  currentAxis)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BSPTreeBuilder*>(),
                        {"GetNextAxis", {}, {::i2c::type_of<::GlobalNamespace::SerializableBSPNode_Axis>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SerializableBSPNode_Axis>(nullptr, ___internal_method, currentAxis);
}
inline int32_t GlobalNamespace::BSPTreeBuilder::GetAxisValue(::UnityEngine::Vector3Int  point, ::GlobalNamespace::SerializableBSPNode_Axis  axis)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BSPTreeBuilder*>(),
                        {"GetAxisValue", {}, {::i2c::type_of<::UnityEngine::Vector3Int>(), ::i2c::type_of<::GlobalNamespace::SerializableBSPNode_Axis>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, point, axis);
}
inline ::GlobalNamespace::BoundsInt GlobalNamespace::BSPTreeBuilder::CalculateWorldBounds(::System::Collections::Generic::List_1<::GlobalNamespace::BSPTreeBuilder_BoxMetadata*>*  boxes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BSPTreeBuilder*>(),
                        {"CalculateWorldBounds", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::BSPTreeBuilder_BoxMetadata*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BoundsInt>(nullptr, ___internal_method, boxes);
}
inline float_t GlobalNamespace::BSPTreeBuilder::CalculateIntersectionVolume(::GlobalNamespace::BoundsInt  box, ::GlobalNamespace::BoundsInt  region)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BSPTreeBuilder*>(),
                        {"CalculateIntersectionVolume", {}, {::i2c::type_of<::GlobalNamespace::BoundsInt>(), ::i2c::type_of<::GlobalNamespace::BoundsInt>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, box, region);
}
inline int32_t GlobalNamespace::BSPTreeBuilder::CreateMatrixNodeTree(::ArrayW<::GlobalNamespace::ZoneDef*>  zones, ::System::Collections::Generic::List_1<::GlobalNamespace::BSPTreeBuilder_BoxMetadata*>*  boxes, ::System::Collections::Generic::List_1<::GlobalNamespace::MatrixBSPNode>*  matrixNodeList, ::GlobalNamespace::BoundsInt  bounds, /* [TupleElementNames(new[] { "matrixIndex", "outsideIndex" })] */ ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<int32_t,int32_t>,int32_t>*  matrixNodeCache, ::by_ref<int32_t>  matrixNodeCacheHits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BSPTreeBuilder*>(),
                        {"CreateMatrixNodeTree", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::ZoneDef*>>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::BSPTreeBuilder_BoxMetadata*>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::MatrixBSPNode>*>(), ::i2c::type_of<::GlobalNamespace::BoundsInt>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<int32_t,int32_t>,int32_t>*>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, zones, boxes, matrixNodeList, bounds, matrixNodeCache, matrixNodeCacheHits);
}
inline int32_t GlobalNamespace::BSPTreeBuilder::CreateSequentialMatrixNodes(::ArrayW<::GlobalNamespace::ZoneDef*>  zones, ::System::Collections::Generic::List_1<::GlobalNamespace::BSPTreeBuilder_BoxMetadata*>*  boxes, ::System::Collections::Generic::List_1<::GlobalNamespace::MatrixBSPNode>*  matrixNodeList, int32_t  boxIndex, ::ArrayW<::GlobalNamespace::ZoneDef*>  allZones, /* [TupleElementNames(new[] { "matrixIndex", "outsideIndex" })] */ ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<int32_t,int32_t>,int32_t>*  matrixNodeCache, ::by_ref<int32_t>  matrixNodeCacheHits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BSPTreeBuilder*>(),
                        {"CreateSequentialMatrixNodes", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::ZoneDef*>>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::BSPTreeBuilder_BoxMetadata*>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::MatrixBSPNode>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::ZoneDef*>>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<int32_t,int32_t>,int32_t>*>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, zones, boxes, matrixNodeList, boxIndex, allZones, matrixNodeCache, matrixNodeCacheHits);
}
inline int32_t GlobalNamespace::BSPTreeBuilder::AddMatrixNodeWithCache(::GlobalNamespace::MatrixBSPNode  matrixNode, ::System::Collections::Generic::List_1<::GlobalNamespace::MatrixBSPNode>*  matrixNodeList, /* [TupleElementNames(new[] { "matrixIndex", "outsideIndex" })] */ ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<int32_t,int32_t>,int32_t>*  matrixNodeCache, ::by_ref<int32_t>  matrixNodeCacheHits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BSPTreeBuilder*>(),
                        {"AddMatrixNodeWithCache", {}, {::i2c::type_of<::GlobalNamespace::MatrixBSPNode>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::MatrixBSPNode>*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<int32_t,int32_t>,int32_t>*>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, matrixNode, matrixNodeList, matrixNodeCache, matrixNodeCacheHits);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::BSPTreeBuilder_BoxMetadata*>* GlobalNamespace::BSPTreeBuilder::SortBoxesByPriority(::System::Collections::Generic::List_1<::GlobalNamespace::BSPTreeBuilder_BoxMetadata*>*  boxes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BSPTreeBuilder*>(),
                        {"SortBoxesByPriority", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::BSPTreeBuilder_BoxMetadata*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::BSPTreeBuilder_BoxMetadata*>*>(nullptr, ___internal_method, boxes);
}
inline void GlobalNamespace::BSPTreeBuilder::CleanupUnreferencedMatrices(::System::Collections::Generic::List_1<::GlobalNamespace::MatrixBSPNode>*  matrixNodeList, ::System::Collections::Generic::List_1<::GlobalNamespace::MatrixZonePair>*  matricesList)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BSPTreeBuilder*>(),
                        {"CleanupUnreferencedMatrices", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::MatrixBSPNode>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::MatrixZonePair>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, matrixNodeList, matricesList);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BSPTreeBuilder::BSPTreeBuilder()   {
}
//  Writing Method size for method: ::GlobalNamespace::BSPTreeBuilder___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BSPTreeBuilder___c::*)()>(&::GlobalNamespace::BSPTreeBuilder___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b49af8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BSPTreeBuilder___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BSPTreeBuilder___c._FindOptimalSplit_b__9_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BSPTreeBuilder___c::*)(int32_t)>(&::GlobalNamespace::BSPTreeBuilder___c::_FindOptimalSplit_b__9_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b49b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BSPTreeBuilder___c*>(),
                        {"<FindOptimalSplit>b__9_0", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BSPTreeBuilder___c._SortBoxesByPriority_b__21_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BSPTreeBuilder___c::*)(::GlobalNamespace::BSPTreeBuilder_BoxMetadata*, ::GlobalNamespace::BSPTreeBuilder_BoxMetadata*)>(&::GlobalNamespace::BSPTreeBuilder___c::_SortBoxesByPriority_b__21_0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5b49b08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BSPTreeBuilder___c*>(),
                        {"<SortBoxesByPriority>b__21_0", {}, {::i2c::type_of<::GlobalNamespace::BSPTreeBuilder_BoxMetadata*>(), ::i2c::type_of<::GlobalNamespace::BSPTreeBuilder_BoxMetadata*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BSPTreeBuilder___c::setStaticF___9(::GlobalNamespace::BSPTreeBuilder___c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::BSPTreeBuilder___c*, "<>9", ::GlobalNamespace::BSPTreeBuilder___c*>(std::forward<::GlobalNamespace::BSPTreeBuilder___c*>(value));
}
inline ::GlobalNamespace::BSPTreeBuilder___c* GlobalNamespace::BSPTreeBuilder___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::BSPTreeBuilder___c*, "<>9", ::GlobalNamespace::BSPTreeBuilder___c*>();
}
inline void GlobalNamespace::BSPTreeBuilder___c::setStaticF___9__9_0(::System::Func_2<int32_t,int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<int32_t,int32_t>*, "<>9__9_0", ::GlobalNamespace::BSPTreeBuilder___c*>(std::forward<::System::Func_2<int32_t,int32_t>*>(value));
}
inline ::System::Func_2<int32_t,int32_t>* GlobalNamespace::BSPTreeBuilder___c::getStaticF___9__9_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<int32_t,int32_t>*, "<>9__9_0", ::GlobalNamespace::BSPTreeBuilder___c*>();
}
inline void GlobalNamespace::BSPTreeBuilder___c::setStaticF___9__21_0(::System::Comparison_1<::GlobalNamespace::BSPTreeBuilder_BoxMetadata*>*  value)  {
::cordl_internals::setStaticField<::System::Comparison_1<::GlobalNamespace::BSPTreeBuilder_BoxMetadata*>*, "<>9__21_0", ::GlobalNamespace::BSPTreeBuilder___c*>(std::forward<::System::Comparison_1<::GlobalNamespace::BSPTreeBuilder_BoxMetadata*>*>(value));
}
inline ::System::Comparison_1<::GlobalNamespace::BSPTreeBuilder_BoxMetadata*>* GlobalNamespace::BSPTreeBuilder___c::getStaticF___9__21_0()  {
return ::cordl_internals::getStaticField<::System::Comparison_1<::GlobalNamespace::BSPTreeBuilder_BoxMetadata*>*, "<>9__21_0", ::GlobalNamespace::BSPTreeBuilder___c*>();
}
inline void GlobalNamespace::BSPTreeBuilder___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BSPTreeBuilder___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GlobalNamespace::BSPTreeBuilder___c::_FindOptimalSplit_b__9_0(int32_t  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BSPTreeBuilder___c*>(),
                        {"<FindOptimalSplit>b__9_0", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, x);
}
inline int32_t GlobalNamespace::BSPTreeBuilder___c::_SortBoxesByPriority_b__21_0(::GlobalNamespace::BSPTreeBuilder_BoxMetadata*  a, ::GlobalNamespace::BSPTreeBuilder_BoxMetadata*  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BSPTreeBuilder___c*>(),
                        {"<SortBoxesByPriority>b__21_0", {}, {::i2c::type_of<::GlobalNamespace::BSPTreeBuilder_BoxMetadata*>(), ::i2c::type_of<::GlobalNamespace::BSPTreeBuilder_BoxMetadata*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, a, b);
}
inline ::GlobalNamespace::BSPTreeBuilder___c* GlobalNamespace::BSPTreeBuilder___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BSPTreeBuilder___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BSPTreeBuilder___c::BSPTreeBuilder___c()   {
}
//  Writing Method size for method: ::GlobalNamespace::BSPTreeBuilder_BoxMetadata._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BSPTreeBuilder_BoxMetadata::*)(::UnityEngine::BoxCollider*, ::GlobalNamespace::ZoneDef*, int32_t, int32_t)>(&::GlobalNamespace::BSPTreeBuilder_BoxMetadata::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5b45bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BSPTreeBuilder_BoxMetadata*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::BoxCollider*>(), ::i2c::type_of<::GlobalNamespace::ZoneDef*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BSPTreeBuilder_BoxMetadata.ContainsPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BSPTreeBuilder_BoxMetadata::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::BSPTreeBuilder_BoxMetadata::ContainsPoint)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5b49984;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BSPTreeBuilder_BoxMetadata*>(),
                        {"ContainsPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BSPTreeBuilder_BoxMetadata.GetWorldBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BoundsInt (::GlobalNamespace::BSPTreeBuilder_BoxMetadata::*)()>(&::GlobalNamespace::BSPTreeBuilder_BoxMetadata::GetWorldBounds)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b49a7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BSPTreeBuilder_BoxMetadata*>(),
                        {"GetWorldBounds", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::BoxCollider>& GlobalNamespace::BSPTreeBuilder_BoxMetadata::__cordl_internal_get_box()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___box;
}
constexpr ::UnityW<::UnityEngine::BoxCollider> const& GlobalNamespace::BSPTreeBuilder_BoxMetadata::__cordl_internal_get_box() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___box;
}
constexpr void GlobalNamespace::BSPTreeBuilder_BoxMetadata::__cordl_internal_set_box(::UnityW<::UnityEngine::BoxCollider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___box = value;
}
constexpr ::UnityW<::GlobalNamespace::ZoneDef>& GlobalNamespace::BSPTreeBuilder_BoxMetadata::__cordl_internal_get_zone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zone;
}
constexpr ::UnityW<::GlobalNamespace::ZoneDef> const& GlobalNamespace::BSPTreeBuilder_BoxMetadata::__cordl_internal_get_zone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zone;
}
constexpr void GlobalNamespace::BSPTreeBuilder_BoxMetadata::__cordl_internal_set_zone(::UnityW<::GlobalNamespace::ZoneDef>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___zone = value;
}
constexpr int32_t& GlobalNamespace::BSPTreeBuilder_BoxMetadata::__cordl_internal_get_matrixIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___matrixIndex;
}
constexpr int32_t const& GlobalNamespace::BSPTreeBuilder_BoxMetadata::__cordl_internal_get_matrixIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___matrixIndex;
}
constexpr void GlobalNamespace::BSPTreeBuilder_BoxMetadata::__cordl_internal_set_matrixIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___matrixIndex = value;
}
constexpr int32_t& GlobalNamespace::BSPTreeBuilder_BoxMetadata::__cordl_internal_get_priority()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___priority;
}
constexpr int32_t const& GlobalNamespace::BSPTreeBuilder_BoxMetadata::__cordl_internal_get_priority() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___priority;
}
constexpr void GlobalNamespace::BSPTreeBuilder_BoxMetadata::__cordl_internal_set_priority(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___priority = value;
}
constexpr ::GlobalNamespace::BoundsInt& GlobalNamespace::BSPTreeBuilder_BoxMetadata::__cordl_internal_get_bounds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bounds;
}
constexpr ::GlobalNamespace::BoundsInt const& GlobalNamespace::BSPTreeBuilder_BoxMetadata::__cordl_internal_get_bounds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bounds;
}
constexpr void GlobalNamespace::BSPTreeBuilder_BoxMetadata::__cordl_internal_set_bounds(::GlobalNamespace::BoundsInt  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bounds = value;
}
inline void GlobalNamespace::BSPTreeBuilder_BoxMetadata::_ctor(::UnityEngine::BoxCollider*  boxCollider, ::GlobalNamespace::ZoneDef*  zoneData, int32_t  matrixIdx, int32_t  priority)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BSPTreeBuilder_BoxMetadata*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::BoxCollider*>(), ::i2c::type_of<::GlobalNamespace::ZoneDef*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, boxCollider, zoneData, matrixIdx, priority);
}
inline bool GlobalNamespace::BSPTreeBuilder_BoxMetadata::ContainsPoint(::UnityEngine::Vector3  worldPoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BSPTreeBuilder_BoxMetadata*>(),
                        {"ContainsPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, worldPoint);
}
inline ::GlobalNamespace::BoundsInt GlobalNamespace::BSPTreeBuilder_BoxMetadata::GetWorldBounds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BSPTreeBuilder_BoxMetadata*>(),
                        {"GetWorldBounds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BoundsInt>(this, ___internal_method);
}
inline ::GlobalNamespace::BSPTreeBuilder_BoxMetadata* GlobalNamespace::BSPTreeBuilder_BoxMetadata::New_ctor(::UnityEngine::BoxCollider*  boxCollider, ::GlobalNamespace::ZoneDef*  zoneData, int32_t  matrixIdx, int32_t  priority)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BSPTreeBuilder_BoxMetadata*>(boxCollider, zoneData, matrixIdx, priority));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BSPTreeBuilder_BoxMetadata::BSPTreeBuilder_BoxMetadata()   {
}
