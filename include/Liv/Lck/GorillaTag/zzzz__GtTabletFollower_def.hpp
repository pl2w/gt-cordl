#pragma once
// IWYU pragma private; include "Liv/Lck/GorillaTag/GtTabletFollower.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Liv/Lck/GorillaTag/zzzz__CameraMode_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GtTabletFollower)
namespace Liv::Lck::GorillaTag {
struct CameraMode;
}
namespace Liv::Lck::GorillaTag {
class GTLckController;
}
namespace Liv::Lck::GorillaTag {
class GtCounter;
}
namespace Liv::Lck::GorillaTag {
class GtTabletFollower__RepositioningAnimation_d__37;
}
namespace Liv::Lck::GorillaTag {
class GtToggle;
}
namespace Liv::Lck {
class ILckCamera;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class Coroutine;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Liv::Lck::GorillaTag {
class GtTabletFollower;
}
namespace Liv::Lck::GorillaTag {
class GtTabletFollower__RepositioningAnimation_d__37;
}
// Write type traits
MARK_REF_T(::Liv::Lck::GorillaTag::GtTabletFollower*);
MARK_REF_T(::Liv::Lck::GorillaTag::GtTabletFollower__RepositioningAnimation_d__37*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::GorillaTag::GtTabletFollower*, "Liv.Lck.GorillaTag", "GtTabletFollower");
DEFINE_IL2CPP_CLASS(::Liv::Lck::GorillaTag::GtTabletFollower__RepositioningAnimation_d__37*, "Liv.Lck.GorillaTag", "GtTabletFollower/<RepositioningAnimation>d__37");
// Dependencies Liv.Lck.GorillaTag.CameraMode, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace Liv::Lck::GorillaTag {
// Is value type: false
// CS Name: Liv.Lck.GorillaTag.GtTabletFollower
class CORDL_TYPE GtTabletFollower : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _RepositioningAnimation_d__37 = ::Liv::Lck::GorillaTag::GtTabletFollower__RepositioningAnimation_d__37;

/// @brief Field _canUpdate, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get__canUpdate, put=__cordl_internal_set__canUpdate)) bool  _canUpdate;

/// @brief Field _controller, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__controller, put=__cordl_internal_set__controller)) ::UnityW<::Liv::Lck::GorillaTag::GTLckController>  _controller;

/// @brief Field _currentCameraMode, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentCameraMode, put=__cordl_internal_set__currentCameraMode)) ::Liv::Lck::GorillaTag::CameraMode  _currentCameraMode;

/// @brief Field _followVelocity, offset 0x70, size 0xc 
 __declspec(property(get=__cordl_internal_get__followVelocity, put=__cordl_internal_set__followVelocity)) ::UnityEngine::Vector3  _followVelocity;

/// @brief Field _heightOffsetForPlayerHead, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__heightOffsetForPlayerHead, put=__cordl_internal_set__heightOffsetForPlayerHead)) float_t  _heightOffsetForPlayerHead;

/// @brief Field _isEnabled, offset 0x59, size 0x1 
 __declspec(property(get=__cordl_internal_get__isEnabled, put=__cordl_internal_set__isEnabled)) bool  _isEnabled;

/// @brief Field _isFollowing, offset 0x5a, size 0x1 
 __declspec(property(get=__cordl_internal_get__isFollowing, put=__cordl_internal_set__isFollowing)) bool  _isFollowing;

/// @brief Field _isFollowingToggle, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__isFollowingToggle, put=__cordl_internal_set__isFollowingToggle)) ::UnityW<::Liv::Lck::GorillaTag::GtToggle>  _isFollowingToggle;

/// @brief Field _minDistance, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get__minDistance, put=__cordl_internal_set__minDistance)) float_t  _minDistance;

/// @brief Field _minDistanceCounter, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__minDistanceCounter, put=__cordl_internal_set__minDistanceCounter)) ::UnityW<::Liv::Lck::GorillaTag::GtCounter>  _minDistanceCounter;

/// @brief Field _playerCamera, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__playerCamera, put=__cordl_internal_set__playerCamera)) ::UnityW<::UnityEngine::Camera>  _playerCamera;

/// @brief Field _playerHead, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__playerHead, put=__cordl_internal_set__playerHead)) ::UnityW<::UnityEngine::Transform>  _playerHead;

/// @brief Field _playerSizeModifier, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get__playerSizeModifier, put=__cordl_internal_set__playerSizeModifier)) float_t  _playerSizeModifier;

/// @brief Field _playerSizeOffset, offset 0x9c, size 0xc 
 __declspec(property(get=__cordl_internal_get__playerSizeOffset, put=__cordl_internal_set__playerSizeOffset)) ::UnityEngine::Vector3  _playerSizeOffset;

/// @brief Field _repositionInFrontOfPlayer, offset 0x29, size 0x1 
 __declspec(property(get=__cordl_internal_get__repositionInFrontOfPlayer, put=__cordl_internal_set__repositionInFrontOfPlayer)) bool  _repositionInFrontOfPlayer;

/// @brief Field _repositioningAnimation, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__repositioningAnimation, put=__cordl_internal_set__repositioningAnimation)) ::UnityEngine::Coroutine*  _repositioningAnimation;

/// @brief Field _repositioningCurve, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__repositioningCurve, put=__cordl_internal_set__repositioningCurve)) ::UnityEngine::AnimationCurve*  _repositioningCurve;

/// @brief Field _repositioningDuration, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__repositioningDuration, put=__cordl_internal_set__repositioningDuration)) float_t  _repositioningDuration;

/// @brief Field _rotationSpeed, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__rotationSpeed, put=__cordl_internal_set__rotationSpeed)) float_t  _rotationSpeed;

/// @brief Field _smoothRepositioning, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get__smoothRepositioning, put=__cordl_internal_set__smoothRepositioning)) bool  _smoothRepositioning;

/// @brief Field _smoothing, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__smoothing, put=__cordl_internal_set__smoothing)) float_t  _smoothing;

/// @brief Field _smoothingCounter, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__smoothingCounter, put=__cordl_internal_set__smoothingCounter)) ::UnityW<::Liv::Lck::GorillaTag::GtCounter>  _smoothingCounter;

/// @brief Field _targetPosition, offset 0x7c, size 0xc 
 __declspec(property(get=__cordl_internal_get__targetPosition, put=__cordl_internal_set__targetPosition)) ::UnityEngine::Vector3  _targetPosition;

/// @brief Method FindPlayerHeadTransform, addr 0x9d2e694, size 0xe4, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> FindPlayerHeadTransform() ;

/// @brief Method GetPlayerSizeModifier, addr 0x9d2ec24, size 0x8, virtual false, abstract: false, final false
inline float_t GetPlayerSizeModifier() ;

/// @brief Method InvertSmoothingValue, addr 0x9d2f1f4, size 0x2c, virtual false, abstract: false, final false
inline float_t InvertSmoothingValue(float_t  originalValue) ;

/// @brief Method IsEnabled, addr 0x9d2f1dc, size 0x18, virtual false, abstract: false, final false
inline void IsEnabled(bool  value) ;

static inline ::Liv::Lck::GorillaTag::GtTabletFollower* New_ctor() ;

/// @brief Method OnCameraModeChanged, addr 0x9d2e41c, size 0x14, virtual false, abstract: false, final false
inline void OnCameraModeChanged(::Liv::Lck::GorillaTag::CameraMode  mode, ::Liv::Lck::ILckCamera*  camera) ;

/// @brief Method OnDisable, addr 0x9d2e430, size 0x218, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x9d2e204, size 0x218, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method ProcessTabletFollowing, addr 0x9d2e77c, size 0x3fc, virtual false, abstract: false, final false
inline void ProcessTabletFollowing() ;

/// @brief Method RepositionNearPlayer, addr 0x9d2ec34, size 0x40c, virtual false, abstract: false, final false
inline void RepositionNearPlayer() ;

/// [IteratorStateMachine(typeof(Liv.Lck.GorillaTag.GtTabletFollower::<RepositioningAnimation>d__37))]
/// @brief Method RepositioningAnimation, addr 0x9d2f040, size 0x90, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* RepositioningAnimation(::UnityEngine::Vector3  targetPosition) ;

/// @brief Method ResetFollowTarget, addr 0x9d2f0d0, size 0x10c, virtual false, abstract: false, final false
inline void ResetFollowTarget() ;

/// @brief Method SetCanUpdate, addr 0x9d2ec2c, size 0x8, virtual false, abstract: false, final false
inline void SetCanUpdate(bool  value) ;

/// @brief Method SetIsFollowing, addr 0x9d2f2d8, size 0x8, virtual false, abstract: false, final false
inline void SetIsFollowing(bool  value) ;

/// @brief Method SetMinDistance, addr 0x9d2f2e0, size 0xc, virtual false, abstract: false, final false
inline void SetMinDistance(int32_t  value) ;

/// @brief Method SetPlayerSizeModifier, addr 0x9d2eb78, size 0xac, virtual false, abstract: false, final false
inline void SetPlayerSizeModifier(bool  isDefaultScale, float_t  modifier) ;

/// @brief Method SetSmoothing, addr 0x9d2f2ec, size 0x18, virtual false, abstract: false, final false
inline void SetSmoothing(int32_t  value) ;

/// @brief Method Start, addr 0x9d2e648, size 0x4c, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x9d2e778, size 0x4, virtual false, abstract: false, final false
inline void Update() ;

constexpr bool const& __cordl_internal_get__canUpdate() const;

constexpr bool& __cordl_internal_get__canUpdate() ;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GTLckController> const& __cordl_internal_get__controller() const;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GTLckController>& __cordl_internal_get__controller() ;

constexpr ::Liv::Lck::GorillaTag::CameraMode const& __cordl_internal_get__currentCameraMode() const;

constexpr ::Liv::Lck::GorillaTag::CameraMode& __cordl_internal_get__currentCameraMode() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__followVelocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__followVelocity() ;

constexpr float_t const& __cordl_internal_get__heightOffsetForPlayerHead() const;

constexpr float_t& __cordl_internal_get__heightOffsetForPlayerHead() ;

constexpr bool const& __cordl_internal_get__isEnabled() const;

constexpr bool& __cordl_internal_get__isEnabled() ;

constexpr bool const& __cordl_internal_get__isFollowing() const;

constexpr bool& __cordl_internal_get__isFollowing() ;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GtToggle> const& __cordl_internal_get__isFollowingToggle() const;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GtToggle>& __cordl_internal_get__isFollowingToggle() ;

constexpr float_t const& __cordl_internal_get__minDistance() const;

constexpr float_t& __cordl_internal_get__minDistance() ;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GtCounter> const& __cordl_internal_get__minDistanceCounter() const;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GtCounter>& __cordl_internal_get__minDistanceCounter() ;

constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get__playerCamera() const;

constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get__playerCamera() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__playerHead() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__playerHead() ;

constexpr float_t const& __cordl_internal_get__playerSizeModifier() const;

constexpr float_t& __cordl_internal_get__playerSizeModifier() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__playerSizeOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__playerSizeOffset() ;

constexpr bool const& __cordl_internal_get__repositionInFrontOfPlayer() const;

constexpr bool& __cordl_internal_get__repositionInFrontOfPlayer() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get__repositioningAnimation() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get__repositioningAnimation() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__repositioningCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__repositioningCurve() ;

constexpr float_t const& __cordl_internal_get__repositioningDuration() const;

constexpr float_t& __cordl_internal_get__repositioningDuration() ;

constexpr float_t const& __cordl_internal_get__rotationSpeed() const;

constexpr float_t& __cordl_internal_get__rotationSpeed() ;

constexpr bool const& __cordl_internal_get__smoothRepositioning() const;

constexpr bool& __cordl_internal_get__smoothRepositioning() ;

constexpr float_t const& __cordl_internal_get__smoothing() const;

constexpr float_t& __cordl_internal_get__smoothing() ;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GtCounter> const& __cordl_internal_get__smoothingCounter() const;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GtCounter>& __cordl_internal_get__smoothingCounter() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__targetPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__targetPosition() ;

constexpr void __cordl_internal_set__canUpdate(bool  value) ;

constexpr void __cordl_internal_set__controller(::UnityW<::Liv::Lck::GorillaTag::GTLckController>  value) ;

constexpr void __cordl_internal_set__currentCameraMode(::Liv::Lck::GorillaTag::CameraMode  value) ;

constexpr void __cordl_internal_set__followVelocity(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__heightOffsetForPlayerHead(float_t  value) ;

constexpr void __cordl_internal_set__isEnabled(bool  value) ;

constexpr void __cordl_internal_set__isFollowing(bool  value) ;

constexpr void __cordl_internal_set__isFollowingToggle(::UnityW<::Liv::Lck::GorillaTag::GtToggle>  value) ;

constexpr void __cordl_internal_set__minDistance(float_t  value) ;

constexpr void __cordl_internal_set__minDistanceCounter(::UnityW<::Liv::Lck::GorillaTag::GtCounter>  value) ;

constexpr void __cordl_internal_set__playerCamera(::UnityW<::UnityEngine::Camera>  value) ;

constexpr void __cordl_internal_set__playerHead(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__playerSizeModifier(float_t  value) ;

constexpr void __cordl_internal_set__playerSizeOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__repositionInFrontOfPlayer(bool  value) ;

constexpr void __cordl_internal_set__repositioningAnimation(::UnityEngine::Coroutine*  value) ;

constexpr void __cordl_internal_set__repositioningCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__repositioningDuration(float_t  value) ;

constexpr void __cordl_internal_set__rotationSpeed(float_t  value) ;

constexpr void __cordl_internal_set__smoothRepositioning(bool  value) ;

constexpr void __cordl_internal_set__smoothing(float_t  value) ;

constexpr void __cordl_internal_set__smoothingCounter(::UnityW<::Liv::Lck::GorillaTag::GtCounter>  value) ;

constexpr void __cordl_internal_set__targetPosition(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x9d2f304, size 0x70, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GtTabletFollower() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GtTabletFollower", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GtTabletFollower(GtTabletFollower && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GtTabletFollower", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GtTabletFollower(GtTabletFollower const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29661};

/// [Header("Settings")]
/// [SerializeField]
/// @brief Field _heightOffsetForPlayerHead, offset: 0x20, size: 0x4, def value: None
 float_t  ____heightOffsetForPlayerHead;

/// [SerializeField]
/// @brief Field _rotationSpeed, offset: 0x24, size: 0x4, def value: None
 float_t  ____rotationSpeed;

/// [SerializeField]
/// @brief Field _smoothRepositioning, offset: 0x28, size: 0x1, def value: None
 bool  ____smoothRepositioning;

/// [SerializeField]
/// @brief Field _repositionInFrontOfPlayer, offset: 0x29, size: 0x1, def value: None
 bool  ____repositionInFrontOfPlayer;

/// [SerializeField]
/// @brief Field _repositioningDuration, offset: 0x2c, size: 0x4, def value: None
 float_t  ____repositioningDuration;

/// [SerializeField]
/// @brief Field _repositioningCurve, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____repositioningCurve;

/// [Header("Elements")]
/// [SerializeField]
/// @brief Field _isFollowingToggle, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::GorillaTag::GtToggle>  ____isFollowingToggle;

/// [SerializeField]
/// @brief Field _minDistanceCounter, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::GorillaTag::GtCounter>  ____minDistanceCounter;

/// [SerializeField]
/// @brief Field _smoothingCounter, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::GorillaTag::GtCounter>  ____smoothingCounter;

/// [SerializeField]
/// @brief Field _controller, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::GorillaTag::GTLckController>  ____controller;

/// @brief Field _canUpdate, offset: 0x58, size: 0x1, def value: None
 bool  ____canUpdate;

/// @brief Field _isEnabled, offset: 0x59, size: 0x1, def value: None
 bool  ____isEnabled;

/// @brief Field _isFollowing, offset: 0x5a, size: 0x1, def value: None
 bool  ____isFollowing;

/// @brief Field _minDistance, offset: 0x5c, size: 0x4, def value: None
 float_t  ____minDistance;

/// @brief Field _smoothing, offset: 0x60, size: 0x4, def value: None
 float_t  ____smoothing;

/// @brief Field _repositioningAnimation, offset: 0x68, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ____repositioningAnimation;

/// @brief Field _followVelocity, offset: 0x70, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____followVelocity;

/// @brief Field _targetPosition, offset: 0x7c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____targetPosition;

/// @brief Field _playerCamera, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Camera>  ____playerCamera;

/// @brief Field _playerHead, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____playerHead;

/// @brief Field _currentCameraMode, offset: 0x98, size: 0x4, def value: None
 ::Liv::Lck::GorillaTag::CameraMode  ____currentCameraMode;

/// @brief Field _playerSizeOffset, offset: 0x9c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____playerSizeOffset;

/// @brief Field _playerSizeModifier, offset: 0xa8, size: 0x4, def value: None
 float_t  ____playerSizeModifier;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::GorillaTag::GtTabletFollower, ____heightOffsetForPlayerHead) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtTabletFollower, ____rotationSpeed) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtTabletFollower, ____smoothRepositioning) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtTabletFollower, ____repositionInFrontOfPlayer) == 0x29, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtTabletFollower, ____repositioningDuration) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtTabletFollower, ____repositioningCurve) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtTabletFollower, ____isFollowingToggle) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtTabletFollower, ____minDistanceCounter) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtTabletFollower, ____smoothingCounter) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtTabletFollower, ____controller) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtTabletFollower, ____canUpdate) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtTabletFollower, ____isEnabled) == 0x59, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtTabletFollower, ____isFollowing) == 0x5a, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtTabletFollower, ____minDistance) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtTabletFollower, ____smoothing) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtTabletFollower, ____repositioningAnimation) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtTabletFollower, ____followVelocity) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtTabletFollower, ____targetPosition) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtTabletFollower, ____playerCamera) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtTabletFollower, ____playerHead) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtTabletFollower, ____currentCameraMode) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtTabletFollower, ____playerSizeOffset) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtTabletFollower, ____playerSizeModifier) == 0xa8, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::GorillaTag::GtTabletFollower) == 0xb0, "Size mismatch!");

} // namespace end def Liv::Lck::GorillaTag
// [CompilerGenerated]
// Dependencies System.Object, UnityEngine.Vector3
namespace Liv::Lck::GorillaTag {
// Is value type: false
// CS Name: Liv.Lck.GorillaTag.GtTabletFollower/<RepositioningAnimation>d__37
class CORDL_TYPE GtTabletFollower__RepositioningAnimation_d__37 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Liv::Lck::GorillaTag::GtTabletFollower>  __4__this;

/// @brief Field <startPosition>5__3, offset 0x38, size 0xc 
 __declspec(property(get=__cordl_internal_get__startPosition_5__3, put=__cordl_internal_set__startPosition_5__3)) ::UnityEngine::Vector3  _startPosition_5__3;

/// @brief Field <time>5__2, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__time_5__2, put=__cordl_internal_set__time_5__2)) float_t  _time_5__2;

/// @brief Field targetPosition, offset 0x28, size 0xc 
 __declspec(property(get=__cordl_internal_get_targetPosition, put=__cordl_internal_set_targetPosition)) ::UnityEngine::Vector3  targetPosition;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x9d2f378, size 0x130, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Liv::Lck::GorillaTag::GtTabletFollower__RepositioningAnimation_d__37* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x9d2f4a8, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x9d2f4b0, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x9d2f4e8, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x9d2f374, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GtTabletFollower> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GtTabletFollower>& __cordl_internal_get___4__this() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__startPosition_5__3() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__startPosition_5__3() ;

constexpr float_t const& __cordl_internal_get__time_5__2() const;

constexpr float_t& __cordl_internal_get__time_5__2() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_targetPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_targetPosition() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Liv::Lck::GorillaTag::GtTabletFollower>  value) ;

constexpr void __cordl_internal_set__startPosition_5__3(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__time_5__2(float_t  value) ;

constexpr void __cordl_internal_set_targetPosition(::UnityEngine::Vector3  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x9d2f2b0, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GtTabletFollower__RepositioningAnimation_d__37() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GtTabletFollower__RepositioningAnimation_d__37", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GtTabletFollower__RepositioningAnimation_d__37(GtTabletFollower__RepositioningAnimation_d__37 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GtTabletFollower__RepositioningAnimation_d__37", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GtTabletFollower__RepositioningAnimation_d__37(GtTabletFollower__RepositioningAnimation_d__37 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29660};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::GorillaTag::GtTabletFollower>  _____4__this;

/// @brief Field targetPosition, offset: 0x28, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___targetPosition;

/// @brief Field <time>5__2, offset: 0x34, size: 0x4, def value: None
 float_t  ____time_5__2;

/// @brief Field <startPosition>5__3, offset: 0x38, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____startPosition_5__3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::GorillaTag::GtTabletFollower__RepositioningAnimation_d__37, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtTabletFollower__RepositioningAnimation_d__37, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtTabletFollower__RepositioningAnimation_d__37, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtTabletFollower__RepositioningAnimation_d__37, ___targetPosition) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtTabletFollower__RepositioningAnimation_d__37, ____time_5__2) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtTabletFollower__RepositioningAnimation_d__37, ____startPosition_5__3) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::GorillaTag::GtTabletFollower__RepositioningAnimation_d__37) == 0x48, "Size mismatch!");

} // namespace end def Liv::Lck::GorillaTag
