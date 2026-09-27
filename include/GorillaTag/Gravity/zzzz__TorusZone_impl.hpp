#pragma once
// IWYU pragma private; include "GorillaTag/Gravity/TorusZone.hpp"
#include "GorillaTag/Gravity/zzzz__BasicGravityZone_impl.hpp"
#include "GorillaTag/Gravity/zzzz__TorusZone_def.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__TorusZoneSettings_def.hpp"
#include "GorillaTag/Gravity/zzzz__MonkeGravityController_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GorillaTag::Gravity::TorusZone.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Gravity::TorusZone::*)()>(&::GorillaTag::Gravity::TorusZone::Awake)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5d3b8ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Gravity::TorusZone*>(),
                    {::i2c::class_of<::GorillaTag::Gravity::TorusZone*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::TorusZone.CalculateDependentVars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Gravity::TorusZone::*)()>(&::GorillaTag::Gravity::TorusZone::CalculateDependentVars)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5d3b90c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::TorusZone*>(),
                        {"CalculateDependentVars", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::TorusZone.GetGravityVectorAtPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GorillaTag::Gravity::TorusZone::*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::GorillaTag::Gravity::MonkeGravityController*>)>(&::GorillaTag::Gravity::TorusZone::GetGravityVectorAtPoint)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x5d3b91c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Gravity::TorusZone*>(),
                    {::i2c::class_of<::GorillaTag::Gravity::TorusZone*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::TorusZone.GetRotationIntent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Gravity::TorusZone::*)(::by_ref<::UnityEngine::Vector3>)>(&::GorillaTag::Gravity::TorusZone::GetRotationIntent)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5d3bbfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Gravity::TorusZone*>(),
                    {::i2c::class_of<::GorillaTag::Gravity::TorusZone*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::TorusZone.CopyProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Gravity::TorusZone::*)(::GT_CustomMapSupportRuntime::TorusZoneSettings*)>(&::GorillaTag::Gravity::TorusZone::CopyProperties)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5d3bc48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::TorusZone*>(),
                        {"CopyProperties", {}, {::i2c::type_of<::GT_CustomMapSupportRuntime::TorusZoneSettings*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::TorusZone._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Gravity::TorusZone::*)()>(&::GorillaTag::Gravity::TorusZone::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5d3bc88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::TorusZone*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GorillaTag::Gravity::TorusZone::__cordl_internal_get_majorRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___majorRadius;
}
constexpr float_t const& GorillaTag::Gravity::TorusZone::__cordl_internal_get_majorRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___majorRadius;
}
constexpr void GorillaTag::Gravity::TorusZone::__cordl_internal_set_majorRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___majorRadius = value;
}
constexpr float_t& GorillaTag::Gravity::TorusZone::__cordl_internal_get_rotationDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationDistance;
}
constexpr float_t const& GorillaTag::Gravity::TorusZone::__cordl_internal_get_rotationDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationDistance;
}
constexpr void GorillaTag::Gravity::TorusZone::__cordl_internal_set_rotationDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotationDistance = value;
}
constexpr bool& GorillaTag::Gravity::TorusZone::__cordl_internal_get_alwaysRotate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___alwaysRotate;
}
constexpr bool const& GorillaTag::Gravity::TorusZone::__cordl_internal_get_alwaysRotate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___alwaysRotate;
}
constexpr void GorillaTag::Gravity::TorusZone::__cordl_internal_set_alwaysRotate(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___alwaysRotate = value;
}
constexpr float_t& GorillaTag::Gravity::TorusZone::__cordl_internal_get_sqrDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sqrDistance;
}
constexpr float_t const& GorillaTag::Gravity::TorusZone::__cordl_internal_get_sqrDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sqrDistance;
}
constexpr void GorillaTag::Gravity::TorusZone::__cordl_internal_set_sqrDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sqrDistance = value;
}
inline void GorillaTag::Gravity::TorusZone::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Gravity::TorusZone*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Gravity::TorusZone::CalculateDependentVars()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::TorusZone*>(),
                        {"CalculateDependentVars", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GorillaTag::Gravity::TorusZone::GetGravityVectorAtPoint(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  worldPosition, /* [IsReadOnly] */ ::by_ref<::GorillaTag::Gravity::MonkeGravityController*>  controller)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Gravity::TorusZone*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, worldPosition, controller);
}
inline bool GorillaTag::Gravity::TorusZone::GetRotationIntent(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  offsetFromGravity)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Gravity::TorusZone*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, offsetFromGravity);
}
inline void GorillaTag::Gravity::TorusZone::CopyProperties(::GT_CustomMapSupportRuntime::TorusZoneSettings*  settings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::TorusZone*>(),
                        {"CopyProperties", {}, {::i2c::type_of<::GT_CustomMapSupportRuntime::TorusZoneSettings*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, settings);
}
inline void GorillaTag::Gravity::TorusZone::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::TorusZone*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Gravity::TorusZone* GorillaTag::Gravity::TorusZone::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Gravity::TorusZone*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::Gravity::TorusZone::TorusZone()   {
}
