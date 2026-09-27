#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaThrowable.hpp"
#include "Photon/Pun/zzzz__MonoBehaviourPun_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaThrowable_def.hpp"
#include "Photon/Pun/zzzz__IPhotonViewCallback_def.hpp"
#include "Photon/Pun/zzzz__IPunObservable_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "Photon/Pun/zzzz__PhotonStream_def.hpp"
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Collision_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaThrowable.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaThrowable::*)()>(&::GlobalNamespace::GorillaThrowable::Start)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x59a4074;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaThrowable*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaThrowable*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaThrowable.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaThrowable::*)()>(&::GlobalNamespace::GorillaThrowable::LateUpdate)> {
  constexpr static std::size_t size = 0x3f4;
  constexpr static std::size_t addrs = 0x59a4620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaThrowable*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaThrowable*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaThrowable.IsHandPushing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaThrowable::*)(::UnityEngine::XR::XRNode)>(&::GlobalNamespace::GorillaThrowable::IsHandPushing)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59a5bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaThrowable*>(),
                        {"IsHandPushing", {}, {::i2c::type_of<::UnityEngine::XR::XRNode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaThrowable.StoreHistories
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaThrowable::*)()>(&::GlobalNamespace::GorillaThrowable::StoreHistories)> {
  constexpr static std::size_t size = 0x41c;
  constexpr static std::size_t addrs = 0x59a57d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaThrowable*>(),
                        {"StoreHistories", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaThrowable.Grabbed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaThrowable::*)(::UnityEngine::Transform*)>(&::GlobalNamespace::GorillaThrowable::Grabbed)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x59a5bf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaThrowable*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaThrowable*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaThrowable.ThrowThisThingo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaThrowable::*)()>(&::GlobalNamespace::GorillaThrowable::ThrowThisThingo)> {
  constexpr static std::size_t size = 0x4c0;
  constexpr static std::size_t addrs = 0x59a4a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaThrowable*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaThrowable*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaThrowable.Photon_Pun_IPunObservable_OnPhotonSerializeView
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaThrowable::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GorillaThrowable::Photon_Pun_IPunObservable_OnPhotonSerializeView)> {
  constexpr static std::size_t size = 0x478;
  constexpr static std::size_t addrs = 0x59a5d48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaThrowable*>(),
                        {"Photon.Pun.IPunObservable.OnPhotonSerializeView", {}, {::i2c::type_of<::Photon::Pun::PhotonStream*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaThrowable.OnCollisionEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaThrowable::*)(::UnityEngine::Collision*)>(&::GlobalNamespace::GorillaThrowable::OnCollisionEnter)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x59a61c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaThrowable*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaThrowable*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaThrowable.PlaySurfaceHit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaThrowable::*)(int32_t, float_t)>(&::GlobalNamespace::GorillaThrowable::PlaySurfaceHit)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x59a64e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaThrowable*>(),
                        {"PlaySurfaceHit", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaThrowable.InterpolateVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::GorillaThrowable::*)()>(&::GlobalNamespace::GorillaThrowable::InterpolateVolume)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x59a6414;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaThrowable*>(),
                        {"InterpolateVolume", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaThrowable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaThrowable::*)()>(&::GlobalNamespace::GorillaThrowable::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x59a5110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaThrowable*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::GorillaThrowable::__cordl_internal_get_trackingHistorySize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trackingHistorySize;
}
constexpr int32_t const& GlobalNamespace::GorillaThrowable::__cordl_internal_get_trackingHistorySize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trackingHistorySize;
}
constexpr void GlobalNamespace::GorillaThrowable::__cordl_internal_set_trackingHistorySize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___trackingHistorySize = value;
}
constexpr float_t& GlobalNamespace::GorillaThrowable::__cordl_internal_get_throwMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___throwMultiplier;
}
constexpr float_t const& GlobalNamespace::GorillaThrowable::__cordl_internal_get_throwMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___throwMultiplier;
}
constexpr void GlobalNamespace::GorillaThrowable::__cordl_internal_set_throwMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___throwMultiplier = value;
}
constexpr float_t& GlobalNamespace::GorillaThrowable::__cordl_internal_get_throwMagnitudeLimit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___throwMagnitudeLimit;
}
constexpr float_t const& GlobalNamespace::GorillaThrowable::__cordl_internal_get_throwMagnitudeLimit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___throwMagnitudeLimit;
}
constexpr void GlobalNamespace::GorillaThrowable::__cordl_internal_set_throwMagnitudeLimit(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___throwMagnitudeLimit = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3>& GlobalNamespace::GorillaThrowable::__cordl_internal_get_velocityHistory()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocityHistory;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& GlobalNamespace::GorillaThrowable::__cordl_internal_get_velocityHistory() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocityHistory;
}
constexpr void GlobalNamespace::GorillaThrowable::__cordl_internal_set_velocityHistory(::ArrayW<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___velocityHistory = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3>& GlobalNamespace::GorillaThrowable::__cordl_internal_get_headsetVelocityHistory()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headsetVelocityHistory;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& GlobalNamespace::GorillaThrowable::__cordl_internal_get_headsetVelocityHistory() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headsetVelocityHistory;
}
constexpr void GlobalNamespace::GorillaThrowable::__cordl_internal_set_headsetVelocityHistory(::ArrayW<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___headsetVelocityHistory = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3>& GlobalNamespace::GorillaThrowable::__cordl_internal_get_positionHistory()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___positionHistory;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& GlobalNamespace::GorillaThrowable::__cordl_internal_get_positionHistory() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___positionHistory;
}
constexpr void GlobalNamespace::GorillaThrowable::__cordl_internal_set_positionHistory(::ArrayW<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___positionHistory = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3>& GlobalNamespace::GorillaThrowable::__cordl_internal_get_headsetPositionHistory()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headsetPositionHistory;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& GlobalNamespace::GorillaThrowable::__cordl_internal_get_headsetPositionHistory() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headsetPositionHistory;
}
constexpr void GlobalNamespace::GorillaThrowable::__cordl_internal_set_headsetPositionHistory(::ArrayW<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___headsetPositionHistory = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3>& GlobalNamespace::GorillaThrowable::__cordl_internal_get_rotationHistory()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationHistory;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& GlobalNamespace::GorillaThrowable::__cordl_internal_get_rotationHistory() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationHistory;
}
constexpr void GlobalNamespace::GorillaThrowable::__cordl_internal_set_rotationHistory(::ArrayW<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotationHistory = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3>& GlobalNamespace::GorillaThrowable::__cordl_internal_get_rotationalVelocityHistory()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationalVelocityHistory;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& GlobalNamespace::GorillaThrowable::__cordl_internal_get_rotationalVelocityHistory() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationalVelocityHistory;
}
constexpr void GlobalNamespace::GorillaThrowable::__cordl_internal_set_rotationalVelocityHistory(::ArrayW<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotationalVelocityHistory = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GorillaThrowable::__cordl_internal_get_previousPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previousPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GorillaThrowable::__cordl_internal_get_previousPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previousPosition;
}
constexpr void GlobalNamespace::GorillaThrowable::__cordl_internal_set_previousPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___previousPosition = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GorillaThrowable::__cordl_internal_get_previousRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previousRotation;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GorillaThrowable::__cordl_internal_get_previousRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previousRotation;
}
constexpr void GlobalNamespace::GorillaThrowable::__cordl_internal_set_previousRotation(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___previousRotation = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GorillaThrowable::__cordl_internal_get_previousHeadsetPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previousHeadsetPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GorillaThrowable::__cordl_internal_get_previousHeadsetPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previousHeadsetPosition;
}
constexpr void GlobalNamespace::GorillaThrowable::__cordl_internal_set_previousHeadsetPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___previousHeadsetPosition = value;
}
constexpr int32_t& GlobalNamespace::GorillaThrowable::__cordl_internal_get_currentIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentIndex;
}
constexpr int32_t const& GlobalNamespace::GorillaThrowable::__cordl_internal_get_currentIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentIndex;
}
constexpr void GlobalNamespace::GorillaThrowable::__cordl_internal_set_currentIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentIndex = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GorillaThrowable::__cordl_internal_get_currentVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentVelocity;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GorillaThrowable::__cordl_internal_get_currentVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentVelocity;
}
constexpr void GlobalNamespace::GorillaThrowable::__cordl_internal_set_currentVelocity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentVelocity = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GorillaThrowable::__cordl_internal_get_currentHeadsetVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentHeadsetVelocity;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GorillaThrowable::__cordl_internal_get_currentHeadsetVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentHeadsetVelocity;
}
constexpr void GlobalNamespace::GorillaThrowable::__cordl_internal_set_currentHeadsetVelocity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentHeadsetVelocity = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GorillaThrowable::__cordl_internal_get_currentRotationalVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentRotationalVelocity;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GorillaThrowable::__cordl_internal_get_currentRotationalVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentRotationalVelocity;
}
constexpr void GlobalNamespace::GorillaThrowable::__cordl_internal_set_currentRotationalVelocity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentRotationalVelocity = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GorillaThrowable::__cordl_internal_get_denormalizedVelocityAverage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___denormalizedVelocityAverage;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GorillaThrowable::__cordl_internal_get_denormalizedVelocityAverage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___denormalizedVelocityAverage;
}
constexpr void GlobalNamespace::GorillaThrowable::__cordl_internal_set_denormalizedVelocityAverage(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___denormalizedVelocityAverage = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GorillaThrowable::__cordl_internal_get_denormalizedHeadsetVelocityAverage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___denormalizedHeadsetVelocityAverage;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GorillaThrowable::__cordl_internal_get_denormalizedHeadsetVelocityAverage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___denormalizedHeadsetVelocityAverage;
}
constexpr void GlobalNamespace::GorillaThrowable::__cordl_internal_set_denormalizedHeadsetVelocityAverage(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___denormalizedHeadsetVelocityAverage = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GorillaThrowable::__cordl_internal_get_denormalizedRotationalVelocityAverage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___denormalizedRotationalVelocityAverage;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GorillaThrowable::__cordl_internal_get_denormalizedRotationalVelocityAverage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___denormalizedRotationalVelocityAverage;
}
constexpr void GlobalNamespace::GorillaThrowable::__cordl_internal_set_denormalizedRotationalVelocityAverage(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___denormalizedRotationalVelocityAverage = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GorillaThrowable::__cordl_internal_get_headsetTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headsetTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GorillaThrowable::__cordl_internal_get_headsetTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headsetTransform;
}
constexpr void GlobalNamespace::GorillaThrowable::__cordl_internal_set_headsetTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___headsetTransform = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GorillaThrowable::__cordl_internal_get_targetPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GorillaThrowable::__cordl_internal_get_targetPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetPosition;
}
constexpr void GlobalNamespace::GorillaThrowable::__cordl_internal_set_targetPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetPosition = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::GorillaThrowable::__cordl_internal_get_targetRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetRotation;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::GorillaThrowable::__cordl_internal_get_targetRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetRotation;
}
constexpr void GlobalNamespace::GorillaThrowable::__cordl_internal_set_targetRotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetRotation = value;
}
constexpr bool& GlobalNamespace::GorillaThrowable::__cordl_internal_get_initialLerp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialLerp;
}
constexpr bool const& GlobalNamespace::GorillaThrowable::__cordl_internal_get_initialLerp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialLerp;
}
constexpr void GlobalNamespace::GorillaThrowable::__cordl_internal_set_initialLerp(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initialLerp = value;
}
constexpr float_t& GlobalNamespace::GorillaThrowable::__cordl_internal_get_lerpValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lerpValue;
}
constexpr float_t const& GlobalNamespace::GorillaThrowable::__cordl_internal_get_lerpValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lerpValue;
}
constexpr void GlobalNamespace::GorillaThrowable::__cordl_internal_set_lerpValue(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lerpValue = value;
}
constexpr float_t& GlobalNamespace::GorillaThrowable::__cordl_internal_get_lerpDistanceLimit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lerpDistanceLimit;
}
constexpr float_t const& GlobalNamespace::GorillaThrowable::__cordl_internal_get_lerpDistanceLimit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lerpDistanceLimit;
}
constexpr void GlobalNamespace::GorillaThrowable::__cordl_internal_set_lerpDistanceLimit(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lerpDistanceLimit = value;
}
constexpr bool& GlobalNamespace::GorillaThrowable::__cordl_internal_get_isHeld()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isHeld;
}
constexpr bool const& GlobalNamespace::GorillaThrowable::__cordl_internal_get_isHeld() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isHeld;
}
constexpr void GlobalNamespace::GorillaThrowable::__cordl_internal_set_isHeld(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isHeld = value;
}
constexpr ::UnityW<::UnityEngine::Rigidbody>& GlobalNamespace::GorillaThrowable::__cordl_internal_get_rigidbody()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigidbody;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& GlobalNamespace::GorillaThrowable::__cordl_internal_get_rigidbody() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigidbody;
}
constexpr void GlobalNamespace::GorillaThrowable::__cordl_internal_set_rigidbody(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rigidbody = value;
}
constexpr int32_t& GlobalNamespace::GorillaThrowable::__cordl_internal_get_loopIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loopIndex;
}
constexpr int32_t const& GlobalNamespace::GorillaThrowable::__cordl_internal_get_loopIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loopIndex;
}
constexpr void GlobalNamespace::GorillaThrowable::__cordl_internal_set_loopIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loopIndex = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GorillaThrowable::__cordl_internal_get_transformToFollow()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transformToFollow;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GorillaThrowable::__cordl_internal_get_transformToFollow() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transformToFollow;
}
constexpr void GlobalNamespace::GorillaThrowable::__cordl_internal_set_transformToFollow(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___transformToFollow = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GorillaThrowable::__cordl_internal_get_offset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GorillaThrowable::__cordl_internal_get_offset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offset;
}
constexpr void GlobalNamespace::GorillaThrowable::__cordl_internal_set_offset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___offset = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::GorillaThrowable::__cordl_internal_get_offsetRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offsetRotation;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::GorillaThrowable::__cordl_internal_get_offsetRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offsetRotation;
}
constexpr void GlobalNamespace::GorillaThrowable::__cordl_internal_set_offsetRotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___offsetRotation = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::GorillaThrowable::__cordl_internal_get_audioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::GorillaThrowable::__cordl_internal_get_audioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr void GlobalNamespace::GorillaThrowable::__cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioSource = value;
}
constexpr int32_t& GlobalNamespace::GorillaThrowable::__cordl_internal_get_timeLastReceived()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeLastReceived;
}
constexpr int32_t const& GlobalNamespace::GorillaThrowable::__cordl_internal_get_timeLastReceived() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeLastReceived;
}
constexpr void GlobalNamespace::GorillaThrowable::__cordl_internal_set_timeLastReceived(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeLastReceived = value;
}
constexpr bool& GlobalNamespace::GorillaThrowable::__cordl_internal_get_synchThrow()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___synchThrow;
}
constexpr bool const& GlobalNamespace::GorillaThrowable::__cordl_internal_get_synchThrow() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___synchThrow;
}
constexpr void GlobalNamespace::GorillaThrowable::__cordl_internal_set_synchThrow(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___synchThrow = value;
}
constexpr float_t& GlobalNamespace::GorillaThrowable::__cordl_internal_get_tempFloat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempFloat;
}
constexpr float_t const& GlobalNamespace::GorillaThrowable::__cordl_internal_get_tempFloat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempFloat;
}
constexpr void GlobalNamespace::GorillaThrowable::__cordl_internal_set_tempFloat(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tempFloat = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GorillaThrowable::__cordl_internal_get_grabbingTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabbingTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GorillaThrowable::__cordl_internal_get_grabbingTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabbingTransform;
}
constexpr void GlobalNamespace::GorillaThrowable::__cordl_internal_set_grabbingTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___grabbingTransform = value;
}
constexpr float_t& GlobalNamespace::GorillaThrowable::__cordl_internal_get_pickupLerp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pickupLerp;
}
constexpr float_t const& GlobalNamespace::GorillaThrowable::__cordl_internal_get_pickupLerp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pickupLerp;
}
constexpr void GlobalNamespace::GorillaThrowable::__cordl_internal_set_pickupLerp(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pickupLerp = value;
}
constexpr float_t& GlobalNamespace::GorillaThrowable::__cordl_internal_get_minVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minVelocity;
}
constexpr float_t const& GlobalNamespace::GorillaThrowable::__cordl_internal_get_minVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minVelocity;
}
constexpr void GlobalNamespace::GorillaThrowable::__cordl_internal_set_minVelocity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minVelocity = value;
}
constexpr float_t& GlobalNamespace::GorillaThrowable::__cordl_internal_get_maxVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxVelocity;
}
constexpr float_t const& GlobalNamespace::GorillaThrowable::__cordl_internal_get_maxVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxVelocity;
}
constexpr void GlobalNamespace::GorillaThrowable::__cordl_internal_set_maxVelocity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxVelocity = value;
}
constexpr float_t& GlobalNamespace::GorillaThrowable::__cordl_internal_get_minVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minVolume;
}
constexpr float_t const& GlobalNamespace::GorillaThrowable::__cordl_internal_get_minVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minVolume;
}
constexpr void GlobalNamespace::GorillaThrowable::__cordl_internal_set_minVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minVolume = value;
}
constexpr float_t& GlobalNamespace::GorillaThrowable::__cordl_internal_get_maxVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxVolume;
}
constexpr float_t const& GlobalNamespace::GorillaThrowable::__cordl_internal_get_maxVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxVolume;
}
constexpr void GlobalNamespace::GorillaThrowable::__cordl_internal_set_maxVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxVolume = value;
}
constexpr bool& GlobalNamespace::GorillaThrowable::__cordl_internal_get_isLinear()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isLinear;
}
constexpr bool const& GlobalNamespace::GorillaThrowable::__cordl_internal_get_isLinear() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isLinear;
}
constexpr void GlobalNamespace::GorillaThrowable::__cordl_internal_set_isLinear(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isLinear = value;
}
constexpr float_t& GlobalNamespace::GorillaThrowable::__cordl_internal_get_linearMax()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___linearMax;
}
constexpr float_t const& GlobalNamespace::GorillaThrowable::__cordl_internal_get_linearMax() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___linearMax;
}
constexpr void GlobalNamespace::GorillaThrowable::__cordl_internal_set_linearMax(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___linearMax = value;
}
constexpr float_t& GlobalNamespace::GorillaThrowable::__cordl_internal_get_exponThrowMultMax()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exponThrowMultMax;
}
constexpr float_t const& GlobalNamespace::GorillaThrowable::__cordl_internal_get_exponThrowMultMax() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exponThrowMultMax;
}
constexpr void GlobalNamespace::GorillaThrowable::__cordl_internal_set_exponThrowMultMax(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___exponThrowMultMax = value;
}
constexpr int32_t& GlobalNamespace::GorillaThrowable::__cordl_internal_get_bounceAudioClip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bounceAudioClip;
}
constexpr int32_t const& GlobalNamespace::GorillaThrowable::__cordl_internal_get_bounceAudioClip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bounceAudioClip;
}
constexpr void GlobalNamespace::GorillaThrowable::__cordl_internal_set_bounceAudioClip(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bounceAudioClip = value;
}
inline void GlobalNamespace::GorillaThrowable::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaThrowable*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaThrowable::LateUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaThrowable*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaThrowable::IsHandPushing(::UnityEngine::XR::XRNode  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaThrowable*>(),
                        {"IsHandPushing", {}, {::i2c::type_of<::UnityEngine::XR::XRNode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline void GlobalNamespace::GorillaThrowable::StoreHistories()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaThrowable*>(),
                        {"StoreHistories", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaThrowable::Grabbed(::UnityEngine::Transform*  grabTransform)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaThrowable*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, grabTransform);
}
inline void GlobalNamespace::GorillaThrowable::ThrowThisThingo()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaThrowable*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaThrowable::Photon_Pun_IPunObservable_OnPhotonSerializeView(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaThrowable*>(),
                        {"Photon.Pun.IPunObservable.OnPhotonSerializeView", {}, {::i2c::type_of<::Photon::Pun::PhotonStream*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GlobalNamespace::GorillaThrowable::OnCollisionEnter(::UnityEngine::Collision*  collision)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaThrowable*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collision);
}
inline void GlobalNamespace::GorillaThrowable::PlaySurfaceHit(int32_t  soundIndex, float_t  tapVolume)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaThrowable*>(),
                        {"PlaySurfaceHit", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, soundIndex, tapVolume);
}
inline float_t GlobalNamespace::GorillaThrowable::InterpolateVolume()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaThrowable*>(),
                        {"InterpolateVolume", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaThrowable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaThrowable*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaThrowable* GlobalNamespace::GorillaThrowable::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaThrowable*>());
}
/// @brief Convert operator to "::Photon::Pun::IPunObservable"
constexpr  GlobalNamespace::GorillaThrowable::operator ::Photon::Pun::IPunObservable*() noexcept {
return static_cast<::Photon::Pun::IPunObservable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Pun::IPunObservable"
constexpr ::Photon::Pun::IPunObservable* GlobalNamespace::GorillaThrowable::i___Photon__Pun__IPunObservable() noexcept {
return static_cast<::Photon::Pun::IPunObservable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Photon::Pun::IPhotonViewCallback"
constexpr  GlobalNamespace::GorillaThrowable::operator ::Photon::Pun::IPhotonViewCallback*() noexcept {
return static_cast<::Photon::Pun::IPhotonViewCallback*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Pun::IPhotonViewCallback"
constexpr ::Photon::Pun::IPhotonViewCallback* GlobalNamespace::GorillaThrowable::i___Photon__Pun__IPhotonViewCallback() noexcept {
return static_cast<::Photon::Pun::IPhotonViewCallback*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaThrowable::GorillaThrowable()   {
}
