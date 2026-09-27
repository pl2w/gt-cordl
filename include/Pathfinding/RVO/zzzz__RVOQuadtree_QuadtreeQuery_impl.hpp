#pragma once
// IWYU pragma private; include "Pathfinding/RVO/RVOQuadtree_QuadtreeQuery.hpp"
#include "Pathfinding/RVO/zzzz__RVOQuadtree_Node_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "Pathfinding/RVO/zzzz__RVOQuadtree_QuadtreeQuery_def.hpp"
#include "Pathfinding/RVO/Sampled/zzzz__Agent_def.hpp"
#include "Pathfinding/RVO/zzzz__RVOQuadtree_Node_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RVOQuadtree_QuadtreeQuery.QueryRec
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RVOQuadtree_QuadtreeQuery::*)(int32_t, ::UnityEngine::Rect)>(&::GlobalNamespace::RVOQuadtree_QuadtreeQuery::QueryRec)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x5ee6588;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RVOQuadtree_QuadtreeQuery>(),
                        {"QueryRec", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rect>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::RVOQuadtree_QuadtreeQuery::QueryRec(int32_t  i, ::UnityEngine::Rect  r)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RVOQuadtree_QuadtreeQuery>(),
                        {"QueryRec", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rect>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, i, r);
}
// Ctor Parameters [CppParam { name: "p", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "speed", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "timeHorizon", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "agentRadius", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "maxRadius", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "agent", ty: "::Pathfinding::RVO::Sampled::Agent*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "nodes", ty: "::ArrayW<::GlobalNamespace::RVOQuadtree_Node>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::RVOQuadtree_QuadtreeQuery::RVOQuadtree_QuadtreeQuery(::UnityEngine::Vector2  p, float_t  speed, float_t  timeHorizon, float_t  agentRadius, float_t  maxRadius, ::Pathfinding::RVO::Sampled::Agent*  agent, ::ArrayW<::GlobalNamespace::RVOQuadtree_Node>  nodes) noexcept  {
this->p = p;
this->speed = speed;
this->timeHorizon = timeHorizon;
this->agentRadius = agentRadius;
this->maxRadius = maxRadius;
this->agent = agent;
this->nodes = nodes;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RVOQuadtree_QuadtreeQuery::RVOQuadtree_QuadtreeQuery()   {
}
