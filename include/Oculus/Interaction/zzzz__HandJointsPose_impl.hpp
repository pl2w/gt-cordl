#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandJointsPose.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Pose_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Oculus/Interaction/zzzz__HandJointsPose_def.hpp"
#include "Oculus/Interaction/Input/zzzz__Handedness_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IHand_def.hpp"
#include "Oculus/Interaction/zzzz__HandJointsPose_WeightedJoint_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::HandJointsPose.get_Hand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::IHand* (::Oculus::Interaction::HandJointsPose::*)()>(&::Oculus::Interaction::HandJointsPose::get_Hand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa47daec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandJointsPose*>(),
                        {"get_Hand", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandJointsPose.set_Hand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandJointsPose::*)(::Oculus::Interaction::Input::IHand*)>(&::Oculus::Interaction::HandJointsPose::set_Hand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa47daf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandJointsPose*>(),
                        {"set_Hand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandJointsPose.get_MirrorOffsetsForLeftHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::HandJointsPose::*)()>(&::Oculus::Interaction::HandJointsPose::get_MirrorOffsetsForLeftHand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa47dafc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandJointsPose*>(),
                        {"get_MirrorOffsetsForLeftHand", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandJointsPose.set_MirrorOffsetsForLeftHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandJointsPose::*)(bool)>(&::Oculus::Interaction::HandJointsPose::set_MirrorOffsetsForLeftHand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa47db04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandJointsPose*>(),
                        {"set_MirrorOffsetsForLeftHand", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandJointsPose.get_WeightedJoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::HandJointsPose_WeightedJoint>* (::Oculus::Interaction::HandJointsPose::*)()>(&::Oculus::Interaction::HandJointsPose::get_WeightedJoints)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa47db0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandJointsPose*>(),
                        {"get_WeightedJoints", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandJointsPose.set_WeightedJoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandJointsPose::*)(::System::Collections::Generic::List_1<::GlobalNamespace::HandJointsPose_WeightedJoint>*)>(&::Oculus::Interaction::HandJointsPose::set_WeightedJoints)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa47db14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandJointsPose*>(),
                        {"set_WeightedJoints", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::HandJointsPose_WeightedJoint>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandJointsPose.get_LocalPositionOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::HandJointsPose::*)()>(&::Oculus::Interaction::HandJointsPose::get_LocalPositionOffset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa47db1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandJointsPose*>(),
                        {"get_LocalPositionOffset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandJointsPose.set_LocalPositionOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandJointsPose::*)(::UnityEngine::Vector3)>(&::Oculus::Interaction::HandJointsPose::set_LocalPositionOffset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa47db28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandJointsPose*>(),
                        {"set_LocalPositionOffset", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandJointsPose.get_RotationOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::Oculus::Interaction::HandJointsPose::*)()>(&::Oculus::Interaction::HandJointsPose::get_RotationOffset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa47db34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandJointsPose*>(),
                        {"get_RotationOffset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandJointsPose.set_RotationOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandJointsPose::*)(::UnityEngine::Quaternion)>(&::Oculus::Interaction::HandJointsPose::set_RotationOffset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa47db40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandJointsPose*>(),
                        {"set_RotationOffset", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandJointsPose.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandJointsPose::*)()>(&::Oculus::Interaction::HandJointsPose::Awake)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa47db4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandJointsPose*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandJointsPose*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandJointsPose.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandJointsPose::*)()>(&::Oculus::Interaction::HandJointsPose::Start)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa47dba4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandJointsPose*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandJointsPose*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandJointsPose.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandJointsPose::*)()>(&::Oculus::Interaction::HandJointsPose::OnEnable)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xa47dbd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandJointsPose*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandJointsPose*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandJointsPose.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandJointsPose::*)()>(&::Oculus::Interaction::HandJointsPose::OnDisable)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xa47dcd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandJointsPose*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandJointsPose*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandJointsPose.HandleHandUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandJointsPose::*)()>(&::Oculus::Interaction::HandJointsPose::HandleHandUpdated)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0xa47ddd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandJointsPose*>(),
                        {"HandleHandUpdated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandJointsPose.GetOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandJointsPose::*)(::by_ref<::UnityEngine::Pose>, ::Oculus::Interaction::Input::Handedness, float_t)>(&::Oculus::Interaction::HandJointsPose::GetOffset)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xa47e138;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandJointsPose*>(),
                        {"GetOffset", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::Oculus::Interaction::Input::Handedness>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandJointsPose.InjectAllHandJoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandJointsPose::*)(::Oculus::Interaction::Input::IHand*)>(&::Oculus::Interaction::HandJointsPose::InjectAllHandJoint)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa47e21c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandJointsPose*>(),
                        {"InjectAllHandJoint", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandJointsPose.InjectHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandJointsPose::*)(::Oculus::Interaction::Input::IHand*)>(&::Oculus::Interaction::HandJointsPose::InjectHand)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa47e220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandJointsPose*>(),
                        {"InjectHand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandJointsPose._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandJointsPose::*)()>(&::Oculus::Interaction::HandJointsPose::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xa47e2f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandJointsPose*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::HandJointsPose::__cordl_internal_get__hand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hand;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::HandJointsPose::__cordl_internal_get__hand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hand;
}
constexpr void Oculus::Interaction::HandJointsPose::__cordl_internal_set__hand(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hand = value;
}
constexpr ::Oculus::Interaction::Input::IHand*& Oculus::Interaction::HandJointsPose::__cordl_internal_get__Hand_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Hand_k__BackingField;
}
constexpr ::Oculus::Interaction::Input::IHand* const& Oculus::Interaction::HandJointsPose::__cordl_internal_get__Hand_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Hand_k__BackingField;
}
constexpr void Oculus::Interaction::HandJointsPose::__cordl_internal_set__Hand_k__BackingField(::Oculus::Interaction::Input::IHand*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Hand_k__BackingField = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::HandJointsPose_WeightedJoint>*& Oculus::Interaction::HandJointsPose::__cordl_internal_get__weightedJoints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____weightedJoints;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::HandJointsPose_WeightedJoint>* const& Oculus::Interaction::HandJointsPose::__cordl_internal_get__weightedJoints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____weightedJoints;
}
constexpr void Oculus::Interaction::HandJointsPose::__cordl_internal_set__weightedJoints(::System::Collections::Generic::List_1<::GlobalNamespace::HandJointsPose_WeightedJoint>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____weightedJoints = value;
}
constexpr ::UnityEngine::Vector3& Oculus::Interaction::HandJointsPose::__cordl_internal_get__localPositionOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localPositionOffset;
}
constexpr ::UnityEngine::Vector3 const& Oculus::Interaction::HandJointsPose::__cordl_internal_get__localPositionOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localPositionOffset;
}
constexpr void Oculus::Interaction::HandJointsPose::__cordl_internal_set__localPositionOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____localPositionOffset = value;
}
constexpr ::UnityEngine::Quaternion& Oculus::Interaction::HandJointsPose::__cordl_internal_get__rotationOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rotationOffset;
}
constexpr ::UnityEngine::Quaternion const& Oculus::Interaction::HandJointsPose::__cordl_internal_get__rotationOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rotationOffset;
}
constexpr void Oculus::Interaction::HandJointsPose::__cordl_internal_set__rotationOffset(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rotationOffset = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::HandJointsPose_WeightedJoint>*& Oculus::Interaction::HandJointsPose::__cordl_internal_get__joints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____joints;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::HandJointsPose_WeightedJoint>* const& Oculus::Interaction::HandJointsPose::__cordl_internal_get__joints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____joints;
}
constexpr void Oculus::Interaction::HandJointsPose::__cordl_internal_set__joints(::System::Collections::Generic::List_1<::GlobalNamespace::HandJointsPose_WeightedJoint>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____joints = value;
}
constexpr ::UnityEngine::Vector3& Oculus::Interaction::HandJointsPose::__cordl_internal_get__posOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____posOffset;
}
constexpr ::UnityEngine::Vector3 const& Oculus::Interaction::HandJointsPose::__cordl_internal_get__posOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____posOffset;
}
constexpr void Oculus::Interaction::HandJointsPose::__cordl_internal_set__posOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____posOffset = value;
}
constexpr ::UnityEngine::Quaternion& Oculus::Interaction::HandJointsPose::__cordl_internal_get__rotOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rotOffset;
}
constexpr ::UnityEngine::Quaternion const& Oculus::Interaction::HandJointsPose::__cordl_internal_get__rotOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rotOffset;
}
constexpr void Oculus::Interaction::HandJointsPose::__cordl_internal_set__rotOffset(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rotOffset = value;
}
constexpr bool& Oculus::Interaction::HandJointsPose::__cordl_internal_get__mirrorOffsetsForLeftHand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mirrorOffsetsForLeftHand;
}
constexpr bool const& Oculus::Interaction::HandJointsPose::__cordl_internal_get__mirrorOffsetsForLeftHand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mirrorOffsetsForLeftHand;
}
constexpr void Oculus::Interaction::HandJointsPose::__cordl_internal_set__mirrorOffsetsForLeftHand(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____mirrorOffsetsForLeftHand = value;
}
constexpr ::UnityEngine::Pose& Oculus::Interaction::HandJointsPose::__cordl_internal_get__cachedPose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedPose;
}
constexpr ::UnityEngine::Pose const& Oculus::Interaction::HandJointsPose::__cordl_internal_get__cachedPose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedPose;
}
constexpr void Oculus::Interaction::HandJointsPose::__cordl_internal_set__cachedPose(::UnityEngine::Pose  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cachedPose = value;
}
constexpr bool& Oculus::Interaction::HandJointsPose::__cordl_internal_get__started()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr bool const& Oculus::Interaction::HandJointsPose::__cordl_internal_get__started() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr void Oculus::Interaction::HandJointsPose::__cordl_internal_set__started(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____started = value;
}
inline ::Oculus::Interaction::Input::IHand* Oculus::Interaction::HandJointsPose::get_Hand()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandJointsPose*>(),
                        {"get_Hand", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::IHand*>(this, ___internal_method);
}
inline void Oculus::Interaction::HandJointsPose::set_Hand(::Oculus::Interaction::Input::IHand*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandJointsPose*>(),
                        {"set_Hand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Oculus::Interaction::HandJointsPose::get_MirrorOffsetsForLeftHand()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandJointsPose*>(),
                        {"get_MirrorOffsetsForLeftHand", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::HandJointsPose::set_MirrorOffsetsForLeftHand(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandJointsPose*>(),
                        {"set_MirrorOffsetsForLeftHand", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::HandJointsPose_WeightedJoint>* Oculus::Interaction::HandJointsPose::get_WeightedJoints()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandJointsPose*>(),
                        {"get_WeightedJoints", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::HandJointsPose_WeightedJoint>*>(this, ___internal_method);
}
inline void Oculus::Interaction::HandJointsPose::set_WeightedJoints(::System::Collections::Generic::List_1<::GlobalNamespace::HandJointsPose_WeightedJoint>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandJointsPose*>(),
                        {"set_WeightedJoints", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::HandJointsPose_WeightedJoint>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::HandJointsPose::get_LocalPositionOffset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandJointsPose*>(),
                        {"get_LocalPositionOffset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void Oculus::Interaction::HandJointsPose::set_LocalPositionOffset(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandJointsPose*>(),
                        {"set_LocalPositionOffset", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Quaternion Oculus::Interaction::HandJointsPose::get_RotationOffset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandJointsPose*>(),
                        {"get_RotationOffset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method);
}
inline void Oculus::Interaction::HandJointsPose::set_RotationOffset(::UnityEngine::Quaternion  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandJointsPose*>(),
                        {"set_RotationOffset", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::HandJointsPose::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandJointsPose*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::HandJointsPose::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandJointsPose*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::HandJointsPose::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandJointsPose*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::HandJointsPose::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandJointsPose*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::HandJointsPose::HandleHandUpdated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandJointsPose*>(),
                        {"HandleHandUpdated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::HandJointsPose::GetOffset(::by_ref<::UnityEngine::Pose>  pose, ::Oculus::Interaction::Input::Handedness  handedness, float_t  scale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandJointsPose*>(),
                        {"GetOffset", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::Oculus::Interaction::Input::Handedness>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pose, handedness, scale);
}
inline void Oculus::Interaction::HandJointsPose::InjectAllHandJoint(::Oculus::Interaction::Input::IHand*  hand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandJointsPose*>(),
                        {"InjectAllHandJoint", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hand);
}
inline void Oculus::Interaction::HandJointsPose::InjectHand(::Oculus::Interaction::Input::IHand*  hand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandJointsPose*>(),
                        {"InjectHand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hand);
}
inline void Oculus::Interaction::HandJointsPose::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandJointsPose*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::HandJointsPose* Oculus::Interaction::HandJointsPose::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::HandJointsPose*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::HandJointsPose::HandJointsPose()   {
}
