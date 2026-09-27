#pragma once
// IWYU pragma private; include "Pathfinding/RVO/ObstacleVertex.hpp"
#include "Pathfinding/RVO/zzzz__RVOLayer_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Pathfinding/RVO/zzzz__ObstacleVertex_def.hpp"
//  Writing Method size for method: ::Pathfinding::RVO::ObstacleVertex._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::ObstacleVertex::*)()>(&::Pathfinding::RVO::ObstacleVertex::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5ee3234;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::ObstacleVertex*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Pathfinding::RVO::ObstacleVertex::__cordl_internal_get_ignore()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ignore;
}
constexpr bool const& Pathfinding::RVO::ObstacleVertex::__cordl_internal_get_ignore() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ignore;
}
constexpr void Pathfinding::RVO::ObstacleVertex::__cordl_internal_set_ignore(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ignore = value;
}
constexpr ::UnityEngine::Vector3& Pathfinding::RVO::ObstacleVertex::__cordl_internal_get_position()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___position;
}
constexpr ::UnityEngine::Vector3 const& Pathfinding::RVO::ObstacleVertex::__cordl_internal_get_position() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___position;
}
constexpr void Pathfinding::RVO::ObstacleVertex::__cordl_internal_set_position(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___position = value;
}
constexpr ::UnityEngine::Vector2& Pathfinding::RVO::ObstacleVertex::__cordl_internal_get_dir()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dir;
}
constexpr ::UnityEngine::Vector2 const& Pathfinding::RVO::ObstacleVertex::__cordl_internal_get_dir() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dir;
}
constexpr void Pathfinding::RVO::ObstacleVertex::__cordl_internal_set_dir(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dir = value;
}
constexpr float_t& Pathfinding::RVO::ObstacleVertex::__cordl_internal_get_height()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___height;
}
constexpr float_t const& Pathfinding::RVO::ObstacleVertex::__cordl_internal_get_height() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___height;
}
constexpr void Pathfinding::RVO::ObstacleVertex::__cordl_internal_set_height(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___height = value;
}
constexpr ::Pathfinding::RVO::RVOLayer& Pathfinding::RVO::ObstacleVertex::__cordl_internal_get_layer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layer;
}
constexpr ::Pathfinding::RVO::RVOLayer const& Pathfinding::RVO::ObstacleVertex::__cordl_internal_get_layer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layer;
}
constexpr void Pathfinding::RVO::ObstacleVertex::__cordl_internal_set_layer(::Pathfinding::RVO::RVOLayer  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___layer = value;
}
constexpr ::Pathfinding::RVO::ObstacleVertex*& Pathfinding::RVO::ObstacleVertex::__cordl_internal_get_next()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___next;
}
constexpr ::Pathfinding::RVO::ObstacleVertex* const& Pathfinding::RVO::ObstacleVertex::__cordl_internal_get_next() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___next;
}
constexpr void Pathfinding::RVO::ObstacleVertex::__cordl_internal_set_next(::Pathfinding::RVO::ObstacleVertex*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___next = value;
}
constexpr ::Pathfinding::RVO::ObstacleVertex*& Pathfinding::RVO::ObstacleVertex::__cordl_internal_get_prev()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prev;
}
constexpr ::Pathfinding::RVO::ObstacleVertex* const& Pathfinding::RVO::ObstacleVertex::__cordl_internal_get_prev() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prev;
}
constexpr void Pathfinding::RVO::ObstacleVertex::__cordl_internal_set_prev(::Pathfinding::RVO::ObstacleVertex*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prev = value;
}
inline void Pathfinding::RVO::ObstacleVertex::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::ObstacleVertex*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::RVO::ObstacleVertex* Pathfinding::RVO::ObstacleVertex::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::RVO::ObstacleVertex*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::RVO::ObstacleVertex::ObstacleVertex()   {
}
