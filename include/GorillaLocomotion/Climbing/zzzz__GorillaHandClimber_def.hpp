#pragma once
// IWYU pragma private; include "GorillaLocomotion/Climbing/GorillaHandClimber.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GorillaHandClimber)
namespace GlobalNamespace {
class EquipmentInteractor;
}
namespace GlobalNamespace {
class GorillaGrabber;
}
namespace GorillaLocomotion::Climbing {
class GorillaClimbable;
}
namespace GorillaLocomotion {
class GTPlayer;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GorillaLocomotion::Climbing {
class GorillaHandClimber;
}
// Write type traits
MARK_REF_T(::GorillaLocomotion::Climbing::GorillaHandClimber*);
DEFINE_IL2CPP_CLASS(::GorillaLocomotion::Climbing::GorillaHandClimber*, "GorillaLocomotion.Climbing", "GorillaHandClimber");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3, UnityEngine.XR.XRNode
namespace GorillaLocomotion::Climbing {
// Is value type: false
// CS Name: GorillaLocomotion.Climbing.GorillaHandClimber
class CORDL_TYPE GorillaHandClimber : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field canRelease, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get_canRelease, put=__cordl_internal_set_canRelease)) bool  canRelease;

/// @brief Field col, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_col, put=__cordl_internal_set_col)) ::UnityW<::UnityEngine::Collider>  col;

/// @brief Field dontReclimbLast, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_dontReclimbLast, put=__cordl_internal_set_dontReclimbLast)) ::UnityW<::GorillaLocomotion::Climbing::GorillaClimbable>  dontReclimbLast;

/// @brief Field equipmentInteractor, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_equipmentInteractor, put=__cordl_internal_set_equipmentInteractor)) ::UnityW<::GlobalNamespace::EquipmentInteractor>  equipmentInteractor;

/// @brief Field grabber, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_grabber, put=__cordl_internal_set_grabber)) ::UnityW<::GlobalNamespace::GorillaGrabber>  grabber;

/// @brief Field handRoot, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_handRoot, put=__cordl_internal_set_handRoot)) ::UnityW<::UnityEngine::Transform>  handRoot;

/// @brief Field isClimbing, offset 0x3c, size 0x1 
 __declspec(property(get=__cordl_internal_get_isClimbing, put=__cordl_internal_set_isClimbing)) bool  isClimbing;

 __declspec(property(get=get_isClimbingOrGrabbing)) bool  isClimbingOrGrabbing;

/// @brief Field lastAutoReleasePos, offset 0x48, size 0xc 
 __declspec(property(get=__cordl_internal_get_lastAutoReleasePos, put=__cordl_internal_set_lastAutoReleasePos)) ::UnityEngine::Vector3  lastAutoReleasePos;

/// @brief Field player, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_player, put=__cordl_internal_set_player)) ::UnityW<::GorillaLocomotion::GTPlayer>  player;

/// @brief Field potentialClimbables, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_potentialClimbables, put=__cordl_internal_set_potentialClimbables)) ::System::Collections::Generic::List_1<::UnityW<::GorillaLocomotion::Climbing::GorillaClimbable>>*  potentialClimbables;

/// @brief Field queuedToBecomeValidToGrabAgain, offset 0x3d, size 0x1 
 __declspec(property(get=__cordl_internal_get_queuedToBecomeValidToGrabAgain, put=__cordl_internal_set_queuedToBecomeValidToGrabAgain)) bool  queuedToBecomeValidToGrabAgain;

/// @brief Field xrNode, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_xrNode, put=__cordl_internal_set_xrNode)) ::UnityEngine::XR::XRNode  xrNode;

/// @brief Method Awake, addr 0x5cf362c, size 0x90, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CanInitiateClimb, addr 0x5cf3e94, size 0xdc, virtual false, abstract: false, final false
inline bool CanInitiateClimb() ;

/// @brief Method CheckHandClimber, addr 0x5cf36bc, size 0x398, virtual false, abstract: false, final false
inline void CheckHandClimber() ;

/// @brief Method ForceStopClimbing, addr 0x5cedf50, size 0x2c, virtual false, abstract: false, final false
inline void ForceStopClimbing(bool  startingNewClimb, bool  doDontReclimb) ;

/// @brief Method GetClosestClimbable, addr 0x5cf3a54, size 0x440, virtual false, abstract: false, final false
inline ::UnityW<::GorillaLocomotion::Climbing::GorillaClimbable> GetClosestClimbable() ;

static inline ::GorillaLocomotion::Climbing::GorillaHandClimber* New_ctor() ;

/// @brief Method OnTriggerEnter, addr 0x5cf3f78, size 0x128, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerExit, addr 0x5cf40a0, size 0xd4, virtual false, abstract: false, final false
inline void OnTriggerExit(::UnityEngine::Collider*  other) ;

/// @brief Method SetCanRelease, addr 0x5cf3f70, size 0x8, virtual false, abstract: false, final false
inline void SetCanRelease(bool  canRelease) ;

constexpr bool const& __cordl_internal_get_canRelease() const;

constexpr bool& __cordl_internal_get_canRelease() ;

constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get_col() const;

constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get_col() ;

constexpr ::UnityW<::GorillaLocomotion::Climbing::GorillaClimbable> const& __cordl_internal_get_dontReclimbLast() const;

constexpr ::UnityW<::GorillaLocomotion::Climbing::GorillaClimbable>& __cordl_internal_get_dontReclimbLast() ;

constexpr ::UnityW<::GlobalNamespace::EquipmentInteractor> const& __cordl_internal_get_equipmentInteractor() const;

constexpr ::UnityW<::GlobalNamespace::EquipmentInteractor>& __cordl_internal_get_equipmentInteractor() ;

constexpr ::UnityW<::GlobalNamespace::GorillaGrabber> const& __cordl_internal_get_grabber() const;

constexpr ::UnityW<::GlobalNamespace::GorillaGrabber>& __cordl_internal_get_grabber() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_handRoot() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_handRoot() ;

constexpr bool const& __cordl_internal_get_isClimbing() const;

constexpr bool& __cordl_internal_get_isClimbing() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastAutoReleasePos() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastAutoReleasePos() ;

constexpr ::UnityW<::GorillaLocomotion::GTPlayer> const& __cordl_internal_get_player() const;

constexpr ::UnityW<::GorillaLocomotion::GTPlayer>& __cordl_internal_get_player() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaLocomotion::Climbing::GorillaClimbable>>* const& __cordl_internal_get_potentialClimbables() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaLocomotion::Climbing::GorillaClimbable>>*& __cordl_internal_get_potentialClimbables() ;

constexpr bool const& __cordl_internal_get_queuedToBecomeValidToGrabAgain() const;

constexpr bool& __cordl_internal_get_queuedToBecomeValidToGrabAgain() ;

constexpr ::UnityEngine::XR::XRNode const& __cordl_internal_get_xrNode() const;

constexpr ::UnityEngine::XR::XRNode& __cordl_internal_get_xrNode() ;

constexpr void __cordl_internal_set_canRelease(bool  value) ;

constexpr void __cordl_internal_set_col(::UnityW<::UnityEngine::Collider>  value) ;

constexpr void __cordl_internal_set_dontReclimbLast(::UnityW<::GorillaLocomotion::Climbing::GorillaClimbable>  value) ;

constexpr void __cordl_internal_set_equipmentInteractor(::UnityW<::GlobalNamespace::EquipmentInteractor>  value) ;

constexpr void __cordl_internal_set_grabber(::UnityW<::GlobalNamespace::GorillaGrabber>  value) ;

constexpr void __cordl_internal_set_handRoot(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_isClimbing(bool  value) ;

constexpr void __cordl_internal_set_lastAutoReleasePos(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_player(::UnityW<::GorillaLocomotion::GTPlayer>  value) ;

constexpr void __cordl_internal_set_potentialClimbables(::System::Collections::Generic::List_1<::UnityW<::GorillaLocomotion::Climbing::GorillaClimbable>>*  value) ;

constexpr void __cordl_internal_set_queuedToBecomeValidToGrabAgain(bool  value) ;

constexpr void __cordl_internal_set_xrNode(::UnityEngine::XR::XRNode  value) ;

/// @brief Method .ctor, addr 0x5cf4174, size 0xdc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_isClimbingOrGrabbing, addr 0x5cf3604, size 0x28, virtual false, abstract: false, final false
inline bool get_isClimbingOrGrabbing() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaHandClimber() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaHandClimber", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaHandClimber(GorillaHandClimber && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaHandClimber", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaHandClimber(GorillaHandClimber const& ) = delete;

/// @brief Field DIST_FOR_CLEAR_RELEASE offset 0xffffffff size 0x4
static constexpr float_t  DIST_FOR_CLEAR_RELEASE{static_cast<float_t>(0.35f)};

/// @brief Field DIST_FOR_GRAB offset 0xffffffff size 0x4
static constexpr float_t  DIST_FOR_GRAB{static_cast<float_t>(0.15f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4549};

/// [SerializeField]
/// @brief Field player, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GorillaLocomotion::GTPlayer>  ___player;

/// [SerializeField]
/// @brief Field equipmentInteractor, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::EquipmentInteractor>  ___equipmentInteractor;

/// @brief Field potentialClimbables, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GorillaLocomotion::Climbing::GorillaClimbable>>*  ___potentialClimbables;

/// [Header("Non-hand input should have the component disabled")]
/// @brief Field xrNode, offset: 0x38, size: 0x4, def value: None
 ::UnityEngine::XR::XRNode  ___xrNode;

/// @brief Field isClimbing, offset: 0x3c, size: 0x1, def value: None
 bool  ___isClimbing;

/// @brief Field queuedToBecomeValidToGrabAgain, offset: 0x3d, size: 0x1, def value: None
 bool  ___queuedToBecomeValidToGrabAgain;

/// @brief Field dontReclimbLast, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GorillaLocomotion::Climbing::GorillaClimbable>  ___dontReclimbLast;

/// @brief Field lastAutoReleasePos, offset: 0x48, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___lastAutoReleasePos;

/// @brief Field grabber, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaGrabber>  ___grabber;

/// @brief Field handRoot, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___handRoot;

/// @brief Field col, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  ___col;

/// @brief Field canRelease, offset: 0x70, size: 0x1, def value: None
 bool  ___canRelease;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaLocomotion::Climbing::GorillaHandClimber, ___player) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Climbing::GorillaHandClimber, ___equipmentInteractor) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Climbing::GorillaHandClimber, ___potentialClimbables) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Climbing::GorillaHandClimber, ___xrNode) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Climbing::GorillaHandClimber, ___isClimbing) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Climbing::GorillaHandClimber, ___queuedToBecomeValidToGrabAgain) == 0x3d, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Climbing::GorillaHandClimber, ___dontReclimbLast) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Climbing::GorillaHandClimber, ___lastAutoReleasePos) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Climbing::GorillaHandClimber, ___grabber) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Climbing::GorillaHandClimber, ___handRoot) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Climbing::GorillaHandClimber, ___col) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Climbing::GorillaHandClimber, ___canRelease) == 0x70, "Offset mismatch!");

static_assert(sizeof(::GorillaLocomotion::Climbing::GorillaHandClimber) == 0x78, "Size mismatch!");

} // namespace end def GorillaLocomotion::Climbing
