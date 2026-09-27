#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachinePOV.hpp"
#include "Unity/Cinemachine/zzzz__AxisState_Recentering_impl.hpp"
#include "Unity/Cinemachine/zzzz__AxisState_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineComponentBase_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachinePOV_RecenterTargetMode_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachinePOV_def.hpp"
#include "Unity/Cinemachine/zzzz__AxisState_def.hpp"
#include "Unity/Cinemachine/zzzz__CameraState_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineCore_Stage_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineFreeLookModifier_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachinePOV_RecenterTargetMode_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachinePanTilt_def.hpp"
#include "Unity/Cinemachine/zzzz__ICinemachineCamera_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::CinemachinePOV.Unity_Cinemachine_CinemachineFreeLookModifier_IModifierValueSource_get_NormalizedModifierValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachinePOV::*)()>(&::Unity::Cinemachine::CinemachinePOV::Unity_Cinemachine_CinemachineFreeLookModifier_IModifierValueSource_get_NormalizedModifierValue)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xaed83a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePOV*>(),
                        {"Unity.Cinemachine.CinemachineFreeLookModifier.IModifierValueSource.get_NormalizedModifierValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachinePOV.get_IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::CinemachinePOV::*)()>(&::Unity::Cinemachine::CinemachinePOV::get_IsValid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaed83d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachinePOV*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachinePOV*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachinePOV.get_Stage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CinemachineCore_Stage (::Unity::Cinemachine::CinemachinePOV::*)()>(&::Unity::Cinemachine::CinemachinePOV::get_Stage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaed83e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachinePOV*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachinePOV*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachinePOV.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachinePOV::*)()>(&::Unity::Cinemachine::CinemachinePOV::OnValidate)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xaed83e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePOV*>(),
                        {"OnValidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachinePOV.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachinePOV::*)()>(&::Unity::Cinemachine::CinemachinePOV::OnEnable)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xaed8424;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachinePOV*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachinePOV*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachinePOV.Unity_Cinemachine_AxisState_IRequiresInput_RequiresInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::CinemachinePOV::*)()>(&::Unity::Cinemachine::CinemachinePOV::Unity_Cinemachine_AxisState_IRequiresInput_RequiresInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaed8548;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePOV*>(),
                        {"Unity.Cinemachine.AxisState.IRequiresInput.RequiresInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachinePOV.UpdateInputAxisProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachinePOV::*)()>(&::Unity::Cinemachine::CinemachinePOV::UpdateInputAxisProvider)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xaed8440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePOV*>(),
                        {"UpdateInputAxisProvider", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachinePOV.PrePipelineMutateCameraState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachinePOV::*)(::by_ref<::Unity::Cinemachine::CameraState>, float_t)>(&::Unity::Cinemachine::CinemachinePOV::PrePipelineMutateCameraState)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xaed8550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachinePOV*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachinePOV*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachinePOV.MutateCameraState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachinePOV::*)(::by_ref<::Unity::Cinemachine::CameraState>, float_t)>(&::Unity::Cinemachine::CinemachinePOV::MutateCameraState)> {
  constexpr static std::size_t size = 0x4bc;
  constexpr static std::size_t addrs = 0xaed8554;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachinePOV*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachinePOV*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachinePOV.GetRecenterTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::Unity::Cinemachine::CinemachinePOV::*)()>(&::Unity::Cinemachine::CinemachinePOV::GetRecenterTarget)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0xaed8a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePOV*>(),
                        {"GetRecenterTarget", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachinePOV.NormalizeAngle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::Unity::Cinemachine::CinemachinePOV::NormalizeAngle)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xaed8c78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePOV*>(),
                        {"NormalizeAngle", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachinePOV.ForceCameraPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachinePOV::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::Unity::Cinemachine::CinemachinePOV::ForceCameraPosition)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xaed8ca8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachinePOV*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachinePOV*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachinePOV.OnTransitionFromCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::CinemachinePOV::*)(::Unity::Cinemachine::ICinemachineCamera*, ::UnityEngine::Vector3, float_t)>(&::Unity::Cinemachine::CinemachinePOV::OnTransitionFromCamera)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xaed8ffc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachinePOV*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachinePOV*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachinePOV.SetAxesForRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachinePOV::*)(::UnityEngine::Quaternion)>(&::Unity::Cinemachine::CinemachinePOV::SetAxesForRotation)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0xaed8cbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePOV*>(),
                        {"SetAxesForRotation", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachinePOV.UpgradeToCm3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachinePOV::*)(::Unity::Cinemachine::CinemachinePanTilt*)>(&::Unity::Cinemachine::CinemachinePOV::UpgradeToCm3)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xaed9190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePOV*>(),
                        {"UpgradeToCm3", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachinePanTilt*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachinePOV._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachinePOV::*)()>(&::Unity::Cinemachine::CinemachinePOV::_ctor)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0xaed91f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePOV*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::CinemachinePOV_RecenterTargetMode& Unity::Cinemachine::CinemachinePOV::__cordl_internal_get_m_RecenterTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RecenterTarget;
}
constexpr ::GlobalNamespace::CinemachinePOV_RecenterTargetMode const& Unity::Cinemachine::CinemachinePOV::__cordl_internal_get_m_RecenterTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RecenterTarget;
}
constexpr void Unity::Cinemachine::CinemachinePOV::__cordl_internal_set_m_RecenterTarget(::GlobalNamespace::CinemachinePOV_RecenterTargetMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RecenterTarget = value;
}
constexpr ::Unity::Cinemachine::AxisState& Unity::Cinemachine::CinemachinePOV::__cordl_internal_get_m_VerticalAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_VerticalAxis;
}
constexpr ::Unity::Cinemachine::AxisState const& Unity::Cinemachine::CinemachinePOV::__cordl_internal_get_m_VerticalAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_VerticalAxis;
}
constexpr void Unity::Cinemachine::CinemachinePOV::__cordl_internal_set_m_VerticalAxis(::Unity::Cinemachine::AxisState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_VerticalAxis = value;
}
constexpr ::GlobalNamespace::AxisState_Recentering& Unity::Cinemachine::CinemachinePOV::__cordl_internal_get_m_VerticalRecentering()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_VerticalRecentering;
}
constexpr ::GlobalNamespace::AxisState_Recentering const& Unity::Cinemachine::CinemachinePOV::__cordl_internal_get_m_VerticalRecentering() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_VerticalRecentering;
}
constexpr void Unity::Cinemachine::CinemachinePOV::__cordl_internal_set_m_VerticalRecentering(::GlobalNamespace::AxisState_Recentering  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_VerticalRecentering = value;
}
constexpr ::Unity::Cinemachine::AxisState& Unity::Cinemachine::CinemachinePOV::__cordl_internal_get_m_HorizontalAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HorizontalAxis;
}
constexpr ::Unity::Cinemachine::AxisState const& Unity::Cinemachine::CinemachinePOV::__cordl_internal_get_m_HorizontalAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HorizontalAxis;
}
constexpr void Unity::Cinemachine::CinemachinePOV::__cordl_internal_set_m_HorizontalAxis(::Unity::Cinemachine::AxisState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HorizontalAxis = value;
}
constexpr ::GlobalNamespace::AxisState_Recentering& Unity::Cinemachine::CinemachinePOV::__cordl_internal_get_m_HorizontalRecentering()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HorizontalRecentering;
}
constexpr ::GlobalNamespace::AxisState_Recentering const& Unity::Cinemachine::CinemachinePOV::__cordl_internal_get_m_HorizontalRecentering() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HorizontalRecentering;
}
constexpr void Unity::Cinemachine::CinemachinePOV::__cordl_internal_set_m_HorizontalRecentering(::GlobalNamespace::AxisState_Recentering  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HorizontalRecentering = value;
}
constexpr bool& Unity::Cinemachine::CinemachinePOV::__cordl_internal_get_m_ApplyBeforeBody()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ApplyBeforeBody;
}
constexpr bool const& Unity::Cinemachine::CinemachinePOV::__cordl_internal_get_m_ApplyBeforeBody() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ApplyBeforeBody;
}
constexpr void Unity::Cinemachine::CinemachinePOV::__cordl_internal_set_m_ApplyBeforeBody(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ApplyBeforeBody = value;
}
constexpr ::UnityEngine::Quaternion& Unity::Cinemachine::CinemachinePOV::__cordl_internal_get_m_PreviousCameraRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreviousCameraRotation;
}
constexpr ::UnityEngine::Quaternion const& Unity::Cinemachine::CinemachinePOV::__cordl_internal_get_m_PreviousCameraRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreviousCameraRotation;
}
constexpr void Unity::Cinemachine::CinemachinePOV::__cordl_internal_set_m_PreviousCameraRotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PreviousCameraRotation = value;
}
inline float_t Unity::Cinemachine::CinemachinePOV::Unity_Cinemachine_CinemachineFreeLookModifier_IModifierValueSource_get_NormalizedModifierValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePOV*>(),
                        {"Unity.Cinemachine.CinemachineFreeLookModifier.IModifierValueSource.get_NormalizedModifierValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool Unity::Cinemachine::CinemachinePOV::get_IsValid()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachinePOV*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GlobalNamespace::CinemachineCore_Stage Unity::Cinemachine::CinemachinePOV::get_Stage()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachinePOV*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CinemachineCore_Stage>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachinePOV::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePOV*>(),
                        {"OnValidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachinePOV::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachinePOV*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Unity::Cinemachine::CinemachinePOV::Unity_Cinemachine_AxisState_IRequiresInput_RequiresInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePOV*>(),
                        {"Unity.Cinemachine.AxisState.IRequiresInput.RequiresInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachinePOV::UpdateInputAxisProvider()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePOV*>(),
                        {"UpdateInputAxisProvider", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachinePOV::PrePipelineMutateCameraState(::by_ref<::Unity::Cinemachine::CameraState>  state, float_t  deltaTime)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachinePOV*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state, deltaTime);
}
inline void Unity::Cinemachine::CinemachinePOV::MutateCameraState(::by_ref<::Unity::Cinemachine::CameraState>  curState, float_t  deltaTime)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachinePOV*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, curState, deltaTime);
}
inline ::UnityEngine::Vector2 Unity::Cinemachine::CinemachinePOV::GetRecenterTarget()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePOV*>(),
                        {"GetRecenterTarget", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline float_t Unity::Cinemachine::CinemachinePOV::NormalizeAngle(float_t  angle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePOV*>(),
                        {"NormalizeAngle", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, angle);
}
inline void Unity::Cinemachine::CinemachinePOV::ForceCameraPosition(::UnityEngine::Vector3  pos, ::UnityEngine::Quaternion  rot)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachinePOV*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pos, rot);
}
inline bool Unity::Cinemachine::CinemachinePOV::OnTransitionFromCamera(::Unity::Cinemachine::ICinemachineCamera*  fromCam, ::UnityEngine::Vector3  worldUp, float_t  deltaTime)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachinePOV*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, fromCam, worldUp, deltaTime);
}
inline void Unity::Cinemachine::CinemachinePOV::SetAxesForRotation(::UnityEngine::Quaternion  targetRot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePOV*>(),
                        {"SetAxesForRotation", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetRot);
}
inline void Unity::Cinemachine::CinemachinePOV::UpgradeToCm3(::Unity::Cinemachine::CinemachinePanTilt*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePOV*>(),
                        {"UpgradeToCm3", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachinePanTilt*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c);
}
inline void Unity::Cinemachine::CinemachinePOV::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePOV*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::CinemachinePOV* Unity::Cinemachine::CinemachinePOV::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachinePOV*>());
}
/// @brief Convert operator to "::Unity::Cinemachine::CinemachineFreeLookModifier_IModifierValueSource"
constexpr  Unity::Cinemachine::CinemachinePOV::operator ::Unity::Cinemachine::CinemachineFreeLookModifier_IModifierValueSource*() noexcept {
return static_cast<::Unity::Cinemachine::CinemachineFreeLookModifier_IModifierValueSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Cinemachine::CinemachineFreeLookModifier_IModifierValueSource"
constexpr ::Unity::Cinemachine::CinemachineFreeLookModifier_IModifierValueSource* Unity::Cinemachine::CinemachinePOV::i___Unity__Cinemachine__CinemachineFreeLookModifier_IModifierValueSource() noexcept {
return static_cast<::Unity::Cinemachine::CinemachineFreeLookModifier_IModifierValueSource*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Unity::Cinemachine::AxisState_IRequiresInput"
constexpr  Unity::Cinemachine::CinemachinePOV::operator ::Unity::Cinemachine::AxisState_IRequiresInput*() noexcept {
return static_cast<::Unity::Cinemachine::AxisState_IRequiresInput*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Cinemachine::AxisState_IRequiresInput"
constexpr ::Unity::Cinemachine::AxisState_IRequiresInput* Unity::Cinemachine::CinemachinePOV::i___Unity__Cinemachine__AxisState_IRequiresInput() noexcept {
return static_cast<::Unity::Cinemachine::AxisState_IRequiresInput*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachinePOV::CinemachinePOV()   {
}
