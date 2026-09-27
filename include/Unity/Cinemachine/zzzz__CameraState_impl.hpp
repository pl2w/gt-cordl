#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CameraState.hpp"
#include "Unity/Cinemachine/zzzz__CameraState_BlendHints_impl.hpp"
#include "Unity/Cinemachine/zzzz__CameraState_CustomBlendableItems_impl.hpp"
#include "Unity/Cinemachine/zzzz__LensSettings_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Unity/Cinemachine/zzzz__CameraState_def.hpp"
#include "Unity/Cinemachine/zzzz__CameraState_BlendHints_def.hpp"
#include "Unity/Cinemachine/zzzz__CameraState_CustomBlendableItems_Item_def.hpp"
#include "Unity/Cinemachine/zzzz__CameraState_CustomBlendableItems_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::CameraState.get_Default
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::CameraState (*)()>(&::Unity::Cinemachine::CameraState::get_Default)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0xaeab0dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraState>(),
                        {"get_Default", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CameraState.AddCustomBlendable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CameraState::*)(::GlobalNamespace::CustomBlendableItems_CameraState_Item)>(&::Unity::Cinemachine::CameraState::AddCustomBlendable)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0xaeab438;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraState>(),
                        {"AddCustomBlendable", {}, {::i2c::type_of<::GlobalNamespace::CustomBlendableItems_CameraState_Item>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CameraState.Lerp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::CameraState (*)(::by_ref<::Unity::Cinemachine::CameraState>, ::by_ref<::Unity::Cinemachine::CameraState>, float_t)>(&::Unity::Cinemachine::CameraState::Lerp)> {
  constexpr static std::size_t size = 0xdb4;
  constexpr static std::size_t addrs = 0xaeab8f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraState>(),
                        {"Lerp", {}, {::i2c::type_of<::by_ref<::Unity::Cinemachine::CameraState>>(), ::i2c::type_of<::by_ref<::Unity::Cinemachine::CameraState>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CameraState.InterpolateFOV
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t, float_t, float_t)>(&::Unity::Cinemachine::CameraState::InterpolateFOV)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xaeac888;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraState>(),
                        {"InterpolateFOV", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CameraState.ApplyPosBlendHint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, ::GlobalNamespace::CameraState_BlendHints, ::UnityEngine::Vector3, ::GlobalNamespace::CameraState_BlendHints, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::Unity::Cinemachine::CameraState::ApplyPosBlendHint)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xaeac780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraState>(),
                        {"ApplyPosBlendHint", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::GlobalNamespace::CameraState_BlendHints>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::GlobalNamespace::CameraState_BlendHints>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CameraState.ApplyRotBlendHint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::Quaternion, ::GlobalNamespace::CameraState_BlendHints, ::UnityEngine::Quaternion, ::GlobalNamespace::CameraState_BlendHints, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion)>(&::Unity::Cinemachine::CameraState::ApplyRotBlendHint)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xaeac7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraState>(),
                        {"ApplyRotBlendHint", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::GlobalNamespace::CameraState_BlendHints>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::GlobalNamespace::CameraState_BlendHints>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CameraState.InterpolatePosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, ::GlobalNamespace::CameraState_BlendHints, ::UnityEngine::Vector3)>(&::Unity::Cinemachine::CameraState::InterpolatePosition)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0xaeac978;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraState>(),
                        {"InterpolatePosition", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::CameraState_BlendHints>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
inline void Unity::Cinemachine::CameraState::setStaticF_kNoPoint(::UnityEngine::Vector3  value)  {
::cordl_internals::setStaticField<::UnityEngine::Vector3, "kNoPoint", ::Unity::Cinemachine::CameraState>(std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 Unity::Cinemachine::CameraState::getStaticF_kNoPoint()  {
return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "kNoPoint", ::Unity::Cinemachine::CameraState>();
}
inline ::Unity::Cinemachine::CameraState Unity::Cinemachine::CameraState::get_Default()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraState>(),
                        {"get_Default", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::CameraState>(nullptr, ___internal_method);
}
inline void Unity::Cinemachine::CameraState::AddCustomBlendable(::GlobalNamespace::CustomBlendableItems_CameraState_Item  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraState>(),
                        {"AddCustomBlendable", {}, {::i2c::type_of<::GlobalNamespace::CustomBlendableItems_CameraState_Item>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, b);
}
inline ::Unity::Cinemachine::CameraState Unity::Cinemachine::CameraState::Lerp(/* [IsReadOnly] */ ::by_ref<::Unity::Cinemachine::CameraState>  stateA, /* [IsReadOnly] */ ::by_ref<::Unity::Cinemachine::CameraState>  stateB, float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraState>(),
                        {"Lerp", {}, {::i2c::type_of<::by_ref<::Unity::Cinemachine::CameraState>>(), ::i2c::type_of<::by_ref<::Unity::Cinemachine::CameraState>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::CameraState>(nullptr, ___internal_method, stateA, stateB, t);
}
inline float_t Unity::Cinemachine::CameraState::InterpolateFOV(float_t  fovA, float_t  fovB, float_t  dA, float_t  dB, float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraState>(),
                        {"InterpolateFOV", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, fovA, fovB, dA, dB, t);
}
inline ::UnityEngine::Vector3 Unity::Cinemachine::CameraState::ApplyPosBlendHint(::UnityEngine::Vector3  posA, ::GlobalNamespace::CameraState_BlendHints  hintA, ::UnityEngine::Vector3  posB, ::GlobalNamespace::CameraState_BlendHints  hintB, ::UnityEngine::Vector3  original, ::UnityEngine::Vector3  blended)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraState>(),
                        {"ApplyPosBlendHint", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::GlobalNamespace::CameraState_BlendHints>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::GlobalNamespace::CameraState_BlendHints>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, posA, hintA, posB, hintB, original, blended);
}
inline ::UnityEngine::Quaternion Unity::Cinemachine::CameraState::ApplyRotBlendHint(::UnityEngine::Quaternion  rotA, ::GlobalNamespace::CameraState_BlendHints  hintA, ::UnityEngine::Quaternion  rotB, ::GlobalNamespace::CameraState_BlendHints  hintB, ::UnityEngine::Quaternion  original, ::UnityEngine::Quaternion  blended)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraState>(),
                        {"ApplyRotBlendHint", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::GlobalNamespace::CameraState_BlendHints>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::GlobalNamespace::CameraState_BlendHints>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, rotA, hintA, rotB, hintB, original, blended);
}
inline ::UnityEngine::Vector3 Unity::Cinemachine::CameraState::InterpolatePosition(::UnityEngine::Vector3  posA, ::UnityEngine::Vector3  pivotA, ::UnityEngine::Vector3  posB, ::UnityEngine::Vector3  pivotB, float_t  t, ::GlobalNamespace::CameraState_BlendHints  blendHint, ::UnityEngine::Vector3  up)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraState>(),
                        {"InterpolatePosition", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::CameraState_BlendHints>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, posA, pivotA, posB, pivotB, t, blendHint, up);
}
// Ctor Parameters [CppParam { name: "Lens", ty: "::Unity::Cinemachine::LensSettings", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ReferenceUp", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ReferenceLookAt", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "RawPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "RawOrientation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "RotationDampingBypass", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ShotQuality", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "PositionCorrection", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "OrientationCorrection", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "BlendHint", ty: "::GlobalNamespace::CameraState_BlendHints", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "CustomBlendables", ty: "::GlobalNamespace::CameraState_CustomBlendableItems", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Unity::Cinemachine::CameraState::CameraState(::Unity::Cinemachine::LensSettings  Lens, ::UnityEngine::Vector3  ReferenceUp, ::UnityEngine::Vector3  ReferenceLookAt, ::UnityEngine::Vector3  RawPosition, ::UnityEngine::Quaternion  RawOrientation, ::UnityEngine::Quaternion  RotationDampingBypass, float_t  ShotQuality, ::UnityEngine::Vector3  PositionCorrection, ::UnityEngine::Quaternion  OrientationCorrection, ::GlobalNamespace::CameraState_BlendHints  BlendHint, ::GlobalNamespace::CameraState_CustomBlendableItems  CustomBlendables) noexcept  {
this->Lens = Lens;
this->ReferenceUp = ReferenceUp;
this->ReferenceLookAt = ReferenceLookAt;
this->RawPosition = RawPosition;
this->RawOrientation = RawOrientation;
this->RotationDampingBypass = RotationDampingBypass;
this->ShotQuality = ShotQuality;
this->PositionCorrection = PositionCorrection;
this->OrientationCorrection = OrientationCorrection;
this->BlendHint = BlendHint;
this->CustomBlendables = CustomBlendables;
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CameraState::CameraState()   {
}
