#pragma once
// IWYU pragma private; include "Liv/Lck/LckTabletFollow.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__RigidbodyInterpolation_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(LckTabletFollow)
namespace Liv::Lck::Tablet {
struct CameraMode;
}
namespace Liv::Lck::Tablet {
class LCKCameraController;
}
namespace Liv::Lck::UI {
class LckDoubleButton;
}
namespace UnityEngine::UI {
class Toggle;
}
namespace UnityEngine {
class Rigidbody;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Liv::Lck {
class LckTabletFollow;
}
// Write type traits
MARK_REF_T(::Liv::Lck::LckTabletFollow*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::LckTabletFollow*, "Liv.Lck", "LckTabletFollow");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.RigidbodyInterpolation, UnityEngine.Vector3
namespace Liv::Lck {
// Is value type: false
// CS Name: Liv.Lck.LckTabletFollow
class CORDL_TYPE LckTabletFollow : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _controller, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__controller, put=__cordl_internal_set__controller)) ::UnityW<::Liv::Lck::Tablet::LCKCameraController>  _controller;

/// @brief Field _defaultInterpolation, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get__defaultInterpolation, put=__cordl_internal_set__defaultInterpolation)) ::UnityEngine::RigidbodyInterpolation  _defaultInterpolation;

/// @brief Field _followDistanceDoubleButton, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__followDistanceDoubleButton, put=__cordl_internal_set__followDistanceDoubleButton)) ::UnityW<::Liv::Lck::UI::LckDoubleButton>  _followDistanceDoubleButton;

/// @brief Field _followSmoothing, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get__followSmoothing, put=__cordl_internal_set__followSmoothing)) float_t  _followSmoothing;

/// @brief Field _followTarget, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__followTarget, put=__cordl_internal_set__followTarget)) ::UnityW<::UnityEngine::Transform>  _followTarget;

/// @brief Field _followVelocity, offset 0x6c, size 0xc 
 __declspec(property(get=__cordl_internal_get__followVelocity, put=__cordl_internal_set__followVelocity)) ::UnityEngine::Vector3  _followVelocity;

/// @brief Field _heightOffsetForPlayerHead, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__heightOffsetForPlayerHead, put=__cordl_internal_set__heightOffsetForPlayerHead)) float_t  _heightOffsetForPlayerHead;

/// @brief Field _isFollowToggleOn, offset 0x69, size 0x1 
 __declspec(property(get=__cordl_internal_get__isFollowToggleOn, put=__cordl_internal_set__isFollowToggleOn)) bool  _isFollowToggleOn;

/// @brief Field _isFollowingToggle, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__isFollowingToggle, put=__cordl_internal_set__isFollowingToggle)) ::UnityW<::UnityEngine::UI::Toggle>  _isFollowingToggle;

/// @brief Field _isInCorrectCameraMode, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get__isInCorrectCameraMode, put=__cordl_internal_set__isInCorrectCameraMode)) bool  _isInCorrectCameraMode;

/// @brief Field _minFollowDistance, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get__minFollowDistance, put=__cordl_internal_set__minFollowDistance)) float_t  _minFollowDistance;

/// @brief Field _minFollowDistanceMultiplier, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__minFollowDistanceMultiplier, put=__cordl_internal_set__minFollowDistanceMultiplier)) float_t  _minFollowDistanceMultiplier;

/// @brief Field _minFollowSmoothing, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__minFollowSmoothing, put=__cordl_internal_set__minFollowSmoothing)) float_t  _minFollowSmoothing;

/// @brief Field _rigidbodyRoot, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__rigidbodyRoot, put=__cordl_internal_set__rigidbodyRoot)) ::UnityW<::UnityEngine::Rigidbody>  _rigidbodyRoot;

/// @brief Field _selfieCamera, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__selfieCamera, put=__cordl_internal_set__selfieCamera)) ::UnityW<::UnityEngine::Transform>  _selfieCamera;

/// @brief Field _smoothingDoubleButton, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__smoothingDoubleButton, put=__cordl_internal_set__smoothingDoubleButton)) ::UnityW<::Liv::Lck::UI::LckDoubleButton>  _smoothingDoubleButton;

/// @brief Field _targetPosition, offset 0x78, size 0xc 
 __declspec(property(get=__cordl_internal_get__targetPosition, put=__cordl_internal_set__targetPosition)) ::UnityEngine::Vector3  _targetPosition;

/// @brief Method CalculateFollowSmoothing, addr 0x9ce932c, size 0x18, virtual false, abstract: false, final false
inline float_t CalculateFollowSmoothing(float_t  value) ;

/// @brief Method FixedUpdate, addr 0x9ce9344, size 0x4, virtual false, abstract: false, final false
inline void FixedUpdate() ;

static inline ::Liv::Lck::LckTabletFollow* New_ctor() ;

/// @brief Method OnCameraModeChanged, addr 0x9ce96bc, size 0x10, virtual false, abstract: false, final false
inline void OnCameraModeChanged(::Liv::Lck::Tablet::CameraMode  mode) ;

/// @brief Method OnDisable, addr 0x9ce9024, size 0x200, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x9ce8e1c, size 0x208, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnFollowDistanceChanged, addr 0x9ce9794, size 0x10, virtual false, abstract: false, final false
inline void OnFollowDistanceChanged(float_t  value) ;

/// @brief Method OnIsFollowToggled, addr 0x9ce96cc, size 0xac, virtual false, abstract: false, final false
inline void OnIsFollowToggled(bool  value) ;

/// @brief Method OnSmoothingChanged, addr 0x9ce9778, size 0x1c, virtual false, abstract: false, final false
inline void OnSmoothingChanged(float_t  value) ;

/// @brief Method ProcessTabletFollowingWithRigidbody, addr 0x9ce9348, size 0x36c, virtual false, abstract: false, final false
inline void ProcessTabletFollowingWithRigidbody() ;

/// @brief Method SetFollowTarget, addr 0x9ce96b4, size 0x8, virtual false, abstract: false, final false
inline void SetFollowTarget(::UnityEngine::Transform*  target) ;

/// @brief Method SetInitialValuesFromDoubleButtons, addr 0x9ce92d4, size 0x58, virtual false, abstract: false, final false
inline void SetInitialValuesFromDoubleButtons() ;

/// @brief Method Start, addr 0x9ce9224, size 0xb0, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::UnityW<::Liv::Lck::Tablet::LCKCameraController> const& __cordl_internal_get__controller() const;

constexpr ::UnityW<::Liv::Lck::Tablet::LCKCameraController>& __cordl_internal_get__controller() ;

constexpr ::UnityEngine::RigidbodyInterpolation const& __cordl_internal_get__defaultInterpolation() const;

constexpr ::UnityEngine::RigidbodyInterpolation& __cordl_internal_get__defaultInterpolation() ;

constexpr ::UnityW<::Liv::Lck::UI::LckDoubleButton> const& __cordl_internal_get__followDistanceDoubleButton() const;

constexpr ::UnityW<::Liv::Lck::UI::LckDoubleButton>& __cordl_internal_get__followDistanceDoubleButton() ;

constexpr float_t const& __cordl_internal_get__followSmoothing() const;

constexpr float_t& __cordl_internal_get__followSmoothing() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__followTarget() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__followTarget() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__followVelocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__followVelocity() ;

constexpr float_t const& __cordl_internal_get__heightOffsetForPlayerHead() const;

constexpr float_t& __cordl_internal_get__heightOffsetForPlayerHead() ;

constexpr bool const& __cordl_internal_get__isFollowToggleOn() const;

constexpr bool& __cordl_internal_get__isFollowToggleOn() ;

constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get__isFollowingToggle() const;

constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get__isFollowingToggle() ;

constexpr bool const& __cordl_internal_get__isInCorrectCameraMode() const;

constexpr bool& __cordl_internal_get__isInCorrectCameraMode() ;

constexpr float_t const& __cordl_internal_get__minFollowDistance() const;

constexpr float_t& __cordl_internal_get__minFollowDistance() ;

constexpr float_t const& __cordl_internal_get__minFollowDistanceMultiplier() const;

constexpr float_t& __cordl_internal_get__minFollowDistanceMultiplier() ;

constexpr float_t const& __cordl_internal_get__minFollowSmoothing() const;

constexpr float_t& __cordl_internal_get__minFollowSmoothing() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get__rigidbodyRoot() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get__rigidbodyRoot() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__selfieCamera() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__selfieCamera() ;

constexpr ::UnityW<::Liv::Lck::UI::LckDoubleButton> const& __cordl_internal_get__smoothingDoubleButton() const;

constexpr ::UnityW<::Liv::Lck::UI::LckDoubleButton>& __cordl_internal_get__smoothingDoubleButton() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__targetPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__targetPosition() ;

constexpr void __cordl_internal_set__controller(::UnityW<::Liv::Lck::Tablet::LCKCameraController>  value) ;

constexpr void __cordl_internal_set__defaultInterpolation(::UnityEngine::RigidbodyInterpolation  value) ;

constexpr void __cordl_internal_set__followDistanceDoubleButton(::UnityW<::Liv::Lck::UI::LckDoubleButton>  value) ;

constexpr void __cordl_internal_set__followSmoothing(float_t  value) ;

constexpr void __cordl_internal_set__followTarget(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__followVelocity(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__heightOffsetForPlayerHead(float_t  value) ;

constexpr void __cordl_internal_set__isFollowToggleOn(bool  value) ;

constexpr void __cordl_internal_set__isFollowingToggle(::UnityW<::UnityEngine::UI::Toggle>  value) ;

constexpr void __cordl_internal_set__isInCorrectCameraMode(bool  value) ;

constexpr void __cordl_internal_set__minFollowDistance(float_t  value) ;

constexpr void __cordl_internal_set__minFollowDistanceMultiplier(float_t  value) ;

constexpr void __cordl_internal_set__minFollowSmoothing(float_t  value) ;

constexpr void __cordl_internal_set__rigidbodyRoot(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set__selfieCamera(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__smoothingDoubleButton(::UnityW<::Liv::Lck::UI::LckDoubleButton>  value) ;

constexpr void __cordl_internal_set__targetPosition(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x9ce97a4, size 0x1c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckTabletFollow() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckTabletFollow", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckTabletFollow(LckTabletFollow && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckTabletFollow", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckTabletFollow(LckTabletFollow const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24748};

/// [Header("Settings")]
/// [Tooltip("An offset applied to the HMD\'s position to estimate the player\'s head/neck position. A small downward offset is typical.")]
/// [SerializeField]
/// @brief Field _heightOffsetForPlayerHead, offset: 0x20, size: 0x4, def value: None
 float_t  ____heightOffsetForPlayerHead;

/// [Tooltip("The minimum smoothing value, preventing the tablet from becoming too rigid even at the lowest user setting.")]
/// [SerializeField]
/// @brief Field _minFollowSmoothing, offset: 0x24, size: 0x4, def value: None
 float_t  ____minFollowSmoothing;

/// [Tooltip("A multiplier applied to the value from the follow distance UI button to determine the actual follow distance in world units.")]
/// [SerializeField]
/// @brief Field _minFollowDistanceMultiplier, offset: 0x28, size: 0x4, def value: None
 float_t  ____minFollowDistanceMultiplier;

/// [Header("References")]
/// [Tooltip("A reference to the main camera controller to get access to the HMD transform.")]
/// [SerializeField]
/// @brief Field _controller, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::Tablet::LCKCameraController>  ____controller;

/// [Tooltip("The UI toggle that enables or disables the follow behavior.")]
/// [SerializeField]
/// @brief Field _isFollowingToggle, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Toggle>  ____isFollowingToggle;

/// [Tooltip("A reference to the transform of the virtual selfie camera. The tablet will orient itself based on this camera\'s position.")]
/// [SerializeField]
/// @brief Field _selfieCamera, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____selfieCamera;

/// [Tooltip("An optional, specific transform for the tablet to follow. If this is not set, it will default to following the user\'s HMD (player head).")]
/// [SerializeField]
/// @brief Field _followTarget, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____followTarget;

/// [Tooltip("The UI button used to adjust the follow smoothing.")]
/// [SerializeField]
/// @brief Field _smoothingDoubleButton, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::UI::LckDoubleButton>  ____smoothingDoubleButton;

/// [Tooltip("The UI button used to adjust the minimum follow distance.")]
/// [SerializeField]
/// @brief Field _followDistanceDoubleButton, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::UI::LckDoubleButton>  ____followDistanceDoubleButton;

/// [Tooltip("The root Rigidbody of the tablet. All movement is applied to this component.")]
/// [SerializeField]
/// @brief Field _rigidbodyRoot, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ____rigidbodyRoot;

/// @brief Field _isInCorrectCameraMode, offset: 0x68, size: 0x1, def value: None
 bool  ____isInCorrectCameraMode;

/// @brief Field _isFollowToggleOn, offset: 0x69, size: 0x1, def value: None
 bool  ____isFollowToggleOn;

/// @brief Field _followVelocity, offset: 0x6c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____followVelocity;

/// @brief Field _targetPosition, offset: 0x78, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____targetPosition;

/// @brief Field _minFollowDistance, offset: 0x84, size: 0x4, def value: None
 float_t  ____minFollowDistance;

/// @brief Field _followSmoothing, offset: 0x88, size: 0x4, def value: None
 float_t  ____followSmoothing;

/// @brief Field _defaultInterpolation, offset: 0x8c, size: 0x4, def value: None
 ::UnityEngine::RigidbodyInterpolation  ____defaultInterpolation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::LckTabletFollow, ____heightOffsetForPlayerHead) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckTabletFollow, ____minFollowSmoothing) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckTabletFollow, ____minFollowDistanceMultiplier) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckTabletFollow, ____controller) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckTabletFollow, ____isFollowingToggle) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckTabletFollow, ____selfieCamera) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckTabletFollow, ____followTarget) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckTabletFollow, ____smoothingDoubleButton) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckTabletFollow, ____followDistanceDoubleButton) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckTabletFollow, ____rigidbodyRoot) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckTabletFollow, ____isInCorrectCameraMode) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckTabletFollow, ____isFollowToggleOn) == 0x69, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckTabletFollow, ____followVelocity) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckTabletFollow, ____targetPosition) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckTabletFollow, ____minFollowDistance) == 0x84, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckTabletFollow, ____followSmoothing) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckTabletFollow, ____defaultInterpolation) == 0x8c, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::LckTabletFollow) == 0x90, "Size mismatch!");

} // namespace end def Liv::Lck
