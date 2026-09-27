#pragma once
// IWYU pragma private; include "GlobalNamespace/SerializableBSPTree.hpp"
#include "GlobalNamespace/zzzz__MatrixZonePair_impl.hpp"
#include "GlobalNamespace/zzzz__SerializableBSPNode_impl.hpp"
#include "GlobalNamespace/zzzz__ZoneDef_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SerializableBSPTree_def.hpp"
#include "GlobalNamespace/zzzz__GTSubZone_def.hpp"
#include "GlobalNamespace/zzzz__GTZone_def.hpp"
#include "GlobalNamespace/zzzz__SerializableBSPNode_Axis_def.hpp"
#include "GlobalNamespace/zzzz__ZoneDef_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SerializableBSPTree.FindZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::ZoneDef> (::GlobalNamespace::SerializableBSPTree::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::SerializableBSPTree::FindZone)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5b49b74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SerializableBSPTree*>(),
                        {"FindZone", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SerializableBSPTree.FindZoneRecursive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::ZoneDef> (::GlobalNamespace::SerializableBSPTree::*)(::UnityEngine::Vector3, int32_t)>(&::GlobalNamespace::SerializableBSPTree::FindZoneRecursive)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x5b49b9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SerializableBSPTree*>(),
                        {"FindZoneRecursive", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SerializableBSPTree.FindZoneIdx
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::SerializableBSPTree::*)(::GlobalNamespace::GTZone, ::GlobalNamespace::GTSubZone)>(&::GlobalNamespace::SerializableBSPTree::FindZoneIdx)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5b49ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SerializableBSPTree*>(),
                        {"FindZoneIdx", {}, {::i2c::type_of<::GlobalNamespace::GTZone>(), ::i2c::type_of<::GlobalNamespace::GTSubZone>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SerializableBSPTree.GetAxisValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::SerializableBSPTree::*)(::UnityEngine::Vector3, ::GlobalNamespace::SerializableBSPNode_Axis)>(&::GlobalNamespace::SerializableBSPTree::GetAxisValue)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5b49e54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SerializableBSPTree*>(),
                        {"GetAxisValue", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::GlobalNamespace::SerializableBSPNode_Axis>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SerializableBSPTree._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SerializableBSPTree::*)()>(&::GlobalNamespace::SerializableBSPTree::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5b47120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SerializableBSPTree*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::SerializableBSPNode>& GlobalNamespace::SerializableBSPTree::__cordl_internal_get_nodes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodes;
}
constexpr ::ArrayW<::GlobalNamespace::SerializableBSPNode> const& GlobalNamespace::SerializableBSPTree::__cordl_internal_get_nodes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodes;
}
constexpr void GlobalNamespace::SerializableBSPTree::__cordl_internal_set_nodes(::ArrayW<::GlobalNamespace::SerializableBSPNode>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nodes = value;
}
constexpr ::ArrayW<::GlobalNamespace::MatrixZonePair>& GlobalNamespace::SerializableBSPTree::__cordl_internal_get_matrices()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___matrices;
}
constexpr ::ArrayW<::GlobalNamespace::MatrixZonePair> const& GlobalNamespace::SerializableBSPTree::__cordl_internal_get_matrices() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___matrices;
}
constexpr void GlobalNamespace::SerializableBSPTree::__cordl_internal_set_matrices(::ArrayW<::GlobalNamespace::MatrixZonePair>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___matrices = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::ZoneDef>>& GlobalNamespace::SerializableBSPTree::__cordl_internal_get_zones()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zones;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::ZoneDef>> const& GlobalNamespace::SerializableBSPTree::__cordl_internal_get_zones() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zones;
}
constexpr void GlobalNamespace::SerializableBSPTree::__cordl_internal_set_zones(::ArrayW<::UnityW<::GlobalNamespace::ZoneDef>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___zones = value;
}
constexpr int32_t& GlobalNamespace::SerializableBSPTree::__cordl_internal_get_rootIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rootIndex;
}
constexpr int32_t const& GlobalNamespace::SerializableBSPTree::__cordl_internal_get_rootIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rootIndex;
}
constexpr void GlobalNamespace::SerializableBSPTree::__cordl_internal_set_rootIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rootIndex = value;
}
inline ::UnityW<::GlobalNamespace::ZoneDef> GlobalNamespace::SerializableBSPTree::FindZone(::UnityEngine::Vector3  point)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SerializableBSPTree*>(),
                        {"FindZone", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::ZoneDef>>(this, ___internal_method, point);
}
inline ::UnityW<::GlobalNamespace::ZoneDef> GlobalNamespace::SerializableBSPTree::FindZoneRecursive(::UnityEngine::Vector3  point, int32_t  nodeIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SerializableBSPTree*>(),
                        {"FindZoneRecursive", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::ZoneDef>>(this, ___internal_method, point, nodeIndex);
}
inline int32_t GlobalNamespace::SerializableBSPTree::FindZoneIdx(::GlobalNamespace::GTZone  zoneId, ::GlobalNamespace::GTSubZone  subZoneId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SerializableBSPTree*>(),
                        {"FindZoneIdx", {}, {::i2c::type_of<::GlobalNamespace::GTZone>(), ::i2c::type_of<::GlobalNamespace::GTSubZone>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, zoneId, subZoneId);
}
inline float_t GlobalNamespace::SerializableBSPTree::GetAxisValue(::UnityEngine::Vector3  point, ::GlobalNamespace::SerializableBSPNode_Axis  axis)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SerializableBSPTree*>(),
                        {"GetAxisValue", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::GlobalNamespace::SerializableBSPNode_Axis>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, point, axis);
}
inline void GlobalNamespace::SerializableBSPTree::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SerializableBSPTree*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SerializableBSPTree* GlobalNamespace::SerializableBSPTree::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SerializableBSPTree*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SerializableBSPTree::SerializableBSPTree()   {
}
