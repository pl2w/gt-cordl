#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/JointDeltaProvider.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Pose_impl.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__JointDeltaProvider_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HandJointId_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IHand_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__IJointDeltaProvider_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__JointDeltaConfig_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__JointDeltaProvider_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::JointDeltaProvider.get_PrevDataIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Oculus::Interaction::PoseDetection::JointDeltaProvider::*)()>(&::Oculus::Interaction::PoseDetection::JointDeltaProvider::get_PrevDataIndex)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa49e9e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointDeltaProvider*>(),
                        {"get_PrevDataIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::JointDeltaProvider.GetPositionDelta
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::PoseDetection::JointDeltaProvider::*)(::Oculus::Interaction::Input::HandJointId, ::by_ref<::UnityEngine::Vector3>)>(&::Oculus::Interaction::PoseDetection::JointDeltaProvider::GetPositionDelta)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0xa49e9f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointDeltaProvider*>(),
                        {"GetPositionDelta", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandJointId>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::JointDeltaProvider.GetRotationDelta
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::PoseDetection::JointDeltaProvider::*)(::Oculus::Interaction::Input::HandJointId, ::by_ref<::UnityEngine::Quaternion>)>(&::Oculus::Interaction::PoseDetection::JointDeltaProvider::GetRotationDelta)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0xa49f070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointDeltaProvider*>(),
                        {"GetRotationDelta", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandJointId>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::JointDeltaProvider.GetPrevJointPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::PoseDetection::JointDeltaProvider::*)(::Oculus::Interaction::Input::HandJointId, ::by_ref<::UnityEngine::Pose>)>(&::Oculus::Interaction::PoseDetection::JointDeltaProvider::GetPrevJointPose)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xa49f268;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointDeltaProvider*>(),
                        {"GetPrevJointPose", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandJointId>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::JointDeltaProvider.RegisterConfig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::JointDeltaProvider::*)(::Oculus::Interaction::PoseDetection::JointDeltaConfig*)>(&::Oculus::Interaction::PoseDetection::JointDeltaProvider::RegisterConfig)> {
  constexpr static std::size_t size = 0x5bc;
  constexpr static std::size_t addrs = 0xa49f320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointDeltaProvider*>(),
                        {"RegisterConfig", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::JointDeltaConfig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::JointDeltaProvider.UnRegisterConfig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::JointDeltaProvider::*)(::Oculus::Interaction::PoseDetection::JointDeltaConfig*)>(&::Oculus::Interaction::PoseDetection::JointDeltaProvider::UnRegisterConfig)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa49f95c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointDeltaProvider*>(),
                        {"UnRegisterConfig", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::JointDeltaConfig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::JointDeltaProvider.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::JointDeltaProvider::*)()>(&::Oculus::Interaction::PoseDetection::JointDeltaProvider::Awake)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa49f9b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointDeltaProvider*>(),
                    {::i2c::class_of<::Oculus::Interaction::PoseDetection::JointDeltaProvider*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::JointDeltaProvider.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::JointDeltaProvider::*)()>(&::Oculus::Interaction::PoseDetection::JointDeltaProvider::Start)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa49fa20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointDeltaProvider*>(),
                    {::i2c::class_of<::Oculus::Interaction::PoseDetection::JointDeltaProvider*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::JointDeltaProvider.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::JointDeltaProvider::*)()>(&::Oculus::Interaction::PoseDetection::JointDeltaProvider::OnEnable)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xa49fa4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointDeltaProvider*>(),
                    {::i2c::class_of<::Oculus::Interaction::PoseDetection::JointDeltaProvider*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::JointDeltaProvider.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::JointDeltaProvider::*)()>(&::Oculus::Interaction::PoseDetection::JointDeltaProvider::OnDisable)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xa49fb4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointDeltaProvider*>(),
                    {::i2c::class_of<::Oculus::Interaction::PoseDetection::JointDeltaProvider*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::JointDeltaProvider.UpdateData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::JointDeltaProvider::*)()>(&::Oculus::Interaction::PoseDetection::JointDeltaProvider::UpdateData)> {
  constexpr static std::size_t size = 0x534;
  constexpr static std::size_t addrs = 0xa49eb3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointDeltaProvider*>(),
                        {"UpdateData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::JointDeltaProvider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::JointDeltaProvider::*)()>(&::Oculus::Interaction::PoseDetection::JointDeltaProvider::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xa49fc4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointDeltaProvider*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::PoseDetection::JointDeltaProvider::__cordl_internal_get__hand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hand;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::PoseDetection::JointDeltaProvider::__cordl_internal_get__hand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hand;
}
constexpr void Oculus::Interaction::PoseDetection::JointDeltaProvider::__cordl_internal_set__hand(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hand = value;
}
constexpr ::Oculus::Interaction::Input::IHand*& Oculus::Interaction::PoseDetection::JointDeltaProvider::__cordl_internal_get_Hand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Hand;
}
constexpr ::Oculus::Interaction::Input::IHand* const& Oculus::Interaction::PoseDetection::JointDeltaProvider::__cordl_internal_get_Hand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Hand;
}
constexpr void Oculus::Interaction::PoseDetection::JointDeltaProvider::__cordl_internal_set_Hand(::Oculus::Interaction::Input::IHand*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Hand = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::Input::HandJointId,::ArrayW<::Oculus::Interaction::PoseDetection::JointDeltaProvider_PoseData*>>*& Oculus::Interaction::PoseDetection::JointDeltaProvider::__cordl_internal_get__poseDataCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____poseDataCache;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::Input::HandJointId,::ArrayW<::Oculus::Interaction::PoseDetection::JointDeltaProvider_PoseData*>>* const& Oculus::Interaction::PoseDetection::JointDeltaProvider::__cordl_internal_get__poseDataCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____poseDataCache;
}
constexpr void Oculus::Interaction::PoseDetection::JointDeltaProvider::__cordl_internal_set__poseDataCache(::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::Input::HandJointId,::ArrayW<::Oculus::Interaction::PoseDetection::JointDeltaProvider_PoseData*>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____poseDataCache = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::Oculus::Interaction::Input::HandJointId>*& Oculus::Interaction::PoseDetection::JointDeltaProvider::__cordl_internal_get__trackedJoints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____trackedJoints;
}
constexpr ::System::Collections::Generic::HashSet_1<::Oculus::Interaction::Input::HandJointId>* const& Oculus::Interaction::PoseDetection::JointDeltaProvider::__cordl_internal_get__trackedJoints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____trackedJoints;
}
constexpr void Oculus::Interaction::PoseDetection::JointDeltaProvider::__cordl_internal_set__trackedJoints(::System::Collections::Generic::HashSet_1<::Oculus::Interaction::Input::HandJointId>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____trackedJoints = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::Oculus::Interaction::Input::HandJointId>*>*& Oculus::Interaction::PoseDetection::JointDeltaProvider::__cordl_internal_get__requestors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____requestors;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::Oculus::Interaction::Input::HandJointId>*>* const& Oculus::Interaction::PoseDetection::JointDeltaProvider::__cordl_internal_get__requestors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____requestors;
}
constexpr void Oculus::Interaction::PoseDetection::JointDeltaProvider::__cordl_internal_set__requestors(::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::Oculus::Interaction::Input::HandJointId>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____requestors = value;
}
constexpr int32_t& Oculus::Interaction::PoseDetection::JointDeltaProvider::__cordl_internal_get_CurDataIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CurDataIndex;
}
constexpr int32_t const& Oculus::Interaction::PoseDetection::JointDeltaProvider::__cordl_internal_get_CurDataIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CurDataIndex;
}
constexpr void Oculus::Interaction::PoseDetection::JointDeltaProvider::__cordl_internal_set_CurDataIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CurDataIndex = value;
}
constexpr int32_t& Oculus::Interaction::PoseDetection::JointDeltaProvider::__cordl_internal_get__lastUpdateDataVersion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastUpdateDataVersion;
}
constexpr int32_t const& Oculus::Interaction::PoseDetection::JointDeltaProvider::__cordl_internal_get__lastUpdateDataVersion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastUpdateDataVersion;
}
constexpr void Oculus::Interaction::PoseDetection::JointDeltaProvider::__cordl_internal_set__lastUpdateDataVersion(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastUpdateDataVersion = value;
}
constexpr bool& Oculus::Interaction::PoseDetection::JointDeltaProvider::__cordl_internal_get__started()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr bool const& Oculus::Interaction::PoseDetection::JointDeltaProvider::__cordl_internal_get__started() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr void Oculus::Interaction::PoseDetection::JointDeltaProvider::__cordl_internal_set__started(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____started = value;
}
inline int32_t Oculus::Interaction::PoseDetection::JointDeltaProvider::get_PrevDataIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointDeltaProvider*>(),
                        {"get_PrevDataIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool Oculus::Interaction::PoseDetection::JointDeltaProvider::GetPositionDelta(::Oculus::Interaction::Input::HandJointId  joint, ::by_ref<::UnityEngine::Vector3>  delta)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointDeltaProvider*>(),
                        {"GetPositionDelta", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandJointId>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, joint, delta);
}
inline bool Oculus::Interaction::PoseDetection::JointDeltaProvider::GetRotationDelta(::Oculus::Interaction::Input::HandJointId  joint, ::by_ref<::UnityEngine::Quaternion>  delta)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointDeltaProvider*>(),
                        {"GetRotationDelta", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandJointId>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, joint, delta);
}
inline bool Oculus::Interaction::PoseDetection::JointDeltaProvider::GetPrevJointPose(::Oculus::Interaction::Input::HandJointId  joint, ::by_ref<::UnityEngine::Pose>  pose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointDeltaProvider*>(),
                        {"GetPrevJointPose", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandJointId>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, joint, pose);
}
inline void Oculus::Interaction::PoseDetection::JointDeltaProvider::RegisterConfig(::Oculus::Interaction::PoseDetection::JointDeltaConfig*  config)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointDeltaProvider*>(),
                        {"RegisterConfig", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::JointDeltaConfig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, config);
}
inline void Oculus::Interaction::PoseDetection::JointDeltaProvider::UnRegisterConfig(::Oculus::Interaction::PoseDetection::JointDeltaConfig*  config)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointDeltaProvider*>(),
                        {"UnRegisterConfig", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::JointDeltaConfig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, config);
}
inline void Oculus::Interaction::PoseDetection::JointDeltaProvider::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PoseDetection::JointDeltaProvider*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PoseDetection::JointDeltaProvider::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PoseDetection::JointDeltaProvider*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PoseDetection::JointDeltaProvider::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PoseDetection::JointDeltaProvider*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PoseDetection::JointDeltaProvider::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PoseDetection::JointDeltaProvider*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PoseDetection::JointDeltaProvider::UpdateData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointDeltaProvider*>(),
                        {"UpdateData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PoseDetection::JointDeltaProvider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointDeltaProvider*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::PoseDetection::JointDeltaProvider* Oculus::Interaction::PoseDetection::JointDeltaProvider::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::PoseDetection::JointDeltaProvider*>());
}
/// @brief Convert operator to "::Oculus::Interaction::PoseDetection::IJointDeltaProvider"
constexpr  Oculus::Interaction::PoseDetection::JointDeltaProvider::operator ::Oculus::Interaction::PoseDetection::IJointDeltaProvider*() noexcept {
return static_cast<::Oculus::Interaction::PoseDetection::IJointDeltaProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::PoseDetection::IJointDeltaProvider"
constexpr ::Oculus::Interaction::PoseDetection::IJointDeltaProvider* Oculus::Interaction::PoseDetection::JointDeltaProvider::i___Oculus__Interaction__PoseDetection__IJointDeltaProvider() noexcept {
return static_cast<::Oculus::Interaction::PoseDetection::IJointDeltaProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::PoseDetection::JointDeltaProvider::JointDeltaProvider()   {
}
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::JointDeltaProvider_PoseData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::JointDeltaProvider_PoseData::*)()>(&::Oculus::Interaction::PoseDetection::JointDeltaProvider_PoseData::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xa49f8dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointDeltaProvider_PoseData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Oculus::Interaction::PoseDetection::JointDeltaProvider_PoseData::__cordl_internal_get_IsValid()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsValid;
}
constexpr bool const& Oculus::Interaction::PoseDetection::JointDeltaProvider_PoseData::__cordl_internal_get_IsValid() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsValid;
}
constexpr void Oculus::Interaction::PoseDetection::JointDeltaProvider_PoseData::__cordl_internal_set_IsValid(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IsValid = value;
}
constexpr ::UnityEngine::Pose& Oculus::Interaction::PoseDetection::JointDeltaProvider_PoseData::__cordl_internal_get_Pose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Pose;
}
constexpr ::UnityEngine::Pose const& Oculus::Interaction::PoseDetection::JointDeltaProvider_PoseData::__cordl_internal_get_Pose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Pose;
}
constexpr void Oculus::Interaction::PoseDetection::JointDeltaProvider_PoseData::__cordl_internal_set_Pose(::UnityEngine::Pose  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Pose = value;
}
inline void Oculus::Interaction::PoseDetection::JointDeltaProvider_PoseData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::JointDeltaProvider_PoseData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::PoseDetection::JointDeltaProvider_PoseData* Oculus::Interaction::PoseDetection::JointDeltaProvider_PoseData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::PoseDetection::JointDeltaProvider_PoseData*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::PoseDetection::JointDeltaProvider_PoseData::JointDeltaProvider_PoseData()   {
}
