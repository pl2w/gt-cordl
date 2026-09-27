#pragma once
// IWYU pragma private; include "Oculus/Interaction/Throw/RANSACVelocity.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RANSACVelocity)
namespace GlobalNamespace {
struct RANSACVelocity_TimedPose;
}
namespace Oculus::Interaction {
template<typename TModel>
class RandomSampleConsensus_1;
}
namespace Oculus::Interaction {
template<typename T>
class RingBuffer_1;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Oculus::Interaction::Throw {
class RANSACVelocity;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Throw::RANSACVelocity*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Throw::RANSACVelocity*, "Oculus.Interaction.Throw", "RANSACVelocity");
// Dependencies System.Object
namespace Oculus::Interaction::Throw {
// Is value type: false
// CS Name: Oculus.Interaction.Throw.RANSACVelocity
class CORDL_TYPE RANSACVelocity : public ::System::Object {
public:
// Declarations
using TimedPose = ::GlobalNamespace::RANSACVelocity_TimedPose;

 __declspec(property(get=get_MaxSyntheticSpeed, put=set_MaxSyntheticSpeed)) float_t  MaxSyntheticSpeed;

/// @brief Field _highConfidenceStreak, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__highConfidenceStreak, put=__cordl_internal_set__highConfidenceStreak)) bool  _highConfidenceStreak;

/// @brief Field _lastProcessedTime, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastProcessedTime, put=__cordl_internal_set__lastProcessedTime)) float_t  _lastProcessedTime;

/// @brief Field _maxSyntheticSpeed, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxSyntheticSpeed, put=__cordl_internal_set__maxSyntheticSpeed)) float_t  _maxSyntheticSpeed;

/// @brief Field _poses, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__poses, put=__cordl_internal_set__poses)) ::Oculus::Interaction::RingBuffer_1<::GlobalNamespace::RANSACVelocity_TimedPose>*  _poses;

/// @brief Field _ransac, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__ransac, put=__cordl_internal_set__ransac)) ::Oculus::Interaction::RandomSampleConsensus_1<::UnityEngine::Vector3>*  _ransac;

/// @brief Method CalculateTorqueFromSamples, addr 0xa4947f4, size 0x38, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 CalculateTorqueFromSamples(int32_t  idx1, int32_t  idx2) ;

/// @brief Method CalculateVelocityFromSamples, addr 0xa4946b4, size 0x8c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 CalculateVelocityFromSamples(int32_t  idx1, int32_t  idx2) ;

/// @brief Method GetSortedTimePoses, addr 0xa494740, size 0xb4, virtual false, abstract: false, final false
inline void GetSortedTimePoses(int32_t  idx1, int32_t  idx2, ::by_ref<::GlobalNamespace::RANSACVelocity_TimedPose>  older, ::by_ref<::GlobalNamespace::RANSACVelocity_TimedPose>  younger) ;

/// @brief Method GetTorque, addr 0xa49482c, size 0x138, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 GetTorque(::GlobalNamespace::RANSACVelocity_TimedPose  older, ::GlobalNamespace::RANSACVelocity_TimedPose  younger) ;

/// @brief Method GetVelocities, addr 0xa494494, size 0x220, virtual false, abstract: false, final false
inline void GetVelocities(::by_ref<::UnityEngine::Vector3>  velocity, ::by_ref<::UnityEngine::Vector3>  torque) ;

/// @brief Method Initialize, addr 0xa494184, size 0x58, virtual false, abstract: false, final false
inline void Initialize() ;

static inline ::Oculus::Interaction::Throw::RANSACVelocity* New_ctor(int32_t  samplesCount, int32_t  samplesDeadZone) ;

/// @brief [Obsolete("The minHighConfidenceSamples parameter will be ignored. Use the constructor without it")]
static inline ::Oculus::Interaction::Throw::RANSACVelocity* New_ctor(int32_t  samplesCount, int32_t  samplesDeadZone, int32_t  minHighConfidenceSamples) ;

/// @brief Method PositionOffset, addr 0xa494964, size 0x20, virtual true, abstract: false, final false
inline ::UnityEngine::Vector3 PositionOffset(::UnityEngine::Pose  youngerPose, ::UnityEngine::Pose  olderPose) ;

/// @brief Method Process, addr 0xa4941dc, size 0x298, virtual false, abstract: false, final false
inline void Process(::UnityEngine::Pose  pose, float_t  time, bool  isHighConfidence) ;

/// @brief Method ScoreAngularDistance, addr 0xa494ab4, size 0x198, virtual false, abstract: false, final false
inline float_t ScoreAngularDistance(::UnityEngine::Vector3  angularDistance, ::System::Object*  angularDistances) ;

/// @brief Method ScoreDistance, addr 0xa494984, size 0x130, virtual false, abstract: false, final false
inline float_t ScoreDistance(::UnityEngine::Vector3  distance, ::System::Object*  distances) ;

constexpr bool const& __cordl_internal_get__highConfidenceStreak() const;

constexpr bool& __cordl_internal_get__highConfidenceStreak() ;

constexpr float_t const& __cordl_internal_get__lastProcessedTime() const;

constexpr float_t& __cordl_internal_get__lastProcessedTime() ;

constexpr float_t const& __cordl_internal_get__maxSyntheticSpeed() const;

constexpr float_t& __cordl_internal_get__maxSyntheticSpeed() ;

constexpr ::Oculus::Interaction::RingBuffer_1<::GlobalNamespace::RANSACVelocity_TimedPose>* const& __cordl_internal_get__poses() const;

constexpr ::Oculus::Interaction::RingBuffer_1<::GlobalNamespace::RANSACVelocity_TimedPose>*& __cordl_internal_get__poses() ;

constexpr ::Oculus::Interaction::RandomSampleConsensus_1<::UnityEngine::Vector3>* const& __cordl_internal_get__ransac() const;

constexpr ::Oculus::Interaction::RandomSampleConsensus_1<::UnityEngine::Vector3>*& __cordl_internal_get__ransac() ;

constexpr void __cordl_internal_set__highConfidenceStreak(bool  value) ;

constexpr void __cordl_internal_set__lastProcessedTime(float_t  value) ;

constexpr void __cordl_internal_set__maxSyntheticSpeed(float_t  value) ;

constexpr void __cordl_internal_set__poses(::Oculus::Interaction::RingBuffer_1<::GlobalNamespace::RANSACVelocity_TimedPose>*  value) ;

constexpr void __cordl_internal_set__ransac(::Oculus::Interaction::RandomSampleConsensus_1<::UnityEngine::Vector3>*  value) ;

/// @brief Method .ctor, addr 0xa494084, size 0x100, virtual false, abstract: false, final false
inline void _ctor(int32_t  samplesCount, int32_t  samplesDeadZone) ;

/// [Obsolete("The minHighConfidenceSamples parameter will be ignored. Use the constructor without it")]
/// @brief Method .ctor, addr 0xa494080, size 0x4, virtual false, abstract: false, final false
inline void _ctor(int32_t  samplesCount, int32_t  samplesDeadZone, int32_t  minHighConfidenceSamples) ;

/// @brief Method get_MaxSyntheticSpeed, addr 0xa494060, size 0x8, virtual false, abstract: false, final false
inline float_t get_MaxSyntheticSpeed() ;

/// @brief Method set_MaxSyntheticSpeed, addr 0xa494068, size 0x18, virtual false, abstract: false, final false
inline void set_MaxSyntheticSpeed(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RANSACVelocity() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RANSACVelocity", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RANSACVelocity(RANSACVelocity && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RANSACVelocity", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RANSACVelocity(RANSACVelocity const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16076};

/// @brief Field _minSyntheticSpeed offset 0xffffffff size 0x4
static constexpr float_t  _minSyntheticSpeed{static_cast<float_t>(0.0001f)};

/// @brief Field _highConfidenceStreak, offset: 0x10, size: 0x1, def value: None
 bool  ____highConfidenceStreak;

/// @brief Field _lastProcessedTime, offset: 0x14, size: 0x4, def value: None
 float_t  ____lastProcessedTime;

/// @brief Field _maxSyntheticSpeed, offset: 0x18, size: 0x4, def value: None
 float_t  ____maxSyntheticSpeed;

/// @brief Field _ransac, offset: 0x20, size: 0x8, def value: None
 ::Oculus::Interaction::RandomSampleConsensus_1<::UnityEngine::Vector3>*  ____ransac;

/// @brief Field _poses, offset: 0x28, size: 0x8, def value: None
 ::Oculus::Interaction::RingBuffer_1<::GlobalNamespace::RANSACVelocity_TimedPose>*  ____poses;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Throw::RANSACVelocity, ____highConfidenceStreak) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Throw::RANSACVelocity, ____lastProcessedTime) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Throw::RANSACVelocity, ____maxSyntheticSpeed) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Throw::RANSACVelocity, ____ransac) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Throw::RANSACVelocity, ____poses) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Throw::RANSACVelocity) == 0x30, "Size mismatch!");

} // namespace end def Oculus::Interaction::Throw
