#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/Compatibility/OVR/HandSkeleton.hpp"
#include "Oculus/Interaction/Input/Compatibility/OVR/zzzz__HandSkeletonJoint_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Interaction/Input/Compatibility/OVR/zzzz__HandSkeleton_def.hpp"
#include "Oculus/Interaction/Input/Compatibility/OVR/zzzz__HandSkeletonJoint_def.hpp"
#include "Oculus/Interaction/Input/Compatibility/OVR/zzzz__HandSkeleton___c__DisplayClass7_0_def.hpp"
#include "Oculus/Interaction/Input/Compatibility/OVR/zzzz__HandSkeleton_def.hpp"
#include "Oculus/Interaction/Input/Compatibility/OVR/zzzz__IReadOnlyHandSkeletonJointList_def.hpp"
#include "Oculus/Interaction/Input/Compatibility/OVR/zzzz__IReadOnlyHandSkeleton_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Input::Compatibility::OVR::HandSkeleton.get_Joints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::Compatibility::OVR::IReadOnlyHandSkeletonJointList* (::Oculus::Interaction::Input::Compatibility::OVR::HandSkeleton::*)()>(&::Oculus::Interaction::Input::Compatibility::OVR::HandSkeleton::get_Joints)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa516ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Compatibility::OVR::HandSkeleton*>(),
                        {"get_Joints", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::Compatibility::OVR::HandSkeleton.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::Oculus::Interaction::Input::Compatibility::OVR::HandSkeletonJoint> (::Oculus::Interaction::Input::Compatibility::OVR::HandSkeleton::*)(int32_t)>(&::Oculus::Interaction::Input::Compatibility::OVR::HandSkeleton::get_Item)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xa516ab4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Compatibility::OVR::HandSkeleton*>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::Compatibility::OVR::HandSkeleton.FromJoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::Compatibility::OVR::HandSkeleton* (*)(::ArrayW<::UnityEngine::Transform*>)>(&::Oculus::Interaction::Input::Compatibility::OVR::HandSkeleton::FromJoints)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0xa516ae8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Compatibility::OVR::HandSkeleton*>(),
                        {"FromJoints", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Transform*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::Compatibility::OVR::HandSkeleton._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::Compatibility::OVR::HandSkeleton::*)()>(&::Oculus::Interaction::Input::Compatibility::OVR::HandSkeleton::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xa516d64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Compatibility::OVR::HandSkeleton*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::Compatibility::OVR::HandSkeleton._FromJoints_g__FindParentIndex_7_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, ::by_ref<::GlobalNamespace::HandSkeleton___c__DisplayClass7_0>)>(&::Oculus::Interaction::Input::Compatibility::OVR::HandSkeleton::_FromJoints_g__FindParentIndex_7_0)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xa516c54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Compatibility::OVR::HandSkeleton*>(),
                        {"<FromJoints>g__FindParentIndex|7_0", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::HandSkeleton___c__DisplayClass7_0>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::Oculus::Interaction::Input::Compatibility::OVR::HandSkeletonJoint>& Oculus::Interaction::Input::Compatibility::OVR::HandSkeleton::__cordl_internal_get_joints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___joints;
}
constexpr ::ArrayW<::Oculus::Interaction::Input::Compatibility::OVR::HandSkeletonJoint> const& Oculus::Interaction::Input::Compatibility::OVR::HandSkeleton::__cordl_internal_get_joints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___joints;
}
constexpr void Oculus::Interaction::Input::Compatibility::OVR::HandSkeleton::__cordl_internal_set_joints(::ArrayW<::Oculus::Interaction::Input::Compatibility::OVR::HandSkeletonJoint>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___joints = value;
}
inline void Oculus::Interaction::Input::Compatibility::OVR::HandSkeleton::setStaticF_DefaultLeftSkeleton(::Oculus::Interaction::Input::Compatibility::OVR::HandSkeleton*  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::Input::Compatibility::OVR::HandSkeleton*, "DefaultLeftSkeleton", ::Oculus::Interaction::Input::Compatibility::OVR::HandSkeleton*>(std::forward<::Oculus::Interaction::Input::Compatibility::OVR::HandSkeleton*>(value));
}
inline ::Oculus::Interaction::Input::Compatibility::OVR::HandSkeleton* Oculus::Interaction::Input::Compatibility::OVR::HandSkeleton::getStaticF_DefaultLeftSkeleton()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::Input::Compatibility::OVR::HandSkeleton*, "DefaultLeftSkeleton", ::Oculus::Interaction::Input::Compatibility::OVR::HandSkeleton*>();
}
inline void Oculus::Interaction::Input::Compatibility::OVR::HandSkeleton::setStaticF_DefaultRightSkeleton(::Oculus::Interaction::Input::Compatibility::OVR::HandSkeleton*  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::Input::Compatibility::OVR::HandSkeleton*, "DefaultRightSkeleton", ::Oculus::Interaction::Input::Compatibility::OVR::HandSkeleton*>(std::forward<::Oculus::Interaction::Input::Compatibility::OVR::HandSkeleton*>(value));
}
inline ::Oculus::Interaction::Input::Compatibility::OVR::HandSkeleton* Oculus::Interaction::Input::Compatibility::OVR::HandSkeleton::getStaticF_DefaultRightSkeleton()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::Input::Compatibility::OVR::HandSkeleton*, "DefaultRightSkeleton", ::Oculus::Interaction::Input::Compatibility::OVR::HandSkeleton*>();
}
inline ::Oculus::Interaction::Input::Compatibility::OVR::IReadOnlyHandSkeletonJointList* Oculus::Interaction::Input::Compatibility::OVR::HandSkeleton::get_Joints()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Compatibility::OVR::HandSkeleton*>(),
                        {"get_Joints", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::Compatibility::OVR::IReadOnlyHandSkeletonJointList*>(this, ___internal_method);
}
inline ::by_ref<::Oculus::Interaction::Input::Compatibility::OVR::HandSkeletonJoint> Oculus::Interaction::Input::Compatibility::OVR::HandSkeleton::get_Item(int32_t  jointId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Compatibility::OVR::HandSkeleton*>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::Oculus::Interaction::Input::Compatibility::OVR::HandSkeletonJoint>>(this, ___internal_method, jointId);
}
inline ::Oculus::Interaction::Input::Compatibility::OVR::HandSkeleton* Oculus::Interaction::Input::Compatibility::OVR::HandSkeleton::FromJoints(::ArrayW<::UnityEngine::Transform*>  joints)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Compatibility::OVR::HandSkeleton*>(),
                        {"FromJoints", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Transform*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::Compatibility::OVR::HandSkeleton*>(nullptr, ___internal_method, joints);
}
inline void Oculus::Interaction::Input::Compatibility::OVR::HandSkeleton::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Compatibility::OVR::HandSkeleton*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Oculus::Interaction::Input::Compatibility::OVR::HandSkeleton::_FromJoints_g__FindParentIndex_7_0(int32_t  jointIndex, ::by_ref<::GlobalNamespace::HandSkeleton___c__DisplayClass7_0>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Compatibility::OVR::HandSkeleton*>(),
                        {"<FromJoints>g__FindParentIndex|7_0", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::HandSkeleton___c__DisplayClass7_0>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, jointIndex, _cordl_fixed_empty_name_whitespace);
}
inline ::Oculus::Interaction::Input::Compatibility::OVR::HandSkeleton* Oculus::Interaction::Input::Compatibility::OVR::HandSkeleton::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Input::Compatibility::OVR::HandSkeleton*>());
}
/// @brief Convert operator to "::Oculus::Interaction::Input::Compatibility::OVR::IReadOnlyHandSkeleton"
constexpr  Oculus::Interaction::Input::Compatibility::OVR::HandSkeleton::operator ::Oculus::Interaction::Input::Compatibility::OVR::IReadOnlyHandSkeleton*() noexcept {
return static_cast<::Oculus::Interaction::Input::Compatibility::OVR::IReadOnlyHandSkeleton*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::Input::Compatibility::OVR::IReadOnlyHandSkeleton"
constexpr ::Oculus::Interaction::Input::Compatibility::OVR::IReadOnlyHandSkeleton* Oculus::Interaction::Input::Compatibility::OVR::HandSkeleton::i___Oculus__Interaction__Input__Compatibility__OVR__IReadOnlyHandSkeleton() noexcept {
return static_cast<::Oculus::Interaction::Input::Compatibility::OVR::IReadOnlyHandSkeleton*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Oculus::Interaction::Input::Compatibility::OVR::IReadOnlyHandSkeletonJointList"
constexpr  Oculus::Interaction::Input::Compatibility::OVR::HandSkeleton::operator ::Oculus::Interaction::Input::Compatibility::OVR::IReadOnlyHandSkeletonJointList*() noexcept {
return static_cast<::Oculus::Interaction::Input::Compatibility::OVR::IReadOnlyHandSkeletonJointList*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::Input::Compatibility::OVR::IReadOnlyHandSkeletonJointList"
constexpr ::Oculus::Interaction::Input::Compatibility::OVR::IReadOnlyHandSkeletonJointList* Oculus::Interaction::Input::Compatibility::OVR::HandSkeleton::i___Oculus__Interaction__Input__Compatibility__OVR__IReadOnlyHandSkeletonJointList() noexcept {
return static_cast<::Oculus::Interaction::Input::Compatibility::OVR::IReadOnlyHandSkeletonJointList*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Input::Compatibility::OVR::HandSkeleton::HandSkeleton()   {
}
//  Writing Method size for method: ::Oculus::Interaction::Input::Compatibility::OVR::HandSkeleton___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::Compatibility::OVR::HandSkeleton___c::*)()>(&::Oculus::Interaction::Input::Compatibility::OVR::HandSkeleton___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa517cac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Compatibility::OVR::HandSkeleton___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::Compatibility::OVR::HandSkeleton___c.__cctor_b__9_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::Compatibility::OVR::HandSkeletonJoint (::Oculus::Interaction::Input::Compatibility::OVR::HandSkeleton___c::*)(::Oculus::Interaction::Input::Compatibility::OVR::HandSkeletonJoint)>(&::Oculus::Interaction::Input::Compatibility::OVR::HandSkeleton___c::__cctor_b__9_0)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa517cb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Compatibility::OVR::HandSkeleton___c*>(),
                        {"<.cctor>b__9_0", {}, {::i2c::type_of<::Oculus::Interaction::Input::Compatibility::OVR::HandSkeletonJoint>()}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::Input::Compatibility::OVR::HandSkeleton___c::setStaticF___9(::Oculus::Interaction::Input::Compatibility::OVR::HandSkeleton___c*  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::Input::Compatibility::OVR::HandSkeleton___c*, "<>9", ::Oculus::Interaction::Input::Compatibility::OVR::HandSkeleton___c*>(std::forward<::Oculus::Interaction::Input::Compatibility::OVR::HandSkeleton___c*>(value));
}
inline ::Oculus::Interaction::Input::Compatibility::OVR::HandSkeleton___c* Oculus::Interaction::Input::Compatibility::OVR::HandSkeleton___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::Input::Compatibility::OVR::HandSkeleton___c*, "<>9", ::Oculus::Interaction::Input::Compatibility::OVR::HandSkeleton___c*>();
}
inline void Oculus::Interaction::Input::Compatibility::OVR::HandSkeleton___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Compatibility::OVR::HandSkeleton___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Input::Compatibility::OVR::HandSkeletonJoint Oculus::Interaction::Input::Compatibility::OVR::HandSkeleton___c::__cctor_b__9_0(::Oculus::Interaction::Input::Compatibility::OVR::HandSkeletonJoint  joint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Compatibility::OVR::HandSkeleton___c*>(),
                        {"<.cctor>b__9_0", {}, {::i2c::type_of<::Oculus::Interaction::Input::Compatibility::OVR::HandSkeletonJoint>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::Compatibility::OVR::HandSkeletonJoint>(this, ___internal_method, joint);
}
inline ::Oculus::Interaction::Input::Compatibility::OVR::HandSkeleton___c* Oculus::Interaction::Input::Compatibility::OVR::HandSkeleton___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Input::Compatibility::OVR::HandSkeleton___c*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Input::Compatibility::OVR::HandSkeleton___c::HandSkeleton___c()   {
}
