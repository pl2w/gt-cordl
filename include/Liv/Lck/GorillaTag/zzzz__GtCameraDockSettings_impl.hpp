#pragma once
// IWYU pragma private; include "Liv/Lck/GorillaTag/GtCameraDockSettings.hpp"
#include "Liv/Lck/GorillaTag/zzzz__GtCameraDockSettings_def.hpp"
#include "Liv/Lck/GorillaTag/zzzz__CameraMode_def.hpp"
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtCameraDockSettings.GetEnforcedMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::GorillaTag::CameraMode (::Liv::Lck::GorillaTag::GtCameraDockSettings::*)()>(&::Liv::Lck::GorillaTag::GtCameraDockSettings::GetEnforcedMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d21788;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtCameraDockSettings>(),
                        {"GetEnforcedMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::Liv::Lck::GorillaTag::CameraMode Liv::Lck::GorillaTag::GtCameraDockSettings::GetEnforcedMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtCameraDockSettings>(),
                        {"GetEnforcedMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::GorillaTag::CameraMode>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "forceFov", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "fov", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "forceOrientation", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "landscapeMode", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "forceCameraFacing", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "isFront", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Liv::Lck::GorillaTag::GtCameraDockSettings::GtCameraDockSettings(bool  forceFov, float_t  fov, bool  forceOrientation, bool  landscapeMode, bool  forceCameraFacing, bool  isFront) noexcept  {
this->forceFov = forceFov;
this->fov = fov;
this->forceOrientation = forceOrientation;
this->landscapeMode = landscapeMode;
this->forceCameraFacing = forceCameraFacing;
this->isFront = isFront;
}
// Ctor Parameters []
constexpr ::Liv::Lck::GorillaTag::GtCameraDockSettings::GtCameraDockSettings()   {
}
