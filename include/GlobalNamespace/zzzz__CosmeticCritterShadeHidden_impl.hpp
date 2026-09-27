#pragma once
// IWYU pragma private; include "GlobalNamespace/CosmeticCritterShadeHidden.hpp"
#include "GlobalNamespace/zzzz__CosmeticCritter_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__CosmeticCritterShadeHidden_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CosmeticCritterShadeHidden.SetCenterAndRadius
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticCritterShadeHidden::*)(::UnityEngine::Vector3, float_t)>(&::GlobalNamespace::CosmeticCritterShadeHidden::SetCenterAndRadius)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x57f3420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritterShadeHidden*>(),
                        {"SetCenterAndRadius", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticCritterShadeHidden.SetRandomVariables
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticCritterShadeHidden::*)()>(&::GlobalNamespace::CosmeticCritterShadeHidden::SetRandomVariables)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x57f39e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CosmeticCritterShadeHidden*>(),
                    {::i2c::class_of<::GlobalNamespace::CosmeticCritterShadeHidden*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticCritterShadeHidden.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticCritterShadeHidden::*)()>(&::GlobalNamespace::CosmeticCritterShadeHidden::Tick)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x57f3a28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CosmeticCritterShadeHidden*>(),
                    {::i2c::class_of<::GlobalNamespace::CosmeticCritterShadeHidden*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticCritterShadeHidden._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticCritterShadeHidden::*)()>(&::GlobalNamespace::CosmeticCritterShadeHidden::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57f3afc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritterShadeHidden*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::CosmeticCritterShadeHidden::__cordl_internal_get_orbitDegreesPerSecond()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___orbitDegreesPerSecond;
}
constexpr float_t const& GlobalNamespace::CosmeticCritterShadeHidden::__cordl_internal_get_orbitDegreesPerSecond() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___orbitDegreesPerSecond;
}
constexpr void GlobalNamespace::CosmeticCritterShadeHidden::__cordl_internal_set_orbitDegreesPerSecond(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___orbitDegreesPerSecond = value;
}
constexpr float_t& GlobalNamespace::CosmeticCritterShadeHidden::__cordl_internal_get_verticalBobMagnitude()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___verticalBobMagnitude;
}
constexpr float_t const& GlobalNamespace::CosmeticCritterShadeHidden::__cordl_internal_get_verticalBobMagnitude() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___verticalBobMagnitude;
}
constexpr void GlobalNamespace::CosmeticCritterShadeHidden::__cordl_internal_set_verticalBobMagnitude(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___verticalBobMagnitude = value;
}
constexpr float_t& GlobalNamespace::CosmeticCritterShadeHidden::__cordl_internal_get_verticalBobFrequency()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___verticalBobFrequency;
}
constexpr float_t const& GlobalNamespace::CosmeticCritterShadeHidden::__cordl_internal_get_verticalBobFrequency() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___verticalBobFrequency;
}
constexpr void GlobalNamespace::CosmeticCritterShadeHidden::__cordl_internal_set_verticalBobFrequency(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___verticalBobFrequency = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::CosmeticCritterShadeHidden::__cordl_internal_get_orbitCenter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___orbitCenter;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::CosmeticCritterShadeHidden::__cordl_internal_get_orbitCenter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___orbitCenter;
}
constexpr void GlobalNamespace::CosmeticCritterShadeHidden::__cordl_internal_set_orbitCenter(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___orbitCenter = value;
}
constexpr float_t& GlobalNamespace::CosmeticCritterShadeHidden::__cordl_internal_get_initialAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialAngle;
}
constexpr float_t const& GlobalNamespace::CosmeticCritterShadeHidden::__cordl_internal_get_initialAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialAngle;
}
constexpr void GlobalNamespace::CosmeticCritterShadeHidden::__cordl_internal_set_initialAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initialAngle = value;
}
constexpr float_t& GlobalNamespace::CosmeticCritterShadeHidden::__cordl_internal_get_orbitRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___orbitRadius;
}
constexpr float_t const& GlobalNamespace::CosmeticCritterShadeHidden::__cordl_internal_get_orbitRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___orbitRadius;
}
constexpr void GlobalNamespace::CosmeticCritterShadeHidden::__cordl_internal_set_orbitRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___orbitRadius = value;
}
constexpr float_t& GlobalNamespace::CosmeticCritterShadeHidden::__cordl_internal_get_orbitDirection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___orbitDirection;
}
constexpr float_t const& GlobalNamespace::CosmeticCritterShadeHidden::__cordl_internal_get_orbitDirection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___orbitDirection;
}
constexpr void GlobalNamespace::CosmeticCritterShadeHidden::__cordl_internal_set_orbitDirection(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___orbitDirection = value;
}
inline void GlobalNamespace::CosmeticCritterShadeHidden::SetCenterAndRadius(::UnityEngine::Vector3  center, float_t  radius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritterShadeHidden*>(),
                        {"SetCenterAndRadius", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, center, radius);
}
inline void GlobalNamespace::CosmeticCritterShadeHidden::SetRandomVariables()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CosmeticCritterShadeHidden*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CosmeticCritterShadeHidden::Tick()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CosmeticCritterShadeHidden*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CosmeticCritterShadeHidden::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritterShadeHidden*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CosmeticCritterShadeHidden* GlobalNamespace::CosmeticCritterShadeHidden::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CosmeticCritterShadeHidden*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CosmeticCritterShadeHidden::CosmeticCritterShadeHidden()   {
}
