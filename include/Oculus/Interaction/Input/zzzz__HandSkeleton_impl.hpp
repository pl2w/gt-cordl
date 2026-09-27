#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/HandSkeleton.hpp"
#include "Oculus/Interaction/Input/zzzz__HandSkeletonJoint_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Interaction/Input/zzzz__HandSkeleton_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HandSkeletonJoint_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HandSkeleton___c__DisplayClass7_0_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IReadOnlyHandSkeletonJointList_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IReadOnlyHandSkeleton_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Input::HandSkeleton.get_Joints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::IReadOnlyHandSkeletonJointList* (::Oculus::Interaction::Input::HandSkeleton::*)()>(&::Oculus::Interaction::Input::HandSkeleton::get_Joints)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa502178;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandSkeleton*>(),
                        {"get_Joints", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HandSkeleton.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::Oculus::Interaction::Input::HandSkeletonJoint> (::Oculus::Interaction::Input::HandSkeleton::*)(int32_t)>(&::Oculus::Interaction::Input::HandSkeleton::get_Item)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xa50217c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandSkeleton*>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HandSkeleton.FromJoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::HandSkeleton* (*)(::ArrayW<::UnityEngine::Transform*>)>(&::Oculus::Interaction::Input::HandSkeleton::FromJoints)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0xa5021b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandSkeleton*>(),
                        {"FromJoints", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Transform*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HandSkeleton._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::HandSkeleton::*)()>(&::Oculus::Interaction::Input::HandSkeleton::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xa502428;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandSkeleton*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HandSkeleton._FromJoints_g__FindParentIndex_7_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, ::by_ref<::GlobalNamespace::HandSkeleton___c__DisplayClass7_0>)>(&::Oculus::Interaction::Input::HandSkeleton::_FromJoints_g__FindParentIndex_7_0)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xa502318;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandSkeleton*>(),
                        {"<FromJoints>g__FindParentIndex|7_0", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::HandSkeleton___c__DisplayClass7_0>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::Oculus::Interaction::Input::HandSkeletonJoint>& Oculus::Interaction::Input::HandSkeleton::__cordl_internal_get_joints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___joints;
}
constexpr ::ArrayW<::Oculus::Interaction::Input::HandSkeletonJoint> const& Oculus::Interaction::Input::HandSkeleton::__cordl_internal_get_joints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___joints;
}
constexpr void Oculus::Interaction::Input::HandSkeleton::__cordl_internal_set_joints(::ArrayW<::Oculus::Interaction::Input::HandSkeletonJoint>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___joints = value;
}
inline void Oculus::Interaction::Input::HandSkeleton::setStaticF_DefaultLeftSkeleton(::Oculus::Interaction::Input::HandSkeleton*  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::Input::HandSkeleton*, "DefaultLeftSkeleton", ::Oculus::Interaction::Input::HandSkeleton*>(std::forward<::Oculus::Interaction::Input::HandSkeleton*>(value));
}
inline ::Oculus::Interaction::Input::HandSkeleton* Oculus::Interaction::Input::HandSkeleton::getStaticF_DefaultLeftSkeleton()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::Input::HandSkeleton*, "DefaultLeftSkeleton", ::Oculus::Interaction::Input::HandSkeleton*>();
}
inline void Oculus::Interaction::Input::HandSkeleton::setStaticF_DefaultRightSkeleton(::Oculus::Interaction::Input::HandSkeleton*  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::Input::HandSkeleton*, "DefaultRightSkeleton", ::Oculus::Interaction::Input::HandSkeleton*>(std::forward<::Oculus::Interaction::Input::HandSkeleton*>(value));
}
inline ::Oculus::Interaction::Input::HandSkeleton* Oculus::Interaction::Input::HandSkeleton::getStaticF_DefaultRightSkeleton()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::Input::HandSkeleton*, "DefaultRightSkeleton", ::Oculus::Interaction::Input::HandSkeleton*>();
}
inline ::Oculus::Interaction::Input::IReadOnlyHandSkeletonJointList* Oculus::Interaction::Input::HandSkeleton::get_Joints()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandSkeleton*>(),
                        {"get_Joints", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::IReadOnlyHandSkeletonJointList*>(this, ___internal_method);
}
inline ::by_ref<::Oculus::Interaction::Input::HandSkeletonJoint> Oculus::Interaction::Input::HandSkeleton::get_Item(int32_t  jointId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandSkeleton*>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::Oculus::Interaction::Input::HandSkeletonJoint>>(this, ___internal_method, jointId);
}
inline ::Oculus::Interaction::Input::HandSkeleton* Oculus::Interaction::Input::HandSkeleton::FromJoints(::ArrayW<::UnityEngine::Transform*>  joints)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandSkeleton*>(),
                        {"FromJoints", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Transform*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::HandSkeleton*>(nullptr, ___internal_method, joints);
}
inline void Oculus::Interaction::Input::HandSkeleton::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandSkeleton*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Oculus::Interaction::Input::HandSkeleton::_FromJoints_g__FindParentIndex_7_0(int32_t  jointIndex, ::by_ref<::GlobalNamespace::HandSkeleton___c__DisplayClass7_0>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandSkeleton*>(),
                        {"<FromJoints>g__FindParentIndex|7_0", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::HandSkeleton___c__DisplayClass7_0>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, jointIndex, _cordl_fixed_empty_name_whitespace);
}
inline ::Oculus::Interaction::Input::HandSkeleton* Oculus::Interaction::Input::HandSkeleton::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Input::HandSkeleton*>());
}
/// @brief Convert operator to "::Oculus::Interaction::Input::IReadOnlyHandSkeleton"
constexpr  Oculus::Interaction::Input::HandSkeleton::operator ::Oculus::Interaction::Input::IReadOnlyHandSkeleton*() noexcept {
return static_cast<::Oculus::Interaction::Input::IReadOnlyHandSkeleton*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::Input::IReadOnlyHandSkeleton"
constexpr ::Oculus::Interaction::Input::IReadOnlyHandSkeleton* Oculus::Interaction::Input::HandSkeleton::i___Oculus__Interaction__Input__IReadOnlyHandSkeleton() noexcept {
return static_cast<::Oculus::Interaction::Input::IReadOnlyHandSkeleton*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Oculus::Interaction::Input::IReadOnlyHandSkeletonJointList"
constexpr  Oculus::Interaction::Input::HandSkeleton::operator ::Oculus::Interaction::Input::IReadOnlyHandSkeletonJointList*() noexcept {
return static_cast<::Oculus::Interaction::Input::IReadOnlyHandSkeletonJointList*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::Input::IReadOnlyHandSkeletonJointList"
constexpr ::Oculus::Interaction::Input::IReadOnlyHandSkeletonJointList* Oculus::Interaction::Input::HandSkeleton::i___Oculus__Interaction__Input__IReadOnlyHandSkeletonJointList() noexcept {
return static_cast<::Oculus::Interaction::Input::IReadOnlyHandSkeletonJointList*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Input::HandSkeleton::HandSkeleton()   {
}
