#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaPlaySpaceForces.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GorillaPlaySpaceForces)
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Rigidbody;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class GorillaPlaySpaceForces;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaPlaySpaceForces*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaPlaySpaceForces*, "", "GorillaPlaySpaceForces");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaPlaySpaceForces
class CORDL_TYPE GorillaPlaySpaceForces : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field bodyCollider, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_bodyCollider, put=__cordl_internal_set_bodyCollider)) ::UnityW<::UnityEngine::Collider>  bodyCollider;

/// @brief Field bodyColliderOffset, offset 0x68, size 0xc 
 __declspec(property(get=__cordl_internal_get_bodyColliderOffset, put=__cordl_internal_set_bodyColliderOffset)) ::UnityEngine::Vector3  bodyColliderOffset;

/// @brief Field forceConstant, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_forceConstant, put=__cordl_internal_set_forceConstant)) float_t  forceConstant;

/// @brief Field headsetTransform, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_headsetTransform, put=__cordl_internal_set_headsetTransform)) ::UnityW<::UnityEngine::Transform>  headsetTransform;

/// @brief Field lastLeftHandPosition, offset 0x78, size 0xc 
 __declspec(property(get=__cordl_internal_get_lastLeftHandPosition, put=__cordl_internal_set_lastLeftHandPosition)) ::UnityEngine::Vector3  lastLeftHandPosition;

/// @brief Field lastRightHandPosition, offset 0x84, size 0xc 
 __declspec(property(get=__cordl_internal_get_lastRightHandPosition, put=__cordl_internal_set_lastRightHandPosition)) ::UnityEngine::Vector3  lastRightHandPosition;

/// @brief Field leftHand, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_leftHand, put=__cordl_internal_set_leftHand)) ::UnityW<::UnityEngine::GameObject>  leftHand;

/// @brief Field leftHandCollider, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_leftHandCollider, put=__cordl_internal_set_leftHandCollider)) ::UnityW<::UnityEngine::Collider>  leftHandCollider;

/// @brief Field leftHandRigidbody, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_leftHandRigidbody, put=__cordl_internal_set_leftHandRigidbody)) ::UnityW<::UnityEngine::Rigidbody>  leftHandRigidbody;

/// @brief Field leftHandTransform, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_leftHandTransform, put=__cordl_internal_set_leftHandTransform)) ::UnityW<::UnityEngine::Transform>  leftHandTransform;

/// @brief Field playspaceRigidbody, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_playspaceRigidbody, put=__cordl_internal_set_playspaceRigidbody)) ::UnityW<::UnityEngine::Rigidbody>  playspaceRigidbody;

/// @brief Field rightHand, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_rightHand, put=__cordl_internal_set_rightHand)) ::UnityW<::UnityEngine::GameObject>  rightHand;

/// @brief Field rightHandCollider, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_rightHandCollider, put=__cordl_internal_set_rightHandCollider)) ::UnityW<::UnityEngine::Collider>  rightHandCollider;

/// @brief Field rightHandRigidbody, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_rightHandRigidbody, put=__cordl_internal_set_rightHandRigidbody)) ::UnityW<::UnityEngine::Rigidbody>  rightHandRigidbody;

/// @brief Field rightHandTransform, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_rightHandTransform, put=__cordl_internal_set_rightHandTransform)) ::UnityW<::UnityEngine::Transform>  rightHandTransform;

/// @brief Method FixedUpdate, addr 0x579dd54, size 0x88, virtual false, abstract: false, final false
inline void FixedUpdate() ;

static inline ::GlobalNamespace::GorillaPlaySpaceForces* New_ctor() ;

/// @brief Method Start, addr 0x579dc38, size 0x11c, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get_bodyCollider() const;

constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get_bodyCollider() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_bodyColliderOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_bodyColliderOffset() ;

constexpr float_t const& __cordl_internal_get_forceConstant() const;

constexpr float_t& __cordl_internal_get_forceConstant() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_headsetTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_headsetTransform() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastLeftHandPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastLeftHandPosition() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastRightHandPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastRightHandPosition() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_leftHand() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_leftHand() ;

constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get_leftHandCollider() const;

constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get_leftHandCollider() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_leftHandRigidbody() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_leftHandRigidbody() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_leftHandTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_leftHandTransform() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_playspaceRigidbody() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_playspaceRigidbody() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_rightHand() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_rightHand() ;

constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get_rightHandCollider() const;

constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get_rightHandCollider() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_rightHandRigidbody() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_rightHandRigidbody() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_rightHandTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_rightHandTransform() ;

constexpr void __cordl_internal_set_bodyCollider(::UnityW<::UnityEngine::Collider>  value) ;

constexpr void __cordl_internal_set_bodyColliderOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_forceConstant(float_t  value) ;

constexpr void __cordl_internal_set_headsetTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_lastLeftHandPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_lastRightHandPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_leftHand(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_leftHandCollider(::UnityW<::UnityEngine::Collider>  value) ;

constexpr void __cordl_internal_set_leftHandRigidbody(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set_leftHandTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_playspaceRigidbody(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set_rightHand(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_rightHandCollider(::UnityW<::UnityEngine::Collider>  value) ;

constexpr void __cordl_internal_set_rightHandRigidbody(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set_rightHandTransform(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x579dddc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaPlaySpaceForces() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaPlaySpaceForces", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaPlaySpaceForces(GorillaPlaySpaceForces && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaPlaySpaceForces", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaPlaySpaceForces(GorillaPlaySpaceForces const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1505};

/// @brief Field rightHand, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___rightHand;

/// @brief Field leftHand, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___leftHand;

/// @brief Field bodyCollider, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  ___bodyCollider;

/// @brief Field leftHandCollider, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  ___leftHandCollider;

/// @brief Field rightHandCollider, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  ___rightHandCollider;

/// @brief Field rightHandTransform, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___rightHandTransform;

/// @brief Field leftHandTransform, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___leftHandTransform;

/// @brief Field leftHandRigidbody, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___leftHandRigidbody;

/// @brief Field rightHandRigidbody, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___rightHandRigidbody;

/// @brief Field bodyColliderOffset, offset: 0x68, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___bodyColliderOffset;

/// @brief Field forceConstant, offset: 0x74, size: 0x4, def value: None
 float_t  ___forceConstant;

/// @brief Field lastLeftHandPosition, offset: 0x78, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___lastLeftHandPosition;

/// @brief Field lastRightHandPosition, offset: 0x84, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___lastRightHandPosition;

/// @brief Field playspaceRigidbody, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___playspaceRigidbody;

/// @brief Field headsetTransform, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___headsetTransform;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaPlaySpaceForces, ___rightHand) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlaySpaceForces, ___leftHand) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlaySpaceForces, ___bodyCollider) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlaySpaceForces, ___leftHandCollider) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlaySpaceForces, ___rightHandCollider) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlaySpaceForces, ___rightHandTransform) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlaySpaceForces, ___leftHandTransform) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlaySpaceForces, ___leftHandRigidbody) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlaySpaceForces, ___rightHandRigidbody) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlaySpaceForces, ___bodyColliderOffset) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlaySpaceForces, ___forceConstant) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlaySpaceForces, ___lastLeftHandPosition) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlaySpaceForces, ___lastRightHandPosition) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlaySpaceForces, ___playspaceRigidbody) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlaySpaceForces, ___headsetTransform) == 0x98, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaPlaySpaceForces) == 0xa0, "Size mismatch!");

} // namespace end def GlobalNamespace
