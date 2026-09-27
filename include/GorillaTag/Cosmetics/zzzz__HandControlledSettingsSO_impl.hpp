#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/HandControlledSettingsSO.hpp"
#include "GorillaTag/Cosmetics/zzzz__HandControlledCosmetic_RotationControl_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GorillaTag/Cosmetics/zzzz__HandControlledSettingsSO_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
//  Writing Method size for method: ::GorillaTag::Cosmetics::HandControlledSettingsSO.get_IsAngle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::HandControlledSettingsSO::*)()>(&::GorillaTag::Cosmetics::HandControlledSettingsSO::get_IsAngle)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5d99780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::HandControlledSettingsSO*>(),
                        {"get_IsAngle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::HandControlledSettingsSO.get_IsTranslation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::HandControlledSettingsSO::*)()>(&::GorillaTag::Cosmetics::HandControlledSettingsSO::get_IsTranslation)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5d99790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::HandControlledSettingsSO*>(),
                        {"get_IsTranslation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::HandControlledSettingsSO._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::HandControlledSettingsSO::*)()>(&::GorillaTag::Cosmetics::HandControlledSettingsSO::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5d997a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::HandControlledSettingsSO*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::HandControlledCosmetic_RotationControl& GorillaTag::Cosmetics::HandControlledSettingsSO::__cordl_internal_get_rotationControl()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationControl;
}
constexpr ::GlobalNamespace::HandControlledCosmetic_RotationControl const& GorillaTag::Cosmetics::HandControlledSettingsSO::__cordl_internal_get_rotationControl() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationControl;
}
constexpr void GorillaTag::Cosmetics::HandControlledSettingsSO::__cordl_internal_set_rotationControl(::GlobalNamespace::HandControlledCosmetic_RotationControl  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotationControl = value;
}
constexpr float_t& GorillaTag::Cosmetics::HandControlledSettingsSO::__cordl_internal_get_inputSensitivity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputSensitivity;
}
constexpr float_t const& GorillaTag::Cosmetics::HandControlledSettingsSO::__cordl_internal_get_inputSensitivity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputSensitivity;
}
constexpr void GorillaTag::Cosmetics::HandControlledSettingsSO::__cordl_internal_set_inputSensitivity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inputSensitivity = value;
}
constexpr ::UnityEngine::AnimationCurve*& GorillaTag::Cosmetics::HandControlledSettingsSO::__cordl_internal_get_verticalSensitivity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___verticalSensitivity;
}
constexpr ::UnityEngine::AnimationCurve* const& GorillaTag::Cosmetics::HandControlledSettingsSO::__cordl_internal_get_verticalSensitivity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___verticalSensitivity;
}
constexpr void GorillaTag::Cosmetics::HandControlledSettingsSO::__cordl_internal_set_verticalSensitivity(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___verticalSensitivity = value;
}
constexpr ::UnityEngine::AnimationCurve*& GorillaTag::Cosmetics::HandControlledSettingsSO::__cordl_internal_get_horizontalSensitivity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___horizontalSensitivity;
}
constexpr ::UnityEngine::AnimationCurve* const& GorillaTag::Cosmetics::HandControlledSettingsSO::__cordl_internal_get_horizontalSensitivity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___horizontalSensitivity;
}
constexpr void GorillaTag::Cosmetics::HandControlledSettingsSO::__cordl_internal_set_horizontalSensitivity(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___horizontalSensitivity = value;
}
constexpr float_t& GorillaTag::Cosmetics::HandControlledSettingsSO::__cordl_internal_get_inputDecaySpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputDecaySpeed;
}
constexpr float_t const& GorillaTag::Cosmetics::HandControlledSettingsSO::__cordl_internal_get_inputDecaySpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputDecaySpeed;
}
constexpr void GorillaTag::Cosmetics::HandControlledSettingsSO::__cordl_internal_set_inputDecaySpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inputDecaySpeed = value;
}
constexpr ::UnityEngine::AnimationCurve*& GorillaTag::Cosmetics::HandControlledSettingsSO::__cordl_internal_get_inputDecayCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputDecayCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GorillaTag::Cosmetics::HandControlledSettingsSO::__cordl_internal_get_inputDecayCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputDecayCurve;
}
constexpr void GorillaTag::Cosmetics::HandControlledSettingsSO::__cordl_internal_set_inputDecayCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inputDecayCurve = value;
}
constexpr float_t& GorillaTag::Cosmetics::HandControlledSettingsSO::__cordl_internal_get_rotationSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationSpeed;
}
constexpr float_t const& GorillaTag::Cosmetics::HandControlledSettingsSO::__cordl_internal_get_rotationSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationSpeed;
}
constexpr void GorillaTag::Cosmetics::HandControlledSettingsSO::__cordl_internal_set_rotationSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotationSpeed = value;
}
constexpr ::UnityEngine::Vector3& GorillaTag::Cosmetics::HandControlledSettingsSO::__cordl_internal_get_angleLimits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___angleLimits;
}
constexpr ::UnityEngine::Vector3 const& GorillaTag::Cosmetics::HandControlledSettingsSO::__cordl_internal_get_angleLimits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___angleLimits;
}
constexpr void GorillaTag::Cosmetics::HandControlledSettingsSO::__cordl_internal_set_angleLimits(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___angleLimits = value;
}
inline bool GorillaTag::Cosmetics::HandControlledSettingsSO::get_IsAngle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::HandControlledSettingsSO*>(),
                        {"get_IsAngle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GorillaTag::Cosmetics::HandControlledSettingsSO::get_IsTranslation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::HandControlledSettingsSO*>(),
                        {"get_IsTranslation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::HandControlledSettingsSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::HandControlledSettingsSO*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Cosmetics::HandControlledSettingsSO* GorillaTag::Cosmetics::HandControlledSettingsSO::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Cosmetics::HandControlledSettingsSO*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::Cosmetics::HandControlledSettingsSO::HandControlledSettingsSO()   {
}
