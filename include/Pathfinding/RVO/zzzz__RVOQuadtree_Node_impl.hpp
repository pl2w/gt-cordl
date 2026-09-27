#pragma once
// IWYU pragma private; include "Pathfinding/RVO/RVOQuadtree_Node.hpp"
#include "Pathfinding/RVO/zzzz__RVOQuadtree_Node_def.hpp"
#include "Pathfinding/RVO/Sampled/zzzz__Agent_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RVOQuadtree_Node.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RVOQuadtree_Node::*)(::Pathfinding::RVO::Sampled::Agent*)>(&::GlobalNamespace::RVOQuadtree_Node::Add)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5ee6278;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RVOQuadtree_Node>(),
                        {"Add", {}, {::i2c::type_of<::Pathfinding::RVO::Sampled::Agent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RVOQuadtree_Node.Distribute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RVOQuadtree_Node::*)(::ArrayW<::GlobalNamespace::RVOQuadtree_Node>, ::UnityEngine::Rect)>(&::GlobalNamespace::RVOQuadtree_Node::Distribute)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5ee62b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RVOQuadtree_Node>(),
                        {"Distribute", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::RVOQuadtree_Node>>(), ::i2c::type_of<::UnityEngine::Rect>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RVOQuadtree_Node.CalculateMaxSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::RVOQuadtree_Node::*)(::ArrayW<::GlobalNamespace::RVOQuadtree_Node>, int32_t)>(&::GlobalNamespace::RVOQuadtree_Node::CalculateMaxSpeed)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x5ee6374;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RVOQuadtree_Node>(),
                        {"CalculateMaxSpeed", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::RVOQuadtree_Node>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::RVOQuadtree_Node::Add(::Pathfinding::RVO::Sampled::Agent*  agent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RVOQuadtree_Node>(),
                        {"Add", {}, {::i2c::type_of<::Pathfinding::RVO::Sampled::Agent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, agent);
}
inline void GlobalNamespace::RVOQuadtree_Node::Distribute(::ArrayW<::GlobalNamespace::RVOQuadtree_Node>  nodes, ::UnityEngine::Rect  r)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RVOQuadtree_Node>(),
                        {"Distribute", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::RVOQuadtree_Node>>(), ::i2c::type_of<::UnityEngine::Rect>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, nodes, r);
}
inline float_t GlobalNamespace::RVOQuadtree_Node::CalculateMaxSpeed(::ArrayW<::GlobalNamespace::RVOQuadtree_Node>  nodes, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RVOQuadtree_Node>(),
                        {"CalculateMaxSpeed", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::RVOQuadtree_Node>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method, nodes, index);
}
// Ctor Parameters [CppParam { name: "child00", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "linkedList", ty: "::Pathfinding::RVO::Sampled::Agent*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "count", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "maxSpeed", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::RVOQuadtree_Node::RVOQuadtree_Node(int32_t  child00, ::Pathfinding::RVO::Sampled::Agent*  linkedList, uint8_t  count, float_t  maxSpeed) noexcept  {
this->child00 = child00;
this->linkedList = linkedList;
this->count = count;
this->maxSpeed = maxSpeed;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RVOQuadtree_Node::RVOQuadtree_Node()   {
}
