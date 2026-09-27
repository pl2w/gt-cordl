#pragma once
// IWYU pragma private; include "Oculus/Interaction/Body/Samples/LockedBodyPose.hpp"
#include "Oculus/Interaction/Body/Input/zzzz__BodyJointId_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Pose_impl.hpp"
#include "Oculus/Interaction/Body/Samples/zzzz__LockedBodyPose_def.hpp"
#include "Oculus/Interaction/Body/Input/zzzz__BodyJointId_def.hpp"
#include "Oculus/Interaction/Body/Input/zzzz__ISkeletonMapping_def.hpp"
#include "Oculus/Interaction/Body/PoseDetection/zzzz__IBodyPose_def.hpp"
#include "Oculus/Interaction/Body/Samples/zzzz__LockedBodyPose_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Body::Samples::LockedBodyPose.add_WhenBodyPoseUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::Samples::LockedBodyPose::*)(::System::Action*)>(&::Oculus::Interaction::Body::Samples::LockedBodyPose::add_WhenBodyPoseUpdated)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa434af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Samples::LockedBodyPose*>(),
                        {"add_WhenBodyPoseUpdated", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::Samples::LockedBodyPose.remove_WhenBodyPoseUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::Samples::LockedBodyPose::*)(::System::Action*)>(&::Oculus::Interaction::Body::Samples::LockedBodyPose::remove_WhenBodyPoseUpdated)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa434b8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Samples::LockedBodyPose*>(),
                        {"remove_WhenBodyPoseUpdated", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::Samples::LockedBodyPose.get_SkeletonMapping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Body::Input::ISkeletonMapping* (::Oculus::Interaction::Body::Samples::LockedBodyPose::*)()>(&::Oculus::Interaction::Body::Samples::LockedBodyPose::get_SkeletonMapping)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa434c28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Samples::LockedBodyPose*>(),
                        {"get_SkeletonMapping", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::Samples::LockedBodyPose.GetJointPoseLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Body::Samples::LockedBodyPose::*)(::Oculus::Interaction::Body::Input::BodyJointId, ::by_ref<::UnityEngine::Pose>)>(&::Oculus::Interaction::Body::Samples::LockedBodyPose::GetJointPoseLocal)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xa434ccc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Samples::LockedBodyPose*>(),
                        {"GetJointPoseLocal", {}, {::i2c::type_of<::Oculus::Interaction::Body::Input::BodyJointId>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::Samples::LockedBodyPose.GetJointPoseFromRoot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Body::Samples::LockedBodyPose::*)(::Oculus::Interaction::Body::Input::BodyJointId, ::by_ref<::UnityEngine::Pose>)>(&::Oculus::Interaction::Body::Samples::LockedBodyPose::GetJointPoseFromRoot)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa434d88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Samples::LockedBodyPose*>(),
                        {"GetJointPoseFromRoot", {}, {::i2c::type_of<::Oculus::Interaction::Body::Input::BodyJointId>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::Samples::LockedBodyPose.UpdateLockedBodyPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::Samples::LockedBodyPose::*)()>(&::Oculus::Interaction::Body::Samples::LockedBodyPose::UpdateLockedBodyPose)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0xa434df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Samples::LockedBodyPose*>(),
                        {"UpdateLockedBodyPose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::Samples::LockedBodyPose.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::Samples::LockedBodyPose::*)()>(&::Oculus::Interaction::Body::Samples::LockedBodyPose::Awake)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xa435004;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Body::Samples::LockedBodyPose*>(),
                    {::i2c::class_of<::Oculus::Interaction::Body::Samples::LockedBodyPose*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::Samples::LockedBodyPose.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::Samples::LockedBodyPose::*)()>(&::Oculus::Interaction::Body::Samples::LockedBodyPose::Start)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xa4350c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Body::Samples::LockedBodyPose*>(),
                    {::i2c::class_of<::Oculus::Interaction::Body::Samples::LockedBodyPose*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::Samples::LockedBodyPose.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::Samples::LockedBodyPose::*)()>(&::Oculus::Interaction::Body::Samples::LockedBodyPose::OnEnable)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xa4350f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Body::Samples::LockedBodyPose*>(),
                    {::i2c::class_of<::Oculus::Interaction::Body::Samples::LockedBodyPose*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::Samples::LockedBodyPose.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::Samples::LockedBodyPose::*)()>(&::Oculus::Interaction::Body::Samples::LockedBodyPose::OnDisable)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xa4351f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Body::Samples::LockedBodyPose*>(),
                    {::i2c::class_of<::Oculus::Interaction::Body::Samples::LockedBodyPose*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::Samples::LockedBodyPose._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::Samples::LockedBodyPose::*)()>(&::Oculus::Interaction::Body::Samples::LockedBodyPose::_ctor)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0xa4352f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Samples::LockedBodyPose*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action*& Oculus::Interaction::Body::Samples::LockedBodyPose::__cordl_internal_get_WhenBodyPoseUpdated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenBodyPoseUpdated;
}
constexpr ::System::Action* const& Oculus::Interaction::Body::Samples::LockedBodyPose::__cordl_internal_get_WhenBodyPoseUpdated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenBodyPoseUpdated;
}
constexpr void Oculus::Interaction::Body::Samples::LockedBodyPose::__cordl_internal_set_WhenBodyPoseUpdated(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WhenBodyPoseUpdated = value;
}
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::Body::Samples::LockedBodyPose::__cordl_internal_get__pose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pose;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::Body::Samples::LockedBodyPose::__cordl_internal_get__pose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pose;
}
constexpr void Oculus::Interaction::Body::Samples::LockedBodyPose::__cordl_internal_set__pose(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pose = value;
}
constexpr ::Oculus::Interaction::Body::PoseDetection::IBodyPose*& Oculus::Interaction::Body::Samples::LockedBodyPose::__cordl_internal_get_Pose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Pose;
}
constexpr ::Oculus::Interaction::Body::PoseDetection::IBodyPose* const& Oculus::Interaction::Body::Samples::LockedBodyPose::__cordl_internal_get_Pose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Pose;
}
constexpr void Oculus::Interaction::Body::Samples::LockedBodyPose::__cordl_internal_set_Pose(::Oculus::Interaction::Body::PoseDetection::IBodyPose*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Pose = value;
}
constexpr ::Oculus::Interaction::Body::Input::BodyJointId& Oculus::Interaction::Body::Samples::LockedBodyPose::__cordl_internal_get__referenceJoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____referenceJoint;
}
constexpr ::Oculus::Interaction::Body::Input::BodyJointId const& Oculus::Interaction::Body::Samples::LockedBodyPose::__cordl_internal_get__referenceJoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____referenceJoint;
}
constexpr void Oculus::Interaction::Body::Samples::LockedBodyPose::__cordl_internal_set__referenceJoint(::Oculus::Interaction::Body::Input::BodyJointId  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____referenceJoint = value;
}
constexpr ::UnityEngine::Pose& Oculus::Interaction::Body::Samples::LockedBodyPose::__cordl_internal_get__referenceOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____referenceOffset;
}
constexpr ::UnityEngine::Pose const& Oculus::Interaction::Body::Samples::LockedBodyPose::__cordl_internal_get__referenceOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____referenceOffset;
}
constexpr void Oculus::Interaction::Body::Samples::LockedBodyPose::__cordl_internal_set__referenceOffset(::UnityEngine::Pose  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____referenceOffset = value;
}
constexpr bool& Oculus::Interaction::Body::Samples::LockedBodyPose::__cordl_internal_get__started()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr bool const& Oculus::Interaction::Body::Samples::LockedBodyPose::__cordl_internal_get__started() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr void Oculus::Interaction::Body::Samples::LockedBodyPose::__cordl_internal_set__started(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____started = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::Body::Input::BodyJointId,::UnityEngine::Pose>*& Oculus::Interaction::Body::Samples::LockedBodyPose::__cordl_internal_get__lockedPoses()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lockedPoses;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::Body::Input::BodyJointId,::UnityEngine::Pose>* const& Oculus::Interaction::Body::Samples::LockedBodyPose::__cordl_internal_get__lockedPoses() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lockedPoses;
}
constexpr void Oculus::Interaction::Body::Samples::LockedBodyPose::__cordl_internal_set__lockedPoses(::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::Body::Input::BodyJointId,::UnityEngine::Pose>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lockedPoses = value;
}
inline void Oculus::Interaction::Body::Samples::LockedBodyPose::setStaticF_HIP_OFFSET(::UnityEngine::Pose  value)  {
::cordl_internals::setStaticField<::UnityEngine::Pose, "HIP_OFFSET", ::Oculus::Interaction::Body::Samples::LockedBodyPose*>(std::forward<::UnityEngine::Pose>(value));
}
inline ::UnityEngine::Pose Oculus::Interaction::Body::Samples::LockedBodyPose::getStaticF_HIP_OFFSET()  {
return ::cordl_internals::getStaticField<::UnityEngine::Pose, "HIP_OFFSET", ::Oculus::Interaction::Body::Samples::LockedBodyPose*>();
}
inline void Oculus::Interaction::Body::Samples::LockedBodyPose::add_WhenBodyPoseUpdated(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Samples::LockedBodyPose*>(),
                        {"add_WhenBodyPoseUpdated", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::Body::Samples::LockedBodyPose::remove_WhenBodyPoseUpdated(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Samples::LockedBodyPose*>(),
                        {"remove_WhenBodyPoseUpdated", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Oculus::Interaction::Body::Input::ISkeletonMapping* Oculus::Interaction::Body::Samples::LockedBodyPose::get_SkeletonMapping()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Samples::LockedBodyPose*>(),
                        {"get_SkeletonMapping", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Body::Input::ISkeletonMapping*>(this, ___internal_method);
}
inline bool Oculus::Interaction::Body::Samples::LockedBodyPose::GetJointPoseLocal(::Oculus::Interaction::Body::Input::BodyJointId  bodyJointId, ::by_ref<::UnityEngine::Pose>  pose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Samples::LockedBodyPose*>(),
                        {"GetJointPoseLocal", {}, {::i2c::type_of<::Oculus::Interaction::Body::Input::BodyJointId>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, bodyJointId, pose);
}
inline bool Oculus::Interaction::Body::Samples::LockedBodyPose::GetJointPoseFromRoot(::Oculus::Interaction::Body::Input::BodyJointId  bodyJointId, ::by_ref<::UnityEngine::Pose>  pose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Samples::LockedBodyPose*>(),
                        {"GetJointPoseFromRoot", {}, {::i2c::type_of<::Oculus::Interaction::Body::Input::BodyJointId>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, bodyJointId, pose);
}
inline void Oculus::Interaction::Body::Samples::LockedBodyPose::UpdateLockedBodyPose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Samples::LockedBodyPose*>(),
                        {"UpdateLockedBodyPose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Body::Samples::LockedBodyPose::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Body::Samples::LockedBodyPose*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Body::Samples::LockedBodyPose::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Body::Samples::LockedBodyPose*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Body::Samples::LockedBodyPose::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Body::Samples::LockedBodyPose*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Body::Samples::LockedBodyPose::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Body::Samples::LockedBodyPose*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Body::Samples::LockedBodyPose::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Samples::LockedBodyPose*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Body::Samples::LockedBodyPose* Oculus::Interaction::Body::Samples::LockedBodyPose::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Body::Samples::LockedBodyPose*>());
}
/// @brief Convert operator to "::Oculus::Interaction::Body::PoseDetection::IBodyPose"
constexpr  Oculus::Interaction::Body::Samples::LockedBodyPose::operator ::Oculus::Interaction::Body::PoseDetection::IBodyPose*() noexcept {
return static_cast<::Oculus::Interaction::Body::PoseDetection::IBodyPose*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::Body::PoseDetection::IBodyPose"
constexpr ::Oculus::Interaction::Body::PoseDetection::IBodyPose* Oculus::Interaction::Body::Samples::LockedBodyPose::i___Oculus__Interaction__Body__PoseDetection__IBodyPose() noexcept {
return static_cast<::Oculus::Interaction::Body::PoseDetection::IBodyPose*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Body::Samples::LockedBodyPose::LockedBodyPose()   {
}
//  Writing Method size for method: ::Oculus::Interaction::Body::Samples::LockedBodyPose___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::Samples::LockedBodyPose___c::*)()>(&::Oculus::Interaction::Body::Samples::LockedBodyPose___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa435514;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Samples::LockedBodyPose___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::Samples::LockedBodyPose___c.__ctor_b__19_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::Samples::LockedBodyPose___c::*)()>(&::Oculus::Interaction::Body::Samples::LockedBodyPose___c::__ctor_b__19_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa43551c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Samples::LockedBodyPose___c*>(),
                        {"<.ctor>b__19_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::Body::Samples::LockedBodyPose___c::setStaticF___9(::Oculus::Interaction::Body::Samples::LockedBodyPose___c*  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::Body::Samples::LockedBodyPose___c*, "<>9", ::Oculus::Interaction::Body::Samples::LockedBodyPose___c*>(std::forward<::Oculus::Interaction::Body::Samples::LockedBodyPose___c*>(value));
}
inline ::Oculus::Interaction::Body::Samples::LockedBodyPose___c* Oculus::Interaction::Body::Samples::LockedBodyPose___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::Body::Samples::LockedBodyPose___c*, "<>9", ::Oculus::Interaction::Body::Samples::LockedBodyPose___c*>();
}
inline void Oculus::Interaction::Body::Samples::LockedBodyPose___c::setStaticF___9__19_0(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "<>9__19_0", ::Oculus::Interaction::Body::Samples::LockedBodyPose___c*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* Oculus::Interaction::Body::Samples::LockedBodyPose___c::getStaticF___9__19_0()  {
return ::cordl_internals::getStaticField<::System::Action*, "<>9__19_0", ::Oculus::Interaction::Body::Samples::LockedBodyPose___c*>();
}
inline void Oculus::Interaction::Body::Samples::LockedBodyPose___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Samples::LockedBodyPose___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Body::Samples::LockedBodyPose___c::__ctor_b__19_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::Samples::LockedBodyPose___c*>(),
                        {"<.ctor>b__19_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Body::Samples::LockedBodyPose___c* Oculus::Interaction::Body::Samples::LockedBodyPose___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Body::Samples::LockedBodyPose___c*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Body::Samples::LockedBodyPose___c::LockedBodyPose___c()   {
}
