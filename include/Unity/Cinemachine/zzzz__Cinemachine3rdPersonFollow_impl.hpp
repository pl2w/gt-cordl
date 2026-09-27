#pragma once
// IWYU pragma private; include "Unity/Cinemachine/Cinemachine3rdPersonFollow.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineComponentBase_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Unity/Cinemachine/zzzz__Cinemachine3rdPersonFollow_def.hpp"
#include "Unity/Cinemachine/zzzz__CameraState_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineCore_Stage_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineFreeLookModifier_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineThirdPersonFollow_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::Cinemachine3rdPersonFollow.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::Cinemachine3rdPersonFollow::*)()>(&::Unity::Cinemachine::Cinemachine3rdPersonFollow::OnValidate)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xaec3a08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Cinemachine3rdPersonFollow*>(),
                        {"OnValidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Cinemachine3rdPersonFollow.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::Cinemachine3rdPersonFollow::*)()>(&::Unity::Cinemachine::Cinemachine3rdPersonFollow::Reset)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xaec3a7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Cinemachine3rdPersonFollow*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Cinemachine3rdPersonFollow.Unity_Cinemachine_CinemachineFreeLookModifier_IModifierValueSource_get_NormalizedModifierValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::Cinemachine3rdPersonFollow::*)()>(&::Unity::Cinemachine::Cinemachine3rdPersonFollow::Unity_Cinemachine_CinemachineFreeLookModifier_IModifierValueSource_get_NormalizedModifierValue)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0xaec3ad4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Cinemachine3rdPersonFollow*>(),
                        {"Unity.Cinemachine.CinemachineFreeLookModifier.IModifierValueSource.get_NormalizedModifierValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Cinemachine3rdPersonFollow.Unity_Cinemachine_CinemachineFreeLookModifier_IModifiablePositionDamping_get_PositionDamping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Unity::Cinemachine::Cinemachine3rdPersonFollow::*)()>(&::Unity::Cinemachine::Cinemachine3rdPersonFollow::Unity_Cinemachine_CinemachineFreeLookModifier_IModifiablePositionDamping_get_PositionDamping)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xaec3c54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Cinemachine3rdPersonFollow*>(),
                        {"Unity.Cinemachine.CinemachineFreeLookModifier.IModifiablePositionDamping.get_PositionDamping", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Cinemachine3rdPersonFollow.Unity_Cinemachine_CinemachineFreeLookModifier_IModifiablePositionDamping_set_PositionDamping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::Cinemachine3rdPersonFollow::*)(::UnityEngine::Vector3)>(&::Unity::Cinemachine::Cinemachine3rdPersonFollow::Unity_Cinemachine_CinemachineFreeLookModifier_IModifiablePositionDamping_set_PositionDamping)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xaec3c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Cinemachine3rdPersonFollow*>(),
                        {"Unity.Cinemachine.CinemachineFreeLookModifier.IModifiablePositionDamping.set_PositionDamping", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Cinemachine3rdPersonFollow.Unity_Cinemachine_CinemachineFreeLookModifier_IModifiableDistance_get_Distance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::Cinemachine3rdPersonFollow::*)()>(&::Unity::Cinemachine::Cinemachine3rdPersonFollow::Unity_Cinemachine_CinemachineFreeLookModifier_IModifiableDistance_get_Distance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaec3c6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Cinemachine3rdPersonFollow*>(),
                        {"Unity.Cinemachine.CinemachineFreeLookModifier.IModifiableDistance.get_Distance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Cinemachine3rdPersonFollow.Unity_Cinemachine_CinemachineFreeLookModifier_IModifiableDistance_set_Distance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::Cinemachine3rdPersonFollow::*)(float_t)>(&::Unity::Cinemachine::Cinemachine3rdPersonFollow::Unity_Cinemachine_CinemachineFreeLookModifier_IModifiableDistance_set_Distance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaec3c74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Cinemachine3rdPersonFollow*>(),
                        {"Unity.Cinemachine.CinemachineFreeLookModifier.IModifiableDistance.set_Distance", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Cinemachine3rdPersonFollow.get_IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::Cinemachine3rdPersonFollow::*)()>(&::Unity::Cinemachine::Cinemachine3rdPersonFollow::get_IsValid)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xaec3c7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::Cinemachine3rdPersonFollow*>(),
                    {::i2c::class_of<::Unity::Cinemachine::Cinemachine3rdPersonFollow*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Cinemachine3rdPersonFollow.get_Stage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CinemachineCore_Stage (::Unity::Cinemachine::Cinemachine3rdPersonFollow::*)()>(&::Unity::Cinemachine::Cinemachine3rdPersonFollow::get_Stage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaec3d0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::Cinemachine3rdPersonFollow*>(),
                    {::i2c::class_of<::Unity::Cinemachine::Cinemachine3rdPersonFollow*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Cinemachine3rdPersonFollow.GetMaxDampTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::Cinemachine3rdPersonFollow::*)()>(&::Unity::Cinemachine::Cinemachine3rdPersonFollow::GetMaxDampTime)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xaec3d14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::Cinemachine3rdPersonFollow*>(),
                    {::i2c::class_of<::Unity::Cinemachine::Cinemachine3rdPersonFollow*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Cinemachine3rdPersonFollow.MutateCameraState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::Cinemachine3rdPersonFollow::*)(::by_ref<::Unity::Cinemachine::CameraState>, float_t)>(&::Unity::Cinemachine::Cinemachine3rdPersonFollow::MutateCameraState)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xaec3d44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::Cinemachine3rdPersonFollow*>(),
                    {::i2c::class_of<::Unity::Cinemachine::Cinemachine3rdPersonFollow*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Cinemachine3rdPersonFollow.OnTargetObjectWarped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::Cinemachine3rdPersonFollow::*)(::UnityEngine::Transform*, ::UnityEngine::Vector3)>(&::Unity::Cinemachine::Cinemachine3rdPersonFollow::OnTargetObjectWarped)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xaec40e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::Cinemachine3rdPersonFollow*>(),
                    {::i2c::class_of<::Unity::Cinemachine::Cinemachine3rdPersonFollow*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Cinemachine3rdPersonFollow.PositionCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::Cinemachine3rdPersonFollow::*)(::by_ref<::Unity::Cinemachine::CameraState>, float_t)>(&::Unity::Cinemachine::Cinemachine3rdPersonFollow::PositionCamera)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0xaec3dc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Cinemachine3rdPersonFollow*>(),
                        {"PositionCamera", {}, {::i2c::type_of<::by_ref<::Unity::Cinemachine::CameraState>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Cinemachine3rdPersonFollow.GetRigPositions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::Cinemachine3rdPersonFollow::*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>)>(&::Unity::Cinemachine::Cinemachine3rdPersonFollow::GetRigPositions)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0xaec47b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Cinemachine3rdPersonFollow*>(),
                        {"GetRigPositions", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Cinemachine3rdPersonFollow.GetHeading
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::Quaternion, ::UnityEngine::Vector3)>(&::Unity::Cinemachine::Cinemachine3rdPersonFollow::GetHeading)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0xaec41bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Cinemachine3rdPersonFollow*>(),
                        {"GetHeading", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Cinemachine3rdPersonFollow.GetRawRigPositions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::Cinemachine3rdPersonFollow::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>)>(&::Unity::Cinemachine::Cinemachine3rdPersonFollow::GetRawRigPositions)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xaec4370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Cinemachine3rdPersonFollow*>(),
                        {"GetRawRigPositions", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Cinemachine3rdPersonFollow.ResolveCollisions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Unity::Cinemachine::Cinemachine3rdPersonFollow::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, float_t, ::by_ref<float_t>)>(&::Unity::Cinemachine::Cinemachine3rdPersonFollow::ResolveCollisions)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0xaec4468;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Cinemachine3rdPersonFollow*>(),
                        {"ResolveCollisions", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Cinemachine3rdPersonFollow.UpgradeToCm3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::Cinemachine3rdPersonFollow::*)(::Unity::Cinemachine::CinemachineThirdPersonFollow*)>(&::Unity::Cinemachine::Cinemachine3rdPersonFollow::UpgradeToCm3)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xaec48e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Cinemachine3rdPersonFollow*>(),
                        {"UpgradeToCm3", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineThirdPersonFollow*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Cinemachine3rdPersonFollow._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::Cinemachine3rdPersonFollow::*)()>(&::Unity::Cinemachine::Cinemachine3rdPersonFollow::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xaec4998;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Cinemachine3rdPersonFollow*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& Unity::Cinemachine::Cinemachine3rdPersonFollow::__cordl_internal_get_Damping()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Damping;
}
constexpr ::UnityEngine::Vector3 const& Unity::Cinemachine::Cinemachine3rdPersonFollow::__cordl_internal_get_Damping() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Damping;
}
constexpr void Unity::Cinemachine::Cinemachine3rdPersonFollow::__cordl_internal_set_Damping(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Damping = value;
}
constexpr ::UnityEngine::Vector3& Unity::Cinemachine::Cinemachine3rdPersonFollow::__cordl_internal_get_ShoulderOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShoulderOffset;
}
constexpr ::UnityEngine::Vector3 const& Unity::Cinemachine::Cinemachine3rdPersonFollow::__cordl_internal_get_ShoulderOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShoulderOffset;
}
constexpr void Unity::Cinemachine::Cinemachine3rdPersonFollow::__cordl_internal_set_ShoulderOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ShoulderOffset = value;
}
constexpr float_t& Unity::Cinemachine::Cinemachine3rdPersonFollow::__cordl_internal_get_VerticalArmLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VerticalArmLength;
}
constexpr float_t const& Unity::Cinemachine::Cinemachine3rdPersonFollow::__cordl_internal_get_VerticalArmLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VerticalArmLength;
}
constexpr void Unity::Cinemachine::Cinemachine3rdPersonFollow::__cordl_internal_set_VerticalArmLength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___VerticalArmLength = value;
}
constexpr float_t& Unity::Cinemachine::Cinemachine3rdPersonFollow::__cordl_internal_get_CameraSide()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CameraSide;
}
constexpr float_t const& Unity::Cinemachine::Cinemachine3rdPersonFollow::__cordl_internal_get_CameraSide() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CameraSide;
}
constexpr void Unity::Cinemachine::Cinemachine3rdPersonFollow::__cordl_internal_set_CameraSide(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CameraSide = value;
}
constexpr float_t& Unity::Cinemachine::Cinemachine3rdPersonFollow::__cordl_internal_get_CameraDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CameraDistance;
}
constexpr float_t const& Unity::Cinemachine::Cinemachine3rdPersonFollow::__cordl_internal_get_CameraDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CameraDistance;
}
constexpr void Unity::Cinemachine::Cinemachine3rdPersonFollow::__cordl_internal_set_CameraDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CameraDistance = value;
}
constexpr ::UnityEngine::LayerMask& Unity::Cinemachine::Cinemachine3rdPersonFollow::__cordl_internal_get_CameraCollisionFilter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CameraCollisionFilter;
}
constexpr ::UnityEngine::LayerMask const& Unity::Cinemachine::Cinemachine3rdPersonFollow::__cordl_internal_get_CameraCollisionFilter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CameraCollisionFilter;
}
constexpr void Unity::Cinemachine::Cinemachine3rdPersonFollow::__cordl_internal_set_CameraCollisionFilter(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CameraCollisionFilter = value;
}
constexpr ::StringW& Unity::Cinemachine::Cinemachine3rdPersonFollow::__cordl_internal_get_IgnoreTag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IgnoreTag;
}
constexpr ::StringW const& Unity::Cinemachine::Cinemachine3rdPersonFollow::__cordl_internal_get_IgnoreTag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IgnoreTag;
}
constexpr void Unity::Cinemachine::Cinemachine3rdPersonFollow::__cordl_internal_set_IgnoreTag(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IgnoreTag = value;
}
constexpr float_t& Unity::Cinemachine::Cinemachine3rdPersonFollow::__cordl_internal_get_CameraRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CameraRadius;
}
constexpr float_t const& Unity::Cinemachine::Cinemachine3rdPersonFollow::__cordl_internal_get_CameraRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CameraRadius;
}
constexpr void Unity::Cinemachine::Cinemachine3rdPersonFollow::__cordl_internal_set_CameraRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CameraRadius = value;
}
constexpr float_t& Unity::Cinemachine::Cinemachine3rdPersonFollow::__cordl_internal_get_DampingIntoCollision()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DampingIntoCollision;
}
constexpr float_t const& Unity::Cinemachine::Cinemachine3rdPersonFollow::__cordl_internal_get_DampingIntoCollision() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DampingIntoCollision;
}
constexpr void Unity::Cinemachine::Cinemachine3rdPersonFollow::__cordl_internal_set_DampingIntoCollision(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DampingIntoCollision = value;
}
constexpr float_t& Unity::Cinemachine::Cinemachine3rdPersonFollow::__cordl_internal_get_DampingFromCollision()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DampingFromCollision;
}
constexpr float_t const& Unity::Cinemachine::Cinemachine3rdPersonFollow::__cordl_internal_get_DampingFromCollision() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DampingFromCollision;
}
constexpr void Unity::Cinemachine::Cinemachine3rdPersonFollow::__cordl_internal_set_DampingFromCollision(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DampingFromCollision = value;
}
constexpr ::UnityEngine::Vector3& Unity::Cinemachine::Cinemachine3rdPersonFollow::__cordl_internal_get_m_PreviousFollowTargetPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreviousFollowTargetPosition;
}
constexpr ::UnityEngine::Vector3 const& Unity::Cinemachine::Cinemachine3rdPersonFollow::__cordl_internal_get_m_PreviousFollowTargetPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreviousFollowTargetPosition;
}
constexpr void Unity::Cinemachine::Cinemachine3rdPersonFollow::__cordl_internal_set_m_PreviousFollowTargetPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PreviousFollowTargetPosition = value;
}
constexpr ::UnityEngine::Vector3& Unity::Cinemachine::Cinemachine3rdPersonFollow::__cordl_internal_get_m_DampingCorrection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DampingCorrection;
}
constexpr ::UnityEngine::Vector3 const& Unity::Cinemachine::Cinemachine3rdPersonFollow::__cordl_internal_get_m_DampingCorrection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DampingCorrection;
}
constexpr void Unity::Cinemachine::Cinemachine3rdPersonFollow::__cordl_internal_set_m_DampingCorrection(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_DampingCorrection = value;
}
constexpr float_t& Unity::Cinemachine::Cinemachine3rdPersonFollow::__cordl_internal_get_m_CamPosCollisionCorrection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CamPosCollisionCorrection;
}
constexpr float_t const& Unity::Cinemachine::Cinemachine3rdPersonFollow::__cordl_internal_get_m_CamPosCollisionCorrection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CamPosCollisionCorrection;
}
constexpr void Unity::Cinemachine::Cinemachine3rdPersonFollow::__cordl_internal_set_m_CamPosCollisionCorrection(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CamPosCollisionCorrection = value;
}
inline void Unity::Cinemachine::Cinemachine3rdPersonFollow::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Cinemachine3rdPersonFollow*>(),
                        {"OnValidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::Cinemachine3rdPersonFollow::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Cinemachine3rdPersonFollow*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t Unity::Cinemachine::Cinemachine3rdPersonFollow::Unity_Cinemachine_CinemachineFreeLookModifier_IModifierValueSource_get_NormalizedModifierValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Cinemachine3rdPersonFollow*>(),
                        {"Unity.Cinemachine.CinemachineFreeLookModifier.IModifierValueSource.get_NormalizedModifierValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Unity::Cinemachine::Cinemachine3rdPersonFollow::Unity_Cinemachine_CinemachineFreeLookModifier_IModifiablePositionDamping_get_PositionDamping()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Cinemachine3rdPersonFollow*>(),
                        {"Unity.Cinemachine.CinemachineFreeLookModifier.IModifiablePositionDamping.get_PositionDamping", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void Unity::Cinemachine::Cinemachine3rdPersonFollow::Unity_Cinemachine_CinemachineFreeLookModifier_IModifiablePositionDamping_set_PositionDamping(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Cinemachine3rdPersonFollow*>(),
                        {"Unity.Cinemachine.CinemachineFreeLookModifier.IModifiablePositionDamping.set_PositionDamping", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Unity::Cinemachine::Cinemachine3rdPersonFollow::Unity_Cinemachine_CinemachineFreeLookModifier_IModifiableDistance_get_Distance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Cinemachine3rdPersonFollow*>(),
                        {"Unity.Cinemachine.CinemachineFreeLookModifier.IModifiableDistance.get_Distance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Unity::Cinemachine::Cinemachine3rdPersonFollow::Unity_Cinemachine_CinemachineFreeLookModifier_IModifiableDistance_set_Distance(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Cinemachine3rdPersonFollow*>(),
                        {"Unity.Cinemachine.CinemachineFreeLookModifier.IModifiableDistance.set_Distance", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Unity::Cinemachine::Cinemachine3rdPersonFollow::get_IsValid()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::Cinemachine3rdPersonFollow*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GlobalNamespace::CinemachineCore_Stage Unity::Cinemachine::Cinemachine3rdPersonFollow::get_Stage()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::Cinemachine3rdPersonFollow*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CinemachineCore_Stage>(this, ___internal_method);
}
inline float_t Unity::Cinemachine::Cinemachine3rdPersonFollow::GetMaxDampTime()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::Cinemachine3rdPersonFollow*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Unity::Cinemachine::Cinemachine3rdPersonFollow::MutateCameraState(::by_ref<::Unity::Cinemachine::CameraState>  curState, float_t  deltaTime)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::Cinemachine3rdPersonFollow*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, curState, deltaTime);
}
inline void Unity::Cinemachine::Cinemachine3rdPersonFollow::OnTargetObjectWarped(::UnityEngine::Transform*  target, ::UnityEngine::Vector3  positionDelta)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::Cinemachine3rdPersonFollow*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target, positionDelta);
}
inline void Unity::Cinemachine::Cinemachine3rdPersonFollow::PositionCamera(::by_ref<::Unity::Cinemachine::CameraState>  curState, float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Cinemachine3rdPersonFollow*>(),
                        {"PositionCamera", {}, {::i2c::type_of<::by_ref<::Unity::Cinemachine::CameraState>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, curState, deltaTime);
}
inline void Unity::Cinemachine::Cinemachine3rdPersonFollow::GetRigPositions(::by_ref<::UnityEngine::Vector3>  root, ::by_ref<::UnityEngine::Vector3>  shoulder, ::by_ref<::UnityEngine::Vector3>  hand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Cinemachine3rdPersonFollow*>(),
                        {"GetRigPositions", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, root, shoulder, hand);
}
inline ::UnityEngine::Quaternion Unity::Cinemachine::Cinemachine3rdPersonFollow::GetHeading(::UnityEngine::Quaternion  targetRot, ::UnityEngine::Vector3  up)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Cinemachine3rdPersonFollow*>(),
                        {"GetHeading", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, targetRot, up);
}
inline void Unity::Cinemachine::Cinemachine3rdPersonFollow::GetRawRigPositions(::UnityEngine::Vector3  root, ::UnityEngine::Quaternion  targetRot, ::UnityEngine::Quaternion  heading, ::by_ref<::UnityEngine::Vector3>  shoulder, ::by_ref<::UnityEngine::Vector3>  hand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Cinemachine3rdPersonFollow*>(),
                        {"GetRawRigPositions", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, root, targetRot, heading, shoulder, hand);
}
inline ::UnityEngine::Vector3 Unity::Cinemachine::Cinemachine3rdPersonFollow::ResolveCollisions(::UnityEngine::Vector3  root, ::UnityEngine::Vector3  tip, float_t  deltaTime, float_t  cameraRadius, ::by_ref<float_t>  collisionCorrection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Cinemachine3rdPersonFollow*>(),
                        {"ResolveCollisions", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, root, tip, deltaTime, cameraRadius, collisionCorrection);
}
inline void Unity::Cinemachine::Cinemachine3rdPersonFollow::UpgradeToCm3(::Unity::Cinemachine::CinemachineThirdPersonFollow*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Cinemachine3rdPersonFollow*>(),
                        {"UpgradeToCm3", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineThirdPersonFollow*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c);
}
inline void Unity::Cinemachine::Cinemachine3rdPersonFollow::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Cinemachine3rdPersonFollow*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::Cinemachine3rdPersonFollow* Unity::Cinemachine::Cinemachine3rdPersonFollow::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::Cinemachine3rdPersonFollow*>());
}
/// @brief Convert operator to "::Unity::Cinemachine::CinemachineFreeLookModifier_IModifierValueSource"
constexpr  Unity::Cinemachine::Cinemachine3rdPersonFollow::operator ::Unity::Cinemachine::CinemachineFreeLookModifier_IModifierValueSource*() noexcept {
return static_cast<::Unity::Cinemachine::CinemachineFreeLookModifier_IModifierValueSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Cinemachine::CinemachineFreeLookModifier_IModifierValueSource"
constexpr ::Unity::Cinemachine::CinemachineFreeLookModifier_IModifierValueSource* Unity::Cinemachine::Cinemachine3rdPersonFollow::i___Unity__Cinemachine__CinemachineFreeLookModifier_IModifierValueSource() noexcept {
return static_cast<::Unity::Cinemachine::CinemachineFreeLookModifier_IModifierValueSource*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiablePositionDamping"
constexpr  Unity::Cinemachine::Cinemachine3rdPersonFollow::operator ::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiablePositionDamping*() noexcept {
return static_cast<::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiablePositionDamping*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiablePositionDamping"
constexpr ::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiablePositionDamping* Unity::Cinemachine::Cinemachine3rdPersonFollow::i___Unity__Cinemachine__CinemachineFreeLookModifier_IModifiablePositionDamping() noexcept {
return static_cast<::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiablePositionDamping*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiableDistance"
constexpr  Unity::Cinemachine::Cinemachine3rdPersonFollow::operator ::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiableDistance*() noexcept {
return static_cast<::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiableDistance*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiableDistance"
constexpr ::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiableDistance* Unity::Cinemachine::Cinemachine3rdPersonFollow::i___Unity__Cinemachine__CinemachineFreeLookModifier_IModifiableDistance() noexcept {
return static_cast<::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiableDistance*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::Cinemachine3rdPersonFollow::Cinemachine3rdPersonFollow()   {
}
