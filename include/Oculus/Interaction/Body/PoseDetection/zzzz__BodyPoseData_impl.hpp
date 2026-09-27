#pragma once
// IWYU pragma private; include "Oculus/Interaction/Body/PoseDetection/BodyPoseData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "Oculus/Interaction/Body/PoseDetection/zzzz__BodyPoseData_def.hpp"
#include "Oculus/Interaction/Body/Input/zzzz__BodyJointId_def.hpp"
#include "Oculus/Interaction/Body/Input/zzzz__IBody_def.hpp"
#include "Oculus/Interaction/Body/Input/zzzz__ISkeletonMapping_def.hpp"
#include "Oculus/Interaction/Body/PoseDetection/zzzz__BodyPoseData_JointData_def.hpp"
#include "Oculus/Interaction/Body/PoseDetection/zzzz__BodyPoseData_def.hpp"
#include "Oculus/Interaction/Body/PoseDetection/zzzz__IBodyPose_def.hpp"
#include "Oculus/Interaction/Collections/zzzz__EnumerableHashSet_1_def.hpp"
#include "Oculus/Interaction/Collections/zzzz__IEnumerableHashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Body::PoseDetection::BodyPoseData.add_WhenBodyPoseUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::PoseDetection::BodyPoseData::*)(::System::Action*)>(&::Oculus::Interaction::Body::PoseDetection::BodyPoseData::add_WhenBodyPoseUpdated)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa4f54e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::BodyPoseData*>(),
                        {"add_WhenBodyPoseUpdated", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::PoseDetection::BodyPoseData.remove_WhenBodyPoseUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::PoseDetection::BodyPoseData::*)(::System::Action*)>(&::Oculus::Interaction::Body::PoseDetection::BodyPoseData::remove_WhenBodyPoseUpdated)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa4f5584;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::BodyPoseData*>(),
                        {"remove_WhenBodyPoseUpdated", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::PoseDetection::BodyPoseData.GetJointPoseFromRoot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Body::PoseDetection::BodyPoseData::*)(::Oculus::Interaction::Body::Input::BodyJointId, ::by_ref<::UnityEngine::Pose>)>(&::Oculus::Interaction::Body::PoseDetection::BodyPoseData::GetJointPoseFromRoot)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa4f5620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::BodyPoseData*>(),
                        {"GetJointPoseFromRoot", {}, {::i2c::type_of<::Oculus::Interaction::Body::Input::BodyJointId>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::PoseDetection::BodyPoseData.GetJointPoseLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Body::PoseDetection::BodyPoseData::*)(::Oculus::Interaction::Body::Input::BodyJointId, ::by_ref<::UnityEngine::Pose>)>(&::Oculus::Interaction::Body::PoseDetection::BodyPoseData::GetJointPoseLocal)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa4f5688;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::BodyPoseData*>(),
                        {"GetJointPoseLocal", {}, {::i2c::type_of<::Oculus::Interaction::Body::Input::BodyJointId>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::PoseDetection::BodyPoseData.get_SkeletonMapping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Body::Input::ISkeletonMapping* (::Oculus::Interaction::Body::PoseDetection::BodyPoseData::*)()>(&::Oculus::Interaction::Body::PoseDetection::BodyPoseData::get_SkeletonMapping)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4f56f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::BodyPoseData*>(),
                        {"get_SkeletonMapping", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::PoseDetection::BodyPoseData.SetBodyPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::PoseDetection::BodyPoseData::*)(::Oculus::Interaction::Body::Input::IBody*)>(&::Oculus::Interaction::Body::PoseDetection::BodyPoseData::SetBodyPose)> {
  constexpr static std::size_t size = 0x580;
  constexpr static std::size_t addrs = 0xa4f56f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::BodyPoseData*>(),
                        {"SetBodyPose", {}, {::i2c::type_of<::Oculus::Interaction::Body::Input::IBody*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::PoseDetection::BodyPoseData.OnBeforeSerialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::PoseDetection::BodyPoseData::*)()>(&::Oculus::Interaction::Body::PoseDetection::BodyPoseData::OnBeforeSerialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa4f5f2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::BodyPoseData*>(),
                        {"OnBeforeSerialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::PoseDetection::BodyPoseData.OnAfterDeserialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::PoseDetection::BodyPoseData::*)()>(&::Oculus::Interaction::Body::PoseDetection::BodyPoseData::OnAfterDeserialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa4f5f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::BodyPoseData*>(),
                        {"OnAfterDeserialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::PoseDetection::BodyPoseData.Rebuild
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::PoseDetection::BodyPoseData::*)()>(&::Oculus::Interaction::Body::PoseDetection::BodyPoseData::Rebuild)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0xa4f5c78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::BodyPoseData*>(),
                        {"Rebuild", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::PoseDetection::BodyPoseData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::PoseDetection::BodyPoseData::*)()>(&::Oculus::Interaction::Body::PoseDetection::BodyPoseData::_ctor)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0xa4f5f34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::BodyPoseData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action*& Oculus::Interaction::Body::PoseDetection::BodyPoseData::__cordl_internal_get_WhenBodyPoseUpdated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenBodyPoseUpdated;
}
constexpr ::System::Action* const& Oculus::Interaction::Body::PoseDetection::BodyPoseData::__cordl_internal_get_WhenBodyPoseUpdated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenBodyPoseUpdated;
}
constexpr void Oculus::Interaction::Body::PoseDetection::BodyPoseData::__cordl_internal_set_WhenBodyPoseUpdated(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WhenBodyPoseUpdated = value;
}
constexpr int32_t& Oculus::Interaction::Body::PoseDetection::BodyPoseData::__cordl_internal_get__serializedVersion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____serializedVersion;
}
constexpr int32_t const& Oculus::Interaction::Body::PoseDetection::BodyPoseData::__cordl_internal_get__serializedVersion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____serializedVersion;
}
constexpr void Oculus::Interaction::Body::PoseDetection::BodyPoseData::__cordl_internal_set__serializedVersion(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____serializedVersion = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BodyPoseData_JointData>*& Oculus::Interaction::Body::PoseDetection::BodyPoseData::__cordl_internal_get__jointData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jointData;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BodyPoseData_JointData>* const& Oculus::Interaction::Body::PoseDetection::BodyPoseData::__cordl_internal_get__jointData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jointData;
}
constexpr void Oculus::Interaction::Body::PoseDetection::BodyPoseData::__cordl_internal_set__jointData(::System::Collections::Generic::List_1<::GlobalNamespace::BodyPoseData_JointData>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____jointData = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::Body::Input::BodyJointId,::UnityEngine::Pose>*& Oculus::Interaction::Body::PoseDetection::BodyPoseData::__cordl_internal_get__posesFromRoot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____posesFromRoot;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::Body::Input::BodyJointId,::UnityEngine::Pose>* const& Oculus::Interaction::Body::PoseDetection::BodyPoseData::__cordl_internal_get__posesFromRoot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____posesFromRoot;
}
constexpr void Oculus::Interaction::Body::PoseDetection::BodyPoseData::__cordl_internal_set__posesFromRoot(::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::Body::Input::BodyJointId,::UnityEngine::Pose>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____posesFromRoot = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::Body::Input::BodyJointId,::UnityEngine::Pose>*& Oculus::Interaction::Body::PoseDetection::BodyPoseData::__cordl_internal_get__localPoses()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localPoses;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::Body::Input::BodyJointId,::UnityEngine::Pose>* const& Oculus::Interaction::Body::PoseDetection::BodyPoseData::__cordl_internal_get__localPoses() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localPoses;
}
constexpr void Oculus::Interaction::Body::PoseDetection::BodyPoseData::__cordl_internal_set__localPoses(::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::Body::Input::BodyJointId,::UnityEngine::Pose>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____localPoses = value;
}
constexpr ::Oculus::Interaction::Body::PoseDetection::BodyPoseData_Mapping*& Oculus::Interaction::Body::PoseDetection::BodyPoseData::__cordl_internal_get__mapping()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mapping;
}
constexpr ::Oculus::Interaction::Body::PoseDetection::BodyPoseData_Mapping* const& Oculus::Interaction::Body::PoseDetection::BodyPoseData::__cordl_internal_get__mapping() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mapping;
}
constexpr void Oculus::Interaction::Body::PoseDetection::BodyPoseData::__cordl_internal_set__mapping(::Oculus::Interaction::Body::PoseDetection::BodyPoseData_Mapping*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____mapping = value;
}
inline void Oculus::Interaction::Body::PoseDetection::BodyPoseData::add_WhenBodyPoseUpdated(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::BodyPoseData*>(),
                        {"add_WhenBodyPoseUpdated", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::Body::PoseDetection::BodyPoseData::remove_WhenBodyPoseUpdated(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::BodyPoseData*>(),
                        {"remove_WhenBodyPoseUpdated", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Oculus::Interaction::Body::PoseDetection::BodyPoseData::GetJointPoseFromRoot(::Oculus::Interaction::Body::Input::BodyJointId  bodyJointId, ::by_ref<::UnityEngine::Pose>  pose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::BodyPoseData*>(),
                        {"GetJointPoseFromRoot", {}, {::i2c::type_of<::Oculus::Interaction::Body::Input::BodyJointId>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, bodyJointId, pose);
}
inline bool Oculus::Interaction::Body::PoseDetection::BodyPoseData::GetJointPoseLocal(::Oculus::Interaction::Body::Input::BodyJointId  bodyJointId, ::by_ref<::UnityEngine::Pose>  pose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::BodyPoseData*>(),
                        {"GetJointPoseLocal", {}, {::i2c::type_of<::Oculus::Interaction::Body::Input::BodyJointId>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, bodyJointId, pose);
}
inline ::Oculus::Interaction::Body::Input::ISkeletonMapping* Oculus::Interaction::Body::PoseDetection::BodyPoseData::get_SkeletonMapping()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::BodyPoseData*>(),
                        {"get_SkeletonMapping", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Body::Input::ISkeletonMapping*>(this, ___internal_method);
}
inline void Oculus::Interaction::Body::PoseDetection::BodyPoseData::SetBodyPose(::Oculus::Interaction::Body::Input::IBody*  body)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::BodyPoseData*>(),
                        {"SetBodyPose", {}, {::i2c::type_of<::Oculus::Interaction::Body::Input::IBody*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, body);
}
inline void Oculus::Interaction::Body::PoseDetection::BodyPoseData::OnBeforeSerialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::BodyPoseData*>(),
                        {"OnBeforeSerialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Body::PoseDetection::BodyPoseData::OnAfterDeserialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::BodyPoseData*>(),
                        {"OnAfterDeserialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Body::PoseDetection::BodyPoseData::Rebuild()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::BodyPoseData*>(),
                        {"Rebuild", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Body::PoseDetection::BodyPoseData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::BodyPoseData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Body::PoseDetection::BodyPoseData* Oculus::Interaction::Body::PoseDetection::BodyPoseData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Body::PoseDetection::BodyPoseData*>());
}
/// @brief Convert operator to "::Oculus::Interaction::Body::PoseDetection::IBodyPose"
constexpr  Oculus::Interaction::Body::PoseDetection::BodyPoseData::operator ::Oculus::Interaction::Body::PoseDetection::IBodyPose*() noexcept {
return static_cast<::Oculus::Interaction::Body::PoseDetection::IBodyPose*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::Body::PoseDetection::IBodyPose"
constexpr ::Oculus::Interaction::Body::PoseDetection::IBodyPose* Oculus::Interaction::Body::PoseDetection::BodyPoseData::i___Oculus__Interaction__Body__PoseDetection__IBodyPose() noexcept {
return static_cast<::Oculus::Interaction::Body::PoseDetection::IBodyPose*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr  Oculus::Interaction::Body::PoseDetection::BodyPoseData::operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* Oculus::Interaction::Body::PoseDetection::BodyPoseData::i___UnityEngine__ISerializationCallbackReceiver() noexcept {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Body::PoseDetection::BodyPoseData::BodyPoseData()   {
}
//  Writing Method size for method: ::Oculus::Interaction::Body::PoseDetection::BodyPoseData___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::PoseDetection::BodyPoseData___c::*)()>(&::Oculus::Interaction::Body::PoseDetection::BodyPoseData___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4f62d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::BodyPoseData___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::PoseDetection::BodyPoseData___c.__ctor_b__19_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::PoseDetection::BodyPoseData___c::*)()>(&::Oculus::Interaction::Body::PoseDetection::BodyPoseData___c::__ctor_b__19_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa4f62e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::BodyPoseData___c*>(),
                        {"<.ctor>b__19_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::Body::PoseDetection::BodyPoseData___c::setStaticF___9(::Oculus::Interaction::Body::PoseDetection::BodyPoseData___c*  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::Body::PoseDetection::BodyPoseData___c*, "<>9", ::Oculus::Interaction::Body::PoseDetection::BodyPoseData___c*>(std::forward<::Oculus::Interaction::Body::PoseDetection::BodyPoseData___c*>(value));
}
inline ::Oculus::Interaction::Body::PoseDetection::BodyPoseData___c* Oculus::Interaction::Body::PoseDetection::BodyPoseData___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::Body::PoseDetection::BodyPoseData___c*, "<>9", ::Oculus::Interaction::Body::PoseDetection::BodyPoseData___c*>();
}
inline void Oculus::Interaction::Body::PoseDetection::BodyPoseData___c::setStaticF___9__19_0(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "<>9__19_0", ::Oculus::Interaction::Body::PoseDetection::BodyPoseData___c*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* Oculus::Interaction::Body::PoseDetection::BodyPoseData___c::getStaticF___9__19_0()  {
return ::cordl_internals::getStaticField<::System::Action*, "<>9__19_0", ::Oculus::Interaction::Body::PoseDetection::BodyPoseData___c*>();
}
inline void Oculus::Interaction::Body::PoseDetection::BodyPoseData___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::BodyPoseData___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Body::PoseDetection::BodyPoseData___c::__ctor_b__19_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::BodyPoseData___c*>(),
                        {"<.ctor>b__19_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Body::PoseDetection::BodyPoseData___c* Oculus::Interaction::Body::PoseDetection::BodyPoseData___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Body::PoseDetection::BodyPoseData___c*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Body::PoseDetection::BodyPoseData___c::BodyPoseData___c()   {
}
//  Writing Method size for method: ::Oculus::Interaction::Body::PoseDetection::BodyPoseData_Mapping.Oculus_Interaction_Body_Input_ISkeletonMapping_get_Joints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Collections::IEnumerableHashSet_1<::Oculus::Interaction::Body::Input::BodyJointId>* (::Oculus::Interaction::Body::PoseDetection::BodyPoseData_Mapping::*)()>(&::Oculus::Interaction::Body::PoseDetection::BodyPoseData_Mapping::Oculus_Interaction_Body_Input_ISkeletonMapping_get_Joints)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4f6200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::BodyPoseData_Mapping*>(),
                        {"Oculus.Interaction.Body.Input.ISkeletonMapping.get_Joints", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::PoseDetection::BodyPoseData_Mapping.Oculus_Interaction_Body_Input_ISkeletonMapping_TryGetParentJointId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Body::PoseDetection::BodyPoseData_Mapping::*)(::Oculus::Interaction::Body::Input::BodyJointId, ::by_ref<::Oculus::Interaction::Body::Input::BodyJointId>)>(&::Oculus::Interaction::Body::PoseDetection::BodyPoseData_Mapping::Oculus_Interaction_Body_Input_ISkeletonMapping_TryGetParentJointId)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa4f6208;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::BodyPoseData_Mapping*>(),
                        {"Oculus.Interaction.Body.Input.ISkeletonMapping.TryGetParentJointId", {}, {::i2c::type_of<::Oculus::Interaction::Body::Input::BodyJointId>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Body::Input::BodyJointId>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::PoseDetection::BodyPoseData_Mapping._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::PoseDetection::BodyPoseData_Mapping::*)()>(&::Oculus::Interaction::Body::PoseDetection::BodyPoseData_Mapping::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xa4f6124;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::BodyPoseData_Mapping*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Oculus::Interaction::Collections::EnumerableHashSet_1<::Oculus::Interaction::Body::Input::BodyJointId>*& Oculus::Interaction::Body::PoseDetection::BodyPoseData_Mapping::__cordl_internal_get_Joints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Joints;
}
constexpr ::Oculus::Interaction::Collections::EnumerableHashSet_1<::Oculus::Interaction::Body::Input::BodyJointId>* const& Oculus::Interaction::Body::PoseDetection::BodyPoseData_Mapping::__cordl_internal_get_Joints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Joints;
}
constexpr void Oculus::Interaction::Body::PoseDetection::BodyPoseData_Mapping::__cordl_internal_set_Joints(::Oculus::Interaction::Collections::EnumerableHashSet_1<::Oculus::Interaction::Body::Input::BodyJointId>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Joints = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::Body::Input::BodyJointId,::Oculus::Interaction::Body::Input::BodyJointId>*& Oculus::Interaction::Body::PoseDetection::BodyPoseData_Mapping::__cordl_internal_get_JointToParent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___JointToParent;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::Body::Input::BodyJointId,::Oculus::Interaction::Body::Input::BodyJointId>* const& Oculus::Interaction::Body::PoseDetection::BodyPoseData_Mapping::__cordl_internal_get_JointToParent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___JointToParent;
}
constexpr void Oculus::Interaction::Body::PoseDetection::BodyPoseData_Mapping::__cordl_internal_set_JointToParent(::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::Body::Input::BodyJointId,::Oculus::Interaction::Body::Input::BodyJointId>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___JointToParent = value;
}
inline ::Oculus::Interaction::Collections::IEnumerableHashSet_1<::Oculus::Interaction::Body::Input::BodyJointId>* Oculus::Interaction::Body::PoseDetection::BodyPoseData_Mapping::Oculus_Interaction_Body_Input_ISkeletonMapping_get_Joints()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::BodyPoseData_Mapping*>(),
                        {"Oculus.Interaction.Body.Input.ISkeletonMapping.get_Joints", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Collections::IEnumerableHashSet_1<::Oculus::Interaction::Body::Input::BodyJointId>*>(this, ___internal_method);
}
inline bool Oculus::Interaction::Body::PoseDetection::BodyPoseData_Mapping::Oculus_Interaction_Body_Input_ISkeletonMapping_TryGetParentJointId(::Oculus::Interaction::Body::Input::BodyJointId  jointId, ::by_ref<::Oculus::Interaction::Body::Input::BodyJointId>  parent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::BodyPoseData_Mapping*>(),
                        {"Oculus.Interaction.Body.Input.ISkeletonMapping.TryGetParentJointId", {}, {::i2c::type_of<::Oculus::Interaction::Body::Input::BodyJointId>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Body::Input::BodyJointId>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, jointId, parent);
}
inline void Oculus::Interaction::Body::PoseDetection::BodyPoseData_Mapping::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::BodyPoseData_Mapping*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Body::PoseDetection::BodyPoseData_Mapping* Oculus::Interaction::Body::PoseDetection::BodyPoseData_Mapping::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Body::PoseDetection::BodyPoseData_Mapping*>());
}
/// @brief Convert operator to "::Oculus::Interaction::Body::Input::ISkeletonMapping"
constexpr  Oculus::Interaction::Body::PoseDetection::BodyPoseData_Mapping::operator ::Oculus::Interaction::Body::Input::ISkeletonMapping*() noexcept {
return static_cast<::Oculus::Interaction::Body::Input::ISkeletonMapping*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::Body::Input::ISkeletonMapping"
constexpr ::Oculus::Interaction::Body::Input::ISkeletonMapping* Oculus::Interaction::Body::PoseDetection::BodyPoseData_Mapping::i___Oculus__Interaction__Body__Input__ISkeletonMapping() noexcept {
return static_cast<::Oculus::Interaction::Body::Input::ISkeletonMapping*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Body::PoseDetection::BodyPoseData_Mapping::BodyPoseData_Mapping()   {
}
