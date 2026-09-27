#pragma once
// IWYU pragma private; include "Pathfinding/NNInfo.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Pathfinding/zzzz__NNInfo_def.hpp"
#include "Pathfinding/zzzz__GraphNode_def.hpp"
#include "Pathfinding/zzzz__NNInfoInternal_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Pathfinding::NNInfo.get_clampedPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Pathfinding::NNInfo::*)()>(&::Pathfinding::NNInfo::get_clampedPosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e48468;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NNInfo>(),
                        {"get_clampedPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NNInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NNInfo::*)(::Pathfinding::NNInfoInternal)>(&::Pathfinding::NNInfo::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5e48474;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NNInfo>(),
                        {".ctor", {}, {::i2c::type_of<::Pathfinding::NNInfoInternal>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NNInfo.op_Explicit___UnityEngine__Vector3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::Pathfinding::NNInfo)>(&::Pathfinding::NNInfo::op_Explicit___UnityEngine__Vector3)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e484bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NNInfo>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Pathfinding::NNInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NNInfo.op_Explicit___Pathfinding__GraphNode_
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::GraphNode* (*)(::Pathfinding::NNInfo)>(&::Pathfinding::NNInfo::op_Explicit___Pathfinding__GraphNode_)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e484c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NNInfo>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Pathfinding::NNInfo>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Vector3 Pathfinding::NNInfo::get_clampedPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NNInfo>(),
                        {"get_clampedPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method);
}
inline void Pathfinding::NNInfo::_ctor(::Pathfinding::NNInfoInternal  internalInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NNInfo>(),
                        {".ctor", {}, {::i2c::type_of<::Pathfinding::NNInfoInternal>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, internalInfo);
}
inline ::UnityEngine::Vector3 Pathfinding::NNInfo::op_Explicit___UnityEngine__Vector3(::Pathfinding::NNInfo  ob)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NNInfo>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Pathfinding::NNInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, ob);
}
inline ::Pathfinding::GraphNode* Pathfinding::NNInfo::op_Explicit___Pathfinding__GraphNode_(::Pathfinding::NNInfo  ob)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NNInfo>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Pathfinding::NNInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::GraphNode*>(nullptr, ___internal_method, ob);
}
// Ctor Parameters [CppParam { name: "node", ty: "::Pathfinding::GraphNode*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Pathfinding::NNInfo::NNInfo(::Pathfinding::GraphNode*  node, ::UnityEngine::Vector3  position) noexcept  {
this->node = node;
this->position = position;
}
// Ctor Parameters []
constexpr ::Pathfinding::NNInfo::NNInfo()   {
}
