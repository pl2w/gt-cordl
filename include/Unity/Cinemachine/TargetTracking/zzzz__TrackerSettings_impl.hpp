#pragma once
// IWYU pragma private; include "Unity/Cinemachine/TargetTracking/TrackerSettings.hpp"
#include "Unity/Cinemachine/TargetTracking/zzzz__AngularDampingMode_impl.hpp"
#include "Unity/Cinemachine/TargetTracking/zzzz__BindingMode_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Unity/Cinemachine/TargetTracking/zzzz__TrackerSettings_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::TargetTracking::TrackerSettings.get_Default
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::TargetTracking::TrackerSettings (*)()>(&::Unity::Cinemachine::TargetTracking::TrackerSettings::get_Default)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xaf01330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::TargetTracking::TrackerSettings>(),
                        {"get_Default", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::TargetTracking::TrackerSettings.Validate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::TargetTracking::TrackerSettings::*)()>(&::Unity::Cinemachine::TargetTracking::TrackerSettings::Validate)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xaf013a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::TargetTracking::TrackerSettings>(),
                        {"Validate", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::Unity::Cinemachine::TargetTracking::TrackerSettings Unity::Cinemachine::TargetTracking::TrackerSettings::get_Default()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::TargetTracking::TrackerSettings>(),
                        {"get_Default", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::TargetTracking::TrackerSettings>(nullptr, ___internal_method);
}
inline void Unity::Cinemachine::TargetTracking::TrackerSettings::Validate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::TargetTracking::TrackerSettings>(),
                        {"Validate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "BindingMode", ty: "::Unity::Cinemachine::TargetTracking::BindingMode", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "PositionDamping", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "AngularDampingMode", ty: "::Unity::Cinemachine::TargetTracking::AngularDampingMode", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "RotationDamping", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "QuaternionDamping", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Unity::Cinemachine::TargetTracking::TrackerSettings::TrackerSettings(::Unity::Cinemachine::TargetTracking::BindingMode  BindingMode, ::UnityEngine::Vector3  PositionDamping, ::Unity::Cinemachine::TargetTracking::AngularDampingMode  AngularDampingMode, ::UnityEngine::Vector3  RotationDamping, float_t  QuaternionDamping) noexcept  {
this->BindingMode = BindingMode;
this->PositionDamping = PositionDamping;
this->AngularDampingMode = AngularDampingMode;
this->RotationDamping = RotationDamping;
this->QuaternionDamping = QuaternionDamping;
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::TargetTracking::TrackerSettings::TrackerSettings()   {
}
