#pragma once
// IWYU pragma private; include "Unity/Cinemachine/Cinemachine3OrbitRig_Settings.hpp"
#include "Unity/Cinemachine/zzzz__Cinemachine3OrbitRig_Orbit_impl.hpp"
#include "Unity/Cinemachine/zzzz__Cinemachine3OrbitRig_Settings_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Cinemachine3OrbitRig_Settings.get_Default
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Cinemachine3OrbitRig_Settings (*)()>(&::GlobalNamespace::Cinemachine3OrbitRig_Settings::get_Default)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xae9fb78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Cinemachine3OrbitRig_Settings>(),
                        {"get_Default", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::Cinemachine3OrbitRig_Settings GlobalNamespace::Cinemachine3OrbitRig_Settings::get_Default()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Cinemachine3OrbitRig_Settings>(),
                        {"get_Default", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Cinemachine3OrbitRig_Settings>(nullptr, ___internal_method);
}
// Ctor Parameters [CppParam { name: "Top", ty: "::GlobalNamespace::Cinemachine3OrbitRig_Orbit", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Center", ty: "::GlobalNamespace::Cinemachine3OrbitRig_Orbit", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Bottom", ty: "::GlobalNamespace::Cinemachine3OrbitRig_Orbit", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "SplineCurvature", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Cinemachine3OrbitRig_Settings::Cinemachine3OrbitRig_Settings(::GlobalNamespace::Cinemachine3OrbitRig_Orbit  Top, ::GlobalNamespace::Cinemachine3OrbitRig_Orbit  Center, ::GlobalNamespace::Cinemachine3OrbitRig_Orbit  Bottom, float_t  SplineCurvature) noexcept  {
this->Top = Top;
this->Center = Center;
this->Bottom = Bottom;
this->SplineCurvature = SplineCurvature;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Cinemachine3OrbitRig_Settings::Cinemachine3OrbitRig_Settings()   {
}
