#pragma once
// IWYU pragma private; include "Pathfinding/NNInfoInternal.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Pathfinding/zzzz__NNInfoInternal_def.hpp"
#include "Pathfinding/zzzz__GraphNode_def.hpp"
//  Writing Method size for method: ::Pathfinding::NNInfoInternal._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NNInfoInternal::*)(::Pathfinding::GraphNode*)>(&::Pathfinding::NNInfoInternal::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5e48310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NNInfoInternal>(),
                        {".ctor", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NNInfoInternal.UpdateInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NNInfoInternal::*)()>(&::Pathfinding::NNInfoInternal::UpdateInfo)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5e48398;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NNInfoInternal>(),
                        {"UpdateInfo", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Pathfinding::NNInfoInternal::_ctor(::Pathfinding::GraphNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NNInfoInternal>(),
                        {".ctor", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, node);
}
inline void Pathfinding::NNInfoInternal::UpdateInfo()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NNInfoInternal>(),
                        {"UpdateInfo", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "node", ty: "::Pathfinding::GraphNode*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "constrainedNode", ty: "::Pathfinding::GraphNode*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "clampedPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "constClampedPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Pathfinding::NNInfoInternal::NNInfoInternal(::Pathfinding::GraphNode*  node, ::Pathfinding::GraphNode*  constrainedNode, ::UnityEngine::Vector3  clampedPosition, ::UnityEngine::Vector3  constClampedPosition) noexcept  {
this->node = node;
this->constrainedNode = constrainedNode;
this->clampedPosition = clampedPosition;
this->constClampedPosition = constClampedPosition;
}
// Ctor Parameters []
constexpr ::Pathfinding::NNInfoInternal::NNInfoInternal()   {
}
