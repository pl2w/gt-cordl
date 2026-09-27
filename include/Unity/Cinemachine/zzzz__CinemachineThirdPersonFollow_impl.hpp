#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineThirdPersonFollow.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineComponentBase_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineThirdPersonFollow_ObstacleSettings_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineThirdPersonFollow_def.hpp"
#include "Unity/Cinemachine/zzzz__CameraState_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineCore_Stage_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineFreeLookModifier_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineThirdPersonFollow_ObstacleSettings_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineThirdPersonFollow.get_CurrentObstacle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Collider> (::Unity::Cinemachine::CinemachineThirdPersonFollow::*)()>(&::Unity::Cinemachine::CinemachineThirdPersonFollow::get_CurrentObstacle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaea74b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineThirdPersonFollow*>(),
                        {"get_CurrentObstacle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineThirdPersonFollow.set_CurrentObstacle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineThirdPersonFollow::*)(::UnityEngine::Collider*)>(&::Unity::Cinemachine::CinemachineThirdPersonFollow::set_CurrentObstacle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaea74b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineThirdPersonFollow*>(),
                        {"set_CurrentObstacle", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineThirdPersonFollow.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineThirdPersonFollow::*)()>(&::Unity::Cinemachine::CinemachineThirdPersonFollow::OnValidate)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xaea74c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineThirdPersonFollow*>(),
                        {"OnValidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineThirdPersonFollow.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineThirdPersonFollow::*)()>(&::Unity::Cinemachine::CinemachineThirdPersonFollow::Reset)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xaea7534;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineThirdPersonFollow*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineThirdPersonFollow.Unity_Cinemachine_CinemachineFreeLookModifier_IModifierValueSource_get_NormalizedModifierValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachineThirdPersonFollow::*)()>(&::Unity::Cinemachine::CinemachineThirdPersonFollow::Unity_Cinemachine_CinemachineFreeLookModifier_IModifierValueSource_get_NormalizedModifierValue)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0xaea75f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineThirdPersonFollow*>(),
                        {"Unity.Cinemachine.CinemachineFreeLookModifier.IModifierValueSource.get_NormalizedModifierValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineThirdPersonFollow.Unity_Cinemachine_CinemachineFreeLookModifier_IModifiablePositionDamping_get_PositionDamping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Unity::Cinemachine::CinemachineThirdPersonFollow::*)()>(&::Unity::Cinemachine::CinemachineThirdPersonFollow::Unity_Cinemachine_CinemachineFreeLookModifier_IModifiablePositionDamping_get_PositionDamping)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xaea7774;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineThirdPersonFollow*>(),
                        {"Unity.Cinemachine.CinemachineFreeLookModifier.IModifiablePositionDamping.get_PositionDamping", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineThirdPersonFollow.Unity_Cinemachine_CinemachineFreeLookModifier_IModifiablePositionDamping_set_PositionDamping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineThirdPersonFollow::*)(::UnityEngine::Vector3)>(&::Unity::Cinemachine::CinemachineThirdPersonFollow::Unity_Cinemachine_CinemachineFreeLookModifier_IModifiablePositionDamping_set_PositionDamping)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xaea7780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineThirdPersonFollow*>(),
                        {"Unity.Cinemachine.CinemachineFreeLookModifier.IModifiablePositionDamping.set_PositionDamping", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineThirdPersonFollow.Unity_Cinemachine_CinemachineFreeLookModifier_IModifiableDistance_get_Distance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachineThirdPersonFollow::*)()>(&::Unity::Cinemachine::CinemachineThirdPersonFollow::Unity_Cinemachine_CinemachineFreeLookModifier_IModifiableDistance_get_Distance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaea778c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineThirdPersonFollow*>(),
                        {"Unity.Cinemachine.CinemachineFreeLookModifier.IModifiableDistance.get_Distance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineThirdPersonFollow.Unity_Cinemachine_CinemachineFreeLookModifier_IModifiableDistance_set_Distance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineThirdPersonFollow::*)(float_t)>(&::Unity::Cinemachine::CinemachineThirdPersonFollow::Unity_Cinemachine_CinemachineFreeLookModifier_IModifiableDistance_set_Distance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaea7794;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineThirdPersonFollow*>(),
                        {"Unity.Cinemachine.CinemachineFreeLookModifier.IModifiableDistance.set_Distance", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineThirdPersonFollow.get_IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::CinemachineThirdPersonFollow::*)()>(&::Unity::Cinemachine::CinemachineThirdPersonFollow::get_IsValid)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xaea779c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineThirdPersonFollow*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineThirdPersonFollow*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineThirdPersonFollow.get_Stage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CinemachineCore_Stage (::Unity::Cinemachine::CinemachineThirdPersonFollow::*)()>(&::Unity::Cinemachine::CinemachineThirdPersonFollow::get_Stage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaea782c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineThirdPersonFollow*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineThirdPersonFollow*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineThirdPersonFollow.GetMaxDampTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachineThirdPersonFollow::*)()>(&::Unity::Cinemachine::CinemachineThirdPersonFollow::GetMaxDampTime)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xaea7834;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineThirdPersonFollow*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineThirdPersonFollow*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineThirdPersonFollow.MutateCameraState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineThirdPersonFollow::*)(::by_ref<::Unity::Cinemachine::CameraState>, float_t)>(&::Unity::Cinemachine::CinemachineThirdPersonFollow::MutateCameraState)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xaea7874;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineThirdPersonFollow*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineThirdPersonFollow*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineThirdPersonFollow.OnTargetObjectWarped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineThirdPersonFollow::*)(::UnityEngine::Transform*, ::UnityEngine::Vector3)>(&::Unity::Cinemachine::CinemachineThirdPersonFollow::OnTargetObjectWarped)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xaea7cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineThirdPersonFollow*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineThirdPersonFollow*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineThirdPersonFollow.PositionCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineThirdPersonFollow::*)(::by_ref<::Unity::Cinemachine::CameraState>, float_t)>(&::Unity::Cinemachine::CinemachineThirdPersonFollow::PositionCamera)> {
  constexpr static std::size_t size = 0x3d8;
  constexpr static std::size_t addrs = 0xaea78f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineThirdPersonFollow*>(),
                        {"PositionCamera", {}, {::i2c::type_of<::by_ref<::Unity::Cinemachine::CameraState>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineThirdPersonFollow.GetRigPositions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineThirdPersonFollow::*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>)>(&::Unity::Cinemachine::CinemachineThirdPersonFollow::GetRigPositions)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0xaea83a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineThirdPersonFollow*>(),
                        {"GetRigPositions", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineThirdPersonFollow.GetHeading
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::Quaternion, ::UnityEngine::Vector3)>(&::Unity::Cinemachine::CinemachineThirdPersonFollow::GetHeading)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0xaea7da4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineThirdPersonFollow*>(),
                        {"GetHeading", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineThirdPersonFollow.GetRawRigPositions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineThirdPersonFollow::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>)>(&::Unity::Cinemachine::CinemachineThirdPersonFollow::GetRawRigPositions)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xaea7f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineThirdPersonFollow*>(),
                        {"GetRawRigPositions", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineThirdPersonFollow.ResolveCollisions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Unity::Cinemachine::CinemachineThirdPersonFollow::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, float_t, ::by_ref<float_t>)>(&::Unity::Cinemachine::CinemachineThirdPersonFollow::ResolveCollisions)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0xaea8038;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineThirdPersonFollow*>(),
                        {"ResolveCollisions", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineThirdPersonFollow._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineThirdPersonFollow::*)()>(&::Unity::Cinemachine::CinemachineThirdPersonFollow::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xaea84e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineThirdPersonFollow*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& Unity::Cinemachine::CinemachineThirdPersonFollow::__cordl_internal_get_Damping()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Damping;
}
constexpr ::UnityEngine::Vector3 const& Unity::Cinemachine::CinemachineThirdPersonFollow::__cordl_internal_get_Damping() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Damping;
}
constexpr void Unity::Cinemachine::CinemachineThirdPersonFollow::__cordl_internal_set_Damping(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Damping = value;
}
constexpr ::UnityEngine::Vector3& Unity::Cinemachine::CinemachineThirdPersonFollow::__cordl_internal_get_ShoulderOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShoulderOffset;
}
constexpr ::UnityEngine::Vector3 const& Unity::Cinemachine::CinemachineThirdPersonFollow::__cordl_internal_get_ShoulderOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShoulderOffset;
}
constexpr void Unity::Cinemachine::CinemachineThirdPersonFollow::__cordl_internal_set_ShoulderOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ShoulderOffset = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineThirdPersonFollow::__cordl_internal_get_VerticalArmLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VerticalArmLength;
}
constexpr float_t const& Unity::Cinemachine::CinemachineThirdPersonFollow::__cordl_internal_get_VerticalArmLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VerticalArmLength;
}
constexpr void Unity::Cinemachine::CinemachineThirdPersonFollow::__cordl_internal_set_VerticalArmLength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___VerticalArmLength = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineThirdPersonFollow::__cordl_internal_get_CameraSide()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CameraSide;
}
constexpr float_t const& Unity::Cinemachine::CinemachineThirdPersonFollow::__cordl_internal_get_CameraSide() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CameraSide;
}
constexpr void Unity::Cinemachine::CinemachineThirdPersonFollow::__cordl_internal_set_CameraSide(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CameraSide = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineThirdPersonFollow::__cordl_internal_get_CameraDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CameraDistance;
}
constexpr float_t const& Unity::Cinemachine::CinemachineThirdPersonFollow::__cordl_internal_get_CameraDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CameraDistance;
}
constexpr void Unity::Cinemachine::CinemachineThirdPersonFollow::__cordl_internal_set_CameraDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CameraDistance = value;
}
constexpr ::GlobalNamespace::CinemachineThirdPersonFollow_ObstacleSettings& Unity::Cinemachine::CinemachineThirdPersonFollow::__cordl_internal_get_AvoidObstacles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AvoidObstacles;
}
constexpr ::GlobalNamespace::CinemachineThirdPersonFollow_ObstacleSettings const& Unity::Cinemachine::CinemachineThirdPersonFollow::__cordl_internal_get_AvoidObstacles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AvoidObstacles;
}
constexpr void Unity::Cinemachine::CinemachineThirdPersonFollow::__cordl_internal_set_AvoidObstacles(::GlobalNamespace::CinemachineThirdPersonFollow_ObstacleSettings  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AvoidObstacles = value;
}
constexpr ::UnityW<::UnityEngine::Collider>& Unity::Cinemachine::CinemachineThirdPersonFollow::__cordl_internal_get__CurrentObstacle_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentObstacle_k__BackingField;
}
constexpr ::UnityW<::UnityEngine::Collider> const& Unity::Cinemachine::CinemachineThirdPersonFollow::__cordl_internal_get__CurrentObstacle_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentObstacle_k__BackingField;
}
constexpr void Unity::Cinemachine::CinemachineThirdPersonFollow::__cordl_internal_set__CurrentObstacle_k__BackingField(::UnityW<::UnityEngine::Collider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CurrentObstacle_k__BackingField = value;
}
constexpr ::UnityEngine::Vector3& Unity::Cinemachine::CinemachineThirdPersonFollow::__cordl_internal_get_m_PreviousFollowTargetPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreviousFollowTargetPosition;
}
constexpr ::UnityEngine::Vector3 const& Unity::Cinemachine::CinemachineThirdPersonFollow::__cordl_internal_get_m_PreviousFollowTargetPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreviousFollowTargetPosition;
}
constexpr void Unity::Cinemachine::CinemachineThirdPersonFollow::__cordl_internal_set_m_PreviousFollowTargetPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PreviousFollowTargetPosition = value;
}
constexpr ::UnityEngine::Vector3& Unity::Cinemachine::CinemachineThirdPersonFollow::__cordl_internal_get_m_DampingCorrection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DampingCorrection;
}
constexpr ::UnityEngine::Vector3 const& Unity::Cinemachine::CinemachineThirdPersonFollow::__cordl_internal_get_m_DampingCorrection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DampingCorrection;
}
constexpr void Unity::Cinemachine::CinemachineThirdPersonFollow::__cordl_internal_set_m_DampingCorrection(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_DampingCorrection = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineThirdPersonFollow::__cordl_internal_get_m_CamPosCollisionCorrection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CamPosCollisionCorrection;
}
constexpr float_t const& Unity::Cinemachine::CinemachineThirdPersonFollow::__cordl_internal_get_m_CamPosCollisionCorrection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CamPosCollisionCorrection;
}
constexpr void Unity::Cinemachine::CinemachineThirdPersonFollow::__cordl_internal_set_m_CamPosCollisionCorrection(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CamPosCollisionCorrection = value;
}
inline ::UnityW<::UnityEngine::Collider> Unity::Cinemachine::CinemachineThirdPersonFollow::get_CurrentObstacle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineThirdPersonFollow*>(),
                        {"get_CurrentObstacle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Collider>>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineThirdPersonFollow::set_CurrentObstacle(::UnityEngine::Collider*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineThirdPersonFollow*>(),
                        {"set_CurrentObstacle", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Unity::Cinemachine::CinemachineThirdPersonFollow::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineThirdPersonFollow*>(),
                        {"OnValidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineThirdPersonFollow::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineThirdPersonFollow*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t Unity::Cinemachine::CinemachineThirdPersonFollow::Unity_Cinemachine_CinemachineFreeLookModifier_IModifierValueSource_get_NormalizedModifierValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineThirdPersonFollow*>(),
                        {"Unity.Cinemachine.CinemachineFreeLookModifier.IModifierValueSource.get_NormalizedModifierValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Unity::Cinemachine::CinemachineThirdPersonFollow::Unity_Cinemachine_CinemachineFreeLookModifier_IModifiablePositionDamping_get_PositionDamping()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineThirdPersonFollow*>(),
                        {"Unity.Cinemachine.CinemachineFreeLookModifier.IModifiablePositionDamping.get_PositionDamping", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineThirdPersonFollow::Unity_Cinemachine_CinemachineFreeLookModifier_IModifiablePositionDamping_set_PositionDamping(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineThirdPersonFollow*>(),
                        {"Unity.Cinemachine.CinemachineFreeLookModifier.IModifiablePositionDamping.set_PositionDamping", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Unity::Cinemachine::CinemachineThirdPersonFollow::Unity_Cinemachine_CinemachineFreeLookModifier_IModifiableDistance_get_Distance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineThirdPersonFollow*>(),
                        {"Unity.Cinemachine.CinemachineFreeLookModifier.IModifiableDistance.get_Distance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineThirdPersonFollow::Unity_Cinemachine_CinemachineFreeLookModifier_IModifiableDistance_set_Distance(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineThirdPersonFollow*>(),
                        {"Unity.Cinemachine.CinemachineFreeLookModifier.IModifiableDistance.set_Distance", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Unity::Cinemachine::CinemachineThirdPersonFollow::get_IsValid()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineThirdPersonFollow*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GlobalNamespace::CinemachineCore_Stage Unity::Cinemachine::CinemachineThirdPersonFollow::get_Stage()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineThirdPersonFollow*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CinemachineCore_Stage>(this, ___internal_method);
}
inline float_t Unity::Cinemachine::CinemachineThirdPersonFollow::GetMaxDampTime()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineThirdPersonFollow*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineThirdPersonFollow::MutateCameraState(::by_ref<::Unity::Cinemachine::CameraState>  curState, float_t  deltaTime)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineThirdPersonFollow*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, curState, deltaTime);
}
inline void Unity::Cinemachine::CinemachineThirdPersonFollow::OnTargetObjectWarped(::UnityEngine::Transform*  target, ::UnityEngine::Vector3  positionDelta)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineThirdPersonFollow*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target, positionDelta);
}
inline void Unity::Cinemachine::CinemachineThirdPersonFollow::PositionCamera(::by_ref<::Unity::Cinemachine::CameraState>  curState, float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineThirdPersonFollow*>(),
                        {"PositionCamera", {}, {::i2c::type_of<::by_ref<::Unity::Cinemachine::CameraState>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, curState, deltaTime);
}
inline void Unity::Cinemachine::CinemachineThirdPersonFollow::GetRigPositions(::by_ref<::UnityEngine::Vector3>  root, ::by_ref<::UnityEngine::Vector3>  shoulder, ::by_ref<::UnityEngine::Vector3>  hand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineThirdPersonFollow*>(),
                        {"GetRigPositions", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, root, shoulder, hand);
}
inline ::UnityEngine::Quaternion Unity::Cinemachine::CinemachineThirdPersonFollow::GetHeading(::UnityEngine::Quaternion  targetRot, ::UnityEngine::Vector3  up)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineThirdPersonFollow*>(),
                        {"GetHeading", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, targetRot, up);
}
inline void Unity::Cinemachine::CinemachineThirdPersonFollow::GetRawRigPositions(::UnityEngine::Vector3  root, ::UnityEngine::Quaternion  targetRot, ::UnityEngine::Quaternion  heading, ::by_ref<::UnityEngine::Vector3>  shoulder, ::by_ref<::UnityEngine::Vector3>  hand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineThirdPersonFollow*>(),
                        {"GetRawRigPositions", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, root, targetRot, heading, shoulder, hand);
}
inline ::UnityEngine::Vector3 Unity::Cinemachine::CinemachineThirdPersonFollow::ResolveCollisions(::UnityEngine::Vector3  root, ::UnityEngine::Vector3  tip, float_t  deltaTime, float_t  cameraRadius, ::by_ref<float_t>  collisionCorrection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineThirdPersonFollow*>(),
                        {"ResolveCollisions", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, root, tip, deltaTime, cameraRadius, collisionCorrection);
}
inline void Unity::Cinemachine::CinemachineThirdPersonFollow::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineThirdPersonFollow*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::CinemachineThirdPersonFollow* Unity::Cinemachine::CinemachineThirdPersonFollow::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachineThirdPersonFollow*>());
}
/// @brief Convert operator to "::Unity::Cinemachine::CinemachineFreeLookModifier_IModifierValueSource"
constexpr  Unity::Cinemachine::CinemachineThirdPersonFollow::operator ::Unity::Cinemachine::CinemachineFreeLookModifier_IModifierValueSource*() noexcept {
return static_cast<::Unity::Cinemachine::CinemachineFreeLookModifier_IModifierValueSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Cinemachine::CinemachineFreeLookModifier_IModifierValueSource"
constexpr ::Unity::Cinemachine::CinemachineFreeLookModifier_IModifierValueSource* Unity::Cinemachine::CinemachineThirdPersonFollow::i___Unity__Cinemachine__CinemachineFreeLookModifier_IModifierValueSource() noexcept {
return static_cast<::Unity::Cinemachine::CinemachineFreeLookModifier_IModifierValueSource*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiablePositionDamping"
constexpr  Unity::Cinemachine::CinemachineThirdPersonFollow::operator ::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiablePositionDamping*() noexcept {
return static_cast<::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiablePositionDamping*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiablePositionDamping"
constexpr ::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiablePositionDamping* Unity::Cinemachine::CinemachineThirdPersonFollow::i___Unity__Cinemachine__CinemachineFreeLookModifier_IModifiablePositionDamping() noexcept {
return static_cast<::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiablePositionDamping*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiableDistance"
constexpr  Unity::Cinemachine::CinemachineThirdPersonFollow::operator ::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiableDistance*() noexcept {
return static_cast<::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiableDistance*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiableDistance"
constexpr ::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiableDistance* Unity::Cinemachine::CinemachineThirdPersonFollow::i___Unity__Cinemachine__CinemachineFreeLookModifier_IModifiableDistance() noexcept {
return static_cast<::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiableDistance*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineThirdPersonFollow::CinemachineThirdPersonFollow()   {
}
