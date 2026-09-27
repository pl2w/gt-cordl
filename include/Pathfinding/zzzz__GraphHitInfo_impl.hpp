#pragma once
// IWYU pragma private; include "Pathfinding/GraphHitInfo.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Pathfinding/zzzz__GraphHitInfo_def.hpp"
#include "Pathfinding/zzzz__GraphNode_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Pathfinding::GraphHitInfo.get_distance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Pathfinding::GraphHitInfo::*)()>(&::Pathfinding::GraphHitInfo::get_distance)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e47ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphHitInfo>(),
                        {"get_distance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphHitInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GraphHitInfo::*)(::UnityEngine::Vector3)>(&::Pathfinding::GraphHitInfo::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5e47f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphHitInfo>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
inline float_t Pathfinding::GraphHitInfo::get_distance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphHitInfo>(),
                        {"get_distance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void Pathfinding::GraphHitInfo::_ctor(::UnityEngine::Vector3  point)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphHitInfo>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, point);
}
// Ctor Parameters [CppParam { name: "origin", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "point", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "node", ty: "::Pathfinding::GraphNode*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "tangentOrigin", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "tangent", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Pathfinding::GraphHitInfo::GraphHitInfo(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  point, ::Pathfinding::GraphNode*  node, ::UnityEngine::Vector3  tangentOrigin, ::UnityEngine::Vector3  tangent) noexcept  {
this->origin = origin;
this->point = point;
this->node = node;
this->tangentOrigin = tangentOrigin;
this->tangent = tangent;
}
// Ctor Parameters []
constexpr ::Pathfinding::GraphHitInfo::GraphHitInfo()   {
}
