#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachinePositionComposer.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineComponentBase_impl.hpp"
#include "Unity/Cinemachine/zzzz__LookaheadSettings_impl.hpp"
#include "Unity/Cinemachine/zzzz__PositionPredictor_impl.hpp"
#include "Unity/Cinemachine/zzzz__ScreenComposerSettings_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachinePositionComposer_def.hpp"
#include "Unity/Cinemachine/zzzz__CameraState_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineCore_Stage_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineFreeLookModifier_def.hpp"
#include "Unity/Cinemachine/zzzz__ICinemachineCamera_def.hpp"
#include "Unity/Cinemachine/zzzz__ScreenComposerSettings_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::CinemachinePositionComposer.get_GetEffectiveComposition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::ScreenComposerSettings (::Unity::Cinemachine::CinemachinePositionComposer::*)()>(&::Unity::Cinemachine::CinemachinePositionComposer::get_GetEffectiveComposition)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xaea34c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePositionComposer*>(),
                        {"get_GetEffectiveComposition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachinePositionComposer.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachinePositionComposer::*)()>(&::Unity::Cinemachine::CinemachinePositionComposer::Reset)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xaea34dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePositionComposer*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachinePositionComposer.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachinePositionComposer::*)()>(&::Unity::Cinemachine::CinemachinePositionComposer::OnValidate)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xaea35ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePositionComposer*>(),
                        {"OnValidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachinePositionComposer.Unity_Cinemachine_CinemachineFreeLookModifier_IModifiableComposition_get_Composition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::ScreenComposerSettings (::Unity::Cinemachine::CinemachinePositionComposer::*)()>(&::Unity::Cinemachine::CinemachinePositionComposer::Unity_Cinemachine_CinemachineFreeLookModifier_IModifiableComposition_get_Composition)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xaea35f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePositionComposer*>(),
                        {"Unity.Cinemachine.CinemachineFreeLookModifier.IModifiableComposition.get_Composition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachinePositionComposer.Unity_Cinemachine_CinemachineFreeLookModifier_IModifiableComposition_set_Composition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachinePositionComposer::*)(::Unity::Cinemachine::ScreenComposerSettings)>(&::Unity::Cinemachine::CinemachinePositionComposer::Unity_Cinemachine_CinemachineFreeLookModifier_IModifiableComposition_set_Composition)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xaea360c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePositionComposer*>(),
                        {"Unity.Cinemachine.CinemachineFreeLookModifier.IModifiableComposition.set_Composition", {}, {::i2c::type_of<::Unity::Cinemachine::ScreenComposerSettings>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachinePositionComposer.Unity_Cinemachine_CinemachineFreeLookModifier_IModifiablePositionDamping_get_PositionDamping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Unity::Cinemachine::CinemachinePositionComposer::*)()>(&::Unity::Cinemachine::CinemachinePositionComposer::Unity_Cinemachine_CinemachineFreeLookModifier_IModifiablePositionDamping_get_PositionDamping)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xaea3620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePositionComposer*>(),
                        {"Unity.Cinemachine.CinemachineFreeLookModifier.IModifiablePositionDamping.get_PositionDamping", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachinePositionComposer.Unity_Cinemachine_CinemachineFreeLookModifier_IModifiablePositionDamping_set_PositionDamping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachinePositionComposer::*)(::UnityEngine::Vector3)>(&::Unity::Cinemachine::CinemachinePositionComposer::Unity_Cinemachine_CinemachineFreeLookModifier_IModifiablePositionDamping_set_PositionDamping)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xaea362c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePositionComposer*>(),
                        {"Unity.Cinemachine.CinemachineFreeLookModifier.IModifiablePositionDamping.set_PositionDamping", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachinePositionComposer.Unity_Cinemachine_CinemachineFreeLookModifier_IModifiableDistance_get_Distance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachinePositionComposer::*)()>(&::Unity::Cinemachine::CinemachinePositionComposer::Unity_Cinemachine_CinemachineFreeLookModifier_IModifiableDistance_get_Distance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaea3638;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePositionComposer*>(),
                        {"Unity.Cinemachine.CinemachineFreeLookModifier.IModifiableDistance.get_Distance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachinePositionComposer.Unity_Cinemachine_CinemachineFreeLookModifier_IModifiableDistance_set_Distance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachinePositionComposer::*)(float_t)>(&::Unity::Cinemachine::CinemachinePositionComposer::Unity_Cinemachine_CinemachineFreeLookModifier_IModifiableDistance_set_Distance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaea3640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePositionComposer*>(),
                        {"Unity.Cinemachine.CinemachineFreeLookModifier.IModifiableDistance.set_Distance", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachinePositionComposer.get_IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::CinemachinePositionComposer::*)()>(&::Unity::Cinemachine::CinemachinePositionComposer::get_IsValid)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xaea3648;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachinePositionComposer*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachinePositionComposer*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachinePositionComposer.get_Stage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CinemachineCore_Stage (::Unity::Cinemachine::CinemachinePositionComposer::*)()>(&::Unity::Cinemachine::CinemachinePositionComposer::get_Stage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaea36d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachinePositionComposer*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachinePositionComposer*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachinePositionComposer.get_BodyAppliesAfterAim
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::CinemachinePositionComposer::*)()>(&::Unity::Cinemachine::CinemachinePositionComposer::get_BodyAppliesAfterAim)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaea36e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachinePositionComposer*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachinePositionComposer*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachinePositionComposer.get_TrackedPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Unity::Cinemachine::CinemachinePositionComposer::*)()>(&::Unity::Cinemachine::CinemachinePositionComposer::get_TrackedPoint)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xaea36e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePositionComposer*>(),
                        {"get_TrackedPoint", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachinePositionComposer.set_TrackedPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachinePositionComposer::*)(::UnityEngine::Vector3)>(&::Unity::Cinemachine::CinemachinePositionComposer::set_TrackedPoint)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xaea36f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePositionComposer*>(),
                        {"set_TrackedPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachinePositionComposer.OnTargetObjectWarped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachinePositionComposer::*)(::UnityEngine::Transform*, ::UnityEngine::Vector3)>(&::Unity::Cinemachine::CinemachinePositionComposer::OnTargetObjectWarped)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xaea3700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachinePositionComposer*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachinePositionComposer*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachinePositionComposer.ForceCameraPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachinePositionComposer::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::Unity::Cinemachine::CinemachinePositionComposer::ForceCameraPosition)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xaea37fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachinePositionComposer*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachinePositionComposer*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachinePositionComposer.GetMaxDampTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachinePositionComposer::*)()>(&::Unity::Cinemachine::CinemachinePositionComposer::GetMaxDampTime)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xaea38ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachinePositionComposer*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachinePositionComposer*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachinePositionComposer.OnTransitionFromCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::CinemachinePositionComposer::*)(::Unity::Cinemachine::ICinemachineCamera*, ::UnityEngine::Vector3, float_t)>(&::Unity::Cinemachine::CinemachinePositionComposer::OnTransitionFromCamera)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0xaea3908;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachinePositionComposer*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachinePositionComposer*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachinePositionComposer.ScreenToOrtho
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (::Unity::Cinemachine::CinemachinePositionComposer::*)(::UnityEngine::Rect, float_t, float_t)>(&::Unity::Cinemachine::CinemachinePositionComposer::ScreenToOrtho)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xaea3ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePositionComposer*>(),
                        {"ScreenToOrtho", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachinePositionComposer.OrthoOffsetToScreenBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Unity::Cinemachine::CinemachinePositionComposer::*)(::UnityEngine::Vector3, ::UnityEngine::Rect)>(&::Unity::Cinemachine::CinemachinePositionComposer::OrthoOffsetToScreenBounds)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xaea3b14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePositionComposer*>(),
                        {"OrthoOffsetToScreenBounds", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Rect>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachinePositionComposer.MutateCameraState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachinePositionComposer::*)(::by_ref<::Unity::Cinemachine::CameraState>, float_t)>(&::Unity::Cinemachine::CinemachinePositionComposer::MutateCameraState)> {
  constexpr static std::size_t size = 0xab0;
  constexpr static std::size_t addrs = 0xaea3bb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachinePositionComposer*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachinePositionComposer*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachinePositionComposer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachinePositionComposer::*)()>(&::Unity::Cinemachine::CinemachinePositionComposer::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xaea4664;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePositionComposer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Unity::Cinemachine::CinemachinePositionComposer::__cordl_internal_get_CameraDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CameraDistance;
}
constexpr float_t const& Unity::Cinemachine::CinemachinePositionComposer::__cordl_internal_get_CameraDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CameraDistance;
}
constexpr void Unity::Cinemachine::CinemachinePositionComposer::__cordl_internal_set_CameraDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CameraDistance = value;
}
constexpr float_t& Unity::Cinemachine::CinemachinePositionComposer::__cordl_internal_get_DeadZoneDepth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DeadZoneDepth;
}
constexpr float_t const& Unity::Cinemachine::CinemachinePositionComposer::__cordl_internal_get_DeadZoneDepth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DeadZoneDepth;
}
constexpr void Unity::Cinemachine::CinemachinePositionComposer::__cordl_internal_set_DeadZoneDepth(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DeadZoneDepth = value;
}
constexpr ::Unity::Cinemachine::ScreenComposerSettings& Unity::Cinemachine::CinemachinePositionComposer::__cordl_internal_get_Composition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Composition;
}
constexpr ::Unity::Cinemachine::ScreenComposerSettings const& Unity::Cinemachine::CinemachinePositionComposer::__cordl_internal_get_Composition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Composition;
}
constexpr void Unity::Cinemachine::CinemachinePositionComposer::__cordl_internal_set_Composition(::Unity::Cinemachine::ScreenComposerSettings  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Composition = value;
}
constexpr bool& Unity::Cinemachine::CinemachinePositionComposer::__cordl_internal_get_CenterOnActivate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CenterOnActivate;
}
constexpr bool const& Unity::Cinemachine::CinemachinePositionComposer::__cordl_internal_get_CenterOnActivate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CenterOnActivate;
}
constexpr void Unity::Cinemachine::CinemachinePositionComposer::__cordl_internal_set_CenterOnActivate(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CenterOnActivate = value;
}
constexpr ::UnityEngine::Vector3& Unity::Cinemachine::CinemachinePositionComposer::__cordl_internal_get_TargetOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TargetOffset;
}
constexpr ::UnityEngine::Vector3 const& Unity::Cinemachine::CinemachinePositionComposer::__cordl_internal_get_TargetOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TargetOffset;
}
constexpr void Unity::Cinemachine::CinemachinePositionComposer::__cordl_internal_set_TargetOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TargetOffset = value;
}
constexpr ::UnityEngine::Vector3& Unity::Cinemachine::CinemachinePositionComposer::__cordl_internal_get_Damping()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Damping;
}
constexpr ::UnityEngine::Vector3 const& Unity::Cinemachine::CinemachinePositionComposer::__cordl_internal_get_Damping() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Damping;
}
constexpr void Unity::Cinemachine::CinemachinePositionComposer::__cordl_internal_set_Damping(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Damping = value;
}
constexpr ::Unity::Cinemachine::LookaheadSettings& Unity::Cinemachine::CinemachinePositionComposer::__cordl_internal_get_Lookahead()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Lookahead;
}
constexpr ::Unity::Cinemachine::LookaheadSettings const& Unity::Cinemachine::CinemachinePositionComposer::__cordl_internal_get_Lookahead() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Lookahead;
}
constexpr void Unity::Cinemachine::CinemachinePositionComposer::__cordl_internal_set_Lookahead(::Unity::Cinemachine::LookaheadSettings  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Lookahead = value;
}
constexpr ::Unity::Cinemachine::PositionPredictor& Unity::Cinemachine::CinemachinePositionComposer::__cordl_internal_get_m_Predictor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Predictor;
}
constexpr ::Unity::Cinemachine::PositionPredictor const& Unity::Cinemachine::CinemachinePositionComposer::__cordl_internal_get_m_Predictor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Predictor;
}
constexpr void Unity::Cinemachine::CinemachinePositionComposer::__cordl_internal_set_m_Predictor(::Unity::Cinemachine::PositionPredictor  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Predictor = value;
}
constexpr ::UnityEngine::Vector3& Unity::Cinemachine::CinemachinePositionComposer::__cordl_internal_get_m_PreviousCameraPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreviousCameraPosition;
}
constexpr ::UnityEngine::Vector3 const& Unity::Cinemachine::CinemachinePositionComposer::__cordl_internal_get_m_PreviousCameraPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreviousCameraPosition;
}
constexpr void Unity::Cinemachine::CinemachinePositionComposer::__cordl_internal_set_m_PreviousCameraPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PreviousCameraPosition = value;
}
constexpr ::UnityEngine::Quaternion& Unity::Cinemachine::CinemachinePositionComposer::__cordl_internal_get_m_PreviousRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreviousRotation;
}
constexpr ::UnityEngine::Quaternion const& Unity::Cinemachine::CinemachinePositionComposer::__cordl_internal_get_m_PreviousRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreviousRotation;
}
constexpr void Unity::Cinemachine::CinemachinePositionComposer::__cordl_internal_set_m_PreviousRotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PreviousRotation = value;
}
constexpr ::Unity::Cinemachine::ScreenComposerSettings& Unity::Cinemachine::CinemachinePositionComposer::__cordl_internal_get_m_PreviousComposition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreviousComposition;
}
constexpr ::Unity::Cinemachine::ScreenComposerSettings const& Unity::Cinemachine::CinemachinePositionComposer::__cordl_internal_get_m_PreviousComposition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreviousComposition;
}
constexpr void Unity::Cinemachine::CinemachinePositionComposer::__cordl_internal_set_m_PreviousComposition(::Unity::Cinemachine::ScreenComposerSettings  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PreviousComposition = value;
}
constexpr float_t& Unity::Cinemachine::CinemachinePositionComposer::__cordl_internal_get_m_PreviousDesiredDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreviousDesiredDistance;
}
constexpr float_t const& Unity::Cinemachine::CinemachinePositionComposer::__cordl_internal_get_m_PreviousDesiredDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreviousDesiredDistance;
}
constexpr void Unity::Cinemachine::CinemachinePositionComposer::__cordl_internal_set_m_PreviousDesiredDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PreviousDesiredDistance = value;
}
constexpr bool& Unity::Cinemachine::CinemachinePositionComposer::__cordl_internal_get_m_InheritingPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InheritingPosition;
}
constexpr bool const& Unity::Cinemachine::CinemachinePositionComposer::__cordl_internal_get_m_InheritingPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InheritingPosition;
}
constexpr void Unity::Cinemachine::CinemachinePositionComposer::__cordl_internal_set_m_InheritingPosition(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InheritingPosition = value;
}
constexpr ::UnityEngine::Vector3& Unity::Cinemachine::CinemachinePositionComposer::__cordl_internal_get__TrackedPoint_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TrackedPoint_k__BackingField;
}
constexpr ::UnityEngine::Vector3 const& Unity::Cinemachine::CinemachinePositionComposer::__cordl_internal_get__TrackedPoint_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TrackedPoint_k__BackingField;
}
constexpr void Unity::Cinemachine::CinemachinePositionComposer::__cordl_internal_set__TrackedPoint_k__BackingField(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TrackedPoint_k__BackingField = value;
}
inline ::Unity::Cinemachine::ScreenComposerSettings Unity::Cinemachine::CinemachinePositionComposer::get_GetEffectiveComposition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePositionComposer*>(),
                        {"get_GetEffectiveComposition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::ScreenComposerSettings>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachinePositionComposer::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePositionComposer*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachinePositionComposer::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePositionComposer*>(),
                        {"OnValidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::ScreenComposerSettings Unity::Cinemachine::CinemachinePositionComposer::Unity_Cinemachine_CinemachineFreeLookModifier_IModifiableComposition_get_Composition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePositionComposer*>(),
                        {"Unity.Cinemachine.CinemachineFreeLookModifier.IModifiableComposition.get_Composition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::ScreenComposerSettings>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachinePositionComposer::Unity_Cinemachine_CinemachineFreeLookModifier_IModifiableComposition_set_Composition(::Unity::Cinemachine::ScreenComposerSettings  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePositionComposer*>(),
                        {"Unity.Cinemachine.CinemachineFreeLookModifier.IModifiableComposition.set_Composition", {}, {::i2c::type_of<::Unity::Cinemachine::ScreenComposerSettings>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 Unity::Cinemachine::CinemachinePositionComposer::Unity_Cinemachine_CinemachineFreeLookModifier_IModifiablePositionDamping_get_PositionDamping()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePositionComposer*>(),
                        {"Unity.Cinemachine.CinemachineFreeLookModifier.IModifiablePositionDamping.get_PositionDamping", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachinePositionComposer::Unity_Cinemachine_CinemachineFreeLookModifier_IModifiablePositionDamping_set_PositionDamping(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePositionComposer*>(),
                        {"Unity.Cinemachine.CinemachineFreeLookModifier.IModifiablePositionDamping.set_PositionDamping", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Unity::Cinemachine::CinemachinePositionComposer::Unity_Cinemachine_CinemachineFreeLookModifier_IModifiableDistance_get_Distance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePositionComposer*>(),
                        {"Unity.Cinemachine.CinemachineFreeLookModifier.IModifiableDistance.get_Distance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachinePositionComposer::Unity_Cinemachine_CinemachineFreeLookModifier_IModifiableDistance_set_Distance(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePositionComposer*>(),
                        {"Unity.Cinemachine.CinemachineFreeLookModifier.IModifiableDistance.set_Distance", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Unity::Cinemachine::CinemachinePositionComposer::get_IsValid()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachinePositionComposer*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GlobalNamespace::CinemachineCore_Stage Unity::Cinemachine::CinemachinePositionComposer::get_Stage()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachinePositionComposer*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CinemachineCore_Stage>(this, ___internal_method);
}
inline bool Unity::Cinemachine::CinemachinePositionComposer::get_BodyAppliesAfterAim()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachinePositionComposer*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Unity::Cinemachine::CinemachinePositionComposer::get_TrackedPoint()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePositionComposer*>(),
                        {"get_TrackedPoint", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachinePositionComposer::set_TrackedPoint(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePositionComposer*>(),
                        {"set_TrackedPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Unity::Cinemachine::CinemachinePositionComposer::OnTargetObjectWarped(::UnityEngine::Transform*  target, ::UnityEngine::Vector3  positionDelta)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachinePositionComposer*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target, positionDelta);
}
inline void Unity::Cinemachine::CinemachinePositionComposer::ForceCameraPosition(::UnityEngine::Vector3  pos, ::UnityEngine::Quaternion  rot)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachinePositionComposer*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pos, rot);
}
inline float_t Unity::Cinemachine::CinemachinePositionComposer::GetMaxDampTime()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachinePositionComposer*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool Unity::Cinemachine::CinemachinePositionComposer::OnTransitionFromCamera(::Unity::Cinemachine::ICinemachineCamera*  fromCam, ::UnityEngine::Vector3  worldUp, float_t  deltaTime)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachinePositionComposer*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, fromCam, worldUp, deltaTime);
}
inline ::UnityEngine::Rect Unity::Cinemachine::CinemachinePositionComposer::ScreenToOrtho(::UnityEngine::Rect  rScreen, float_t  orthoSize, float_t  aspect)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePositionComposer*>(),
                        {"ScreenToOrtho", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(this, ___internal_method, rScreen, orthoSize, aspect);
}
inline ::UnityEngine::Vector3 Unity::Cinemachine::CinemachinePositionComposer::OrthoOffsetToScreenBounds(::UnityEngine::Vector3  targetPos2D, ::UnityEngine::Rect  screenRect)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePositionComposer*>(),
                        {"OrthoOffsetToScreenBounds", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Rect>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, targetPos2D, screenRect);
}
inline void Unity::Cinemachine::CinemachinePositionComposer::MutateCameraState(::by_ref<::Unity::Cinemachine::CameraState>  curState, float_t  deltaTime)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachinePositionComposer*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, curState, deltaTime);
}
inline void Unity::Cinemachine::CinemachinePositionComposer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePositionComposer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::CinemachinePositionComposer* Unity::Cinemachine::CinemachinePositionComposer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachinePositionComposer*>());
}
/// @brief Convert operator to "::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiablePositionDamping"
constexpr  Unity::Cinemachine::CinemachinePositionComposer::operator ::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiablePositionDamping*() noexcept {
return static_cast<::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiablePositionDamping*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiablePositionDamping"
constexpr ::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiablePositionDamping* Unity::Cinemachine::CinemachinePositionComposer::i___Unity__Cinemachine__CinemachineFreeLookModifier_IModifiablePositionDamping() noexcept {
return static_cast<::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiablePositionDamping*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiableDistance"
constexpr  Unity::Cinemachine::CinemachinePositionComposer::operator ::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiableDistance*() noexcept {
return static_cast<::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiableDistance*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiableDistance"
constexpr ::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiableDistance* Unity::Cinemachine::CinemachinePositionComposer::i___Unity__Cinemachine__CinemachineFreeLookModifier_IModifiableDistance() noexcept {
return static_cast<::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiableDistance*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiableComposition"
constexpr  Unity::Cinemachine::CinemachinePositionComposer::operator ::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiableComposition*() noexcept {
return static_cast<::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiableComposition*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiableComposition"
constexpr ::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiableComposition* Unity::Cinemachine::CinemachinePositionComposer::i___Unity__Cinemachine__CinemachineFreeLookModifier_IModifiableComposition() noexcept {
return static_cast<::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiableComposition*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachinePositionComposer::CinemachinePositionComposer()   {
}
