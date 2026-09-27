#pragma once
// IWYU pragma private; include "GorillaTag/Gravity/PlanetZone.hpp"
#include "GorillaTag/Gravity/zzzz__BasicGravityZone_impl.hpp"
#include "GorillaTag/Gravity/zzzz__PlanetZone_def.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__PlanetZoneSettings_def.hpp"
#include "GorillaTag/Gravity/zzzz__MonkeGravityController_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GorillaTag::Gravity::PlanetZone.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Gravity::PlanetZone::*)()>(&::GorillaTag::Gravity::PlanetZone::Awake)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5d38d1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Gravity::PlanetZone*>(),
                    {::i2c::class_of<::GorillaTag::Gravity::PlanetZone*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::PlanetZone.CalculateDependentVars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Gravity::PlanetZone::*)()>(&::GorillaTag::Gravity::PlanetZone::CalculateDependentVars)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5d3b730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::PlanetZone*>(),
                        {"CalculateDependentVars", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::PlanetZone.GetGravityVectorAtPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GorillaTag::Gravity::PlanetZone::*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::GorillaTag::Gravity::MonkeGravityController*>)>(&::GorillaTag::Gravity::PlanetZone::GetGravityVectorAtPoint)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5d3b740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Gravity::PlanetZone*>(),
                    {::i2c::class_of<::GorillaTag::Gravity::PlanetZone*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::PlanetZone.GetGravityStrength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GorillaTag::Gravity::PlanetZone::*)(::by_ref<::UnityEngine::Vector3>)>(&::GorillaTag::Gravity::PlanetZone::GetGravityStrength)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5d3b788;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Gravity::PlanetZone*>(),
                    {::i2c::class_of<::GorillaTag::Gravity::PlanetZone*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::PlanetZone.GetRotationIntent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Gravity::PlanetZone::*)(::by_ref<::UnityEngine::Vector3>)>(&::GorillaTag::Gravity::PlanetZone::GetRotationIntent)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5d3b82c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Gravity::PlanetZone*>(),
                    {::i2c::class_of<::GorillaTag::Gravity::PlanetZone*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::PlanetZone.CopyProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Gravity::PlanetZone::*)(::GT_CustomMapSupportRuntime::PlanetZoneSettings*)>(&::GorillaTag::Gravity::PlanetZone::CopyProperties)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5d39138;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::PlanetZone*>(),
                        {"CopyProperties", {}, {::i2c::type_of<::GT_CustomMapSupportRuntime::PlanetZoneSettings*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::PlanetZone._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Gravity::PlanetZone::*)()>(&::GorillaTag::Gravity::PlanetZone::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5d39190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::PlanetZone*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GorillaTag::Gravity::PlanetZone::__cordl_internal_get_rotationDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationDistance;
}
constexpr float_t const& GorillaTag::Gravity::PlanetZone::__cordl_internal_get_rotationDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationDistance;
}
constexpr void GorillaTag::Gravity::PlanetZone::__cordl_internal_set_rotationDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotationDistance = value;
}
constexpr bool& GorillaTag::Gravity::PlanetZone::__cordl_internal_get_alwaysRotate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___alwaysRotate;
}
constexpr bool const& GorillaTag::Gravity::PlanetZone::__cordl_internal_get_alwaysRotate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___alwaysRotate;
}
constexpr void GorillaTag::Gravity::PlanetZone::__cordl_internal_set_alwaysRotate(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___alwaysRotate = value;
}
constexpr bool& GorillaTag::Gravity::PlanetZone::__cordl_internal_get_useGravityCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useGravityCurve;
}
constexpr bool const& GorillaTag::Gravity::PlanetZone::__cordl_internal_get_useGravityCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useGravityCurve;
}
constexpr void GorillaTag::Gravity::PlanetZone::__cordl_internal_set_useGravityCurve(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useGravityCurve = value;
}
constexpr ::UnityEngine::AnimationCurve*& GorillaTag::Gravity::PlanetZone::__cordl_internal_get_gravityCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gravityCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GorillaTag::Gravity::PlanetZone::__cordl_internal_get_gravityCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gravityCurve;
}
constexpr void GorillaTag::Gravity::PlanetZone::__cordl_internal_set_gravityCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gravityCurve = value;
}
constexpr float_t& GorillaTag::Gravity::PlanetZone::__cordl_internal_get_sqrDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sqrDistance;
}
constexpr float_t const& GorillaTag::Gravity::PlanetZone::__cordl_internal_get_sqrDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sqrDistance;
}
constexpr void GorillaTag::Gravity::PlanetZone::__cordl_internal_set_sqrDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sqrDistance = value;
}
inline void GorillaTag::Gravity::PlanetZone::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Gravity::PlanetZone*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Gravity::PlanetZone::CalculateDependentVars()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::PlanetZone*>(),
                        {"CalculateDependentVars", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GorillaTag::Gravity::PlanetZone::GetGravityVectorAtPoint(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  worldPosition, /* [IsReadOnly] */ ::by_ref<::GorillaTag::Gravity::MonkeGravityController*>  controller)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Gravity::PlanetZone*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, worldPosition, controller);
}
inline float_t GorillaTag::Gravity::PlanetZone::GetGravityStrength(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  offsetFromGravity)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Gravity::PlanetZone*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, offsetFromGravity);
}
inline bool GorillaTag::Gravity::PlanetZone::GetRotationIntent(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  offsetFromGravity)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Gravity::PlanetZone*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, offsetFromGravity);
}
inline void GorillaTag::Gravity::PlanetZone::CopyProperties(::GT_CustomMapSupportRuntime::PlanetZoneSettings*  settings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::PlanetZone*>(),
                        {"CopyProperties", {}, {::i2c::type_of<::GT_CustomMapSupportRuntime::PlanetZoneSettings*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, settings);
}
inline void GorillaTag::Gravity::PlanetZone::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::PlanetZone*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Gravity::PlanetZone* GorillaTag::Gravity::PlanetZone::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Gravity::PlanetZone*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::Gravity::PlanetZone::PlanetZone()   {
}
