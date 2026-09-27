#pragma once
// IWYU pragma private; include "GlobalNamespace/GTContactPoint.hpp"
#include "GlobalNamespace/zzzz__GTContactType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "GlobalNamespace/zzzz__GTContactPoint_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GTContactPoint._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTContactPoint::*)()>(&::GlobalNamespace::GTContactPoint::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x56746bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTContactPoint*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Matrix4x4& GlobalNamespace::GTContactPoint::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::UnityEngine::Matrix4x4 const& GlobalNamespace::GTContactPoint::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void GlobalNamespace::GTContactPoint::__cordl_internal_set_data(::UnityEngine::Matrix4x4  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
constexpr ::UnityEngine::Vector4& GlobalNamespace::GTContactPoint::__cordl_internal_get_data0()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data0;
}
constexpr ::UnityEngine::Vector4 const& GlobalNamespace::GTContactPoint::__cordl_internal_get_data0() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data0;
}
constexpr void GlobalNamespace::GTContactPoint::__cordl_internal_set_data0(::UnityEngine::Vector4  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data0 = value;
}
constexpr ::UnityEngine::Vector4& GlobalNamespace::GTContactPoint::__cordl_internal_get_data1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data1;
}
constexpr ::UnityEngine::Vector4 const& GlobalNamespace::GTContactPoint::__cordl_internal_get_data1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data1;
}
constexpr void GlobalNamespace::GTContactPoint::__cordl_internal_set_data1(::UnityEngine::Vector4  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data1 = value;
}
constexpr ::UnityEngine::Vector4& GlobalNamespace::GTContactPoint::__cordl_internal_get_data2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data2;
}
constexpr ::UnityEngine::Vector4 const& GlobalNamespace::GTContactPoint::__cordl_internal_get_data2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data2;
}
constexpr void GlobalNamespace::GTContactPoint::__cordl_internal_set_data2(::UnityEngine::Vector4  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data2 = value;
}
constexpr ::UnityEngine::Vector4& GlobalNamespace::GTContactPoint::__cordl_internal_get_data3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data3;
}
constexpr ::UnityEngine::Vector4 const& GlobalNamespace::GTContactPoint::__cordl_internal_get_data3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data3;
}
constexpr void GlobalNamespace::GTContactPoint::__cordl_internal_set_data3(::UnityEngine::Vector4  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data3 = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GTContactPoint::__cordl_internal_get_contactPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___contactPoint;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GTContactPoint::__cordl_internal_get_contactPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___contactPoint;
}
constexpr void GlobalNamespace::GTContactPoint::__cordl_internal_set_contactPoint(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___contactPoint = value;
}
constexpr float_t& GlobalNamespace::GTContactPoint::__cordl_internal_get_radius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___radius;
}
constexpr float_t const& GlobalNamespace::GTContactPoint::__cordl_internal_get_radius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___radius;
}
constexpr void GlobalNamespace::GTContactPoint::__cordl_internal_set_radius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___radius = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GTContactPoint::__cordl_internal_get_counterVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___counterVelocity;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GTContactPoint::__cordl_internal_get_counterVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___counterVelocity;
}
constexpr void GlobalNamespace::GTContactPoint::__cordl_internal_set_counterVelocity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___counterVelocity = value;
}
constexpr float_t& GlobalNamespace::GTContactPoint::__cordl_internal_get_timestamp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timestamp;
}
constexpr float_t const& GlobalNamespace::GTContactPoint::__cordl_internal_get_timestamp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timestamp;
}
constexpr void GlobalNamespace::GTContactPoint::__cordl_internal_set_timestamp(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timestamp = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::GTContactPoint::__cordl_internal_get_color()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___color;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::GTContactPoint::__cordl_internal_get_color() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___color;
}
constexpr void GlobalNamespace::GTContactPoint::__cordl_internal_set_color(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___color = value;
}
constexpr ::GlobalNamespace::GTContactType& GlobalNamespace::GTContactPoint::__cordl_internal_get_contactType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___contactType;
}
constexpr ::GlobalNamespace::GTContactType const& GlobalNamespace::GTContactPoint::__cordl_internal_get_contactType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___contactType;
}
constexpr void GlobalNamespace::GTContactPoint::__cordl_internal_set_contactType(::GlobalNamespace::GTContactType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___contactType = value;
}
constexpr float_t& GlobalNamespace::GTContactPoint::__cordl_internal_get_lifetime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lifetime;
}
constexpr float_t const& GlobalNamespace::GTContactPoint::__cordl_internal_get_lifetime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lifetime;
}
constexpr void GlobalNamespace::GTContactPoint::__cordl_internal_set_lifetime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lifetime = value;
}
constexpr uint32_t& GlobalNamespace::GTContactPoint::__cordl_internal_get_free()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___free;
}
constexpr uint32_t const& GlobalNamespace::GTContactPoint::__cordl_internal_get_free() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___free;
}
constexpr void GlobalNamespace::GTContactPoint::__cordl_internal_set_free(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___free = value;
}
inline void GlobalNamespace::GTContactPoint::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTContactPoint*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GTContactPoint* GlobalNamespace::GTContactPoint::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GTContactPoint*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GTContactPoint::GTContactPoint()   {
}
