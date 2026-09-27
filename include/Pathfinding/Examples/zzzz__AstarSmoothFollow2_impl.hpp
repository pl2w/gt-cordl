#pragma once
// IWYU pragma private; include "Pathfinding/Examples/AstarSmoothFollow2.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Pathfinding/Examples/zzzz__AstarSmoothFollow2_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Pathfinding::Examples::AstarSmoothFollow2.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::AstarSmoothFollow2::*)()>(&::Pathfinding::Examples::AstarSmoothFollow2::LateUpdate)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x5efa20c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::AstarSmoothFollow2*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::AstarSmoothFollow2._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::AstarSmoothFollow2::*)()>(&::Pathfinding::Examples::AstarSmoothFollow2::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5efa4a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::AstarSmoothFollow2*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& Pathfinding::Examples::AstarSmoothFollow2::__cordl_internal_get_target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Pathfinding::Examples::AstarSmoothFollow2::__cordl_internal_get_target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr void Pathfinding::Examples::AstarSmoothFollow2::__cordl_internal_set_target(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___target = value;
}
constexpr float_t& Pathfinding::Examples::AstarSmoothFollow2::__cordl_internal_get_distance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___distance;
}
constexpr float_t const& Pathfinding::Examples::AstarSmoothFollow2::__cordl_internal_get_distance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___distance;
}
constexpr void Pathfinding::Examples::AstarSmoothFollow2::__cordl_internal_set_distance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___distance = value;
}
constexpr float_t& Pathfinding::Examples::AstarSmoothFollow2::__cordl_internal_get_height()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___height;
}
constexpr float_t const& Pathfinding::Examples::AstarSmoothFollow2::__cordl_internal_get_height() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___height;
}
constexpr void Pathfinding::Examples::AstarSmoothFollow2::__cordl_internal_set_height(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___height = value;
}
constexpr float_t& Pathfinding::Examples::AstarSmoothFollow2::__cordl_internal_get_damping()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___damping;
}
constexpr float_t const& Pathfinding::Examples::AstarSmoothFollow2::__cordl_internal_get_damping() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___damping;
}
constexpr void Pathfinding::Examples::AstarSmoothFollow2::__cordl_internal_set_damping(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___damping = value;
}
constexpr bool& Pathfinding::Examples::AstarSmoothFollow2::__cordl_internal_get_smoothRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smoothRotation;
}
constexpr bool const& Pathfinding::Examples::AstarSmoothFollow2::__cordl_internal_get_smoothRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smoothRotation;
}
constexpr void Pathfinding::Examples::AstarSmoothFollow2::__cordl_internal_set_smoothRotation(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___smoothRotation = value;
}
constexpr bool& Pathfinding::Examples::AstarSmoothFollow2::__cordl_internal_get_followBehind()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___followBehind;
}
constexpr bool const& Pathfinding::Examples::AstarSmoothFollow2::__cordl_internal_get_followBehind() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___followBehind;
}
constexpr void Pathfinding::Examples::AstarSmoothFollow2::__cordl_internal_set_followBehind(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___followBehind = value;
}
constexpr float_t& Pathfinding::Examples::AstarSmoothFollow2::__cordl_internal_get_rotationDamping()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationDamping;
}
constexpr float_t const& Pathfinding::Examples::AstarSmoothFollow2::__cordl_internal_get_rotationDamping() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationDamping;
}
constexpr void Pathfinding::Examples::AstarSmoothFollow2::__cordl_internal_set_rotationDamping(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotationDamping = value;
}
constexpr bool& Pathfinding::Examples::AstarSmoothFollow2::__cordl_internal_get_staticOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___staticOffset;
}
constexpr bool const& Pathfinding::Examples::AstarSmoothFollow2::__cordl_internal_get_staticOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___staticOffset;
}
constexpr void Pathfinding::Examples::AstarSmoothFollow2::__cordl_internal_set_staticOffset(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___staticOffset = value;
}
inline void Pathfinding::Examples::AstarSmoothFollow2::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::AstarSmoothFollow2*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Examples::AstarSmoothFollow2::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::AstarSmoothFollow2*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::Examples::AstarSmoothFollow2* Pathfinding::Examples::AstarSmoothFollow2::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Examples::AstarSmoothFollow2*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::Examples::AstarSmoothFollow2::AstarSmoothFollow2()   {
}
