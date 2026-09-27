#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/Triangle.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Technie/PhysicsCreator/zzzz__Triangle_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Technie::PhysicsCreator::Triangle._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::Triangle::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::Technie::PhysicsCreator::Triangle::_ctor)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0xadc4688;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Triangle*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& Technie::PhysicsCreator::Triangle::__cordl_internal_get_normal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___normal;
}
constexpr ::UnityEngine::Vector3 const& Technie::PhysicsCreator::Triangle::__cordl_internal_get_normal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___normal;
}
constexpr void Technie::PhysicsCreator::Triangle::__cordl_internal_set_normal(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___normal = value;
}
constexpr float_t& Technie::PhysicsCreator::Triangle::__cordl_internal_get_area()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___area;
}
constexpr float_t const& Technie::PhysicsCreator::Triangle::__cordl_internal_get_area() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___area;
}
constexpr void Technie::PhysicsCreator::Triangle::__cordl_internal_set_area(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___area = value;
}
constexpr ::UnityEngine::Vector3& Technie::PhysicsCreator::Triangle::__cordl_internal_get_center()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___center;
}
constexpr ::UnityEngine::Vector3 const& Technie::PhysicsCreator::Triangle::__cordl_internal_get_center() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___center;
}
constexpr void Technie::PhysicsCreator::Triangle::__cordl_internal_set_center(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___center = value;
}
inline void Technie::PhysicsCreator::Triangle::_ctor(::UnityEngine::Vector3  p0, ::UnityEngine::Vector3  p1, ::UnityEngine::Vector3  p2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::Triangle*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, p0, p1, p2);
}
inline ::Technie::PhysicsCreator::Triangle* Technie::PhysicsCreator::Triangle::New_ctor(::UnityEngine::Vector3  p0, ::UnityEngine::Vector3  p1, ::UnityEngine::Vector3  p2)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Technie::PhysicsCreator::Triangle*>(p0, p1, p2));
}
// Ctor Parameters []
constexpr ::Technie::PhysicsCreator::Triangle::Triangle()   {
}
