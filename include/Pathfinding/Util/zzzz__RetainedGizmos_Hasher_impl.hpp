#pragma once
// IWYU pragma private; include "Pathfinding/Util/RetainedGizmos_Hasher.hpp"
#include "Pathfinding/Util/zzzz__RetainedGizmos_Hasher_def.hpp"
#include "GlobalNamespace/zzzz__AstarPath_def.hpp"
#include "Pathfinding/zzzz__GraphNode_def.hpp"
#include "Pathfinding/zzzz__PathHandler_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RetainedGizmos_Hasher._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RetainedGizmos_Hasher::*)(::GlobalNamespace::AstarPath*)>(&::GlobalNamespace::RetainedGizmos_Hasher::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5ee1a6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RetainedGizmos_Hasher>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::AstarPath*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RetainedGizmos_Hasher.AddHash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RetainedGizmos_Hasher::*)(int32_t)>(&::GlobalNamespace::RetainedGizmos_Hasher::AddHash)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5ee0fec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RetainedGizmos_Hasher>(),
                        {"AddHash", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RetainedGizmos_Hasher.HashNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RetainedGizmos_Hasher::*)(::Pathfinding::GraphNode*)>(&::GlobalNamespace::RetainedGizmos_Hasher::HashNode)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5ee1b9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RetainedGizmos_Hasher>(),
                        {"HashNode", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RetainedGizmos_Hasher.get_Hash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::GlobalNamespace::RetainedGizmos_Hasher::*)()>(&::GlobalNamespace::RetainedGizmos_Hasher::get_Hash)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ee1ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RetainedGizmos_Hasher>(),
                        {"get_Hash", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::RetainedGizmos_Hasher::_ctor(::GlobalNamespace::AstarPath*  active)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RetainedGizmos_Hasher>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::AstarPath*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, active);
}
inline void GlobalNamespace::RetainedGizmos_Hasher::AddHash(int32_t  hash)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RetainedGizmos_Hasher>(),
                        {"AddHash", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, hash);
}
inline void GlobalNamespace::RetainedGizmos_Hasher::HashNode(::Pathfinding::GraphNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RetainedGizmos_Hasher>(),
                        {"HashNode", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, node);
}
inline uint64_t GlobalNamespace::RetainedGizmos_Hasher::get_Hash()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RetainedGizmos_Hasher>(),
                        {"get_Hash", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "hash", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "includePathSearchInfo", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "includeAreaInfo", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "debugData", ty: "::Pathfinding::PathHandler*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::RetainedGizmos_Hasher::RetainedGizmos_Hasher(uint64_t  hash, bool  includePathSearchInfo, bool  includeAreaInfo, ::Pathfinding::PathHandler*  debugData) noexcept  {
this->hash = hash;
this->includePathSearchInfo = includePathSearchInfo;
this->includeAreaInfo = includeAreaInfo;
this->debugData = debugData;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RetainedGizmos_Hasher::RetainedGizmos_Hasher()   {
}
