#pragma once
// IWYU pragma private; include "GorillaTag/Gravity/CubicPlanetZone.hpp"
#include "GorillaTag/Gravity/zzzz__PlanetZone_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GorillaTag/Gravity/zzzz__CubicPlanetZone_def.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__CubicPlanetZoneSettings_def.hpp"
#include "GorillaTag/Gravity/zzzz__MonkeGravityController_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GorillaTag::Gravity::CubicPlanetZone.UpdateConstraint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Gravity::CubicPlanetZone::*)()>(&::GorillaTag::Gravity::CubicPlanetZone::UpdateConstraint)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5d38c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::CubicPlanetZone*>(),
                        {"UpdateConstraint", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::CubicPlanetZone.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Gravity::CubicPlanetZone::*)()>(&::GorillaTag::Gravity::CubicPlanetZone::Awake)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5d38cbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Gravity::CubicPlanetZone*>(),
                    {::i2c::class_of<::GorillaTag::Gravity::CubicPlanetZone*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::CubicPlanetZone.CalculateDependentVars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Gravity::CubicPlanetZone::*)()>(&::GorillaTag::Gravity::CubicPlanetZone::CalculateDependentVars)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5d38d3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::CubicPlanetZone*>(),
                        {"CalculateDependentVars", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::CubicPlanetZone.GetGravityVectorAtPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GorillaTag::Gravity::CubicPlanetZone::*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::GorillaTag::Gravity::MonkeGravityController*>)>(&::GorillaTag::Gravity::CubicPlanetZone::GetGravityVectorAtPoint)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5d38d74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Gravity::CubicPlanetZone*>(),
                    {::i2c::class_of<::GorillaTag::Gravity::CubicPlanetZone*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::CubicPlanetZone.GetPointOnBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GorillaTag::Gravity::CubicPlanetZone::*)(::by_ref<::UnityEngine::Vector3>)>(&::GorillaTag::Gravity::CubicPlanetZone::GetPointOnBounds)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x5d38dac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::CubicPlanetZone*>(),
                        {"GetPointOnBounds", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::CubicPlanetZone.CopyProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Gravity::CubicPlanetZone::*)(::GT_CustomMapSupportRuntime::CubicPlanetZoneSettings*)>(&::GorillaTag::Gravity::CubicPlanetZone::CopyProperties)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5d390c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::CubicPlanetZone*>(),
                        {"CopyProperties", {}, {::i2c::type_of<::GT_CustomMapSupportRuntime::CubicPlanetZoneSettings*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::CubicPlanetZone._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Gravity::CubicPlanetZone::*)()>(&::GorillaTag::Gravity::CubicPlanetZone::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d3918c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::CubicPlanetZone*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& GorillaTag::Gravity::CubicPlanetZone::__cordl_internal_get_constraints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___constraints;
}
constexpr ::UnityEngine::Vector3 const& GorillaTag::Gravity::CubicPlanetZone::__cordl_internal_get_constraints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___constraints;
}
constexpr void GorillaTag::Gravity::CubicPlanetZone::__cordl_internal_set_constraints(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___constraints = value;
}
constexpr ::UnityEngine::Vector3& GorillaTag::Gravity::CubicPlanetZone::__cordl_internal_get_minConstraints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minConstraints;
}
constexpr ::UnityEngine::Vector3 const& GorillaTag::Gravity::CubicPlanetZone::__cordl_internal_get_minConstraints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minConstraints;
}
constexpr void GorillaTag::Gravity::CubicPlanetZone::__cordl_internal_set_minConstraints(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minConstraints = value;
}
constexpr ::UnityEngine::Vector3& GorillaTag::Gravity::CubicPlanetZone::__cordl_internal_get_maxConstraints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxConstraints;
}
constexpr ::UnityEngine::Vector3 const& GorillaTag::Gravity::CubicPlanetZone::__cordl_internal_get_maxConstraints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxConstraints;
}
constexpr void GorillaTag::Gravity::CubicPlanetZone::__cordl_internal_set_maxConstraints(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxConstraints = value;
}
constexpr ::UnityEngine::Quaternion& GorillaTag::Gravity::CubicPlanetZone::__cordl_internal_get_inverseRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inverseRotation;
}
constexpr ::UnityEngine::Quaternion const& GorillaTag::Gravity::CubicPlanetZone::__cordl_internal_get_inverseRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inverseRotation;
}
constexpr void GorillaTag::Gravity::CubicPlanetZone::__cordl_internal_set_inverseRotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inverseRotation = value;
}
inline void GorillaTag::Gravity::CubicPlanetZone::UpdateConstraint()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::CubicPlanetZone*>(),
                        {"UpdateConstraint", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Gravity::CubicPlanetZone::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Gravity::CubicPlanetZone*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Gravity::CubicPlanetZone::CalculateDependentVars()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::CubicPlanetZone*>(),
                        {"CalculateDependentVars", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GorillaTag::Gravity::CubicPlanetZone::GetGravityVectorAtPoint(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  worldPosition, /* [IsReadOnly] */ ::by_ref<::GorillaTag::Gravity::MonkeGravityController*>  controller)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Gravity::CubicPlanetZone*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, worldPosition, controller);
}
inline ::UnityEngine::Vector3 GorillaTag::Gravity::CubicPlanetZone::GetPointOnBounds(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  point)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::CubicPlanetZone*>(),
                        {"GetPointOnBounds", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, point);
}
inline void GorillaTag::Gravity::CubicPlanetZone::CopyProperties(::GT_CustomMapSupportRuntime::CubicPlanetZoneSettings*  settings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::CubicPlanetZone*>(),
                        {"CopyProperties", {}, {::i2c::type_of<::GT_CustomMapSupportRuntime::CubicPlanetZoneSettings*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, settings);
}
inline void GorillaTag::Gravity::CubicPlanetZone::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::CubicPlanetZone*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Gravity::CubicPlanetZone* GorillaTag::Gravity::CubicPlanetZone::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Gravity::CubicPlanetZone*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::Gravity::CubicPlanetZone::CubicPlanetZone()   {
}
