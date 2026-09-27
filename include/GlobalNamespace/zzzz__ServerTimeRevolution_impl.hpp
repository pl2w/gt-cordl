#pragma once
// IWYU pragma private; include "GlobalNamespace/ServerTimeRevolution.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__ServerTimeRevolution_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ServerTimeRevolution.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ServerTimeRevolution::*)()>(&::GlobalNamespace::ServerTimeRevolution::LateUpdate)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x5b1de54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ServerTimeRevolution*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ServerTimeRevolution._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ServerTimeRevolution::*)()>(&::GlobalNamespace::ServerTimeRevolution::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5b1dfe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ServerTimeRevolution*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& GlobalNamespace::ServerTimeRevolution::__cordl_internal_get_orbit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___orbit;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::ServerTimeRevolution::__cordl_internal_get_orbit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___orbit;
}
constexpr void GlobalNamespace::ServerTimeRevolution::__cordl_internal_set_orbit(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___orbit = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::ServerTimeRevolution::__cordl_internal_get_pivot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pivot;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::ServerTimeRevolution::__cordl_internal_get_pivot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pivot;
}
constexpr void GlobalNamespace::ServerTimeRevolution::__cordl_internal_set_pivot(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pivot = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::ServerTimeRevolution::__cordl_internal_get_pivotOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pivotOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::ServerTimeRevolution::__cordl_internal_get_pivotOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pivotOffset;
}
constexpr void GlobalNamespace::ServerTimeRevolution::__cordl_internal_set_pivotOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pivotOffset = value;
}
constexpr double_t& GlobalNamespace::ServerTimeRevolution::__cordl_internal_get_speed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speed;
}
constexpr double_t const& GlobalNamespace::ServerTimeRevolution::__cordl_internal_get_speed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speed;
}
constexpr void GlobalNamespace::ServerTimeRevolution::__cordl_internal_set_speed(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___speed = value;
}
constexpr ::System::DateTime& GlobalNamespace::ServerTimeRevolution::__cordl_internal_get_anchor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anchor;
}
constexpr ::System::DateTime const& GlobalNamespace::ServerTimeRevolution::__cordl_internal_get_anchor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anchor;
}
constexpr void GlobalNamespace::ServerTimeRevolution::__cordl_internal_set_anchor(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___anchor = value;
}
inline void GlobalNamespace::ServerTimeRevolution::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ServerTimeRevolution*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ServerTimeRevolution::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ServerTimeRevolution*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ServerTimeRevolution* GlobalNamespace::ServerTimeRevolution::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ServerTimeRevolution*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ServerTimeRevolution::ServerTimeRevolution()   {
}
