#pragma once
// IWYU pragma private; include "Oculus/Interaction/Body/Input/OVRSkeletonMapping.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_BoneId_impl.hpp"
#include "Oculus/Interaction/Body/Input/zzzz__BodySkeletonMapping_1_impl.hpp"
#include "Oculus/Interaction/Body/Input/zzzz__OVRSkeletonMapping_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_BodyJointSet_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_BoneId_def.hpp"
#include "Oculus/Interaction/Body/Input/zzzz__BodyJointId_def.hpp"
#include "Oculus/Interaction/Body/Input/zzzz__BodySkeletonMapping`1_JointInfo_def.hpp"
#include "Oculus/Interaction/Body/Input/zzzz__ISkeletonMapping_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyDictionary_2_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Body::Input::OVRSkeletonMapping._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::Input::OVRSkeletonMapping::*)()>(&::Oculus::Interaction::Body::Input::OVRSkeletonMapping::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa423018;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::OVRSkeletonMapping*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::Input::OVRSkeletonMapping._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::Input::OVRSkeletonMapping::*)(::GlobalNamespace::OVRPlugin_BodyJointSet)>(&::Oculus::Interaction::Body::Input::OVRSkeletonMapping::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa4221b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::OVRSkeletonMapping*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::OVRPlugin_BodyJointSet>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::Input::OVRSkeletonMapping.GetJointMapping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyDictionary_2<::Oculus::Interaction::Body::Input::BodyJointId,::GlobalNamespace::BodySkeletonMapping_1_JointInfo<::GlobalNamespace::OVRPlugin_BoneId>>* (*)(::GlobalNamespace::OVRPlugin_BodyJointSet)>(&::Oculus::Interaction::Body::Input::OVRSkeletonMapping::GetJointMapping)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0xa42309c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::OVRSkeletonMapping*>(),
                        {"GetJointMapping", {}, {::i2c::type_of<::GlobalNamespace::OVRPlugin_BodyJointSet>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::Input::OVRSkeletonMapping.GetRoot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPlugin_BoneId (*)()>(&::Oculus::Interaction::Body::Input::OVRSkeletonMapping::GetRoot)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa423094;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::OVRSkeletonMapping*>(),
                        {"GetRoot", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::Body::Input::OVRSkeletonMapping::setStaticF__upperBodyJoints(::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::Body::Input::BodyJointId,::GlobalNamespace::BodySkeletonMapping_1_JointInfo<::GlobalNamespace::OVRPlugin_BoneId>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::Body::Input::BodyJointId,::GlobalNamespace::BodySkeletonMapping_1_JointInfo<::GlobalNamespace::OVRPlugin_BoneId>>*, "_upperBodyJoints", ::Oculus::Interaction::Body::Input::OVRSkeletonMapping*>(std::forward<::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::Body::Input::BodyJointId,::GlobalNamespace::BodySkeletonMapping_1_JointInfo<::GlobalNamespace::OVRPlugin_BoneId>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::Body::Input::BodyJointId,::GlobalNamespace::BodySkeletonMapping_1_JointInfo<::GlobalNamespace::OVRPlugin_BoneId>>* Oculus::Interaction::Body::Input::OVRSkeletonMapping::getStaticF__upperBodyJoints()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::Body::Input::BodyJointId,::GlobalNamespace::BodySkeletonMapping_1_JointInfo<::GlobalNamespace::OVRPlugin_BoneId>>*, "_upperBodyJoints", ::Oculus::Interaction::Body::Input::OVRSkeletonMapping*>();
}
inline void Oculus::Interaction::Body::Input::OVRSkeletonMapping::setStaticF__lowerBodyJoints(::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::Body::Input::BodyJointId,::GlobalNamespace::BodySkeletonMapping_1_JointInfo<::GlobalNamespace::OVRPlugin_BoneId>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::Body::Input::BodyJointId,::GlobalNamespace::BodySkeletonMapping_1_JointInfo<::GlobalNamespace::OVRPlugin_BoneId>>*, "_lowerBodyJoints", ::Oculus::Interaction::Body::Input::OVRSkeletonMapping*>(std::forward<::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::Body::Input::BodyJointId,::GlobalNamespace::BodySkeletonMapping_1_JointInfo<::GlobalNamespace::OVRPlugin_BoneId>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::Body::Input::BodyJointId,::GlobalNamespace::BodySkeletonMapping_1_JointInfo<::GlobalNamespace::OVRPlugin_BoneId>>* Oculus::Interaction::Body::Input::OVRSkeletonMapping::getStaticF__lowerBodyJoints()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::Body::Input::BodyJointId,::GlobalNamespace::BodySkeletonMapping_1_JointInfo<::GlobalNamespace::OVRPlugin_BoneId>>*, "_lowerBodyJoints", ::Oculus::Interaction::Body::Input::OVRSkeletonMapping*>();
}
inline void Oculus::Interaction::Body::Input::OVRSkeletonMapping::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::OVRSkeletonMapping*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Body::Input::OVRSkeletonMapping::_ctor(::GlobalNamespace::OVRPlugin_BodyJointSet  skeletonType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::OVRSkeletonMapping*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::OVRPlugin_BodyJointSet>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, skeletonType);
}
inline ::System::Collections::Generic::IReadOnlyDictionary_2<::Oculus::Interaction::Body::Input::BodyJointId,::GlobalNamespace::BodySkeletonMapping_1_JointInfo<::GlobalNamespace::OVRPlugin_BoneId>>* Oculus::Interaction::Body::Input::OVRSkeletonMapping::GetJointMapping(::GlobalNamespace::OVRPlugin_BodyJointSet  jointSet)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::OVRSkeletonMapping*>(),
                        {"GetJointMapping", {}, {::i2c::type_of<::GlobalNamespace::OVRPlugin_BodyJointSet>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyDictionary_2<::Oculus::Interaction::Body::Input::BodyJointId,::GlobalNamespace::BodySkeletonMapping_1_JointInfo<::GlobalNamespace::OVRPlugin_BoneId>>*>(nullptr, ___internal_method, jointSet);
}
inline ::GlobalNamespace::OVRPlugin_BoneId Oculus::Interaction::Body::Input::OVRSkeletonMapping::GetRoot()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Input::OVRSkeletonMapping*>(),
                        {"GetRoot", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_BoneId>(nullptr, ___internal_method);
}
/// @brief [Obsolete("Use the parameterized constructor instead", true)]
inline ::Oculus::Interaction::Body::Input::OVRSkeletonMapping* Oculus::Interaction::Body::Input::OVRSkeletonMapping::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Body::Input::OVRSkeletonMapping*>());
}
inline ::Oculus::Interaction::Body::Input::OVRSkeletonMapping* Oculus::Interaction::Body::Input::OVRSkeletonMapping::New_ctor(::GlobalNamespace::OVRPlugin_BodyJointSet  skeletonType)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Body::Input::OVRSkeletonMapping*>(skeletonType));
}
/// @brief Convert operator to "::Oculus::Interaction::Body::Input::ISkeletonMapping"
constexpr  Oculus::Interaction::Body::Input::OVRSkeletonMapping::operator ::Oculus::Interaction::Body::Input::ISkeletonMapping*() noexcept {
return static_cast<::Oculus::Interaction::Body::Input::ISkeletonMapping*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::Body::Input::ISkeletonMapping"
constexpr ::Oculus::Interaction::Body::Input::ISkeletonMapping* Oculus::Interaction::Body::Input::OVRSkeletonMapping::i___Oculus__Interaction__Body__Input__ISkeletonMapping() noexcept {
return static_cast<::Oculus::Interaction::Body::Input::ISkeletonMapping*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Body::Input::OVRSkeletonMapping::OVRSkeletonMapping()   {
}
