#pragma once
// IWYU pragma private; include "Oculus/Interaction/Throw/StandardVelocityCalculator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/Input/zzzz__OneEuroFilterPropertyBlock_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(StandardVelocityCalculator)
namespace GlobalNamespace {
struct StandardVelocityCalculator_SamplePoseData;
}
namespace Oculus::Interaction::Input {
template<typename TData>
class IOneEuroFilter_1;
}
namespace Oculus::Interaction::Throw {
class IPoseInputDevice;
}
namespace Oculus::Interaction::Throw {
class IThrowVelocityCalculator;
}
namespace Oculus::Interaction::Throw {
class IVelocityCalculator;
}
namespace Oculus::Interaction::Throw {
struct ReleaseVelocityInformation;
}
namespace Oculus::Interaction::Throw {
class StandardVelocityCalculator_BufferingParams;
}
namespace Oculus::Interaction::Throw {
class StandardVelocityCalculator___c;
}
namespace Oculus::Interaction {
class ITimeConsumer;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Oculus::Interaction::Throw {
class StandardVelocityCalculator;
}
namespace Oculus::Interaction::Throw {
class StandardVelocityCalculator_BufferingParams;
}
namespace Oculus::Interaction::Throw {
class StandardVelocityCalculator___c;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Throw::StandardVelocityCalculator*);
MARK_REF_T(::Oculus::Interaction::Throw::StandardVelocityCalculator_BufferingParams*);
MARK_REF_T(::Oculus::Interaction::Throw::StandardVelocityCalculator___c*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Throw::StandardVelocityCalculator*, "Oculus.Interaction.Throw", "StandardVelocityCalculator");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Throw::StandardVelocityCalculator_BufferingParams*, "Oculus.Interaction.Throw", "StandardVelocityCalculator/BufferingParams");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Throw::StandardVelocityCalculator___c*, "Oculus.Interaction.Throw", "StandardVelocityCalculator/<>c");
// [Obsolete("Use RANSACVelocityCalculator instead")]
// Dependencies Oculus.Interaction.Input.OneEuroFilterPropertyBlock, System.Nullable`1<T>, UnityEngine.MonoBehaviour, UnityEngine.Quaternion, UnityEngine.Vector3
namespace Oculus::Interaction::Throw {
// Is value type: false
// CS Name: Oculus.Interaction.Throw.StandardVelocityCalculator
class CORDL_TYPE StandardVelocityCalculator : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using SamplePoseData = ::GlobalNamespace::StandardVelocityCalculator_SamplePoseData;

using BufferingParams = ::Oculus::Interaction::Throw::StandardVelocityCalculator_BufferingParams;

using __c = ::Oculus::Interaction::Throw::StandardVelocityCalculator___c;

 __declspec(property(get=get_AddedInstantLinearVelocity, put=set_AddedInstantLinearVelocity)) ::UnityEngine::Vector3  AddedInstantLinearVelocity;

 __declspec(property(get=get_AddedTangentialLinearVelocity, put=set_AddedTangentialLinearVelocity)) ::UnityEngine::Vector3  AddedTangentialLinearVelocity;

 __declspec(property(get=get_AddedTrendLinearVelocity, put=set_AddedTrendLinearVelocity)) ::UnityEngine::Vector3  AddedTrendLinearVelocity;

 __declspec(property(get=get_AxisOfRotation, put=set_AxisOfRotation)) ::UnityEngine::Vector3  AxisOfRotation;

 __declspec(property(get=get_AxisOfRotationOrigin, put=set_AxisOfRotationOrigin)) ::UnityEngine::Vector3  AxisOfRotationOrigin;

 __declspec(property(get=get_CenterOfMassToObject, put=set_CenterOfMassToObject)) ::UnityEngine::Vector3  CenterOfMassToObject;

 __declspec(property(get=get_ExternalVelocityInfluence, put=set_ExternalVelocityInfluence)) float_t  ExternalVelocityInfluence;

 __declspec(property(get=get_InstantVelocityInfluence, put=set_InstantVelocityInfluence)) float_t  InstantVelocityInfluence;

 __declspec(property(get=get_MaxPercentZeroSamplesTrendVeloc, put=set_MaxPercentZeroSamplesTrendVeloc)) float_t  MaxPercentZeroSamplesTrendVeloc;

 __declspec(property(get=get_ReferenceOffset, put=set_ReferenceOffset)) ::UnityEngine::Vector3  ReferenceOffset;

 __declspec(property(get=get_StepBackTime, put=set_StepBackTime)) float_t  StepBackTime;

 __declspec(property(get=get_TangentialDirection, put=set_TangentialDirection)) ::UnityEngine::Vector3  TangentialDirection;

 __declspec(property(get=get_TangentialVelocityInfluence, put=set_TangentialVelocityInfluence)) float_t  TangentialVelocityInfluence;

 __declspec(property(get=get_ThrowInputDevice, put=set_ThrowInputDevice)) ::Oculus::Interaction::Throw::IPoseInputDevice*  ThrowInputDevice;

 __declspec(property(get=get_TrendVelocityInfluence, put=set_TrendVelocityInfluence)) float_t  TrendVelocityInfluence;

 __declspec(property(get=get_UpdateFrequency)) float_t  UpdateFrequency;

/// @brief Field WhenNewSampleAvailable, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_WhenNewSampleAvailable, put=__cordl_internal_set_WhenNewSampleAvailable)) ::System::Action_1<::Oculus::Interaction::Throw::ReleaseVelocityInformation>*  WhenNewSampleAvailable;

/// @brief Field WhenThrowVelocitiesChanged, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_WhenThrowVelocitiesChanged, put=__cordl_internal_set_WhenThrowVelocitiesChanged)) ::System::Action_1<::System::Collections::Generic::List_1<::Oculus::Interaction::Throw::ReleaseVelocityInformation>*>*  WhenThrowVelocitiesChanged;

/// @brief Field <AddedInstantLinearVelocity>k__BackingField, offset 0x88, size 0xc 
 __declspec(property(get=__cordl_internal_get__AddedInstantLinearVelocity_k__BackingField, put=__cordl_internal_set__AddedInstantLinearVelocity_k__BackingField)) ::UnityEngine::Vector3  _AddedInstantLinearVelocity_k__BackingField;

/// @brief Field <AddedTangentialLinearVelocity>k__BackingField, offset 0xa0, size 0xc 
 __declspec(property(get=__cordl_internal_get__AddedTangentialLinearVelocity_k__BackingField, put=__cordl_internal_set__AddedTangentialLinearVelocity_k__BackingField)) ::UnityEngine::Vector3  _AddedTangentialLinearVelocity_k__BackingField;

/// @brief Field <AddedTrendLinearVelocity>k__BackingField, offset 0x94, size 0xc 
 __declspec(property(get=__cordl_internal_get__AddedTrendLinearVelocity_k__BackingField, put=__cordl_internal_set__AddedTrendLinearVelocity_k__BackingField)) ::UnityEngine::Vector3  _AddedTrendLinearVelocity_k__BackingField;

/// @brief Field <AxisOfRotationOrigin>k__BackingField, offset 0xd0, size 0xc 
 __declspec(property(get=__cordl_internal_get__AxisOfRotationOrigin_k__BackingField, put=__cordl_internal_set__AxisOfRotationOrigin_k__BackingField)) ::UnityEngine::Vector3  _AxisOfRotationOrigin_k__BackingField;

/// @brief Field <AxisOfRotation>k__BackingField, offset 0xac, size 0xc 
 __declspec(property(get=__cordl_internal_get__AxisOfRotation_k__BackingField, put=__cordl_internal_set__AxisOfRotation_k__BackingField)) ::UnityEngine::Vector3  _AxisOfRotation_k__BackingField;

/// @brief Field <CenterOfMassToObject>k__BackingField, offset 0xb8, size 0xc 
 __declspec(property(get=__cordl_internal_get__CenterOfMassToObject_k__BackingField, put=__cordl_internal_set__CenterOfMassToObject_k__BackingField)) ::UnityEngine::Vector3  _CenterOfMassToObject_k__BackingField;

/// @brief Field <TangentialDirection>k__BackingField, offset 0xc4, size 0xc 
 __declspec(property(get=__cordl_internal_get__TangentialDirection_k__BackingField, put=__cordl_internal_set__TangentialDirection_k__BackingField)) ::UnityEngine::Vector3  _TangentialDirection_k__BackingField;

/// @brief Field <ThrowInputDevice>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__ThrowInputDevice_k__BackingField, put=__cordl_internal_set__ThrowInputDevice_k__BackingField)) ::Oculus::Interaction::Throw::IPoseInputDevice*  _ThrowInputDevice_k__BackingField;

/// @brief Field _accumulatedDelta, offset 0x130, size 0x4 
 __declspec(property(get=__cordl_internal_get__accumulatedDelta, put=__cordl_internal_set__accumulatedDelta)) float_t  _accumulatedDelta;

/// @brief Field _angularVelocity, offset 0x104, size 0xc 
 __declspec(property(get=__cordl_internal_get__angularVelocity, put=__cordl_internal_set__angularVelocity)) ::UnityEngine::Vector3  _angularVelocity;

/// @brief Field _bufferSize, offset 0x144, size 0x4 
 __declspec(property(get=__cordl_internal_get__bufferSize, put=__cordl_internal_set__bufferSize)) int32_t  _bufferSize;

/// @brief Field _bufferedPoses, offset 0x138, size 0x8 
 __declspec(property(get=__cordl_internal_get__bufferedPoses, put=__cordl_internal_set__bufferedPoses)) ::System::Collections::Generic::List_1<::GlobalNamespace::StandardVelocityCalculator_SamplePoseData>*  _bufferedPoses;

/// @brief Field _bufferingParams, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__bufferingParams, put=__cordl_internal_set__bufferingParams)) ::Oculus::Interaction::Throw::StandardVelocityCalculator_BufferingParams*  _bufferingParams;

/// @brief Field _currentThrowVelocities, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get__currentThrowVelocities, put=__cordl_internal_set__currentThrowVelocities)) ::System::Collections::Generic::List_1<::Oculus::Interaction::Throw::ReleaseVelocityInformation>*  _currentThrowVelocities;

/// @brief Field _externalVelocityInfluence, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get__externalVelocityInfluence, put=__cordl_internal_set__externalVelocityInfluence)) float_t  _externalVelocityInfluence;

/// @brief Field _filterProps, offset 0x60, size 0xc 
 __declspec(property(get=__cordl_internal_get__filterProps, put=__cordl_internal_set__filterProps)) ::Oculus::Interaction::Input::OneEuroFilterPropertyBlock  _filterProps;

/// @brief Field _instantVelocityInfluence, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__instantVelocityInfluence, put=__cordl_internal_set__instantVelocityInfluence)) float_t  _instantVelocityInfluence;

/// @brief Field _lastUpdateTime, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastUpdateTime, put=__cordl_internal_set__lastUpdateTime)) float_t  _lastUpdateTime;

/// @brief Field _lastWritePos, offset 0x140, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastWritePos, put=__cordl_internal_set__lastWritePos)) int32_t  _lastWritePos;

/// @brief Field _linearVelocity, offset 0xf8, size 0xc 
 __declspec(property(get=__cordl_internal_get__linearVelocity, put=__cordl_internal_set__linearVelocity)) ::UnityEngine::Vector3  _linearVelocity;

/// @brief Field _linearVelocityFilter, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__linearVelocityFilter, put=__cordl_internal_set__linearVelocityFilter)) ::Oculus::Interaction::Input::IOneEuroFilter_1<::UnityEngine::Vector3>*  _linearVelocityFilter;

/// @brief Field _maxPercentZeroSamplesTrendVeloc, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxPercentZeroSamplesTrendVeloc, put=__cordl_internal_set__maxPercentZeroSamplesTrendVeloc)) float_t  _maxPercentZeroSamplesTrendVeloc;

/// @brief Field _previousReferencePosition, offset 0x110, size 0x10 
 __declspec(property(get=__cordl_internal_get__previousReferencePosition, put=__cordl_internal_set__previousReferencePosition)) ::System::Nullable_1<::UnityEngine::Vector3>  _previousReferencePosition;

/// @brief Field _previousReferenceRotation, offset 0x120, size 0x10 
 __declspec(property(get=__cordl_internal_get__previousReferenceRotation, put=__cordl_internal_set__previousReferenceRotation)) ::System::Nullable_1<::UnityEngine::Quaternion>  _previousReferenceRotation;

/// @brief Field _referenceOffset, offset 0x30, size 0xc 
 __declspec(property(get=__cordl_internal_get__referenceOffset, put=__cordl_internal_set__referenceOffset)) ::UnityEngine::Vector3  _referenceOffset;

/// @brief Field _stepBackTime, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__stepBackTime, put=__cordl_internal_set__stepBackTime)) float_t  _stepBackTime;

/// @brief Field _tangentialVelocityInfluence, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__tangentialVelocityInfluence, put=__cordl_internal_set__tangentialVelocityInfluence)) float_t  _tangentialVelocityInfluence;

/// @brief Field _tempWindow, offset 0x150, size 0x8 
 __declspec(property(get=__cordl_internal_get__tempWindow, put=__cordl_internal_set__tempWindow)) ::System::Collections::Generic::List_1<::GlobalNamespace::StandardVelocityCalculator_SamplePoseData>*  _tempWindow;

/// @brief Field _throwInputDevice, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__throwInputDevice, put=__cordl_internal_set__throwInputDevice)) ::UnityW<::UnityEngine::Object>  _throwInputDevice;

/// @brief Field _timeProvider, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__timeProvider, put=__cordl_internal_set__timeProvider)) ::System::Func_1<float_t>*  _timeProvider;

/// @brief Field _trendVelocityInfluence, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get__trendVelocityInfluence, put=__cordl_internal_set__trendVelocityInfluence)) float_t  _trendVelocityInfluence;

/// @brief Field _updateFrequency, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get__updateFrequency, put=__cordl_internal_set__updateFrequency)) float_t  _updateFrequency;

/// @brief Field _updateLatency, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get__updateLatency, put=__cordl_internal_set__updateLatency)) float_t  _updateLatency;

/// @brief Field _windowWithMovement, offset 0x148, size 0x8 
 __declspec(property(get=__cordl_internal_get__windowWithMovement, put=__cordl_internal_set__windowWithMovement)) ::System::Collections::Generic::List_1<::GlobalNamespace::StandardVelocityCalculator_SamplePoseData>*  _windowWithMovement;

/// @brief Convert operator to "::Oculus::Interaction::ITimeConsumer"
constexpr operator  ::Oculus::Interaction::ITimeConsumer*() noexcept;

/// @brief Convert operator to "::Oculus::Interaction::Throw::IThrowVelocityCalculator"
constexpr operator  ::Oculus::Interaction::Throw::IThrowVelocityCalculator*() noexcept;

/// @brief Convert operator to "::Oculus::Interaction::Throw::IVelocityCalculator"
constexpr operator  ::Oculus::Interaction::Throw::IVelocityCalculator*() noexcept;

/// @brief Method Awake, addr 0xa4959a8, size 0x58, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method BufferedVelocitiesValid, addr 0xa496fcc, size 0x1a8, virtual false, abstract: false, final false
inline bool BufferedVelocitiesValid() ;

/// @brief Method CalculateLatestVelocitiesAndUpdateBuffer, addr 0xa497cc0, size 0x1cc, virtual false, abstract: false, final false
inline void CalculateLatestVelocitiesAndUpdateBuffer(float_t  delta, float_t  currentTime, ::UnityEngine::Pose  referencePose) ;

/// @brief Method CalculateTangentialVector, addr 0xa496c58, size 0x374, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 CalculateTangentialVector(::UnityEngine::Vector3  objectPosition) ;

/// @brief Method CalculateThrowVelocity, addr 0xa495adc, size 0x4d4, virtual true, abstract: false, final true
inline ::Oculus::Interaction::Throw::ReleaseVelocityInformation CalculateThrowVelocity(::UnityEngine::Transform*  objectThrown) ;

/// @brief Method ComputeTrendVelocities, addr 0xa496988, size 0x2d0, virtual false, abstract: false, final false
inline ::System::ValueTuple_2<::UnityEngine::Vector3,::UnityEngine::Vector3> ComputeTrendVelocities() ;

/// @brief Method FindLargestWindowWithMovement, addr 0xa497174, size 0x420, virtual false, abstract: false, final false
inline void FindLargestWindowWithMovement() ;

/// @brief Method FindMostRecentBufferedSampleWithMovement, addr 0xa497594, size 0x19c, virtual false, abstract: false, final false
inline ::System::ValueTuple_2<::UnityEngine::Vector3,::UnityEngine::Vector3> FindMostRecentBufferedSampleWithMovement() ;

/// @brief Method FindPoseIndicesAdjacentToTime, addr 0xa4966a0, size 0x168, virtual false, abstract: false, final false
inline ::System::ValueTuple_2<int32_t,int32_t> FindPoseIndicesAdjacentToTime(float_t  time) ;

/// @brief Method GetLatestLinearAndAngularVelocities, addr 0xa4980c4, size 0x19c, virtual false, abstract: false, final false
inline ::System::ValueTuple_2<::UnityEngine::Vector3,::UnityEngine::Vector3> GetLatestLinearAndAngularVelocities(::UnityEngine::Pose  referencePose, float_t  delta) ;

/// @brief Method IncludeEstimatedReleaseVelocities, addr 0xa4964a8, size 0x1f8, virtual false, abstract: false, final false
inline void IncludeEstimatedReleaseVelocities(float_t  currentTime, ::by_ref<::UnityEngine::Vector3>  linearVelocity, ::by_ref<::UnityEngine::Vector3>  angularVelocity) ;

/// @brief Method IncludeExternalVelocities, addr 0xa49619c, size 0x30c, virtual false, abstract: false, final false
inline void IncludeExternalVelocities(::by_ref<::UnityEngine::Vector3>  linearVelocity, ::by_ref<::UnityEngine::Vector3>  angularVelocity) ;

/// @brief Method IncludeInstantVelocities, addr 0xa495fb0, size 0x108, virtual false, abstract: false, final false
inline void IncludeInstantVelocities(float_t  currentTime, ::by_ref<::UnityEngine::Vector3>  linearVelocity, ::by_ref<::UnityEngine::Vector3>  angularVelocity) ;

/// @brief Method IncludeTangentialInfluence, addr 0xa496148, size 0x54, virtual false, abstract: false, final false
inline void IncludeTangentialInfluence(::by_ref<::UnityEngine::Vector3>  linearVelocity, ::UnityEngine::Vector3  interactablePosition) ;

/// @brief Method IncludeTrendVelocities, addr 0xa4960b8, size 0x90, virtual false, abstract: false, final false
inline void IncludeTrendVelocities(::by_ref<::UnityEngine::Vector3>  linearVelocity, ::by_ref<::UnityEngine::Vector3>  angularVelocity) ;

/// @brief Method InjectAllStandardVelocityCalculator, addr 0xa4983d0, size 0x2c, virtual false, abstract: false, final false
inline void InjectAllStandardVelocityCalculator(::Oculus::Interaction::Throw::IPoseInputDevice*  poseInputDevice, ::Oculus::Interaction::Throw::StandardVelocityCalculator_BufferingParams*  bufferingParams) ;

/// @brief Method InjectBufferingParams, addr 0xa4984cc, size 0x8, virtual false, abstract: false, final false
inline void InjectBufferingParams(::Oculus::Interaction::Throw::StandardVelocityCalculator_BufferingParams*  bufferingParams) ;

/// [Obsolete("Use SetTimeProvider()")]
/// @brief Method InjectOptionalTimeProvider, addr 0xa4984d4, size 0x8, virtual false, abstract: false, final false
inline void InjectOptionalTimeProvider(::System::Func_1<float_t>*  timeProvider) ;

/// @brief Method InjectPoseInputDevice, addr 0xa4983fc, size 0xd0, virtual false, abstract: false, final false
inline void InjectPoseInputDevice(::Oculus::Interaction::Throw::IPoseInputDevice*  poseInputDevice) ;

/// @brief Method LastThrowVelocities, addr 0xa497920, size 0x8, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::Throw::ReleaseVelocityInformation>* LastThrowVelocities() ;

/// @brief Method LateUpdate, addr 0xa497a30, size 0x290, virtual true, abstract: false, final false
inline void LateUpdate() ;

static inline ::Oculus::Interaction::Throw::StandardVelocityCalculator* New_ctor() ;

/// @brief Method SetTimeProvider, addr 0xa495638, size 0x8, virtual true, abstract: false, final true
inline void SetTimeProvider(::System::Func_1<float_t>*  timeProvider) ;

/// @brief Method SetUpdateFrequency, addr 0xa497928, size 0x108, virtual true, abstract: false, final true
inline void SetUpdateFrequency(float_t  frequency) ;

/// @brief Method Start, addr 0xa495a00, size 0xd8, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method TransferToDestBuffer, addr 0xa497730, size 0x1f0, virtual false, abstract: false, final false
inline void TransferToDestBuffer(::System::Collections::Generic::List_1<::GlobalNamespace::StandardVelocityCalculator_SamplePoseData>*  source, ::System::Collections::Generic::List_1<::GlobalNamespace::StandardVelocityCalculator_SamplePoseData>*  dest) ;

/// @brief Method UpdateLatestVelocitiesAndPoseValues, addr 0xa497e8c, size 0x20c, virtual false, abstract: false, final false
inline void UpdateLatestVelocitiesAndPoseValues(::UnityEngine::Pose  referencePose, float_t  delta) ;

constexpr ::System::Action_1<::Oculus::Interaction::Throw::ReleaseVelocityInformation>* const& __cordl_internal_get_WhenNewSampleAvailable() const;

constexpr ::System::Action_1<::Oculus::Interaction::Throw::ReleaseVelocityInformation>*& __cordl_internal_get_WhenNewSampleAvailable() ;

constexpr ::System::Action_1<::System::Collections::Generic::List_1<::Oculus::Interaction::Throw::ReleaseVelocityInformation>*>* const& __cordl_internal_get_WhenThrowVelocitiesChanged() const;

constexpr ::System::Action_1<::System::Collections::Generic::List_1<::Oculus::Interaction::Throw::ReleaseVelocityInformation>*>*& __cordl_internal_get_WhenThrowVelocitiesChanged() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__AddedInstantLinearVelocity_k__BackingField() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__AddedInstantLinearVelocity_k__BackingField() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__AddedTangentialLinearVelocity_k__BackingField() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__AddedTangentialLinearVelocity_k__BackingField() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__AddedTrendLinearVelocity_k__BackingField() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__AddedTrendLinearVelocity_k__BackingField() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__AxisOfRotationOrigin_k__BackingField() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__AxisOfRotationOrigin_k__BackingField() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__AxisOfRotation_k__BackingField() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__AxisOfRotation_k__BackingField() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__CenterOfMassToObject_k__BackingField() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__CenterOfMassToObject_k__BackingField() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__TangentialDirection_k__BackingField() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__TangentialDirection_k__BackingField() ;

constexpr ::Oculus::Interaction::Throw::IPoseInputDevice* const& __cordl_internal_get__ThrowInputDevice_k__BackingField() const;

constexpr ::Oculus::Interaction::Throw::IPoseInputDevice*& __cordl_internal_get__ThrowInputDevice_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__accumulatedDelta() const;

constexpr float_t& __cordl_internal_get__accumulatedDelta() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__angularVelocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__angularVelocity() ;

constexpr int32_t const& __cordl_internal_get__bufferSize() const;

constexpr int32_t& __cordl_internal_get__bufferSize() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::StandardVelocityCalculator_SamplePoseData>* const& __cordl_internal_get__bufferedPoses() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::StandardVelocityCalculator_SamplePoseData>*& __cordl_internal_get__bufferedPoses() ;

constexpr ::Oculus::Interaction::Throw::StandardVelocityCalculator_BufferingParams* const& __cordl_internal_get__bufferingParams() const;

constexpr ::Oculus::Interaction::Throw::StandardVelocityCalculator_BufferingParams*& __cordl_internal_get__bufferingParams() ;

constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::Throw::ReleaseVelocityInformation>* const& __cordl_internal_get__currentThrowVelocities() const;

constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::Throw::ReleaseVelocityInformation>*& __cordl_internal_get__currentThrowVelocities() ;

constexpr float_t const& __cordl_internal_get__externalVelocityInfluence() const;

constexpr float_t& __cordl_internal_get__externalVelocityInfluence() ;

constexpr ::Oculus::Interaction::Input::OneEuroFilterPropertyBlock const& __cordl_internal_get__filterProps() const;

constexpr ::Oculus::Interaction::Input::OneEuroFilterPropertyBlock& __cordl_internal_get__filterProps() ;

constexpr float_t const& __cordl_internal_get__instantVelocityInfluence() const;

constexpr float_t& __cordl_internal_get__instantVelocityInfluence() ;

constexpr float_t const& __cordl_internal_get__lastUpdateTime() const;

constexpr float_t& __cordl_internal_get__lastUpdateTime() ;

constexpr int32_t const& __cordl_internal_get__lastWritePos() const;

constexpr int32_t& __cordl_internal_get__lastWritePos() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__linearVelocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__linearVelocity() ;

constexpr ::Oculus::Interaction::Input::IOneEuroFilter_1<::UnityEngine::Vector3>* const& __cordl_internal_get__linearVelocityFilter() const;

constexpr ::Oculus::Interaction::Input::IOneEuroFilter_1<::UnityEngine::Vector3>*& __cordl_internal_get__linearVelocityFilter() ;

constexpr float_t const& __cordl_internal_get__maxPercentZeroSamplesTrendVeloc() const;

constexpr float_t& __cordl_internal_get__maxPercentZeroSamplesTrendVeloc() ;

constexpr ::System::Nullable_1<::UnityEngine::Vector3> const& __cordl_internal_get__previousReferencePosition() const;

constexpr ::System::Nullable_1<::UnityEngine::Vector3>& __cordl_internal_get__previousReferencePosition() ;

constexpr ::System::Nullable_1<::UnityEngine::Quaternion> const& __cordl_internal_get__previousReferenceRotation() const;

constexpr ::System::Nullable_1<::UnityEngine::Quaternion>& __cordl_internal_get__previousReferenceRotation() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__referenceOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__referenceOffset() ;

constexpr float_t const& __cordl_internal_get__stepBackTime() const;

constexpr float_t& __cordl_internal_get__stepBackTime() ;

constexpr float_t const& __cordl_internal_get__tangentialVelocityInfluence() const;

constexpr float_t& __cordl_internal_get__tangentialVelocityInfluence() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::StandardVelocityCalculator_SamplePoseData>* const& __cordl_internal_get__tempWindow() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::StandardVelocityCalculator_SamplePoseData>*& __cordl_internal_get__tempWindow() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__throwInputDevice() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__throwInputDevice() ;

constexpr ::System::Func_1<float_t>* const& __cordl_internal_get__timeProvider() const;

constexpr ::System::Func_1<float_t>*& __cordl_internal_get__timeProvider() ;

constexpr float_t const& __cordl_internal_get__trendVelocityInfluence() const;

constexpr float_t& __cordl_internal_get__trendVelocityInfluence() ;

constexpr float_t const& __cordl_internal_get__updateFrequency() const;

constexpr float_t& __cordl_internal_get__updateFrequency() ;

constexpr float_t const& __cordl_internal_get__updateLatency() const;

constexpr float_t& __cordl_internal_get__updateLatency() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::StandardVelocityCalculator_SamplePoseData>* const& __cordl_internal_get__windowWithMovement() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::StandardVelocityCalculator_SamplePoseData>*& __cordl_internal_get__windowWithMovement() ;

constexpr void __cordl_internal_set_WhenNewSampleAvailable(::System::Action_1<::Oculus::Interaction::Throw::ReleaseVelocityInformation>*  value) ;

constexpr void __cordl_internal_set_WhenThrowVelocitiesChanged(::System::Action_1<::System::Collections::Generic::List_1<::Oculus::Interaction::Throw::ReleaseVelocityInformation>*>*  value) ;

constexpr void __cordl_internal_set__AddedInstantLinearVelocity_k__BackingField(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__AddedTangentialLinearVelocity_k__BackingField(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__AddedTrendLinearVelocity_k__BackingField(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__AxisOfRotationOrigin_k__BackingField(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__AxisOfRotation_k__BackingField(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__CenterOfMassToObject_k__BackingField(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__TangentialDirection_k__BackingField(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__ThrowInputDevice_k__BackingField(::Oculus::Interaction::Throw::IPoseInputDevice*  value) ;

constexpr void __cordl_internal_set__accumulatedDelta(float_t  value) ;

constexpr void __cordl_internal_set__angularVelocity(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__bufferSize(int32_t  value) ;

constexpr void __cordl_internal_set__bufferedPoses(::System::Collections::Generic::List_1<::GlobalNamespace::StandardVelocityCalculator_SamplePoseData>*  value) ;

constexpr void __cordl_internal_set__bufferingParams(::Oculus::Interaction::Throw::StandardVelocityCalculator_BufferingParams*  value) ;

constexpr void __cordl_internal_set__currentThrowVelocities(::System::Collections::Generic::List_1<::Oculus::Interaction::Throw::ReleaseVelocityInformation>*  value) ;

constexpr void __cordl_internal_set__externalVelocityInfluence(float_t  value) ;

constexpr void __cordl_internal_set__filterProps(::Oculus::Interaction::Input::OneEuroFilterPropertyBlock  value) ;

constexpr void __cordl_internal_set__instantVelocityInfluence(float_t  value) ;

constexpr void __cordl_internal_set__lastUpdateTime(float_t  value) ;

constexpr void __cordl_internal_set__lastWritePos(int32_t  value) ;

constexpr void __cordl_internal_set__linearVelocity(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__linearVelocityFilter(::Oculus::Interaction::Input::IOneEuroFilter_1<::UnityEngine::Vector3>*  value) ;

constexpr void __cordl_internal_set__maxPercentZeroSamplesTrendVeloc(float_t  value) ;

constexpr void __cordl_internal_set__previousReferencePosition(::System::Nullable_1<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set__previousReferenceRotation(::System::Nullable_1<::UnityEngine::Quaternion>  value) ;

constexpr void __cordl_internal_set__referenceOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__stepBackTime(float_t  value) ;

constexpr void __cordl_internal_set__tangentialVelocityInfluence(float_t  value) ;

constexpr void __cordl_internal_set__tempWindow(::System::Collections::Generic::List_1<::GlobalNamespace::StandardVelocityCalculator_SamplePoseData>*  value) ;

constexpr void __cordl_internal_set__throwInputDevice(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__timeProvider(::System::Func_1<float_t>*  value) ;

constexpr void __cordl_internal_set__trendVelocityInfluence(float_t  value) ;

constexpr void __cordl_internal_set__updateFrequency(float_t  value) ;

constexpr void __cordl_internal_set__updateLatency(float_t  value) ;

constexpr void __cordl_internal_set__windowWithMovement(::System::Collections::Generic::List_1<::GlobalNamespace::StandardVelocityCalculator_SamplePoseData>*  value) ;

/// @brief Method .ctor, addr 0xa4984dc, size 0x3f0, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_WhenNewSampleAvailable, addr 0xa495848, size 0xb0, virtual true, abstract: false, final true
inline void add_WhenNewSampleAvailable(::System::Action_1<::Oculus::Interaction::Throw::ReleaseVelocityInformation>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_WhenThrowVelocitiesChanged, addr 0xa4956e8, size 0xb0, virtual true, abstract: false, final true
inline void add_WhenThrowVelocitiesChanged(::System::Action_1<::System::Collections::Generic::List_1<::Oculus::Interaction::Throw::ReleaseVelocityInformation>*>*  value) ;

/// [CompilerGenerated]
/// @brief Method get_AddedInstantLinearVelocity, addr 0xa495640, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_AddedInstantLinearVelocity() ;

/// [CompilerGenerated]
/// @brief Method get_AddedTangentialLinearVelocity, addr 0xa495670, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_AddedTangentialLinearVelocity() ;

/// [CompilerGenerated]
/// @brief Method get_AddedTrendLinearVelocity, addr 0xa495658, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_AddedTrendLinearVelocity() ;

/// [CompilerGenerated]
/// @brief Method get_AxisOfRotation, addr 0xa495688, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_AxisOfRotation() ;

/// [CompilerGenerated]
/// @brief Method get_AxisOfRotationOrigin, addr 0xa4956d0, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_AxisOfRotationOrigin() ;

/// [CompilerGenerated]
/// @brief Method get_CenterOfMassToObject, addr 0xa4956a0, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_CenterOfMassToObject() ;

/// @brief Method get_ExternalVelocityInfluence, addr 0xa495608, size 0x8, virtual false, abstract: false, final false
inline float_t get_ExternalVelocityInfluence() ;

/// @brief Method get_InstantVelocityInfluence, addr 0xa4955d8, size 0x8, virtual false, abstract: false, final false
inline float_t get_InstantVelocityInfluence() ;

/// @brief Method get_MaxPercentZeroSamplesTrendVeloc, addr 0xa495628, size 0x8, virtual false, abstract: false, final false
inline float_t get_MaxPercentZeroSamplesTrendVeloc() ;

/// @brief Method get_ReferenceOffset, addr 0xa4955c0, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_ReferenceOffset() ;

/// @brief Method get_StepBackTime, addr 0xa495618, size 0x8, virtual false, abstract: false, final false
inline float_t get_StepBackTime() ;

/// [CompilerGenerated]
/// @brief Method get_TangentialDirection, addr 0xa4956b8, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_TangentialDirection() ;

/// @brief Method get_TangentialVelocityInfluence, addr 0xa4955f8, size 0x8, virtual false, abstract: false, final false
inline float_t get_TangentialVelocityInfluence() ;

/// [CompilerGenerated]
/// @brief Method get_ThrowInputDevice, addr 0xa4955a8, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Throw::IPoseInputDevice* get_ThrowInputDevice() ;

/// @brief Method get_TrendVelocityInfluence, addr 0xa4955e8, size 0x8, virtual false, abstract: false, final false
inline float_t get_TrendVelocityInfluence() ;

/// @brief Method get_UpdateFrequency, addr 0xa4955b8, size 0x8, virtual true, abstract: false, final true
inline float_t get_UpdateFrequency() ;

/// @brief Convert to "::Oculus::Interaction::ITimeConsumer"
constexpr ::Oculus::Interaction::ITimeConsumer* i___Oculus__Interaction__ITimeConsumer() noexcept;

/// @brief Convert to "::Oculus::Interaction::Throw::IThrowVelocityCalculator"
constexpr ::Oculus::Interaction::Throw::IThrowVelocityCalculator* i___Oculus__Interaction__Throw__IThrowVelocityCalculator() noexcept;

/// @brief Convert to "::Oculus::Interaction::Throw::IVelocityCalculator"
constexpr ::Oculus::Interaction::Throw::IVelocityCalculator* i___Oculus__Interaction__Throw__IVelocityCalculator() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_WhenNewSampleAvailable, addr 0xa4958f8, size 0xb0, virtual true, abstract: false, final true
inline void remove_WhenNewSampleAvailable(::System::Action_1<::Oculus::Interaction::Throw::ReleaseVelocityInformation>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_WhenThrowVelocitiesChanged, addr 0xa495798, size 0xb0, virtual true, abstract: false, final true
inline void remove_WhenThrowVelocitiesChanged(::System::Action_1<::System::Collections::Generic::List_1<::Oculus::Interaction::Throw::ReleaseVelocityInformation>*>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_AddedInstantLinearVelocity, addr 0xa49564c, size 0xc, virtual false, abstract: false, final false
inline void set_AddedInstantLinearVelocity(::UnityEngine::Vector3  value) ;

/// [CompilerGenerated]
/// @brief Method set_AddedTangentialLinearVelocity, addr 0xa49567c, size 0xc, virtual false, abstract: false, final false
inline void set_AddedTangentialLinearVelocity(::UnityEngine::Vector3  value) ;

/// [CompilerGenerated]
/// @brief Method set_AddedTrendLinearVelocity, addr 0xa495664, size 0xc, virtual false, abstract: false, final false
inline void set_AddedTrendLinearVelocity(::UnityEngine::Vector3  value) ;

/// [CompilerGenerated]
/// @brief Method set_AxisOfRotation, addr 0xa495694, size 0xc, virtual false, abstract: false, final false
inline void set_AxisOfRotation(::UnityEngine::Vector3  value) ;

/// [CompilerGenerated]
/// @brief Method set_AxisOfRotationOrigin, addr 0xa4956dc, size 0xc, virtual false, abstract: false, final false
inline void set_AxisOfRotationOrigin(::UnityEngine::Vector3  value) ;

/// [CompilerGenerated]
/// @brief Method set_CenterOfMassToObject, addr 0xa4956ac, size 0xc, virtual false, abstract: false, final false
inline void set_CenterOfMassToObject(::UnityEngine::Vector3  value) ;

/// @brief Method set_ExternalVelocityInfluence, addr 0xa495610, size 0x8, virtual false, abstract: false, final false
inline void set_ExternalVelocityInfluence(float_t  value) ;

/// @brief Method set_InstantVelocityInfluence, addr 0xa4955e0, size 0x8, virtual false, abstract: false, final false
inline void set_InstantVelocityInfluence(float_t  value) ;

/// @brief Method set_MaxPercentZeroSamplesTrendVeloc, addr 0xa495630, size 0x8, virtual false, abstract: false, final false
inline void set_MaxPercentZeroSamplesTrendVeloc(float_t  value) ;

/// @brief Method set_ReferenceOffset, addr 0xa4955cc, size 0xc, virtual false, abstract: false, final false
inline void set_ReferenceOffset(::UnityEngine::Vector3  value) ;

/// @brief Method set_StepBackTime, addr 0xa495620, size 0x8, virtual false, abstract: false, final false
inline void set_StepBackTime(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_TangentialDirection, addr 0xa4956c4, size 0xc, virtual false, abstract: false, final false
inline void set_TangentialDirection(::UnityEngine::Vector3  value) ;

/// @brief Method set_TangentialVelocityInfluence, addr 0xa495600, size 0x8, virtual false, abstract: false, final false
inline void set_TangentialVelocityInfluence(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_ThrowInputDevice, addr 0xa4955b0, size 0x8, virtual false, abstract: false, final false
inline void set_ThrowInputDevice(::Oculus::Interaction::Throw::IPoseInputDevice*  value) ;

/// @brief Method set_TrendVelocityInfluence, addr 0xa4955f0, size 0x8, virtual false, abstract: false, final false
inline void set_TrendVelocityInfluence(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StandardVelocityCalculator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StandardVelocityCalculator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StandardVelocityCalculator(StandardVelocityCalculator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StandardVelocityCalculator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StandardVelocityCalculator(StandardVelocityCalculator const& ) = delete;

/// @brief Field _TREND_DOT_THRESHOLD offset 0xffffffff size 0x4
static constexpr float_t  _TREND_DOT_THRESHOLD{static_cast<float_t>(0.6f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16083};

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Throw.IPoseInputDevice), new[] {  })]
/// @brief Field _throwInputDevice, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____throwInputDevice;

/// [CompilerGenerated]
/// @brief Field <ThrowInputDevice>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::Oculus::Interaction::Throw::IPoseInputDevice*  ____ThrowInputDevice_k__BackingField;

/// [SerializeField]
/// [Tooltip("The reference position is the center of mass of the hand or controller. Use this offset this in case the computed center of mass is not entirely correct.")]
/// @brief Field _referenceOffset, offset: 0x30, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____referenceOffset;

/// [SerializeField]
/// [Tooltip("Related to buffering velocities; used for final velocity calculation.")]
/// @brief Field _bufferingParams, offset: 0x40, size: 0x8, def value: None
 ::Oculus::Interaction::Throw::StandardVelocityCalculator_BufferingParams*  ____bufferingParams;

/// [SerializeField]
/// [Tooltip("Influence of latest velocities upon release.")]
/// [Range(0, 1)]
/// @brief Field _instantVelocityInfluence, offset: 0x48, size: 0x4, def value: None
 float_t  ____instantVelocityInfluence;

/// [SerializeField]
/// [Range(0, 1)]
/// [Tooltip("Influence of derived velocities trend upon release.")]
/// @brief Field _trendVelocityInfluence, offset: 0x4c, size: 0x4, def value: None
 float_t  ____trendVelocityInfluence;

/// [SerializeField]
/// [Range(0, 1)]
/// [Tooltip("Influence of tangential velcities upon release, which can be affected by rotational motion.")]
/// @brief Field _tangentialVelocityInfluence, offset: 0x50, size: 0x4, def value: None
 float_t  ____tangentialVelocityInfluence;

/// [SerializeField]
/// [Range(0, 1)]
/// [Tooltip("Influence of external velocities upon release. For hands, this can include fingers.")]
/// @brief Field _externalVelocityInfluence, offset: 0x54, size: 0x4, def value: None
 float_t  ____externalVelocityInfluence;

/// [SerializeField]
/// [Tooltip("Time of anticipated release. Hand tracking might experience greater latency compared to controllers.")]
/// @brief Field _stepBackTime, offset: 0x58, size: 0x4, def value: None
 float_t  ____stepBackTime;

/// [SerializeField]
/// [Tooltip("Trend velocity uses a window of velocities, assuming not too many of those velocities are zero. If they exceed a max percentage then a last resort method is used.")]
/// @brief Field _maxPercentZeroSamplesTrendVeloc, offset: 0x5c, size: 0x4, def value: None
 float_t  ____maxPercentZeroSamplesTrendVeloc;

/// [Header("Sampling filtering.")]
/// [SerializeField]
/// @brief Field _filterProps, offset: 0x60, size: 0xc, def value: None
 ::Oculus::Interaction::Input::OneEuroFilterPropertyBlock  ____filterProps;

/// @brief Field _updateFrequency, offset: 0x6c, size: 0x4, def value: None
 float_t  ____updateFrequency;

/// @brief Field _updateLatency, offset: 0x70, size: 0x4, def value: None
 float_t  ____updateLatency;

/// @brief Field _lastUpdateTime, offset: 0x74, size: 0x4, def value: None
 float_t  ____lastUpdateTime;

/// @brief Field _linearVelocityFilter, offset: 0x78, size: 0x8, def value: None
 ::Oculus::Interaction::Input::IOneEuroFilter_1<::UnityEngine::Vector3>*  ____linearVelocityFilter;

/// @brief Field _timeProvider, offset: 0x80, size: 0x8, def value: None
 ::System::Func_1<float_t>*  ____timeProvider;

/// [CompilerGenerated]
/// @brief Field <AddedInstantLinearVelocity>k__BackingField, offset: 0x88, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____AddedInstantLinearVelocity_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <AddedTrendLinearVelocity>k__BackingField, offset: 0x94, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____AddedTrendLinearVelocity_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <AddedTangentialLinearVelocity>k__BackingField, offset: 0xa0, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____AddedTangentialLinearVelocity_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <AxisOfRotation>k__BackingField, offset: 0xac, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____AxisOfRotation_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <CenterOfMassToObject>k__BackingField, offset: 0xb8, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____CenterOfMassToObject_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <TangentialDirection>k__BackingField, offset: 0xc4, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____TangentialDirection_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <AxisOfRotationOrigin>k__BackingField, offset: 0xd0, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____AxisOfRotationOrigin_k__BackingField;

/// @brief Field _currentThrowVelocities, offset: 0xe0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Oculus::Interaction::Throw::ReleaseVelocityInformation>*  ____currentThrowVelocities;

/// [CompilerGenerated]
/// @brief Field WhenThrowVelocitiesChanged, offset: 0xe8, size: 0x8, def value: None
 ::System::Action_1<::System::Collections::Generic::List_1<::Oculus::Interaction::Throw::ReleaseVelocityInformation>*>*  ___WhenThrowVelocitiesChanged;

/// [CompilerGenerated]
/// @brief Field WhenNewSampleAvailable, offset: 0xf0, size: 0x8, def value: None
 ::System::Action_1<::Oculus::Interaction::Throw::ReleaseVelocityInformation>*  ___WhenNewSampleAvailable;

/// @brief Field _linearVelocity, offset: 0xf8, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____linearVelocity;

/// @brief Field _angularVelocity, offset: 0x104, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____angularVelocity;

/// @brief Field _previousReferencePosition, offset: 0x110, size: 0x10, def value: None
 ::System::Nullable_1<::UnityEngine::Vector3>  ____previousReferencePosition;

/// @brief Field _previousReferenceRotation, offset: 0x120, size: 0x10, def value: None
 ::System::Nullable_1<::UnityEngine::Quaternion>  ____previousReferenceRotation;

/// @brief Field _accumulatedDelta, offset: 0x130, size: 0x4, def value: None
 float_t  ____accumulatedDelta;

/// @brief Field _bufferedPoses, offset: 0x138, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::StandardVelocityCalculator_SamplePoseData>*  ____bufferedPoses;

/// @brief Field _lastWritePos, offset: 0x140, size: 0x4, def value: None
 int32_t  ____lastWritePos;

/// @brief Field _bufferSize, offset: 0x144, size: 0x4, def value: None
 int32_t  ____bufferSize;

/// @brief Field _windowWithMovement, offset: 0x148, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::StandardVelocityCalculator_SamplePoseData>*  ____windowWithMovement;

/// @brief Field _tempWindow, offset: 0x150, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::StandardVelocityCalculator_SamplePoseData>*  ____tempWindow;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Throw::StandardVelocityCalculator, ____throwInputDevice) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Throw::StandardVelocityCalculator, ____ThrowInputDevice_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Throw::StandardVelocityCalculator, ____referenceOffset) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Throw::StandardVelocityCalculator, ____bufferingParams) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Throw::StandardVelocityCalculator, ____instantVelocityInfluence) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Throw::StandardVelocityCalculator, ____trendVelocityInfluence) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Throw::StandardVelocityCalculator, ____tangentialVelocityInfluence) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Throw::StandardVelocityCalculator, ____externalVelocityInfluence) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Throw::StandardVelocityCalculator, ____stepBackTime) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Throw::StandardVelocityCalculator, ____maxPercentZeroSamplesTrendVeloc) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Throw::StandardVelocityCalculator, ____filterProps) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Throw::StandardVelocityCalculator, ____updateFrequency) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Throw::StandardVelocityCalculator, ____updateLatency) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Throw::StandardVelocityCalculator, ____lastUpdateTime) == 0x74, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Throw::StandardVelocityCalculator, ____linearVelocityFilter) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Throw::StandardVelocityCalculator, ____timeProvider) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Throw::StandardVelocityCalculator, ____AddedInstantLinearVelocity_k__BackingField) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Throw::StandardVelocityCalculator, ____AddedTrendLinearVelocity_k__BackingField) == 0x94, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Throw::StandardVelocityCalculator, ____AddedTangentialLinearVelocity_k__BackingField) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Throw::StandardVelocityCalculator, ____AxisOfRotation_k__BackingField) == 0xac, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Throw::StandardVelocityCalculator, ____CenterOfMassToObject_k__BackingField) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Throw::StandardVelocityCalculator, ____TangentialDirection_k__BackingField) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Throw::StandardVelocityCalculator, ____AxisOfRotationOrigin_k__BackingField) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Throw::StandardVelocityCalculator, ____currentThrowVelocities) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Throw::StandardVelocityCalculator, ___WhenThrowVelocitiesChanged) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Throw::StandardVelocityCalculator, ___WhenNewSampleAvailable) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Throw::StandardVelocityCalculator, ____linearVelocity) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Throw::StandardVelocityCalculator, ____angularVelocity) == 0x104, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Throw::StandardVelocityCalculator, ____previousReferencePosition) == 0x110, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Throw::StandardVelocityCalculator, ____previousReferenceRotation) == 0x120, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Throw::StandardVelocityCalculator, ____accumulatedDelta) == 0x130, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Throw::StandardVelocityCalculator, ____bufferedPoses) == 0x138, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Throw::StandardVelocityCalculator, ____lastWritePos) == 0x140, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Throw::StandardVelocityCalculator, ____bufferSize) == 0x144, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Throw::StandardVelocityCalculator, ____windowWithMovement) == 0x148, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Throw::StandardVelocityCalculator, ____tempWindow) == 0x150, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Throw::StandardVelocityCalculator) == 0x158, "Size mismatch!");

} // namespace end def Oculus::Interaction::Throw
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction::Throw {
// Is value type: false
// CS Name: Oculus.Interaction.Throw.StandardVelocityCalculator/<>c
class CORDL_TYPE StandardVelocityCalculator___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Oculus::Interaction::Throw::StandardVelocityCalculator___c*  __9;

/// @brief Field <>9__116_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__116_0, put=setStaticF___9__116_0)) ::System::Func_1<float_t>*  __9__116_0;

/// @brief Field <>9__116_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__116_1, put=setStaticF___9__116_1)) ::System::Action_1<::System::Collections::Generic::List_1<::Oculus::Interaction::Throw::ReleaseVelocityInformation>*>*  __9__116_1;

/// @brief Field <>9__116_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__116_2, put=setStaticF___9__116_2)) ::System::Action_1<::Oculus::Interaction::Throw::ReleaseVelocityInformation>*  __9__116_2;

static inline ::Oculus::Interaction::Throw::StandardVelocityCalculator___c* New_ctor() ;

/// @brief Method <.ctor>b__116_0, addr 0xa498950, size 0x8, virtual false, abstract: false, final false
inline float_t __ctor_b__116_0() ;

/// @brief Method <.ctor>b__116_1, addr 0xa498958, size 0x4, virtual false, abstract: false, final false
inline void __ctor_b__116_1(::System::Collections::Generic::List_1<::Oculus::Interaction::Throw::ReleaseVelocityInformation>*  _p0_) ;

/// @brief Method <.ctor>b__116_2, addr 0xa49895c, size 0x4, virtual false, abstract: false, final false
inline void __ctor_b__116_2(::Oculus::Interaction::Throw::ReleaseVelocityInformation  _p0_) ;

/// @brief Method .ctor, addr 0xa498948, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Oculus::Interaction::Throw::StandardVelocityCalculator___c* getStaticF___9() ;

static inline ::System::Func_1<float_t>* getStaticF___9__116_0() ;

static inline ::System::Action_1<::System::Collections::Generic::List_1<::Oculus::Interaction::Throw::ReleaseVelocityInformation>*>* getStaticF___9__116_1() ;

static inline ::System::Action_1<::Oculus::Interaction::Throw::ReleaseVelocityInformation>* getStaticF___9__116_2() ;

static inline void setStaticF___9(::Oculus::Interaction::Throw::StandardVelocityCalculator___c*  value) ;

static inline void setStaticF___9__116_0(::System::Func_1<float_t>*  value) ;

static inline void setStaticF___9__116_1(::System::Action_1<::System::Collections::Generic::List_1<::Oculus::Interaction::Throw::ReleaseVelocityInformation>*>*  value) ;

static inline void setStaticF___9__116_2(::System::Action_1<::Oculus::Interaction::Throw::ReleaseVelocityInformation>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StandardVelocityCalculator___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StandardVelocityCalculator___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StandardVelocityCalculator___c(StandardVelocityCalculator___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StandardVelocityCalculator___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StandardVelocityCalculator___c(StandardVelocityCalculator___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16082};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::Throw::StandardVelocityCalculator___c) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction::Throw
// Dependencies System.Object
namespace Oculus::Interaction::Throw {
// Is value type: false
// CS Name: Oculus.Interaction.Throw.StandardVelocityCalculator/BufferingParams
class CORDL_TYPE StandardVelocityCalculator_BufferingParams : public ::System::Object {
public:
// Declarations
/// @brief Field BufferLengthSeconds, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_BufferLengthSeconds, put=__cordl_internal_set_BufferLengthSeconds)) float_t  BufferLengthSeconds;

/// @brief Field SampleFrequency, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_SampleFrequency, put=__cordl_internal_set_SampleFrequency)) float_t  SampleFrequency;

static inline ::Oculus::Interaction::Throw::StandardVelocityCalculator_BufferingParams* New_ctor() ;

/// @brief Method Validate, addr 0xa495ad8, size 0x4, virtual false, abstract: false, final false
inline void Validate() ;

constexpr float_t const& __cordl_internal_get_BufferLengthSeconds() const;

constexpr float_t& __cordl_internal_get_BufferLengthSeconds() ;

constexpr float_t const& __cordl_internal_get_SampleFrequency() const;

constexpr float_t& __cordl_internal_get_SampleFrequency() ;

constexpr void __cordl_internal_set_BufferLengthSeconds(float_t  value) ;

constexpr void __cordl_internal_set_SampleFrequency(float_t  value) ;

/// @brief Method .ctor, addr 0xa4988cc, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StandardVelocityCalculator_BufferingParams() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StandardVelocityCalculator_BufferingParams", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StandardVelocityCalculator_BufferingParams(StandardVelocityCalculator_BufferingParams && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StandardVelocityCalculator_BufferingParams", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StandardVelocityCalculator_BufferingParams(StandardVelocityCalculator_BufferingParams const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16080};

/// @brief Field BufferLengthSeconds, offset: 0x10, size: 0x4, def value: None
 float_t  ___BufferLengthSeconds;

/// @brief Field SampleFrequency, offset: 0x14, size: 0x4, def value: None
 float_t  ___SampleFrequency;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Throw::StandardVelocityCalculator_BufferingParams, ___BufferLengthSeconds) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Throw::StandardVelocityCalculator_BufferingParams, ___SampleFrequency) == 0x14, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Throw::StandardVelocityCalculator_BufferingParams) == 0x18, "Size mismatch!");

} // namespace end def Oculus::Interaction::Throw
