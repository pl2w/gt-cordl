#pragma once
// IWYU pragma private; include "Oculus/Interaction/PokeInteractor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/zzzz__PointerInteractor_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PokeInteractor)
namespace GlobalNamespace {
struct PokeInteractor_CachedInteractable;
}
namespace GlobalNamespace {
struct SurfaceHitCache_PokeInteractor_HitInfo;
}
namespace Oculus::Interaction::Surfaces {
struct SurfaceHit;
}
namespace Oculus::Interaction {
class ITimeConsumer;
}
namespace Oculus::Interaction {
class PokeInteractable;
}
namespace Oculus::Interaction {
class PokeInteractor_SurfaceHitCache;
}
namespace Oculus::Interaction {
class PokeInteractor___c;
}
namespace Oculus::Interaction {
class ProgressCurve;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
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
namespace UnityEngine {
struct Matrix4x4;
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
namespace Oculus::Interaction {
class PokeInteractor;
}
namespace Oculus::Interaction {
class PokeInteractor_SurfaceHitCache;
}
namespace Oculus::Interaction {
class PokeInteractor___c;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::PokeInteractor*);
MARK_REF_T(::Oculus::Interaction::PokeInteractor_SurfaceHitCache*);
MARK_REF_T(::Oculus::Interaction::PokeInteractor___c*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PokeInteractor*, "Oculus.Interaction", "PokeInteractor");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PokeInteractor_SurfaceHitCache*, "Oculus.Interaction", "PokeInteractor/SurfaceHitCache");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PokeInteractor___c*, "Oculus.Interaction", "PokeInteractor/<>c");
// Dependencies Oculus.Interaction.PointerInteractor`2<TInteractor, TInteractable>, UnityEngine.Vector3
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.PokeInteractor
class CORDL_TYPE PokeInteractor : public ::Oculus::Interaction::PointerInteractor_2<::UnityW<::Oculus::Interaction::PokeInteractor>,::UnityW<::Oculus::Interaction::PokeInteractable>> {
public:
// Declarations
using CachedInteractable = ::GlobalNamespace::PokeInteractor_CachedInteractable;

using SurfaceHitCache = ::Oculus::Interaction::PokeInteractor_SurfaceHitCache;

using __c = ::Oculus::Interaction::PokeInteractor___c;

 __declspec(property(get=get_ClosestPoint, put=set_ClosestPoint)) ::UnityEngine::Vector3  ClosestPoint;

 __declspec(property(get=get_IsPassedSurface, put=set_IsPassedSurface)) bool  IsPassedSurface;

 __declspec(property(get=get_Origin, put=set_Origin)) ::UnityEngine::Vector3  Origin;

 __declspec(property(get=get_Radius)) float_t  Radius;

 __declspec(property(get=get_TouchNormal, put=set_TouchNormal)) ::UnityEngine::Vector3  TouchNormal;

 __declspec(property(get=get_TouchPoint, put=set_TouchPoint)) ::UnityEngine::Vector3  TouchPoint;

/// @brief Field WhenPassedSurfaceChanged, offset 0x1f8, size 0x8 
 __declspec(property(get=__cordl_internal_get_WhenPassedSurfaceChanged, put=__cordl_internal_set_WhenPassedSurfaceChanged)) ::System::Action_1<bool>*  WhenPassedSurfaceChanged;

/// @brief Field <ClosestPoint>k__BackingField, offset 0x12c, size 0xc 
 __declspec(property(get=__cordl_internal_get__ClosestPoint_k__BackingField, put=__cordl_internal_set__ClosestPoint_k__BackingField)) ::UnityEngine::Vector3  _ClosestPoint_k__BackingField;

/// @brief Field <Origin>k__BackingField, offset 0x150, size 0xc 
 __declspec(property(get=__cordl_internal_get__Origin_k__BackingField, put=__cordl_internal_set__Origin_k__BackingField)) ::UnityEngine::Vector3  _Origin_k__BackingField;

/// @brief Field <TouchNormal>k__BackingField, offset 0x144, size 0xc 
 __declspec(property(get=__cordl_internal_get__TouchNormal_k__BackingField, put=__cordl_internal_set__TouchNormal_k__BackingField)) ::UnityEngine::Vector3  _TouchNormal_k__BackingField;

/// @brief Field <TouchPoint>k__BackingField, offset 0x138, size 0xc 
 __declspec(property(get=__cordl_internal_get__TouchPoint_k__BackingField, put=__cordl_internal_set__TouchPoint_k__BackingField)) ::UnityEngine::Vector3  _TouchPoint_k__BackingField;

/// @brief Field _cachedInteractablesInRange, offset 0x218, size 0x8 
 __declspec(property(get=__cordl_internal_get__cachedInteractablesInRange, put=__cordl_internal_set__cachedInteractablesInRange)) ::System::Collections::Generic::List_1<::GlobalNamespace::PokeInteractor_CachedInteractable>*  _cachedInteractablesInRange;

/// @brief Field _dragCompareSurfacePointLocal, offset 0x1c8, size 0xc 
 __declspec(property(get=__cordl_internal_get__dragCompareSurfacePointLocal, put=__cordl_internal_set__dragCompareSurfacePointLocal)) ::UnityEngine::Vector3  _dragCompareSurfacePointLocal;

/// @brief Field _dragEaseCurve, offset 0x1b8, size 0x8 
 __declspec(property(get=__cordl_internal_get__dragEaseCurve, put=__cordl_internal_set__dragEaseCurve)) ::Oculus::Interaction::ProgressCurve*  _dragEaseCurve;

/// @brief Field _easeTouchPointLocal, offset 0x1a4, size 0xc 
 __declspec(property(get=__cordl_internal_get__easeTouchPointLocal, put=__cordl_internal_set__easeTouchPointLocal)) ::UnityEngine::Vector3  _easeTouchPointLocal;

/// @brief Field _equalDistanceThreshold, offset 0x128, size 0x4 
 __declspec(property(get=__cordl_internal_get__equalDistanceThreshold, put=__cordl_internal_set__equalDistanceThreshold)) float_t  _equalDistanceThreshold;

/// @brief Field _firstTouchPointLocal, offset 0x18c, size 0xc 
 __declspec(property(get=__cordl_internal_get__firstTouchPointLocal, put=__cordl_internal_set__firstTouchPointLocal)) ::UnityEngine::Vector3  _firstTouchPointLocal;

/// @brief Field _hitCache, offset 0x200, size 0x8 
 __declspec(property(get=__cordl_internal_get__hitCache, put=__cordl_internal_set__hitCache)) ::Oculus::Interaction::PokeInteractor_SurfaceHitCache*  _hitCache;

/// @brief Field _hitInteractable, offset 0x170, size 0x8 
 __declspec(property(get=__cordl_internal_get__hitInteractable, put=__cordl_internal_set__hitInteractable)) ::UnityW<::Oculus::Interaction::PokeInteractable>  _hitInteractable;

/// @brief Field _isDragging, offset 0x1b1, size 0x1 
 __declspec(property(get=__cordl_internal_get__isDragging, put=__cordl_internal_set__isDragging)) bool  _isDragging;

/// @brief Field _isPassedSurface, offset 0x1f0, size 0x1 
 __declspec(property(get=__cordl_internal_get__isPassedSurface, put=__cordl_internal_set__isPassedSurface)) bool  _isPassedSurface;

/// @brief Field _isRecoiled, offset 0x1b0, size 0x1 
 __declspec(property(get=__cordl_internal_get__isRecoiled, put=__cordl_internal_set__isRecoiled)) bool  _isRecoiled;

/// @brief Field _lastUpdateTime, offset 0x1e4, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastUpdateTime, put=__cordl_internal_set__lastUpdateTime)) float_t  _lastUpdateTime;

/// @brief Field _maxDistanceFromFirstTouchPoint, offset 0x1d4, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxDistanceFromFirstTouchPoint, put=__cordl_internal_set__maxDistanceFromFirstTouchPoint)) float_t  _maxDistanceFromFirstTouchPoint;

/// @brief Field _pinningResyncCurve, offset 0x1c0, size 0x8 
 __declspec(property(get=__cordl_internal_get__pinningResyncCurve, put=__cordl_internal_set__pinningResyncCurve)) ::Oculus::Interaction::ProgressCurve*  _pinningResyncCurve;

/// @brief Field _pointTransform, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get__pointTransform, put=__cordl_internal_set__pointTransform)) ::UnityW<::UnityEngine::Transform>  _pointTransform;

/// @brief Field _previousCandidate, offset 0x168, size 0x8 
 __declspec(property(get=__cordl_internal_get__previousCandidate, put=__cordl_internal_set__previousCandidate)) ::UnityW<::Oculus::Interaction::PokeInteractable>  _previousCandidate;

/// @brief Field _previousDragCurveProgress, offset 0x210, size 0x4 
 __declspec(property(get=__cordl_internal_get__previousDragCurveProgress, put=__cordl_internal_set__previousDragCurveProgress)) float_t  _previousDragCurveProgress;

/// @brief Field _previousPinningCurveProgress, offset 0x214, size 0x4 
 __declspec(property(get=__cordl_internal_get__previousPinningCurveProgress, put=__cordl_internal_set__previousPinningCurveProgress)) float_t  _previousPinningCurveProgress;

/// @brief Field _previousPokeOrigin, offset 0x15c, size 0xc 
 __declspec(property(get=__cordl_internal_get__previousPokeOrigin, put=__cordl_internal_set__previousPokeOrigin)) ::UnityEngine::Vector3  _previousPokeOrigin;

/// @brief Field _previousSurfacePointLocal, offset 0x180, size 0xc 
 __declspec(property(get=__cordl_internal_get__previousSurfacePointLocal, put=__cordl_internal_set__previousSurfacePointLocal)) ::UnityEngine::Vector3  _previousSurfacePointLocal;

/// @brief Field _previousSurfaceTransformMap, offset 0x208, size 0x8 
 __declspec(property(get=__cordl_internal_get__previousSurfaceTransformMap, put=__cordl_internal_set__previousSurfaceTransformMap)) ::System::Collections::Generic::Dictionary_2<::UnityW<::Oculus::Interaction::PokeInteractable>,::UnityEngine::Matrix4x4>*  _previousSurfaceTransformMap;

/// @brief Field _radius, offset 0x120, size 0x4 
 __declspec(property(get=__cordl_internal_get__radius, put=__cordl_internal_set__radius)) float_t  _radius;

/// @brief Field _reEnterDepth, offset 0x1e0, size 0x4 
 __declspec(property(get=__cordl_internal_get__reEnterDepth, put=__cordl_internal_set__reEnterDepth)) float_t  _reEnterDepth;

/// @brief Field _recoilInteractable, offset 0x178, size 0x8 
 __declspec(property(get=__cordl_internal_get__recoilInteractable, put=__cordl_internal_set__recoilInteractable)) ::UnityW<::Oculus::Interaction::PokeInteractable>  _recoilInteractable;

/// @brief Field _recoilVelocityExpansion, offset 0x1d8, size 0x4 
 __declspec(property(get=__cordl_internal_get__recoilVelocityExpansion, put=__cordl_internal_set__recoilVelocityExpansion)) float_t  _recoilVelocityExpansion;

/// @brief Field _selectMaxDepth, offset 0x1dc, size 0x4 
 __declspec(property(get=__cordl_internal_get__selectMaxDepth, put=__cordl_internal_set__selectMaxDepth)) float_t  _selectMaxDepth;

/// @brief Field _targetTouchPointLocal, offset 0x198, size 0xc 
 __declspec(property(get=__cordl_internal_get__targetTouchPointLocal, put=__cordl_internal_set__targetTouchPointLocal)) ::UnityEngine::Vector3  _targetTouchPointLocal;

/// @brief Field _timeProvider, offset 0x1e8, size 0x8 
 __declspec(property(get=__cordl_internal_get__timeProvider, put=__cordl_internal_set__timeProvider)) ::System::Func_1<float_t>*  _timeProvider;

/// @brief Field _touchReleaseThreshold, offset 0x124, size 0x4 
 __declspec(property(get=__cordl_internal_get__touchReleaseThreshold, put=__cordl_internal_set__touchReleaseThreshold)) float_t  _touchReleaseThreshold;

/// @brief Convert operator to "::Oculus::Interaction::ITimeConsumer"
constexpr operator  ::Oculus::Interaction::ITimeConsumer*() noexcept;

/// @brief Method Awake, addr 0xa455a7c, size 0x60, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method ComputeCandidate, addr 0xa456764, size 0x128, virtual true, abstract: false, final false
inline ::UnityW<::Oculus::Interaction::PokeInteractable> ComputeCandidate() ;

/// @brief Method ComputeCandidateTiebreaker, addr 0xa458028, size 0x98, virtual true, abstract: false, final false
inline int32_t ComputeCandidateTiebreaker(::Oculus::Interaction::PokeInteractable*  a, ::Oculus::Interaction::PokeInteractable*  b) ;

/// [Obsolete("This will be removed in a future version of Interaction SDK. Please use SurfaceUtils.ComputeDepth instead")]
/// @brief Method ComputeDepth, addr 0xa4588d0, size 0x20, virtual false, abstract: false, final false
inline float_t ComputeDepth(::Oculus::Interaction::PokeInteractable*  interactable, ::UnityEngine::Vector3  point) ;

/// @brief Method ComputeDistanceAbove, addr 0xa4581b0, size 0x20, virtual false, abstract: false, final false
inline float_t ComputeDistanceAbove(::Oculus::Interaction::PokeInteractable*  interactable, ::UnityEngine::Vector3  point) ;

/// @brief Method ComputeDistanceFrom, addr 0xa4588f0, size 0x20, virtual false, abstract: false, final false
inline float_t ComputeDistanceFrom(::Oculus::Interaction::PokeInteractable*  interactable, ::UnityEngine::Vector3  point) ;

/// @brief Method ComputeHoverCandidate, addr 0xa457afc, size 0x52c, virtual false, abstract: false, final false
inline ::UnityW<::Oculus::Interaction::PokeInteractable> ComputeHoverCandidate(::System::Collections::Generic::List_1<::GlobalNamespace::PokeInteractor_CachedInteractable>*  interactables) ;

/// @brief Method ComputePointerPose, addr 0xa458764, size 0x16c, virtual true, abstract: false, final false
inline ::UnityEngine::Pose ComputePointerPose() ;

/// @brief Method ComputePokeDepth, addr 0xa45616c, size 0x20, virtual false, abstract: false, final false
inline float_t ComputePokeDepth(::Oculus::Interaction::PokeInteractable*  interactable, ::UnityEngine::Vector3  point) ;

/// @brief Method ComputeSelectCandidate, addr 0xa456c8c, size 0xe70, virtual false, abstract: false, final false
inline ::UnityW<::Oculus::Interaction::PokeInteractable> ComputeSelectCandidate(::System::Collections::Generic::List_1<::GlobalNamespace::PokeInteractor_CachedInteractable>*  interactables) ;

/// @brief Method ComputeShouldSelect, addr 0xa45608c, size 0xe0, virtual true, abstract: false, final false
inline bool ComputeShouldSelect() ;

/// @brief Method ComputeShouldUnselect, addr 0xa45618c, size 0x60, virtual true, abstract: false, final false
inline bool ComputeShouldUnselect() ;

/// @brief Method ComputeTangentDistance, addr 0xa4581d0, size 0x20, virtual false, abstract: false, final false
inline float_t ComputeTangentDistance(::Oculus::Interaction::PokeInteractable*  interactable, ::UnityEngine::Vector3  point) ;

/// @brief Method DoHoverUpdate, addr 0xa4565a8, size 0x1bc, virtual true, abstract: false, final false
inline void DoHoverUpdate() ;

/// @brief Method DoPostprocess, addr 0xa455ca0, size 0x3ec, virtual true, abstract: false, final false
inline void DoPostprocess() ;

/// @brief Method DoPreprocess, addr 0xa455c14, size 0x8c, virtual true, abstract: false, final false
inline void DoPreprocess() ;

/// @brief Method DoSelectUpdate, addr 0xa45965c, size 0x18c, virtual true, abstract: false, final false
inline void DoSelectUpdate() ;

/// @brief Method GetBackingHit, addr 0xa4561ec, size 0x18, virtual false, abstract: false, final false
inline bool GetBackingHit(::Oculus::Interaction::PokeInteractable*  interactable, ::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>  hit) ;

/// @brief Method GetPatchHit, addr 0xa456204, size 0x18, virtual false, abstract: false, final false
inline bool GetPatchHit(::Oculus::Interaction::PokeInteractable*  interactable, ::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>  hit) ;

/// @brief Method HandleDisabled, addr 0xa458700, size 0x64, virtual true, abstract: false, final false
inline void HandleDisabled() ;

/// @brief Method InjectAllPokeInteractor, addr 0xa4597e8, size 0x2c, virtual false, abstract: false, final false
inline void InjectAllPokeInteractor(::UnityEngine::Transform*  pointTransform, float_t  radius) ;

/// @brief Method InjectOptionalEqualDistanceThreshold, addr 0xa459834, size 0x8, virtual false, abstract: false, final false
inline void InjectOptionalEqualDistanceThreshold(float_t  equalDistanceThreshold) ;

/// [Obsolete("Use SetTimeProvider()")]
/// @brief Method InjectOptionalTimeProvider, addr 0xa45983c, size 0x10, virtual false, abstract: false, final false
inline void InjectOptionalTimeProvider(::System::Func_1<float_t>*  timeProvider) ;

/// @brief Method InjectOptionalTouchReleaseThreshold, addr 0xa45982c, size 0x8, virtual false, abstract: false, final false
inline void InjectOptionalTouchReleaseThreshold(float_t  touchReleaseThreshold) ;

/// @brief Method InjectPointTransform, addr 0xa459814, size 0x10, virtual false, abstract: false, final false
inline void InjectPointTransform(::UnityEngine::Transform*  pointTransform) ;

/// @brief Method InjectRadius, addr 0xa459824, size 0x8, virtual false, abstract: false, final false
inline void InjectRadius(float_t  radius) ;

/// @brief Method InteractableInRange, addr 0xa45621c, size 0x38c, virtual false, abstract: false, final false
inline bool InteractableInRange(::Oculus::Interaction::PokeInteractable*  interactable) ;

/// @brief Method InteractableSelected, addr 0xa4583b8, size 0x348, virtual true, abstract: false, final false
inline void InteractableSelected(::Oculus::Interaction::PokeInteractable*  interactable) ;

/// @brief Method MinPokeDepth, addr 0xa4581f0, size 0x1c8, virtual false, abstract: false, final false
inline float_t MinPokeDepth(::Oculus::Interaction::PokeInteractable*  interactable) ;

static inline ::Oculus::Interaction::PokeInteractor* New_ctor() ;

/// @brief Method PassesEnterHoverDistanceCheck, addr 0xa4580c0, size 0xf0, virtual false, abstract: false, final false
inline bool PassesEnterHoverDistanceCheck(::UnityEngine::Vector3  position, ::Oculus::Interaction::PokeInteractable*  interactable) ;

/// @brief Method SetTimeProvider, addr 0xa455a28, size 0x10, virtual true, abstract: false, final true
inline void SetTimeProvider(::System::Func_1<float_t>*  timeProvider) ;

/// @brief Method ShouldCancel, addr 0xa4591b8, size 0x90, virtual true, abstract: false, final false
inline bool ShouldCancel(::Oculus::Interaction::PokeInteractable*  interactable) ;

/// @brief Method ShouldRecoil, addr 0xa459248, size 0x414, virtual true, abstract: false, final false
inline bool ShouldRecoil(::Oculus::Interaction::PokeInteractable*  interactable) ;

/// @brief Method Start, addr 0xa455adc, size 0x138, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method SurfaceUpdate, addr 0xa458910, size 0x8a8, virtual true, abstract: false, final false
inline bool SurfaceUpdate(::Oculus::Interaction::PokeInteractable*  interactable) ;

/// @brief Method UpdateInteractablesInRange, addr 0xa45688c, size 0x400, virtual false, abstract: false, final false
inline void UpdateInteractablesInRange(::by_ref<::System::Collections::Generic::List_1<::GlobalNamespace::PokeInteractor_CachedInteractable>*>  cachedInteractables) ;

constexpr ::System::Action_1<bool>* const& __cordl_internal_get_WhenPassedSurfaceChanged() const;

constexpr ::System::Action_1<bool>*& __cordl_internal_get_WhenPassedSurfaceChanged() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__ClosestPoint_k__BackingField() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__ClosestPoint_k__BackingField() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__Origin_k__BackingField() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__Origin_k__BackingField() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__TouchNormal_k__BackingField() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__TouchNormal_k__BackingField() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__TouchPoint_k__BackingField() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__TouchPoint_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PokeInteractor_CachedInteractable>* const& __cordl_internal_get__cachedInteractablesInRange() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PokeInteractor_CachedInteractable>*& __cordl_internal_get__cachedInteractablesInRange() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__dragCompareSurfacePointLocal() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__dragCompareSurfacePointLocal() ;

constexpr ::Oculus::Interaction::ProgressCurve* const& __cordl_internal_get__dragEaseCurve() const;

constexpr ::Oculus::Interaction::ProgressCurve*& __cordl_internal_get__dragEaseCurve() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__easeTouchPointLocal() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__easeTouchPointLocal() ;

constexpr float_t const& __cordl_internal_get__equalDistanceThreshold() const;

constexpr float_t& __cordl_internal_get__equalDistanceThreshold() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__firstTouchPointLocal() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__firstTouchPointLocal() ;

constexpr ::Oculus::Interaction::PokeInteractor_SurfaceHitCache* const& __cordl_internal_get__hitCache() const;

constexpr ::Oculus::Interaction::PokeInteractor_SurfaceHitCache*& __cordl_internal_get__hitCache() ;

constexpr ::UnityW<::Oculus::Interaction::PokeInteractable> const& __cordl_internal_get__hitInteractable() const;

constexpr ::UnityW<::Oculus::Interaction::PokeInteractable>& __cordl_internal_get__hitInteractable() ;

constexpr bool const& __cordl_internal_get__isDragging() const;

constexpr bool& __cordl_internal_get__isDragging() ;

constexpr bool const& __cordl_internal_get__isPassedSurface() const;

constexpr bool& __cordl_internal_get__isPassedSurface() ;

constexpr bool const& __cordl_internal_get__isRecoiled() const;

constexpr bool& __cordl_internal_get__isRecoiled() ;

constexpr float_t const& __cordl_internal_get__lastUpdateTime() const;

constexpr float_t& __cordl_internal_get__lastUpdateTime() ;

constexpr float_t const& __cordl_internal_get__maxDistanceFromFirstTouchPoint() const;

constexpr float_t& __cordl_internal_get__maxDistanceFromFirstTouchPoint() ;

constexpr ::Oculus::Interaction::ProgressCurve* const& __cordl_internal_get__pinningResyncCurve() const;

constexpr ::Oculus::Interaction::ProgressCurve*& __cordl_internal_get__pinningResyncCurve() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__pointTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__pointTransform() ;

constexpr ::UnityW<::Oculus::Interaction::PokeInteractable> const& __cordl_internal_get__previousCandidate() const;

constexpr ::UnityW<::Oculus::Interaction::PokeInteractable>& __cordl_internal_get__previousCandidate() ;

constexpr float_t const& __cordl_internal_get__previousDragCurveProgress() const;

constexpr float_t& __cordl_internal_get__previousDragCurveProgress() ;

constexpr float_t const& __cordl_internal_get__previousPinningCurveProgress() const;

constexpr float_t& __cordl_internal_get__previousPinningCurveProgress() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__previousPokeOrigin() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__previousPokeOrigin() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__previousSurfacePointLocal() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__previousSurfacePointLocal() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::Oculus::Interaction::PokeInteractable>,::UnityEngine::Matrix4x4>* const& __cordl_internal_get__previousSurfaceTransformMap() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::Oculus::Interaction::PokeInteractable>,::UnityEngine::Matrix4x4>*& __cordl_internal_get__previousSurfaceTransformMap() ;

constexpr float_t const& __cordl_internal_get__radius() const;

constexpr float_t& __cordl_internal_get__radius() ;

constexpr float_t const& __cordl_internal_get__reEnterDepth() const;

constexpr float_t& __cordl_internal_get__reEnterDepth() ;

constexpr ::UnityW<::Oculus::Interaction::PokeInteractable> const& __cordl_internal_get__recoilInteractable() const;

constexpr ::UnityW<::Oculus::Interaction::PokeInteractable>& __cordl_internal_get__recoilInteractable() ;

constexpr float_t const& __cordl_internal_get__recoilVelocityExpansion() const;

constexpr float_t& __cordl_internal_get__recoilVelocityExpansion() ;

constexpr float_t const& __cordl_internal_get__selectMaxDepth() const;

constexpr float_t& __cordl_internal_get__selectMaxDepth() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__targetTouchPointLocal() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__targetTouchPointLocal() ;

constexpr ::System::Func_1<float_t>* const& __cordl_internal_get__timeProvider() const;

constexpr ::System::Func_1<float_t>*& __cordl_internal_get__timeProvider() ;

constexpr float_t const& __cordl_internal_get__touchReleaseThreshold() const;

constexpr float_t& __cordl_internal_get__touchReleaseThreshold() ;

constexpr void __cordl_internal_set_WhenPassedSurfaceChanged(::System::Action_1<bool>*  value) ;

constexpr void __cordl_internal_set__ClosestPoint_k__BackingField(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__Origin_k__BackingField(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__TouchNormal_k__BackingField(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__TouchPoint_k__BackingField(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__cachedInteractablesInRange(::System::Collections::Generic::List_1<::GlobalNamespace::PokeInteractor_CachedInteractable>*  value) ;

constexpr void __cordl_internal_set__dragCompareSurfacePointLocal(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__dragEaseCurve(::Oculus::Interaction::ProgressCurve*  value) ;

constexpr void __cordl_internal_set__easeTouchPointLocal(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__equalDistanceThreshold(float_t  value) ;

constexpr void __cordl_internal_set__firstTouchPointLocal(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__hitCache(::Oculus::Interaction::PokeInteractor_SurfaceHitCache*  value) ;

constexpr void __cordl_internal_set__hitInteractable(::UnityW<::Oculus::Interaction::PokeInteractable>  value) ;

constexpr void __cordl_internal_set__isDragging(bool  value) ;

constexpr void __cordl_internal_set__isPassedSurface(bool  value) ;

constexpr void __cordl_internal_set__isRecoiled(bool  value) ;

constexpr void __cordl_internal_set__lastUpdateTime(float_t  value) ;

constexpr void __cordl_internal_set__maxDistanceFromFirstTouchPoint(float_t  value) ;

constexpr void __cordl_internal_set__pinningResyncCurve(::Oculus::Interaction::ProgressCurve*  value) ;

constexpr void __cordl_internal_set__pointTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__previousCandidate(::UnityW<::Oculus::Interaction::PokeInteractable>  value) ;

constexpr void __cordl_internal_set__previousDragCurveProgress(float_t  value) ;

constexpr void __cordl_internal_set__previousPinningCurveProgress(float_t  value) ;

constexpr void __cordl_internal_set__previousPokeOrigin(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__previousSurfacePointLocal(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__previousSurfaceTransformMap(::System::Collections::Generic::Dictionary_2<::UnityW<::Oculus::Interaction::PokeInteractable>,::UnityEngine::Matrix4x4>*  value) ;

constexpr void __cordl_internal_set__radius(float_t  value) ;

constexpr void __cordl_internal_set__reEnterDepth(float_t  value) ;

constexpr void __cordl_internal_set__recoilInteractable(::UnityW<::Oculus::Interaction::PokeInteractable>  value) ;

constexpr void __cordl_internal_set__recoilVelocityExpansion(float_t  value) ;

constexpr void __cordl_internal_set__selectMaxDepth(float_t  value) ;

constexpr void __cordl_internal_set__targetTouchPointLocal(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__timeProvider(::System::Func_1<float_t>*  value) ;

constexpr void __cordl_internal_set__touchReleaseThreshold(float_t  value) ;

/// @brief Method .ctor, addr 0xa45984c, size 0x210, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_ClosestPoint, addr 0xa4559a0, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_ClosestPoint() ;

/// @brief Method get_IsPassedSurface, addr 0xa455a38, size 0x8, virtual false, abstract: false, final false
inline bool get_IsPassedSurface() ;

/// [CompilerGenerated]
/// @brief Method get_Origin, addr 0xa455a08, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_Origin() ;

/// @brief Method get_Radius, addr 0xa455a00, size 0x8, virtual false, abstract: false, final false
inline float_t get_Radius() ;

/// [CompilerGenerated]
/// @brief Method get_TouchNormal, addr 0xa4559e0, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_TouchNormal() ;

/// [CompilerGenerated]
/// @brief Method get_TouchPoint, addr 0xa4559c0, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_TouchPoint() ;

/// @brief Convert to "::Oculus::Interaction::ITimeConsumer"
constexpr ::Oculus::Interaction::ITimeConsumer* i___Oculus__Interaction__ITimeConsumer() noexcept;

/// [CompilerGenerated]
/// @brief Method set_ClosestPoint, addr 0xa4559b0, size 0x10, virtual false, abstract: false, final false
inline void set_ClosestPoint(::UnityEngine::Vector3  value) ;

/// @brief Method set_IsPassedSurface, addr 0xa455a40, size 0x3c, virtual false, abstract: false, final false
inline void set_IsPassedSurface(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_Origin, addr 0xa455a18, size 0x10, virtual false, abstract: false, final false
inline void set_Origin(::UnityEngine::Vector3  value) ;

/// [CompilerGenerated]
/// @brief Method set_TouchNormal, addr 0xa4559f0, size 0x10, virtual false, abstract: false, final false
inline void set_TouchNormal(::UnityEngine::Vector3  value) ;

/// [CompilerGenerated]
/// @brief Method set_TouchPoint, addr 0xa4559d0, size 0x10, virtual false, abstract: false, final false
inline void set_TouchPoint(::UnityEngine::Vector3  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PokeInteractor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PokeInteractor", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PokeInteractor(PokeInteractor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PokeInteractor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PokeInteractor(PokeInteractor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15859};

/// [SerializeField]
/// [Tooltip("The poke origin tracks the provided transform.")]
/// @brief Field _pointTransform, offset: 0x118, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____pointTransform;

/// [SerializeField]
/// [Tooltip("(Meters, World) The radius of the sphere positioned at the origin.")]
/// @brief Field _radius, offset: 0x120, size: 0x4, def value: None
 float_t  ____radius;

/// [SerializeField]
/// [Tooltip("(Meters, World) A poke unselect fires when the poke origin surpasses this distance above a surface.")]
/// @brief Field _touchReleaseThreshold, offset: 0x124, size: 0x4, def value: None
 float_t  ____touchReleaseThreshold;

/// [FormerlySerializedAs("_zThreshold")]
/// [SerializeField]
/// [Tooltip("(Meters, World) The threshold below which distances to a surface will use tiebreaker score to decide candidate.")]
/// @brief Field _equalDistanceThreshold, offset: 0x128, size: 0x4, def value: None
 float_t  ____equalDistanceThreshold;

/// [CompilerGenerated]
/// @brief Field <ClosestPoint>k__BackingField, offset: 0x12c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____ClosestPoint_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <TouchPoint>k__BackingField, offset: 0x138, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____TouchPoint_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <TouchNormal>k__BackingField, offset: 0x144, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____TouchNormal_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Origin>k__BackingField, offset: 0x150, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____Origin_k__BackingField;

/// @brief Field _previousPokeOrigin, offset: 0x15c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____previousPokeOrigin;

/// @brief Field _previousCandidate, offset: 0x168, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::PokeInteractable>  ____previousCandidate;

/// @brief Field _hitInteractable, offset: 0x170, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::PokeInteractable>  ____hitInteractable;

/// @brief Field _recoilInteractable, offset: 0x178, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::PokeInteractable>  ____recoilInteractable;

/// @brief Field _previousSurfacePointLocal, offset: 0x180, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____previousSurfacePointLocal;

/// @brief Field _firstTouchPointLocal, offset: 0x18c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____firstTouchPointLocal;

/// @brief Field _targetTouchPointLocal, offset: 0x198, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____targetTouchPointLocal;

/// @brief Field _easeTouchPointLocal, offset: 0x1a4, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____easeTouchPointLocal;

/// @brief Field _isRecoiled, offset: 0x1b0, size: 0x1, def value: None
 bool  ____isRecoiled;

/// @brief Field _isDragging, offset: 0x1b1, size: 0x1, def value: None
 bool  ____isDragging;

/// @brief Field _dragEaseCurve, offset: 0x1b8, size: 0x8, def value: None
 ::Oculus::Interaction::ProgressCurve*  ____dragEaseCurve;

/// @brief Field _pinningResyncCurve, offset: 0x1c0, size: 0x8, def value: None
 ::Oculus::Interaction::ProgressCurve*  ____pinningResyncCurve;

/// @brief Field _dragCompareSurfacePointLocal, offset: 0x1c8, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____dragCompareSurfacePointLocal;

/// @brief Field _maxDistanceFromFirstTouchPoint, offset: 0x1d4, size: 0x4, def value: None
 float_t  ____maxDistanceFromFirstTouchPoint;

/// @brief Field _recoilVelocityExpansion, offset: 0x1d8, size: 0x4, def value: None
 float_t  ____recoilVelocityExpansion;

/// @brief Field _selectMaxDepth, offset: 0x1dc, size: 0x4, def value: None
 float_t  ____selectMaxDepth;

/// @brief Field _reEnterDepth, offset: 0x1e0, size: 0x4, def value: None
 float_t  ____reEnterDepth;

/// @brief Field _lastUpdateTime, offset: 0x1e4, size: 0x4, def value: None
 float_t  ____lastUpdateTime;

/// @brief Field _timeProvider, offset: 0x1e8, size: 0x8, def value: None
 ::System::Func_1<float_t>*  ____timeProvider;

/// @brief Field _isPassedSurface, offset: 0x1f0, size: 0x1, def value: None
 bool  ____isPassedSurface;

/// @brief Field WhenPassedSurfaceChanged, offset: 0x1f8, size: 0x8, def value: None
 ::System::Action_1<bool>*  ___WhenPassedSurfaceChanged;

/// @brief Field _hitCache, offset: 0x200, size: 0x8, def value: None
 ::Oculus::Interaction::PokeInteractor_SurfaceHitCache*  ____hitCache;

/// @brief Field _previousSurfaceTransformMap, offset: 0x208, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::Oculus::Interaction::PokeInteractable>,::UnityEngine::Matrix4x4>*  ____previousSurfaceTransformMap;

/// @brief Field _previousDragCurveProgress, offset: 0x210, size: 0x4, def value: None
 float_t  ____previousDragCurveProgress;

/// @brief Field _previousPinningCurveProgress, offset: 0x214, size: 0x4, def value: None
 float_t  ____previousPinningCurveProgress;

/// @brief Field _cachedInteractablesInRange, offset: 0x218, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::PokeInteractor_CachedInteractable>*  ____cachedInteractablesInRange;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::PokeInteractor, ____pointTransform) == 0x118, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PokeInteractor, ____radius) == 0x120, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PokeInteractor, ____touchReleaseThreshold) == 0x124, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PokeInteractor, ____equalDistanceThreshold) == 0x128, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PokeInteractor, ____ClosestPoint_k__BackingField) == 0x12c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PokeInteractor, ____TouchPoint_k__BackingField) == 0x138, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PokeInteractor, ____TouchNormal_k__BackingField) == 0x144, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PokeInteractor, ____Origin_k__BackingField) == 0x150, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PokeInteractor, ____previousPokeOrigin) == 0x15c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PokeInteractor, ____previousCandidate) == 0x168, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PokeInteractor, ____hitInteractable) == 0x170, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PokeInteractor, ____recoilInteractable) == 0x178, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PokeInteractor, ____previousSurfacePointLocal) == 0x180, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PokeInteractor, ____firstTouchPointLocal) == 0x18c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PokeInteractor, ____targetTouchPointLocal) == 0x198, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PokeInteractor, ____easeTouchPointLocal) == 0x1a4, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PokeInteractor, ____isRecoiled) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PokeInteractor, ____isDragging) == 0x1b1, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PokeInteractor, ____dragEaseCurve) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PokeInteractor, ____pinningResyncCurve) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PokeInteractor, ____dragCompareSurfacePointLocal) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PokeInteractor, ____maxDistanceFromFirstTouchPoint) == 0x1d4, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PokeInteractor, ____recoilVelocityExpansion) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PokeInteractor, ____selectMaxDepth) == 0x1dc, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PokeInteractor, ____reEnterDepth) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PokeInteractor, ____lastUpdateTime) == 0x1e4, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PokeInteractor, ____timeProvider) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PokeInteractor, ____isPassedSurface) == 0x1f0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PokeInteractor, ___WhenPassedSurfaceChanged) == 0x1f8, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PokeInteractor, ____hitCache) == 0x200, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PokeInteractor, ____previousSurfaceTransformMap) == 0x208, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PokeInteractor, ____previousDragCurveProgress) == 0x210, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PokeInteractor, ____previousPinningCurveProgress) == 0x214, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PokeInteractor, ____cachedInteractablesInRange) == 0x218, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::PokeInteractor) == 0x220, "Size mismatch!");

} // namespace end def Oculus::Interaction
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.PokeInteractor/<>c
class CORDL_TYPE PokeInteractor___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Oculus::Interaction::PokeInteractor___c*  __9;

/// @brief Field <>9__89_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__89_0, put=setStaticF___9__89_0)) ::System::Func_1<float_t>*  __9__89_0;

/// @brief Field <>9__89_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__89_1, put=setStaticF___9__89_1)) ::System::Action_1<bool>*  __9__89_1;

static inline ::Oculus::Interaction::PokeInteractor___c* New_ctor() ;

/// @brief Method <.ctor>b__89_0, addr 0xa45a080, size 0x8, virtual false, abstract: false, final false
inline float_t __ctor_b__89_0() ;

/// @brief Method <.ctor>b__89_1, addr 0xa45a088, size 0x4, virtual false, abstract: false, final false
inline void __ctor_b__89_1(bool  _p0_) ;

/// @brief Method .ctor, addr 0xa45a078, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Oculus::Interaction::PokeInteractor___c* getStaticF___9() ;

static inline ::System::Func_1<float_t>* getStaticF___9__89_0() ;

static inline ::System::Action_1<bool>* getStaticF___9__89_1() ;

static inline void setStaticF___9(::Oculus::Interaction::PokeInteractor___c*  value) ;

static inline void setStaticF___9__89_0(::System::Func_1<float_t>*  value) ;

static inline void setStaticF___9__89_1(::System::Action_1<bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PokeInteractor___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PokeInteractor___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PokeInteractor___c(PokeInteractor___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PokeInteractor___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PokeInteractor___c(PokeInteractor___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15858};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::PokeInteractor___c) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction
// Dependencies System.Object, UnityEngine.Vector3
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.PokeInteractor/SurfaceHitCache
class CORDL_TYPE PokeInteractor_SurfaceHitCache : public ::System::Object {
public:
// Declarations
using HitInfo = ::GlobalNamespace::SurfaceHitCache_PokeInteractor_HitInfo;

/// @brief Field _backingSurfaceHitCache, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__backingSurfaceHitCache, put=__cordl_internal_set__backingSurfaceHitCache)) ::System::Collections::Generic::Dictionary_2<::UnityW<::Oculus::Interaction::PokeInteractable>,::GlobalNamespace::SurfaceHitCache_PokeInteractor_HitInfo>*  _backingSurfaceHitCache;

/// @brief Field _origin, offset 0x20, size 0xc 
 __declspec(property(get=__cordl_internal_get__origin, put=__cordl_internal_set__origin)) ::UnityEngine::Vector3  _origin;

/// @brief Field _surfacePatchHitCache, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__surfacePatchHitCache, put=__cordl_internal_set__surfacePatchHitCache)) ::System::Collections::Generic::Dictionary_2<::UnityW<::Oculus::Interaction::PokeInteractable>,::GlobalNamespace::SurfaceHitCache_PokeInteractor_HitInfo>*  _surfacePatchHitCache;

/// @brief Method GetBackingHit, addr 0xa459c74, size 0x26c, virtual false, abstract: false, final false
inline bool GetBackingHit(::Oculus::Interaction::PokeInteractable*  interactable, ::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>  hit) ;

/// @brief Method GetPatchHit, addr 0xa459a5c, size 0x1f8, virtual false, abstract: false, final false
inline bool GetPatchHit(::Oculus::Interaction::PokeInteractable*  interactable, ::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>  hit) ;

static inline ::Oculus::Interaction::PokeInteractor_SurfaceHitCache* New_ctor() ;

/// @brief Method Reset, addr 0xa459f8c, size 0x84, virtual false, abstract: false, final false
inline void Reset(::UnityEngine::Vector3  origin) ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::Oculus::Interaction::PokeInteractable>,::GlobalNamespace::SurfaceHitCache_PokeInteractor_HitInfo>* const& __cordl_internal_get__backingSurfaceHitCache() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::Oculus::Interaction::PokeInteractable>,::GlobalNamespace::SurfaceHitCache_PokeInteractor_HitInfo>*& __cordl_internal_get__backingSurfaceHitCache() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__origin() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__origin() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::Oculus::Interaction::PokeInteractable>,::GlobalNamespace::SurfaceHitCache_PokeInteractor_HitInfo>* const& __cordl_internal_get__surfacePatchHitCache() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::Oculus::Interaction::PokeInteractable>,::GlobalNamespace::SurfaceHitCache_PokeInteractor_HitInfo>*& __cordl_internal_get__surfacePatchHitCache() ;

constexpr void __cordl_internal_set__backingSurfaceHitCache(::System::Collections::Generic::Dictionary_2<::UnityW<::Oculus::Interaction::PokeInteractable>,::GlobalNamespace::SurfaceHitCache_PokeInteractor_HitInfo>*  value) ;

constexpr void __cordl_internal_set__origin(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__surfacePatchHitCache(::System::Collections::Generic::Dictionary_2<::UnityW<::Oculus::Interaction::PokeInteractable>,::GlobalNamespace::SurfaceHitCache_PokeInteractor_HitInfo>*  value) ;

/// @brief Method .ctor, addr 0xa459ee0, size 0xac, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PokeInteractor_SurfaceHitCache() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PokeInteractor_SurfaceHitCache", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PokeInteractor_SurfaceHitCache(PokeInteractor_SurfaceHitCache && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PokeInteractor_SurfaceHitCache", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PokeInteractor_SurfaceHitCache(PokeInteractor_SurfaceHitCache const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15856};

/// @brief Field _surfacePatchHitCache, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::Oculus::Interaction::PokeInteractable>,::GlobalNamespace::SurfaceHitCache_PokeInteractor_HitInfo>*  ____surfacePatchHitCache;

/// @brief Field _backingSurfaceHitCache, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::Oculus::Interaction::PokeInteractable>,::GlobalNamespace::SurfaceHitCache_PokeInteractor_HitInfo>*  ____backingSurfaceHitCache;

/// @brief Field _origin, offset: 0x20, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____origin;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::PokeInteractor_SurfaceHitCache, ____surfacePatchHitCache) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PokeInteractor_SurfaceHitCache, ____backingSurfaceHitCache) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PokeInteractor_SurfaceHitCache, ____origin) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::PokeInteractor_SurfaceHitCache) == 0x30, "Size mismatch!");

} // namespace end def Oculus::Interaction
