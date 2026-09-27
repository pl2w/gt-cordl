#pragma once
// IWYU pragma private; include "Pathfinding/RVO/RVOQuadtree.hpp"
#include "Pathfinding/RVO/zzzz__RVOQuadtree_Node_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Rect_impl.hpp"
#include "Pathfinding/RVO/zzzz__RVOQuadtree_def.hpp"
#include "Pathfinding/RVO/Sampled/zzzz__Agent_def.hpp"
#include "Pathfinding/RVO/zzzz__RVOQuadtree_Node_def.hpp"
#include "Pathfinding/RVO/zzzz__RVOQuadtree_QuadtreeQuery_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::Pathfinding::RVO::RVOQuadtree.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::RVOQuadtree::*)()>(&::Pathfinding::RVO::RVOQuadtree::Clear)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5ee4dd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVOQuadtree*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::RVOQuadtree.SetBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::RVOQuadtree::*)(::UnityEngine::Rect)>(&::Pathfinding::RVO::RVOQuadtree::SetBounds)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5ee6038;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVOQuadtree*>(),
                        {"SetBounds", {}, {::i2c::type_of<::UnityEngine::Rect>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::RVOQuadtree.GetNodeIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::RVO::RVOQuadtree::*)()>(&::Pathfinding::RVO::RVOQuadtree::GetNodeIndex)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x5ee6044;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVOQuadtree*>(),
                        {"GetNodeIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::RVOQuadtree.Insert
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::RVOQuadtree::*)(::Pathfinding::RVO::Sampled::Agent*)>(&::Pathfinding::RVO::RVOQuadtree::Insert)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x5ee4e0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVOQuadtree*>(),
                        {"Insert", {}, {::i2c::type_of<::Pathfinding::RVO::Sampled::Agent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::RVOQuadtree.CalculateSpeeds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::RVOQuadtree::*)()>(&::Pathfinding::RVO::RVOQuadtree::CalculateSpeeds)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5ee504c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVOQuadtree*>(),
                        {"CalculateSpeeds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::RVOQuadtree.Query
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::RVOQuadtree::*)(::UnityEngine::Vector2, float_t, float_t, float_t, ::Pathfinding::RVO::Sampled::Agent*)>(&::Pathfinding::RVO::RVOQuadtree::Query)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5ee6518;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVOQuadtree*>(),
                        {"Query", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Pathfinding::RVO::Sampled::Agent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::RVOQuadtree.DebugDraw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::RVOQuadtree::*)()>(&::Pathfinding::RVO::RVOQuadtree::DebugDraw)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5ee68a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVOQuadtree*>(),
                        {"DebugDraw", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::RVOQuadtree.DebugDrawRec
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::RVOQuadtree::*)(int32_t, ::UnityEngine::Rect)>(&::Pathfinding::RVO::RVOQuadtree::DebugDrawRec)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0x5ee68b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVOQuadtree*>(),
                        {"DebugDrawRec", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rect>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::RVOQuadtree._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::RVOQuadtree::*)()>(&::Pathfinding::RVO::RVOQuadtree::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5ee3690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVOQuadtree*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Pathfinding::RVO::RVOQuadtree::__cordl_internal_get_maxRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxRadius;
}
constexpr float_t const& Pathfinding::RVO::RVOQuadtree::__cordl_internal_get_maxRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxRadius;
}
constexpr void Pathfinding::RVO::RVOQuadtree::__cordl_internal_set_maxRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxRadius = value;
}
constexpr ::ArrayW<::GlobalNamespace::RVOQuadtree_Node>& Pathfinding::RVO::RVOQuadtree::__cordl_internal_get_nodes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodes;
}
constexpr ::ArrayW<::GlobalNamespace::RVOQuadtree_Node> const& Pathfinding::RVO::RVOQuadtree::__cordl_internal_get_nodes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodes;
}
constexpr void Pathfinding::RVO::RVOQuadtree::__cordl_internal_set_nodes(::ArrayW<::GlobalNamespace::RVOQuadtree_Node>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nodes = value;
}
constexpr int32_t& Pathfinding::RVO::RVOQuadtree::__cordl_internal_get_filledNodes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___filledNodes;
}
constexpr int32_t const& Pathfinding::RVO::RVOQuadtree::__cordl_internal_get_filledNodes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___filledNodes;
}
constexpr void Pathfinding::RVO::RVOQuadtree::__cordl_internal_set_filledNodes(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___filledNodes = value;
}
constexpr ::UnityEngine::Rect& Pathfinding::RVO::RVOQuadtree::__cordl_internal_get_bounds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bounds;
}
constexpr ::UnityEngine::Rect const& Pathfinding::RVO::RVOQuadtree::__cordl_internal_get_bounds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bounds;
}
constexpr void Pathfinding::RVO::RVOQuadtree::__cordl_internal_set_bounds(::UnityEngine::Rect  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bounds = value;
}
inline void Pathfinding::RVO::RVOQuadtree::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVOQuadtree*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::RVO::RVOQuadtree::SetBounds(::UnityEngine::Rect  r)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVOQuadtree*>(),
                        {"SetBounds", {}, {::i2c::type_of<::UnityEngine::Rect>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, r);
}
inline int32_t Pathfinding::RVO::RVOQuadtree::GetNodeIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVOQuadtree*>(),
                        {"GetNodeIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Pathfinding::RVO::RVOQuadtree::Insert(::Pathfinding::RVO::Sampled::Agent*  agent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVOQuadtree*>(),
                        {"Insert", {}, {::i2c::type_of<::Pathfinding::RVO::Sampled::Agent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, agent);
}
inline void Pathfinding::RVO::RVOQuadtree::CalculateSpeeds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVOQuadtree*>(),
                        {"CalculateSpeeds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::RVO::RVOQuadtree::Query(::UnityEngine::Vector2  p, float_t  speed, float_t  timeHorizon, float_t  agentRadius, ::Pathfinding::RVO::Sampled::Agent*  agent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVOQuadtree*>(),
                        {"Query", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Pathfinding::RVO::Sampled::Agent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, p, speed, timeHorizon, agentRadius, agent);
}
inline void Pathfinding::RVO::RVOQuadtree::DebugDraw()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVOQuadtree*>(),
                        {"DebugDraw", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::RVO::RVOQuadtree::DebugDrawRec(int32_t  i, ::UnityEngine::Rect  r)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVOQuadtree*>(),
                        {"DebugDrawRec", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rect>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, i, r);
}
inline void Pathfinding::RVO::RVOQuadtree::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVOQuadtree*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::RVO::RVOQuadtree* Pathfinding::RVO::RVOQuadtree::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::RVO::RVOQuadtree*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::RVO::RVOQuadtree::RVOQuadtree()   {
}
