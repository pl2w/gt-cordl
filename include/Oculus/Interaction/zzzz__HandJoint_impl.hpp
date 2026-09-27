#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandJoint.hpp"
#include "Oculus/Interaction/Input/zzzz__HandJointId_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Pose_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Oculus/Interaction/zzzz__HandJoint_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HandJointId_def.hpp"
#include "Oculus/Interaction/Input/zzzz__Handedness_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IHand_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::HandJoint.get_Hand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::IHand* (::Oculus::Interaction::HandJoint::*)()>(&::Oculus::Interaction::HandJoint::get_Hand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa47ce70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandJoint*>(),
                        {"get_Hand", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandJoint.set_Hand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandJoint::*)(::Oculus::Interaction::Input::IHand*)>(&::Oculus::Interaction::HandJoint::set_Hand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa47ce78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandJoint*>(),
                        {"set_Hand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandJoint.get_UseLegacyOrientation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::HandJoint::*)()>(&::Oculus::Interaction::HandJoint::get_UseLegacyOrientation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa47ce80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandJoint*>(),
                        {"get_UseLegacyOrientation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandJoint.set_UseLegacyOrientation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandJoint::*)(bool)>(&::Oculus::Interaction::HandJoint::set_UseLegacyOrientation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa47ce88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandJoint*>(),
                        {"set_UseLegacyOrientation", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandJoint.get_FreezeRotationX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::HandJoint::*)()>(&::Oculus::Interaction::HandJoint::get_FreezeRotationX)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa47ce90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandJoint*>(),
                        {"get_FreezeRotationX", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandJoint.set_FreezeRotationX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandJoint::*)(bool)>(&::Oculus::Interaction::HandJoint::set_FreezeRotationX)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa47ce98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandJoint*>(),
                        {"set_FreezeRotationX", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandJoint.get_FreezeRotationY
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::HandJoint::*)()>(&::Oculus::Interaction::HandJoint::get_FreezeRotationY)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa47cea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandJoint*>(),
                        {"get_FreezeRotationY", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandJoint.set_FreezeRotationY
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandJoint::*)(bool)>(&::Oculus::Interaction::HandJoint::set_FreezeRotationY)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa47cea8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandJoint*>(),
                        {"set_FreezeRotationY", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandJoint.get_FreezeRotationZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::HandJoint::*)()>(&::Oculus::Interaction::HandJoint::get_FreezeRotationZ)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa47ceb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandJoint*>(),
                        {"get_FreezeRotationZ", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandJoint.set_FreezeRotationZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandJoint::*)(bool)>(&::Oculus::Interaction::HandJoint::set_FreezeRotationZ)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa47ceb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandJoint*>(),
                        {"set_FreezeRotationZ", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandJoint.get_MirrorOffsetsForLeftHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::HandJoint::*)()>(&::Oculus::Interaction::HandJoint::get_MirrorOffsetsForLeftHand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa47cec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandJoint*>(),
                        {"get_MirrorOffsetsForLeftHand", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandJoint.set_MirrorOffsetsForLeftHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandJoint::*)(bool)>(&::Oculus::Interaction::HandJoint::set_MirrorOffsetsForLeftHand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa47cec8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandJoint*>(),
                        {"set_MirrorOffsetsForLeftHand", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandJoint.get_HandJointId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::HandJointId (::Oculus::Interaction::HandJoint::*)()>(&::Oculus::Interaction::HandJoint::get_HandJointId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa47ced0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandJoint*>(),
                        {"get_HandJointId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandJoint.set_HandJointId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandJoint::*)(::Oculus::Interaction::Input::HandJointId)>(&::Oculus::Interaction::HandJoint::set_HandJointId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa47ced8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandJoint*>(),
                        {"set_HandJointId", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandJointId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandJoint.get_LocalPositionOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::HandJoint::*)()>(&::Oculus::Interaction::HandJoint::get_LocalPositionOffset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa47cee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandJoint*>(),
                        {"get_LocalPositionOffset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandJoint.set_LocalPositionOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandJoint::*)(::UnityEngine::Vector3)>(&::Oculus::Interaction::HandJoint::set_LocalPositionOffset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa47ceec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandJoint*>(),
                        {"set_LocalPositionOffset", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandJoint.get_RotationOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::Oculus::Interaction::HandJoint::*)()>(&::Oculus::Interaction::HandJoint::get_RotationOffset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa47cef8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandJoint*>(),
                        {"get_RotationOffset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandJoint.set_RotationOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandJoint::*)(::UnityEngine::Quaternion)>(&::Oculus::Interaction::HandJoint::set_RotationOffset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa47cf04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandJoint*>(),
                        {"set_RotationOffset", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandJoint.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandJoint::*)()>(&::Oculus::Interaction::HandJoint::Awake)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa47cf10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandJoint*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandJoint*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandJoint.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandJoint::*)()>(&::Oculus::Interaction::HandJoint::Start)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa47cf68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandJoint*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandJoint*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandJoint.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandJoint::*)()>(&::Oculus::Interaction::HandJoint::OnEnable)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xa47cf94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandJoint*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandJoint*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandJoint.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandJoint::*)()>(&::Oculus::Interaction::HandJoint::OnDisable)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xa47d094;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandJoint*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandJoint*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandJoint.HandleHandUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandJoint::*)()>(&::Oculus::Interaction::HandJoint::HandleHandUpdated)> {
  constexpr static std::size_t size = 0x36c;
  constexpr static std::size_t addrs = 0xa47d194;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandJoint*>(),
                        {"HandleHandUpdated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandJoint.FreezeRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::Oculus::Interaction::HandJoint::*)(::UnityEngine::Quaternion)>(&::Oculus::Interaction::HandJoint::FreezeRotation)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0xa47d5e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandJoint*>(),
                        {"FreezeRotation", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandJoint.GetOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandJoint::*)(::by_ref<::UnityEngine::Pose>, ::Oculus::Interaction::Input::Handedness, float_t)>(&::Oculus::Interaction::HandJoint::GetOffset)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xa47d500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandJoint*>(),
                        {"GetOffset", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::Oculus::Interaction::Input::Handedness>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandJoint.InjectAllHandJoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandJoint::*)(::Oculus::Interaction::Input::IHand*)>(&::Oculus::Interaction::HandJoint::InjectAllHandJoint)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa47d8e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandJoint*>(),
                        {"InjectAllHandJoint", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandJoint.InjectHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandJoint::*)(::Oculus::Interaction::Input::IHand*)>(&::Oculus::Interaction::HandJoint::InjectHand)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa47d8e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandJoint*>(),
                        {"InjectHand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandJoint._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandJoint::*)()>(&::Oculus::Interaction::HandJoint::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xa47d9b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandJoint*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::HandJoint::__cordl_internal_get__hand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hand;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::HandJoint::__cordl_internal_get__hand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hand;
}
constexpr void Oculus::Interaction::HandJoint::__cordl_internal_set__hand(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hand = value;
}
constexpr ::Oculus::Interaction::Input::IHand*& Oculus::Interaction::HandJoint::__cordl_internal_get__Hand_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Hand_k__BackingField;
}
constexpr ::Oculus::Interaction::Input::IHand* const& Oculus::Interaction::HandJoint::__cordl_internal_get__Hand_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Hand_k__BackingField;
}
constexpr void Oculus::Interaction::HandJoint::__cordl_internal_set__Hand_k__BackingField(::Oculus::Interaction::Input::IHand*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Hand_k__BackingField = value;
}
constexpr ::Oculus::Interaction::Input::HandJointId& Oculus::Interaction::HandJoint::__cordl_internal_get__handJointId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handJointId;
}
constexpr ::Oculus::Interaction::Input::HandJointId const& Oculus::Interaction::HandJoint::__cordl_internal_get__handJointId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handJointId;
}
constexpr void Oculus::Interaction::HandJoint::__cordl_internal_set__handJointId(::Oculus::Interaction::Input::HandJointId  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____handJointId = value;
}
constexpr ::UnityEngine::Vector3& Oculus::Interaction::HandJoint::__cordl_internal_get__localPositionOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localPositionOffset;
}
constexpr ::UnityEngine::Vector3 const& Oculus::Interaction::HandJoint::__cordl_internal_get__localPositionOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localPositionOffset;
}
constexpr void Oculus::Interaction::HandJoint::__cordl_internal_set__localPositionOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____localPositionOffset = value;
}
constexpr ::UnityEngine::Quaternion& Oculus::Interaction::HandJoint::__cordl_internal_get__rotationOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rotationOffset;
}
constexpr ::UnityEngine::Quaternion const& Oculus::Interaction::HandJoint::__cordl_internal_get__rotationOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rotationOffset;
}
constexpr void Oculus::Interaction::HandJoint::__cordl_internal_set__rotationOffset(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rotationOffset = value;
}
constexpr ::Oculus::Interaction::Input::HandJointId& Oculus::Interaction::HandJoint::__cordl_internal_get__jointId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jointId;
}
constexpr ::Oculus::Interaction::Input::HandJointId const& Oculus::Interaction::HandJoint::__cordl_internal_get__jointId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jointId;
}
constexpr void Oculus::Interaction::HandJoint::__cordl_internal_set__jointId(::Oculus::Interaction::Input::HandJointId  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____jointId = value;
}
constexpr ::UnityEngine::Vector3& Oculus::Interaction::HandJoint::__cordl_internal_get__posOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____posOffset;
}
constexpr ::UnityEngine::Vector3 const& Oculus::Interaction::HandJoint::__cordl_internal_get__posOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____posOffset;
}
constexpr void Oculus::Interaction::HandJoint::__cordl_internal_set__posOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____posOffset = value;
}
constexpr ::UnityEngine::Quaternion& Oculus::Interaction::HandJoint::__cordl_internal_get__rotOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rotOffset;
}
constexpr ::UnityEngine::Quaternion const& Oculus::Interaction::HandJoint::__cordl_internal_get__rotOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rotOffset;
}
constexpr void Oculus::Interaction::HandJoint::__cordl_internal_set__rotOffset(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rotOffset = value;
}
constexpr bool& Oculus::Interaction::HandJoint::__cordl_internal_get__useLegacyOrientation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useLegacyOrientation;
}
constexpr bool const& Oculus::Interaction::HandJoint::__cordl_internal_get__useLegacyOrientation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useLegacyOrientation;
}
constexpr void Oculus::Interaction::HandJoint::__cordl_internal_set__useLegacyOrientation(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____useLegacyOrientation = value;
}
constexpr bool& Oculus::Interaction::HandJoint::__cordl_internal_get__mirrorOffsetsForLeftHand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mirrorOffsetsForLeftHand;
}
constexpr bool const& Oculus::Interaction::HandJoint::__cordl_internal_get__mirrorOffsetsForLeftHand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mirrorOffsetsForLeftHand;
}
constexpr void Oculus::Interaction::HandJoint::__cordl_internal_set__mirrorOffsetsForLeftHand(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____mirrorOffsetsForLeftHand = value;
}
constexpr bool& Oculus::Interaction::HandJoint::__cordl_internal_get__freezeRotationX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____freezeRotationX;
}
constexpr bool const& Oculus::Interaction::HandJoint::__cordl_internal_get__freezeRotationX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____freezeRotationX;
}
constexpr void Oculus::Interaction::HandJoint::__cordl_internal_set__freezeRotationX(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____freezeRotationX = value;
}
constexpr bool& Oculus::Interaction::HandJoint::__cordl_internal_get__freezeRotationY()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____freezeRotationY;
}
constexpr bool const& Oculus::Interaction::HandJoint::__cordl_internal_get__freezeRotationY() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____freezeRotationY;
}
constexpr void Oculus::Interaction::HandJoint::__cordl_internal_set__freezeRotationY(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____freezeRotationY = value;
}
constexpr bool& Oculus::Interaction::HandJoint::__cordl_internal_get__freezeRotationZ()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____freezeRotationZ;
}
constexpr bool const& Oculus::Interaction::HandJoint::__cordl_internal_get__freezeRotationZ() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____freezeRotationZ;
}
constexpr void Oculus::Interaction::HandJoint::__cordl_internal_set__freezeRotationZ(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____freezeRotationZ = value;
}
constexpr ::UnityEngine::Pose& Oculus::Interaction::HandJoint::__cordl_internal_get__cachedPose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedPose;
}
constexpr ::UnityEngine::Pose const& Oculus::Interaction::HandJoint::__cordl_internal_get__cachedPose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedPose;
}
constexpr void Oculus::Interaction::HandJoint::__cordl_internal_set__cachedPose(::UnityEngine::Pose  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cachedPose = value;
}
constexpr bool& Oculus::Interaction::HandJoint::__cordl_internal_get__started()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr bool const& Oculus::Interaction::HandJoint::__cordl_internal_get__started() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr void Oculus::Interaction::HandJoint::__cordl_internal_set__started(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____started = value;
}
inline void Oculus::Interaction::HandJoint::setStaticF_LEFT_LEGACY_ROT(::UnityEngine::Vector3  value)  {
::cordl_internals::setStaticField<::UnityEngine::Vector3, "LEFT_LEGACY_ROT", ::Oculus::Interaction::HandJoint*>(std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 Oculus::Interaction::HandJoint::getStaticF_LEFT_LEGACY_ROT()  {
return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "LEFT_LEGACY_ROT", ::Oculus::Interaction::HandJoint*>();
}
inline void Oculus::Interaction::HandJoint::setStaticF_RIGHT_LEGACY_ROT(::UnityEngine::Vector3  value)  {
::cordl_internals::setStaticField<::UnityEngine::Vector3, "RIGHT_LEGACY_ROT", ::Oculus::Interaction::HandJoint*>(std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 Oculus::Interaction::HandJoint::getStaticF_RIGHT_LEGACY_ROT()  {
return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "RIGHT_LEGACY_ROT", ::Oculus::Interaction::HandJoint*>();
}
inline ::Oculus::Interaction::Input::IHand* Oculus::Interaction::HandJoint::get_Hand()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandJoint*>(),
                        {"get_Hand", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::IHand*>(this, ___internal_method);
}
inline void Oculus::Interaction::HandJoint::set_Hand(::Oculus::Interaction::Input::IHand*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandJoint*>(),
                        {"set_Hand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Oculus::Interaction::HandJoint::get_UseLegacyOrientation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandJoint*>(),
                        {"get_UseLegacyOrientation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::HandJoint::set_UseLegacyOrientation(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandJoint*>(),
                        {"set_UseLegacyOrientation", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Oculus::Interaction::HandJoint::get_FreezeRotationX()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandJoint*>(),
                        {"get_FreezeRotationX", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::HandJoint::set_FreezeRotationX(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandJoint*>(),
                        {"set_FreezeRotationX", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Oculus::Interaction::HandJoint::get_FreezeRotationY()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandJoint*>(),
                        {"get_FreezeRotationY", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::HandJoint::set_FreezeRotationY(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandJoint*>(),
                        {"set_FreezeRotationY", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Oculus::Interaction::HandJoint::get_FreezeRotationZ()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandJoint*>(),
                        {"get_FreezeRotationZ", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::HandJoint::set_FreezeRotationZ(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandJoint*>(),
                        {"set_FreezeRotationZ", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Oculus::Interaction::HandJoint::get_MirrorOffsetsForLeftHand()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandJoint*>(),
                        {"get_MirrorOffsetsForLeftHand", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::HandJoint::set_MirrorOffsetsForLeftHand(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandJoint*>(),
                        {"set_MirrorOffsetsForLeftHand", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Oculus::Interaction::Input::HandJointId Oculus::Interaction::HandJoint::get_HandJointId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandJoint*>(),
                        {"get_HandJointId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::HandJointId>(this, ___internal_method);
}
inline void Oculus::Interaction::HandJoint::set_HandJointId(::Oculus::Interaction::Input::HandJointId  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandJoint*>(),
                        {"set_HandJointId", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandJointId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::HandJoint::get_LocalPositionOffset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandJoint*>(),
                        {"get_LocalPositionOffset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void Oculus::Interaction::HandJoint::set_LocalPositionOffset(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandJoint*>(),
                        {"set_LocalPositionOffset", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Quaternion Oculus::Interaction::HandJoint::get_RotationOffset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandJoint*>(),
                        {"get_RotationOffset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method);
}
inline void Oculus::Interaction::HandJoint::set_RotationOffset(::UnityEngine::Quaternion  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandJoint*>(),
                        {"set_RotationOffset", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::HandJoint::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandJoint*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::HandJoint::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandJoint*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::HandJoint::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandJoint*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::HandJoint::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandJoint*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::HandJoint::HandleHandUpdated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandJoint*>(),
                        {"HandleHandUpdated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Quaternion Oculus::Interaction::HandJoint::FreezeRotation(::UnityEngine::Quaternion  rotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandJoint*>(),
                        {"FreezeRotation", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method, rotation);
}
inline void Oculus::Interaction::HandJoint::GetOffset(::by_ref<::UnityEngine::Pose>  pose, ::Oculus::Interaction::Input::Handedness  handedness, float_t  scale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandJoint*>(),
                        {"GetOffset", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::Oculus::Interaction::Input::Handedness>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pose, handedness, scale);
}
inline void Oculus::Interaction::HandJoint::InjectAllHandJoint(::Oculus::Interaction::Input::IHand*  hand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandJoint*>(),
                        {"InjectAllHandJoint", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hand);
}
inline void Oculus::Interaction::HandJoint::InjectHand(::Oculus::Interaction::Input::IHand*  hand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandJoint*>(),
                        {"InjectHand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hand);
}
inline void Oculus::Interaction::HandJoint::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandJoint*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::HandJoint* Oculus::Interaction::HandJoint::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::HandJoint*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::HandJoint::HandJoint()   {
}
