#pragma once
// IWYU pragma private; include "GlobalNamespace/OnHandTapFX.hpp"
#include "GorillaLocomotion/zzzz__StiltID_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__OnHandTapFX_def.hpp"
#include "GlobalNamespace/zzzz__FXSystemSettings_def.hpp"
#include "GlobalNamespace/zzzz__HandEffectContext_def.hpp"
#include "GlobalNamespace/zzzz__IFXEffectContext_1_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OnHandTapFX.get_effectContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::HandEffectContext* (::GlobalNamespace::OnHandTapFX::*)()>(&::GlobalNamespace::OnHandTapFX::get_effectContext)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x58fe4d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OnHandTapFX>(),
                        {"get_effectContext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OnHandTapFX.get_settings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::FXSystemSettings> (::GlobalNamespace::OnHandTapFX::*)()>(&::GlobalNamespace::OnHandTapFX::get_settings)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x58fe540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OnHandTapFX>(),
                        {"get_settings", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::HandEffectContext* GlobalNamespace::OnHandTapFX::get_effectContext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OnHandTapFX>(),
                        {"get_effectContext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::HandEffectContext*>(*this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::FXSystemSettings> GlobalNamespace::OnHandTapFX::get_settings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OnHandTapFX>(),
                        {"get_settings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::FXSystemSettings>>(*this, ___internal_method);
}
/// @brief Convert operator to "::GlobalNamespace::IFXEffectContext_1<::GlobalNamespace::HandEffectContext*>"
constexpr  GlobalNamespace::OnHandTapFX::operator ::GlobalNamespace::IFXEffectContext_1<::GlobalNamespace::HandEffectContext*>*()  {
return static_cast<::GlobalNamespace::IFXEffectContext_1<::GlobalNamespace::HandEffectContext*>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::GlobalNamespace::IFXEffectContext_1<::GlobalNamespace::HandEffectContext*>"
constexpr ::GlobalNamespace::IFXEffectContext_1<::GlobalNamespace::HandEffectContext*>* GlobalNamespace::OnHandTapFX::i___GlobalNamespace__IFXEffectContext_1___GlobalNamespace__HandEffectContext__()  {
return static_cast<::GlobalNamespace::IFXEffectContext_1<::GlobalNamespace::HandEffectContext*>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "rig", ty: "::UnityW<::GlobalNamespace::VRRig>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "tapDir", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "isDownTap", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "isLeftHand", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "stiltID", ty: "::GorillaLocomotion::StiltID", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "surfaceIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "volume", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "speed", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OnHandTapFX::OnHandTapFX(::UnityW<::GlobalNamespace::VRRig>  rig, ::UnityEngine::Vector3  tapDir, bool  isDownTap, bool  isLeftHand, ::GorillaLocomotion::StiltID  stiltID, int32_t  surfaceIndex, float_t  volume, float_t  speed) noexcept  {
this->rig = rig;
this->tapDir = tapDir;
this->isDownTap = isDownTap;
this->isLeftHand = isLeftHand;
this->stiltID = stiltID;
this->surfaceIndex = surfaceIndex;
this->volume = volume;
this->speed = speed;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OnHandTapFX::OnHandTapFX()   {
}
