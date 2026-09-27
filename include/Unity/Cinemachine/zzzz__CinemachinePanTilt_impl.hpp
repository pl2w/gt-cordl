#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachinePanTilt.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineComponentBase_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachinePanTilt_RecenterTargetModes_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachinePanTilt_ReferenceFrames_impl.hpp"
#include "Unity/Cinemachine/zzzz__InputAxis_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachinePanTilt_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "Unity/Cinemachine/zzzz__CameraState_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineCore_Stage_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineFreeLookModifier_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachinePanTilt_RecenterTargetModes_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachinePanTilt_ReferenceFrames_def.hpp"
#include "Unity/Cinemachine/zzzz__ICinemachineCamera_def.hpp"
#include "Unity/Cinemachine/zzzz__IInputAxisOwner_AxisDescriptor_def.hpp"
#include "Unity/Cinemachine/zzzz__IInputAxisOwner_def.hpp"
#include "Unity/Cinemachine/zzzz__IInputAxisResetSource_def.hpp"
#include "Unity/Cinemachine/zzzz__InputAxis_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::CinemachinePanTilt.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachinePanTilt::*)()>(&::Unity::Cinemachine::CinemachinePanTilt::OnValidate)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xaea22b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePanTilt*>(),
                        {"OnValidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachinePanTilt.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachinePanTilt::*)()>(&::Unity::Cinemachine::CinemachinePanTilt::Reset)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xaea2304;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePanTilt*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachinePanTilt.get_DefaultPan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::InputAxis (*)()>(&::Unity::Cinemachine::CinemachinePanTilt::get_DefaultPan)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xaea2388;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePanTilt*>(),
                        {"get_DefaultPan", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachinePanTilt.get_DefaultTilt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::InputAxis (*)()>(&::Unity::Cinemachine::CinemachinePanTilt::get_DefaultTilt)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xaea23d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePanTilt*>(),
                        {"get_DefaultTilt", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachinePanTilt.Unity_Cinemachine_IInputAxisOwner_GetInputAxes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachinePanTilt::*)(::System::Collections::Generic::List_1<::GlobalNamespace::IInputAxisOwner_AxisDescriptor>*)>(&::Unity::Cinemachine::CinemachinePanTilt::Unity_Cinemachine_IInputAxisOwner_GetInputAxes)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0xaea240c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePanTilt*>(),
                        {"Unity.Cinemachine.IInputAxisOwner.GetInputAxes", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::IInputAxisOwner_AxisDescriptor>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachinePanTilt.Unity_Cinemachine_IInputAxisResetSource_RegisterResetHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachinePanTilt::*)(::System::Action*)>(&::Unity::Cinemachine::CinemachinePanTilt::Unity_Cinemachine_IInputAxisResetSource_RegisterResetHandler)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xaea2670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePanTilt*>(),
                        {"Unity.Cinemachine.IInputAxisResetSource.RegisterResetHandler", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachinePanTilt.Unity_Cinemachine_IInputAxisResetSource_UnregisterResetHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachinePanTilt::*)(::System::Action*)>(&::Unity::Cinemachine::CinemachinePanTilt::Unity_Cinemachine_IInputAxisResetSource_UnregisterResetHandler)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xaea2700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePanTilt*>(),
                        {"Unity.Cinemachine.IInputAxisResetSource.UnregisterResetHandler", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachinePanTilt.Unity_Cinemachine_CinemachineFreeLookModifier_IModifierValueSource_get_NormalizedModifierValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachinePanTilt::*)()>(&::Unity::Cinemachine::CinemachinePanTilt::Unity_Cinemachine_CinemachineFreeLookModifier_IModifierValueSource_get_NormalizedModifierValue)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xaea2790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePanTilt*>(),
                        {"Unity.Cinemachine.CinemachineFreeLookModifier.IModifierValueSource.get_NormalizedModifierValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachinePanTilt.Unity_Cinemachine_IInputAxisResetSource_get_HasResetHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::CinemachinePanTilt::*)()>(&::Unity::Cinemachine::CinemachinePanTilt::Unity_Cinemachine_IInputAxisResetSource_get_HasResetHandler)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xaea27c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePanTilt*>(),
                        {"Unity.Cinemachine.IInputAxisResetSource.get_HasResetHandler", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachinePanTilt.get_IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::CinemachinePanTilt::*)()>(&::Unity::Cinemachine::CinemachinePanTilt::get_IsValid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaea27d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachinePanTilt*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachinePanTilt*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachinePanTilt.get_Stage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CinemachineCore_Stage (::Unity::Cinemachine::CinemachinePanTilt::*)()>(&::Unity::Cinemachine::CinemachinePanTilt::get_Stage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaea27e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachinePanTilt*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachinePanTilt*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachinePanTilt.PrePipelineMutateCameraState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachinePanTilt::*)(::by_ref<::Unity::Cinemachine::CameraState>, float_t)>(&::Unity::Cinemachine::CinemachinePanTilt::PrePipelineMutateCameraState)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xaea27e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachinePanTilt*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachinePanTilt*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachinePanTilt.MutateCameraState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachinePanTilt::*)(::by_ref<::Unity::Cinemachine::CameraState>, float_t)>(&::Unity::Cinemachine::CinemachinePanTilt::MutateCameraState)> {
  constexpr static std::size_t size = 0x438;
  constexpr static std::size_t addrs = 0xaea27ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachinePanTilt*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachinePanTilt*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachinePanTilt.ForceCameraPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachinePanTilt::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::Unity::Cinemachine::CinemachinePanTilt::ForceCameraPosition)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xaea2fb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachinePanTilt*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachinePanTilt*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachinePanTilt.OnTransitionFromCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::CinemachinePanTilt::*)(::Unity::Cinemachine::ICinemachineCamera*, ::UnityEngine::Vector3, float_t)>(&::Unity::Cinemachine::CinemachinePanTilt::OnTransitionFromCamera)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0xaea3294;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachinePanTilt*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachinePanTilt*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachinePanTilt.SetAxesForRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachinePanTilt::*)(::UnityEngine::Quaternion)>(&::Unity::Cinemachine::CinemachinePanTilt::SetAxesForRotation)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0xaea2fc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePanTilt*>(),
                        {"SetAxesForRotation", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachinePanTilt.GetReferenceFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::Unity::Cinemachine::CinemachinePanTilt::*)(::UnityEngine::Vector3)>(&::Unity::Cinemachine::CinemachinePanTilt::GetReferenceFrame)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0xaea2c24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePanTilt*>(),
                        {"GetReferenceFrame", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachinePanTilt.GetRecenterTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::Unity::Cinemachine::CinemachinePanTilt::*)()>(&::Unity::Cinemachine::CinemachinePanTilt::GetRecenterTarget)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0xaea2d78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePanTilt*>(),
                        {"GetRecenterTarget", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachinePanTilt._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachinePanTilt::*)()>(&::Unity::Cinemachine::CinemachinePanTilt::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xaea3428;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePanTilt*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachinePanTilt._Unity_Cinemachine_IInputAxisOwner_GetInputAxes_b__14_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::Unity::Cinemachine::InputAxis> (::Unity::Cinemachine::CinemachinePanTilt::*)()>(&::Unity::Cinemachine::CinemachinePanTilt::_Unity_Cinemachine_IInputAxisOwner_GetInputAxes_b__14_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaea34b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePanTilt*>(),
                        {"<Unity.Cinemachine.IInputAxisOwner.GetInputAxes>b__14_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachinePanTilt._Unity_Cinemachine_IInputAxisOwner_GetInputAxes_b__14_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::Unity::Cinemachine::InputAxis> (::Unity::Cinemachine::CinemachinePanTilt::*)()>(&::Unity::Cinemachine::CinemachinePanTilt::_Unity_Cinemachine_IInputAxisOwner_GetInputAxes_b__14_1)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaea34bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePanTilt*>(),
                        {"<Unity.Cinemachine.IInputAxisOwner.GetInputAxes>b__14_1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachinePanTilt._GetRecenterTarget_g__NormalizeAngle_31_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::Unity::Cinemachine::CinemachinePanTilt::_GetRecenterTarget_g__NormalizeAngle_31_0)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xaea33f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePanTilt*>(),
                        {"<GetRecenterTarget>g__NormalizeAngle|31_0", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::CinemachinePanTilt_ReferenceFrames& Unity::Cinemachine::CinemachinePanTilt::__cordl_internal_get_ReferenceFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ReferenceFrame;
}
constexpr ::GlobalNamespace::CinemachinePanTilt_ReferenceFrames const& Unity::Cinemachine::CinemachinePanTilt::__cordl_internal_get_ReferenceFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ReferenceFrame;
}
constexpr void Unity::Cinemachine::CinemachinePanTilt::__cordl_internal_set_ReferenceFrame(::GlobalNamespace::CinemachinePanTilt_ReferenceFrames  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ReferenceFrame = value;
}
constexpr ::GlobalNamespace::CinemachinePanTilt_RecenterTargetModes& Unity::Cinemachine::CinemachinePanTilt::__cordl_internal_get_RecenterTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RecenterTarget;
}
constexpr ::GlobalNamespace::CinemachinePanTilt_RecenterTargetModes const& Unity::Cinemachine::CinemachinePanTilt::__cordl_internal_get_RecenterTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RecenterTarget;
}
constexpr void Unity::Cinemachine::CinemachinePanTilt::__cordl_internal_set_RecenterTarget(::GlobalNamespace::CinemachinePanTilt_RecenterTargetModes  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RecenterTarget = value;
}
constexpr ::Unity::Cinemachine::InputAxis& Unity::Cinemachine::CinemachinePanTilt::__cordl_internal_get_PanAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PanAxis;
}
constexpr ::Unity::Cinemachine::InputAxis const& Unity::Cinemachine::CinemachinePanTilt::__cordl_internal_get_PanAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PanAxis;
}
constexpr void Unity::Cinemachine::CinemachinePanTilt::__cordl_internal_set_PanAxis(::Unity::Cinemachine::InputAxis  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PanAxis = value;
}
constexpr ::Unity::Cinemachine::InputAxis& Unity::Cinemachine::CinemachinePanTilt::__cordl_internal_get_TiltAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TiltAxis;
}
constexpr ::Unity::Cinemachine::InputAxis const& Unity::Cinemachine::CinemachinePanTilt::__cordl_internal_get_TiltAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TiltAxis;
}
constexpr void Unity::Cinemachine::CinemachinePanTilt::__cordl_internal_set_TiltAxis(::Unity::Cinemachine::InputAxis  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TiltAxis = value;
}
constexpr ::UnityEngine::Quaternion& Unity::Cinemachine::CinemachinePanTilt::__cordl_internal_get_m_PreviousCameraRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreviousCameraRotation;
}
constexpr ::UnityEngine::Quaternion const& Unity::Cinemachine::CinemachinePanTilt::__cordl_internal_get_m_PreviousCameraRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreviousCameraRotation;
}
constexpr void Unity::Cinemachine::CinemachinePanTilt::__cordl_internal_set_m_PreviousCameraRotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PreviousCameraRotation = value;
}
constexpr ::System::Action*& Unity::Cinemachine::CinemachinePanTilt::__cordl_internal_get_m_ResetHandler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ResetHandler;
}
constexpr ::System::Action* const& Unity::Cinemachine::CinemachinePanTilt::__cordl_internal_get_m_ResetHandler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ResetHandler;
}
constexpr void Unity::Cinemachine::CinemachinePanTilt::__cordl_internal_set_m_ResetHandler(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ResetHandler = value;
}
inline void Unity::Cinemachine::CinemachinePanTilt::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePanTilt*>(),
                        {"OnValidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachinePanTilt::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePanTilt*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::InputAxis Unity::Cinemachine::CinemachinePanTilt::get_DefaultPan()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePanTilt*>(),
                        {"get_DefaultPan", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::InputAxis>(nullptr, ___internal_method);
}
inline ::Unity::Cinemachine::InputAxis Unity::Cinemachine::CinemachinePanTilt::get_DefaultTilt()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePanTilt*>(),
                        {"get_DefaultTilt", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::InputAxis>(nullptr, ___internal_method);
}
inline void Unity::Cinemachine::CinemachinePanTilt::Unity_Cinemachine_IInputAxisOwner_GetInputAxes(::System::Collections::Generic::List_1<::GlobalNamespace::IInputAxisOwner_AxisDescriptor>*  axes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePanTilt*>(),
                        {"Unity.Cinemachine.IInputAxisOwner.GetInputAxes", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::IInputAxisOwner_AxisDescriptor>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, axes);
}
inline void Unity::Cinemachine::CinemachinePanTilt::Unity_Cinemachine_IInputAxisResetSource_RegisterResetHandler(::System::Action*  handler)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePanTilt*>(),
                        {"Unity.Cinemachine.IInputAxisResetSource.RegisterResetHandler", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handler);
}
inline void Unity::Cinemachine::CinemachinePanTilt::Unity_Cinemachine_IInputAxisResetSource_UnregisterResetHandler(::System::Action*  handler)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePanTilt*>(),
                        {"Unity.Cinemachine.IInputAxisResetSource.UnregisterResetHandler", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handler);
}
inline float_t Unity::Cinemachine::CinemachinePanTilt::Unity_Cinemachine_CinemachineFreeLookModifier_IModifierValueSource_get_NormalizedModifierValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePanTilt*>(),
                        {"Unity.Cinemachine.CinemachineFreeLookModifier.IModifierValueSource.get_NormalizedModifierValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool Unity::Cinemachine::CinemachinePanTilt::Unity_Cinemachine_IInputAxisResetSource_get_HasResetHandler()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePanTilt*>(),
                        {"Unity.Cinemachine.IInputAxisResetSource.get_HasResetHandler", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Unity::Cinemachine::CinemachinePanTilt::get_IsValid()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachinePanTilt*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GlobalNamespace::CinemachineCore_Stage Unity::Cinemachine::CinemachinePanTilt::get_Stage()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachinePanTilt*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CinemachineCore_Stage>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachinePanTilt::PrePipelineMutateCameraState(::by_ref<::Unity::Cinemachine::CameraState>  state, float_t  deltaTime)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachinePanTilt*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state, deltaTime);
}
inline void Unity::Cinemachine::CinemachinePanTilt::MutateCameraState(::by_ref<::Unity::Cinemachine::CameraState>  curState, float_t  deltaTime)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachinePanTilt*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, curState, deltaTime);
}
inline void Unity::Cinemachine::CinemachinePanTilt::ForceCameraPosition(::UnityEngine::Vector3  pos, ::UnityEngine::Quaternion  rot)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachinePanTilt*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pos, rot);
}
inline bool Unity::Cinemachine::CinemachinePanTilt::OnTransitionFromCamera(::Unity::Cinemachine::ICinemachineCamera*  fromCam, ::UnityEngine::Vector3  worldUp, float_t  deltaTime)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachinePanTilt*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, fromCam, worldUp, deltaTime);
}
inline void Unity::Cinemachine::CinemachinePanTilt::SetAxesForRotation(::UnityEngine::Quaternion  targetRot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePanTilt*>(),
                        {"SetAxesForRotation", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetRot);
}
inline ::UnityEngine::Quaternion Unity::Cinemachine::CinemachinePanTilt::GetReferenceFrame(::UnityEngine::Vector3  up)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePanTilt*>(),
                        {"GetReferenceFrame", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method, up);
}
inline ::UnityEngine::Vector2 Unity::Cinemachine::CinemachinePanTilt::GetRecenterTarget()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePanTilt*>(),
                        {"GetRecenterTarget", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachinePanTilt::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePanTilt*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::by_ref<::Unity::Cinemachine::InputAxis> Unity::Cinemachine::CinemachinePanTilt::_Unity_Cinemachine_IInputAxisOwner_GetInputAxes_b__14_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePanTilt*>(),
                        {"<Unity.Cinemachine.IInputAxisOwner.GetInputAxes>b__14_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::Unity::Cinemachine::InputAxis>>(this, ___internal_method);
}
inline ::by_ref<::Unity::Cinemachine::InputAxis> Unity::Cinemachine::CinemachinePanTilt::_Unity_Cinemachine_IInputAxisOwner_GetInputAxes_b__14_1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePanTilt*>(),
                        {"<Unity.Cinemachine.IInputAxisOwner.GetInputAxes>b__14_1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::Unity::Cinemachine::InputAxis>>(this, ___internal_method);
}
inline float_t Unity::Cinemachine::CinemachinePanTilt::_GetRecenterTarget_g__NormalizeAngle_31_0(float_t  angle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePanTilt*>(),
                        {"<GetRecenterTarget>g__NormalizeAngle|31_0", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, angle);
}
inline ::Unity::Cinemachine::CinemachinePanTilt* Unity::Cinemachine::CinemachinePanTilt::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachinePanTilt*>());
}
/// @brief Convert operator to "::Unity::Cinemachine::IInputAxisOwner"
constexpr  Unity::Cinemachine::CinemachinePanTilt::operator ::Unity::Cinemachine::IInputAxisOwner*() noexcept {
return static_cast<::Unity::Cinemachine::IInputAxisOwner*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Cinemachine::IInputAxisOwner"
constexpr ::Unity::Cinemachine::IInputAxisOwner* Unity::Cinemachine::CinemachinePanTilt::i___Unity__Cinemachine__IInputAxisOwner() noexcept {
return static_cast<::Unity::Cinemachine::IInputAxisOwner*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Unity::Cinemachine::IInputAxisResetSource"
constexpr  Unity::Cinemachine::CinemachinePanTilt::operator ::Unity::Cinemachine::IInputAxisResetSource*() noexcept {
return static_cast<::Unity::Cinemachine::IInputAxisResetSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Cinemachine::IInputAxisResetSource"
constexpr ::Unity::Cinemachine::IInputAxisResetSource* Unity::Cinemachine::CinemachinePanTilt::i___Unity__Cinemachine__IInputAxisResetSource() noexcept {
return static_cast<::Unity::Cinemachine::IInputAxisResetSource*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Unity::Cinemachine::CinemachineFreeLookModifier_IModifierValueSource"
constexpr  Unity::Cinemachine::CinemachinePanTilt::operator ::Unity::Cinemachine::CinemachineFreeLookModifier_IModifierValueSource*() noexcept {
return static_cast<::Unity::Cinemachine::CinemachineFreeLookModifier_IModifierValueSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Cinemachine::CinemachineFreeLookModifier_IModifierValueSource"
constexpr ::Unity::Cinemachine::CinemachineFreeLookModifier_IModifierValueSource* Unity::Cinemachine::CinemachinePanTilt::i___Unity__Cinemachine__CinemachineFreeLookModifier_IModifierValueSource() noexcept {
return static_cast<::Unity::Cinemachine::CinemachineFreeLookModifier_IModifierValueSource*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachinePanTilt::CinemachinePanTilt()   {
}
