#pragma once
// IWYU pragma private; include "Oculus/Interaction/Throw/RANSACVelocity.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Interaction/Throw/zzzz__RANSACVelocity_def.hpp"
#include "Oculus/Interaction/Throw/zzzz__RANSACVelocity_TimedPose_def.hpp"
#include "Oculus/Interaction/zzzz__RandomSampleConsensus_1_def.hpp"
#include "Oculus/Interaction/zzzz__RingBuffer_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Throw::RANSACVelocity.get_MaxSyntheticSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Throw::RANSACVelocity::*)()>(&::Oculus::Interaction::Throw::RANSACVelocity::get_MaxSyntheticSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa494060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::RANSACVelocity*>(),
                        {"get_MaxSyntheticSpeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::RANSACVelocity.set_MaxSyntheticSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Throw::RANSACVelocity::*)(float_t)>(&::Oculus::Interaction::Throw::RANSACVelocity::set_MaxSyntheticSpeed)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa494068;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::RANSACVelocity*>(),
                        {"set_MaxSyntheticSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::RANSACVelocity._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Throw::RANSACVelocity::*)(int32_t, int32_t, int32_t)>(&::Oculus::Interaction::Throw::RANSACVelocity::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa494080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::RANSACVelocity*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::RANSACVelocity._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Throw::RANSACVelocity::*)(int32_t, int32_t)>(&::Oculus::Interaction::Throw::RANSACVelocity::_ctor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xa494084;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::RANSACVelocity*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::RANSACVelocity.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Throw::RANSACVelocity::*)()>(&::Oculus::Interaction::Throw::RANSACVelocity::Initialize)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa494184;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::RANSACVelocity*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::RANSACVelocity.Process
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Throw::RANSACVelocity::*)(::UnityEngine::Pose, float_t, bool)>(&::Oculus::Interaction::Throw::RANSACVelocity::Process)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0xa4941dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::RANSACVelocity*>(),
                        {"Process", {}, {::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::RANSACVelocity.GetVelocities
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Throw::RANSACVelocity::*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>)>(&::Oculus::Interaction::Throw::RANSACVelocity::GetVelocities)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0xa494494;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::RANSACVelocity*>(),
                        {"GetVelocities", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::RANSACVelocity.CalculateVelocityFromSamples
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::Throw::RANSACVelocity::*)(int32_t, int32_t)>(&::Oculus::Interaction::Throw::RANSACVelocity::CalculateVelocityFromSamples)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xa4946b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::RANSACVelocity*>(),
                        {"CalculateVelocityFromSamples", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::RANSACVelocity.CalculateTorqueFromSamples
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::Throw::RANSACVelocity::*)(int32_t, int32_t)>(&::Oculus::Interaction::Throw::RANSACVelocity::CalculateTorqueFromSamples)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa4947f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::RANSACVelocity*>(),
                        {"CalculateTorqueFromSamples", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::RANSACVelocity.PositionOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::Throw::RANSACVelocity::*)(::UnityEngine::Pose, ::UnityEngine::Pose)>(&::Oculus::Interaction::Throw::RANSACVelocity::PositionOffset)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa494964;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Throw::RANSACVelocity*>(),
                    {::i2c::class_of<::Oculus::Interaction::Throw::RANSACVelocity*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::RANSACVelocity.ScoreDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Throw::RANSACVelocity::*)(::UnityEngine::Vector3, ::System::Object*)>(&::Oculus::Interaction::Throw::RANSACVelocity::ScoreDistance)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xa494984;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::RANSACVelocity*>(),
                        {"ScoreDistance", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::RANSACVelocity.GetSortedTimePoses
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Throw::RANSACVelocity::*)(int32_t, int32_t, ::by_ref<::GlobalNamespace::RANSACVelocity_TimedPose>, ::by_ref<::GlobalNamespace::RANSACVelocity_TimedPose>)>(&::Oculus::Interaction::Throw::RANSACVelocity::GetSortedTimePoses)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa494740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::RANSACVelocity*>(),
                        {"GetSortedTimePoses", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::RANSACVelocity_TimedPose>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::RANSACVelocity_TimedPose>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::RANSACVelocity.ScoreAngularDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Throw::RANSACVelocity::*)(::UnityEngine::Vector3, ::System::Object*)>(&::Oculus::Interaction::Throw::RANSACVelocity::ScoreAngularDistance)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0xa494ab4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::RANSACVelocity*>(),
                        {"ScoreAngularDistance", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::RANSACVelocity.GetTorque
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::GlobalNamespace::RANSACVelocity_TimedPose, ::GlobalNamespace::RANSACVelocity_TimedPose)>(&::Oculus::Interaction::Throw::RANSACVelocity::GetTorque)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0xa49482c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::RANSACVelocity*>(),
                        {"GetTorque", {}, {::i2c::type_of<::GlobalNamespace::RANSACVelocity_TimedPose>(), ::i2c::type_of<::GlobalNamespace::RANSACVelocity_TimedPose>()}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Oculus::Interaction::Throw::RANSACVelocity::__cordl_internal_get__highConfidenceStreak()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____highConfidenceStreak;
}
constexpr bool const& Oculus::Interaction::Throw::RANSACVelocity::__cordl_internal_get__highConfidenceStreak() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____highConfidenceStreak;
}
constexpr void Oculus::Interaction::Throw::RANSACVelocity::__cordl_internal_set__highConfidenceStreak(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____highConfidenceStreak = value;
}
constexpr float_t& Oculus::Interaction::Throw::RANSACVelocity::__cordl_internal_get__lastProcessedTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastProcessedTime;
}
constexpr float_t const& Oculus::Interaction::Throw::RANSACVelocity::__cordl_internal_get__lastProcessedTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastProcessedTime;
}
constexpr void Oculus::Interaction::Throw::RANSACVelocity::__cordl_internal_set__lastProcessedTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastProcessedTime = value;
}
constexpr float_t& Oculus::Interaction::Throw::RANSACVelocity::__cordl_internal_get__maxSyntheticSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxSyntheticSpeed;
}
constexpr float_t const& Oculus::Interaction::Throw::RANSACVelocity::__cordl_internal_get__maxSyntheticSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxSyntheticSpeed;
}
constexpr void Oculus::Interaction::Throw::RANSACVelocity::__cordl_internal_set__maxSyntheticSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxSyntheticSpeed = value;
}
constexpr ::Oculus::Interaction::RandomSampleConsensus_1<::UnityEngine::Vector3>*& Oculus::Interaction::Throw::RANSACVelocity::__cordl_internal_get__ransac()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ransac;
}
constexpr ::Oculus::Interaction::RandomSampleConsensus_1<::UnityEngine::Vector3>* const& Oculus::Interaction::Throw::RANSACVelocity::__cordl_internal_get__ransac() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ransac;
}
constexpr void Oculus::Interaction::Throw::RANSACVelocity::__cordl_internal_set__ransac(::Oculus::Interaction::RandomSampleConsensus_1<::UnityEngine::Vector3>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ransac = value;
}
constexpr ::Oculus::Interaction::RingBuffer_1<::GlobalNamespace::RANSACVelocity_TimedPose>*& Oculus::Interaction::Throw::RANSACVelocity::__cordl_internal_get__poses()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____poses;
}
constexpr ::Oculus::Interaction::RingBuffer_1<::GlobalNamespace::RANSACVelocity_TimedPose>* const& Oculus::Interaction::Throw::RANSACVelocity::__cordl_internal_get__poses() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____poses;
}
constexpr void Oculus::Interaction::Throw::RANSACVelocity::__cordl_internal_set__poses(::Oculus::Interaction::RingBuffer_1<::GlobalNamespace::RANSACVelocity_TimedPose>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____poses = value;
}
inline float_t Oculus::Interaction::Throw::RANSACVelocity::get_MaxSyntheticSpeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::RANSACVelocity*>(),
                        {"get_MaxSyntheticSpeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::Throw::RANSACVelocity::set_MaxSyntheticSpeed(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::RANSACVelocity*>(),
                        {"set_MaxSyntheticSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::Throw::RANSACVelocity::_ctor(int32_t  samplesCount, int32_t  samplesDeadZone, int32_t  minHighConfidenceSamples)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::RANSACVelocity*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, samplesCount, samplesDeadZone, minHighConfidenceSamples);
}
inline void Oculus::Interaction::Throw::RANSACVelocity::_ctor(int32_t  samplesCount, int32_t  samplesDeadZone)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::RANSACVelocity*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, samplesCount, samplesDeadZone);
}
inline void Oculus::Interaction::Throw::RANSACVelocity::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::RANSACVelocity*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Throw::RANSACVelocity::Process(::UnityEngine::Pose  pose, float_t  time, bool  isHighConfidence)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::RANSACVelocity*>(),
                        {"Process", {}, {::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pose, time, isHighConfidence);
}
inline void Oculus::Interaction::Throw::RANSACVelocity::GetVelocities(::by_ref<::UnityEngine::Vector3>  velocity, ::by_ref<::UnityEngine::Vector3>  torque)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::RANSACVelocity*>(),
                        {"GetVelocities", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, velocity, torque);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::Throw::RANSACVelocity::CalculateVelocityFromSamples(int32_t  idx1, int32_t  idx2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::RANSACVelocity*>(),
                        {"CalculateVelocityFromSamples", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, idx1, idx2);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::Throw::RANSACVelocity::CalculateTorqueFromSamples(int32_t  idx1, int32_t  idx2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::RANSACVelocity*>(),
                        {"CalculateTorqueFromSamples", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, idx1, idx2);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::Throw::RANSACVelocity::PositionOffset(::UnityEngine::Pose  youngerPose, ::UnityEngine::Pose  olderPose)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Throw::RANSACVelocity*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, youngerPose, olderPose);
}
inline float_t Oculus::Interaction::Throw::RANSACVelocity::ScoreDistance(::UnityEngine::Vector3  distance, ::System::Object*  distances)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::RANSACVelocity*>(),
                        {"ScoreDistance", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, distance, distances);
}
inline void Oculus::Interaction::Throw::RANSACVelocity::GetSortedTimePoses(int32_t  idx1, int32_t  idx2, ::by_ref<::GlobalNamespace::RANSACVelocity_TimedPose>  older, ::by_ref<::GlobalNamespace::RANSACVelocity_TimedPose>  younger)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::RANSACVelocity*>(),
                        {"GetSortedTimePoses", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::RANSACVelocity_TimedPose>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::RANSACVelocity_TimedPose>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, idx1, idx2, older, younger);
}
inline float_t Oculus::Interaction::Throw::RANSACVelocity::ScoreAngularDistance(::UnityEngine::Vector3  angularDistance, ::System::Object*  angularDistances)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::RANSACVelocity*>(),
                        {"ScoreAngularDistance", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, angularDistance, angularDistances);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::Throw::RANSACVelocity::GetTorque(::GlobalNamespace::RANSACVelocity_TimedPose  older, ::GlobalNamespace::RANSACVelocity_TimedPose  younger)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::RANSACVelocity*>(),
                        {"GetTorque", {}, {::i2c::type_of<::GlobalNamespace::RANSACVelocity_TimedPose>(), ::i2c::type_of<::GlobalNamespace::RANSACVelocity_TimedPose>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, older, younger);
}
/// @brief [Obsolete("The minHighConfidenceSamples parameter will be ignored. Use the constructor without it")]
inline ::Oculus::Interaction::Throw::RANSACVelocity* Oculus::Interaction::Throw::RANSACVelocity::New_ctor(int32_t  samplesCount, int32_t  samplesDeadZone, int32_t  minHighConfidenceSamples)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Throw::RANSACVelocity*>(samplesCount, samplesDeadZone, minHighConfidenceSamples));
}
inline ::Oculus::Interaction::Throw::RANSACVelocity* Oculus::Interaction::Throw::RANSACVelocity::New_ctor(int32_t  samplesCount, int32_t  samplesDeadZone)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Throw::RANSACVelocity*>(samplesCount, samplesDeadZone));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Throw::RANSACVelocity::RANSACVelocity()   {
}
