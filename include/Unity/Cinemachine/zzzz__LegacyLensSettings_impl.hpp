#pragma once
// IWYU pragma private; include "Unity/Cinemachine/LegacyLensSettings.hpp"
#include "Unity/Cinemachine/zzzz__LensSettings_OverrideModes_impl.hpp"
#include "UnityEngine/zzzz__Camera_GateFitMode_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "Unity/Cinemachine/zzzz__LegacyLensSettings_def.hpp"
#include "Unity/Cinemachine/zzzz__LensSettings_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::LegacyLensSettings.ToLensSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::LensSettings (::Unity::Cinemachine::LegacyLensSettings::*)()>(&::Unity::Cinemachine::LegacyLensSettings::ToLensSettings)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xaedc644;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::LegacyLensSettings>(),
                        {"ToLensSettings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::LegacyLensSettings.SetFromLensSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::LegacyLensSettings::*)(::Unity::Cinemachine::LensSettings)>(&::Unity::Cinemachine::LegacyLensSettings::SetFromLensSettings)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xaede1ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::LegacyLensSettings>(),
                        {"SetFromLensSettings", {}, {::i2c::type_of<::Unity::Cinemachine::LensSettings>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::LegacyLensSettings.Validate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::LegacyLensSettings::*)()>(&::Unity::Cinemachine::LegacyLensSettings::Validate)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xaedca50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::LegacyLensSettings>(),
                        {"Validate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::LegacyLensSettings.get_Default
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::LegacyLensSettings (*)()>(&::Unity::Cinemachine::LegacyLensSettings::get_Default)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xaedde30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::LegacyLensSettings>(),
                        {"get_Default", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::Unity::Cinemachine::LensSettings Unity::Cinemachine::LegacyLensSettings::ToLensSettings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::LegacyLensSettings>(),
                        {"ToLensSettings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::LensSettings>(*this, ___internal_method);
}
inline void Unity::Cinemachine::LegacyLensSettings::SetFromLensSettings(::Unity::Cinemachine::LensSettings  src)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::LegacyLensSettings>(),
                        {"SetFromLensSettings", {}, {::i2c::type_of<::Unity::Cinemachine::LensSettings>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, src);
}
inline void Unity::Cinemachine::LegacyLensSettings::Validate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::LegacyLensSettings>(),
                        {"Validate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline ::Unity::Cinemachine::LegacyLensSettings Unity::Cinemachine::LegacyLensSettings::get_Default()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::LegacyLensSettings>(),
                        {"get_Default", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::LegacyLensSettings>(nullptr, ___internal_method);
}
// Ctor Parameters [CppParam { name: "FieldOfView", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "OrthographicSize", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "NearClipPlane", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "FarClipPlane", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Dutch", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ModeOverride", ty: "::GlobalNamespace::LensSettings_OverrideModes", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "GateFit", ty: "::GlobalNamespace::Camera_GateFitMode", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_SensorSize", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "LensShift", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "FocusDistance", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Iso", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ShutterSpeed", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Aperture", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "BladeCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Curvature", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "BarrelClipping", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Anamorphism", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Unity::Cinemachine::LegacyLensSettings::LegacyLensSettings(float_t  FieldOfView, float_t  OrthographicSize, float_t  NearClipPlane, float_t  FarClipPlane, float_t  Dutch, ::GlobalNamespace::LensSettings_OverrideModes  ModeOverride, ::GlobalNamespace::Camera_GateFitMode  GateFit, ::UnityEngine::Vector2  m_SensorSize, ::UnityEngine::Vector2  LensShift, float_t  FocusDistance, int32_t  Iso, float_t  ShutterSpeed, float_t  Aperture, int32_t  BladeCount, ::UnityEngine::Vector2  Curvature, float_t  BarrelClipping, float_t  Anamorphism) noexcept  {
this->FieldOfView = FieldOfView;
this->OrthographicSize = OrthographicSize;
this->NearClipPlane = NearClipPlane;
this->FarClipPlane = FarClipPlane;
this->Dutch = Dutch;
this->ModeOverride = ModeOverride;
this->GateFit = GateFit;
this->m_SensorSize = m_SensorSize;
this->LensShift = LensShift;
this->FocusDistance = FocusDistance;
this->Iso = Iso;
this->ShutterSpeed = ShutterSpeed;
this->Aperture = Aperture;
this->BladeCount = BladeCount;
this->Curvature = Curvature;
this->BarrelClipping = BarrelClipping;
this->Anamorphism = Anamorphism;
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::LegacyLensSettings::LegacyLensSettings()   {
}
