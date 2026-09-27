#pragma once
// IWYU pragma private; include "Oculus/Interaction/Body/PoseDetection/PoseFromBody.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/Body/PoseDetection/zzzz__PoseFromBody_def.hpp"
#include "Oculus/Interaction/Body/Input/zzzz__BodyJointId_def.hpp"
#include "Oculus/Interaction/Body/Input/zzzz__IBody_def.hpp"
#include "Oculus/Interaction/Body/Input/zzzz__ISkeletonMapping_def.hpp"
#include "Oculus/Interaction/Body/PoseDetection/zzzz__IBodyPose_def.hpp"
#include "Oculus/Interaction/Body/PoseDetection/zzzz__PoseFromBody_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Body::PoseDetection::PoseFromBody.add_WhenBodyPoseUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::PoseDetection::PoseFromBody::*)(::System::Action*)>(&::Oculus::Interaction::Body::PoseDetection::PoseFromBody::add_WhenBodyPoseUpdated)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa4f69b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::PoseFromBody*>(),
                        {"add_WhenBodyPoseUpdated", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::PoseDetection::PoseFromBody.remove_WhenBodyPoseUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::PoseDetection::PoseFromBody::*)(::System::Action*)>(&::Oculus::Interaction::Body::PoseDetection::PoseFromBody::remove_WhenBodyPoseUpdated)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa4f6a4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::PoseFromBody*>(),
                        {"remove_WhenBodyPoseUpdated", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::PoseDetection::PoseFromBody.get_AutoUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Body::PoseDetection::PoseFromBody::*)()>(&::Oculus::Interaction::Body::PoseDetection::PoseFromBody::get_AutoUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4f6ae8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::PoseFromBody*>(),
                        {"get_AutoUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::PoseDetection::PoseFromBody.set_AutoUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::PoseDetection::PoseFromBody::*)(bool)>(&::Oculus::Interaction::Body::PoseDetection::PoseFromBody::set_AutoUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4f6af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::PoseFromBody*>(),
                        {"set_AutoUpdate", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::PoseDetection::PoseFromBody.get_SkeletonMapping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Body::Input::ISkeletonMapping* (::Oculus::Interaction::Body::PoseDetection::PoseFromBody::*)()>(&::Oculus::Interaction::Body::PoseDetection::PoseFromBody::get_SkeletonMapping)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xa4f6af8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::PoseFromBody*>(),
                        {"get_SkeletonMapping", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::PoseDetection::PoseFromBody.GetJointPoseLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Body::PoseDetection::PoseFromBody::*)(::Oculus::Interaction::Body::Input::BodyJointId, ::by_ref<::UnityEngine::Pose>)>(&::Oculus::Interaction::Body::PoseDetection::PoseFromBody::GetJointPoseLocal)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa4f6b98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::PoseFromBody*>(),
                        {"GetJointPoseLocal", {}, {::i2c::type_of<::Oculus::Interaction::Body::Input::BodyJointId>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::PoseDetection::PoseFromBody.GetJointPoseFromRoot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Body::PoseDetection::PoseFromBody::*)(::Oculus::Interaction::Body::Input::BodyJointId, ::by_ref<::UnityEngine::Pose>)>(&::Oculus::Interaction::Body::PoseDetection::PoseFromBody::GetJointPoseFromRoot)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa4f6c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::PoseFromBody*>(),
                        {"GetJointPoseFromRoot", {}, {::i2c::type_of<::Oculus::Interaction::Body::Input::BodyJointId>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::PoseDetection::PoseFromBody.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::PoseDetection::PoseFromBody::*)()>(&::Oculus::Interaction::Body::PoseDetection::PoseFromBody::Awake)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xa4f6c68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::PoseFromBody*>(),
                    {::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::PoseFromBody*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::PoseDetection::PoseFromBody.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::PoseDetection::PoseFromBody::*)()>(&::Oculus::Interaction::Body::PoseDetection::PoseFromBody::Start)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa4f6d48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::PoseFromBody*>(),
                    {::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::PoseFromBody*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::PoseDetection::PoseFromBody.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::PoseDetection::PoseFromBody::*)()>(&::Oculus::Interaction::Body::PoseDetection::PoseFromBody::OnEnable)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xa4f6d74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::PoseFromBody*>(),
                    {::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::PoseFromBody*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::PoseDetection::PoseFromBody.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::PoseDetection::PoseFromBody::*)()>(&::Oculus::Interaction::Body::PoseDetection::PoseFromBody::OnDisable)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xa4f6e74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::PoseFromBody*>(),
                    {::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::PoseFromBody*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::PoseDetection::PoseFromBody.Body_WhenBodyUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::PoseDetection::PoseFromBody::*)()>(&::Oculus::Interaction::Body::PoseDetection::PoseFromBody::Body_WhenBodyUpdated)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa4f6f74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::PoseFromBody*>(),
                        {"Body_WhenBodyUpdated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::PoseDetection::PoseFromBody.UpdatePose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::PoseDetection::PoseFromBody::*)()>(&::Oculus::Interaction::Body::PoseDetection::PoseFromBody::UpdatePose)> {
  constexpr static std::size_t size = 0x44c;
  constexpr static std::size_t addrs = 0xa4f6f84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::PoseFromBody*>(),
                        {"UpdatePose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::PoseDetection::PoseFromBody.InjectAllPoseFromBody
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::PoseDetection::PoseFromBody::*)(::Oculus::Interaction::Body::Input::IBody*)>(&::Oculus::Interaction::Body::PoseDetection::PoseFromBody::InjectAllPoseFromBody)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa4f73d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::PoseFromBody*>(),
                        {"InjectAllPoseFromBody", {}, {::i2c::type_of<::Oculus::Interaction::Body::Input::IBody*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::PoseDetection::PoseFromBody.InjectBody
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::PoseDetection::PoseFromBody::*)(::Oculus::Interaction::Body::Input::IBody*)>(&::Oculus::Interaction::Body::PoseDetection::PoseFromBody::InjectBody)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa4f73d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::PoseFromBody*>(),
                        {"InjectBody", {}, {::i2c::type_of<::Oculus::Interaction::Body::Input::IBody*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::PoseDetection::PoseFromBody._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::PoseDetection::PoseFromBody::*)()>(&::Oculus::Interaction::Body::PoseDetection::PoseFromBody::_ctor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xa4f74a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::PoseFromBody*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action*& Oculus::Interaction::Body::PoseDetection::PoseFromBody::__cordl_internal_get_WhenBodyPoseUpdated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenBodyPoseUpdated;
}
constexpr ::System::Action* const& Oculus::Interaction::Body::PoseDetection::PoseFromBody::__cordl_internal_get_WhenBodyPoseUpdated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenBodyPoseUpdated;
}
constexpr void Oculus::Interaction::Body::PoseDetection::PoseFromBody::__cordl_internal_set_WhenBodyPoseUpdated(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WhenBodyPoseUpdated = value;
}
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::Body::PoseDetection::PoseFromBody::__cordl_internal_get__body()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____body;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::Body::PoseDetection::PoseFromBody::__cordl_internal_get__body() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____body;
}
constexpr void Oculus::Interaction::Body::PoseDetection::PoseFromBody::__cordl_internal_set__body(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____body = value;
}
constexpr ::Oculus::Interaction::Body::Input::IBody*& Oculus::Interaction::Body::PoseDetection::PoseFromBody::__cordl_internal_get_Body()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Body;
}
constexpr ::Oculus::Interaction::Body::Input::IBody* const& Oculus::Interaction::Body::PoseDetection::PoseFromBody::__cordl_internal_get_Body() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Body;
}
constexpr void Oculus::Interaction::Body::PoseDetection::PoseFromBody::__cordl_internal_set_Body(::Oculus::Interaction::Body::Input::IBody*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Body = value;
}
constexpr bool& Oculus::Interaction::Body::PoseDetection::PoseFromBody::__cordl_internal_get__autoUpdate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____autoUpdate;
}
constexpr bool const& Oculus::Interaction::Body::PoseDetection::PoseFromBody::__cordl_internal_get__autoUpdate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____autoUpdate;
}
constexpr void Oculus::Interaction::Body::PoseDetection::PoseFromBody::__cordl_internal_set__autoUpdate(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____autoUpdate = value;
}
constexpr bool& Oculus::Interaction::Body::PoseDetection::PoseFromBody::__cordl_internal_get__started()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr bool const& Oculus::Interaction::Body::PoseDetection::PoseFromBody::__cordl_internal_get__started() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr void Oculus::Interaction::Body::PoseDetection::PoseFromBody::__cordl_internal_set__started(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____started = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::Body::Input::BodyJointId,::UnityEngine::Pose>*& Oculus::Interaction::Body::PoseDetection::PoseFromBody::__cordl_internal_get__jointPosesLocal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jointPosesLocal;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::Body::Input::BodyJointId,::UnityEngine::Pose>* const& Oculus::Interaction::Body::PoseDetection::PoseFromBody::__cordl_internal_get__jointPosesLocal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jointPosesLocal;
}
constexpr void Oculus::Interaction::Body::PoseDetection::PoseFromBody::__cordl_internal_set__jointPosesLocal(::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::Body::Input::BodyJointId,::UnityEngine::Pose>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____jointPosesLocal = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::Body::Input::BodyJointId,::UnityEngine::Pose>*& Oculus::Interaction::Body::PoseDetection::PoseFromBody::__cordl_internal_get__jointPosesFromRoot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jointPosesFromRoot;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::Body::Input::BodyJointId,::UnityEngine::Pose>* const& Oculus::Interaction::Body::PoseDetection::PoseFromBody::__cordl_internal_get__jointPosesFromRoot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jointPosesFromRoot;
}
constexpr void Oculus::Interaction::Body::PoseDetection::PoseFromBody::__cordl_internal_set__jointPosesFromRoot(::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::Body::Input::BodyJointId,::UnityEngine::Pose>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____jointPosesFromRoot = value;
}
inline void Oculus::Interaction::Body::PoseDetection::PoseFromBody::add_WhenBodyPoseUpdated(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::PoseFromBody*>(),
                        {"add_WhenBodyPoseUpdated", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::Body::PoseDetection::PoseFromBody::remove_WhenBodyPoseUpdated(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::PoseFromBody*>(),
                        {"remove_WhenBodyPoseUpdated", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Oculus::Interaction::Body::PoseDetection::PoseFromBody::get_AutoUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::PoseFromBody*>(),
                        {"get_AutoUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::Body::PoseDetection::PoseFromBody::set_AutoUpdate(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::PoseFromBody*>(),
                        {"set_AutoUpdate", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Oculus::Interaction::Body::Input::ISkeletonMapping* Oculus::Interaction::Body::PoseDetection::PoseFromBody::get_SkeletonMapping()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::PoseFromBody*>(),
                        {"get_SkeletonMapping", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Body::Input::ISkeletonMapping*>(this, ___internal_method);
}
inline bool Oculus::Interaction::Body::PoseDetection::PoseFromBody::GetJointPoseLocal(::Oculus::Interaction::Body::Input::BodyJointId  bodyJointId, ::by_ref<::UnityEngine::Pose>  pose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::PoseFromBody*>(),
                        {"GetJointPoseLocal", {}, {::i2c::type_of<::Oculus::Interaction::Body::Input::BodyJointId>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, bodyJointId, pose);
}
inline bool Oculus::Interaction::Body::PoseDetection::PoseFromBody::GetJointPoseFromRoot(::Oculus::Interaction::Body::Input::BodyJointId  bodyJointId, ::by_ref<::UnityEngine::Pose>  pose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::PoseFromBody*>(),
                        {"GetJointPoseFromRoot", {}, {::i2c::type_of<::Oculus::Interaction::Body::Input::BodyJointId>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, bodyJointId, pose);
}
inline void Oculus::Interaction::Body::PoseDetection::PoseFromBody::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::PoseFromBody*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Body::PoseDetection::PoseFromBody::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::PoseFromBody*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Body::PoseDetection::PoseFromBody::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::PoseFromBody*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Body::PoseDetection::PoseFromBody::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::PoseFromBody*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Body::PoseDetection::PoseFromBody::Body_WhenBodyUpdated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::PoseFromBody*>(),
                        {"Body_WhenBodyUpdated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Body::PoseDetection::PoseFromBody::UpdatePose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::PoseFromBody*>(),
                        {"UpdatePose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Body::PoseDetection::PoseFromBody::InjectAllPoseFromBody(::Oculus::Interaction::Body::Input::IBody*  body)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::PoseFromBody*>(),
                        {"InjectAllPoseFromBody", {}, {::i2c::type_of<::Oculus::Interaction::Body::Input::IBody*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, body);
}
inline void Oculus::Interaction::Body::PoseDetection::PoseFromBody::InjectBody(::Oculus::Interaction::Body::Input::IBody*  body)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::PoseFromBody*>(),
                        {"InjectBody", {}, {::i2c::type_of<::Oculus::Interaction::Body::Input::IBody*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, body);
}
inline void Oculus::Interaction::Body::PoseDetection::PoseFromBody::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::PoseFromBody*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Body::PoseDetection::PoseFromBody* Oculus::Interaction::Body::PoseDetection::PoseFromBody::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Body::PoseDetection::PoseFromBody*>());
}
/// @brief Convert operator to "::Oculus::Interaction::Body::PoseDetection::IBodyPose"
constexpr  Oculus::Interaction::Body::PoseDetection::PoseFromBody::operator ::Oculus::Interaction::Body::PoseDetection::IBodyPose*() noexcept {
return static_cast<::Oculus::Interaction::Body::PoseDetection::IBodyPose*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::Body::PoseDetection::IBodyPose"
constexpr ::Oculus::Interaction::Body::PoseDetection::IBodyPose* Oculus::Interaction::Body::PoseDetection::PoseFromBody::i___Oculus__Interaction__Body__PoseDetection__IBodyPose() noexcept {
return static_cast<::Oculus::Interaction::Body::PoseDetection::IBodyPose*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Body::PoseDetection::PoseFromBody::PoseFromBody()   {
}
//  Writing Method size for method: ::Oculus::Interaction::Body::PoseDetection::PoseFromBody___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::PoseDetection::PoseFromBody___c::*)()>(&::Oculus::Interaction::Body::PoseDetection::PoseFromBody___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4f760c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::PoseFromBody___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::PoseDetection::PoseFromBody___c.__ctor_b__24_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::PoseDetection::PoseFromBody___c::*)()>(&::Oculus::Interaction::Body::PoseDetection::PoseFromBody___c::__ctor_b__24_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa4f7614;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::PoseFromBody___c*>(),
                        {"<.ctor>b__24_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::Body::PoseDetection::PoseFromBody___c::setStaticF___9(::Oculus::Interaction::Body::PoseDetection::PoseFromBody___c*  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::Body::PoseDetection::PoseFromBody___c*, "<>9", ::Oculus::Interaction::Body::PoseDetection::PoseFromBody___c*>(std::forward<::Oculus::Interaction::Body::PoseDetection::PoseFromBody___c*>(value));
}
inline ::Oculus::Interaction::Body::PoseDetection::PoseFromBody___c* Oculus::Interaction::Body::PoseDetection::PoseFromBody___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::Body::PoseDetection::PoseFromBody___c*, "<>9", ::Oculus::Interaction::Body::PoseDetection::PoseFromBody___c*>();
}
inline void Oculus::Interaction::Body::PoseDetection::PoseFromBody___c::setStaticF___9__24_0(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "<>9__24_0", ::Oculus::Interaction::Body::PoseDetection::PoseFromBody___c*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* Oculus::Interaction::Body::PoseDetection::PoseFromBody___c::getStaticF___9__24_0()  {
return ::cordl_internals::getStaticField<::System::Action*, "<>9__24_0", ::Oculus::Interaction::Body::PoseDetection::PoseFromBody___c*>();
}
inline void Oculus::Interaction::Body::PoseDetection::PoseFromBody___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::PoseFromBody___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Body::PoseDetection::PoseFromBody___c::__ctor_b__24_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::PoseFromBody___c*>(),
                        {"<.ctor>b__24_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Body::PoseDetection::PoseFromBody___c* Oculus::Interaction::Body::PoseDetection::PoseFromBody___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Body::PoseDetection::PoseFromBody___c*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Body::PoseDetection::PoseFromBody___c::PoseFromBody___c()   {
}
