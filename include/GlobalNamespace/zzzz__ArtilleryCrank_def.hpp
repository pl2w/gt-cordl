#pragma once
// IWYU pragma private; include "GlobalNamespace/ArtilleryCrank.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ArtilleryCrankType_def.hpp"
#include "GlobalNamespace/zzzz__HoldableObject_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ArtilleryCrank)
namespace GlobalNamespace {
class ArtilleryCannon;
}
namespace GlobalNamespace {
class DropZone;
}
namespace GlobalNamespace {
class InteractionPoint;
}
namespace GlobalNamespace {
class VRRig;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class ArtilleryCrank;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ArtilleryCrank*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ArtilleryCrank*, "", "ArtilleryCrank");
// Dependencies ArtilleryCrankType, HoldableObject, UnityEngine.Quaternion
namespace GlobalNamespace {
// Is value type: false
// CS Name: ArtilleryCrank
class CORDL_TYPE ArtilleryCrank : public ::GlobalNamespace::HoldableObject {
public:
// Declarations
 __declspec(property(get=get_CrankIndex)) int32_t  CrankIndex;

 __declspec(property(get=get_CurrentAngle)) float_t  CurrentAngle;

 __declspec(property(get=get_IsHeld)) bool  IsHeld;

 __declspec(property(get=get_IsHeldLeftHand)) bool  IsHeldLeftHand;

/// @brief Field baseLocalAngle, offset 0x58, size 0x10 
 __declspec(property(get=__cordl_internal_get_baseLocalAngle, put=__cordl_internal_set_baseLocalAngle)) ::UnityEngine::Quaternion  baseLocalAngle;

/// @brief Field baseLocalAngleInverse, offset 0x68, size 0x10 
 __declspec(property(get=__cordl_internal_get_baseLocalAngleInverse, put=__cordl_internal_set_baseLocalAngleInverse)) ::UnityEngine::Quaternion  baseLocalAngleInverse;

/// @brief Field cannon, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_cannon, put=__cordl_internal_set_cannon)) ::UnityW<::GlobalNamespace::ArtilleryCannon>  cannon;

/// @brief Field crankAngleOffset, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_crankAngleOffset, put=__cordl_internal_set_crankAngleOffset)) float_t  crankAngleOffset;

/// @brief Field crankHandleMaxZ, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_crankHandleMaxZ, put=__cordl_internal_set_crankHandleMaxZ)) float_t  crankHandleMaxZ;

/// @brief Field crankHandleMinZ, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_crankHandleMinZ, put=__cordl_internal_set_crankHandleMinZ)) float_t  crankHandleMinZ;

/// @brief Field crankHandleX, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_crankHandleX, put=__cordl_internal_set_crankHandleX)) float_t  crankHandleX;

/// @brief Field crankHandleY, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_crankHandleY, put=__cordl_internal_set_crankHandleY)) float_t  crankHandleY;

/// @brief Field crankRadius, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_crankRadius, put=__cordl_internal_set_crankRadius)) float_t  crankRadius;

/// @brief Field crankType, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_crankType, put=__cordl_internal_set_crankType)) ::GlobalNamespace::ArtilleryCrankType  crankType;

/// @brief Field currentAngle, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentAngle, put=__cordl_internal_set_currentAngle)) float_t  currentAngle;

/// @brief Field isHeld, offset 0x78, size 0x1 
 __declspec(property(get=__cordl_internal_get_isHeld, put=__cordl_internal_set_isHeld)) bool  isHeld;

/// @brief Field isHeldLeftHand, offset 0x79, size 0x1 
 __declspec(property(get=__cordl_internal_get_isHeldLeftHand, put=__cordl_internal_set_isHeldLeftHand)) bool  isHeldLeftHand;

/// @brief Field lastAngle, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastAngle, put=__cordl_internal_set_lastAngle)) float_t  lastAngle;

/// @brief Field maxHandSnapDistance, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxHandSnapDistance, put=__cordl_internal_set_maxHandSnapDistance)) float_t  maxHandSnapDistance;

/// @brief Field rotatingPart, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_rotatingPart, put=__cordl_internal_set_rotatingPart)) ::UnityW<::UnityEngine::Transform>  rotatingPart;

/// @brief Method ApplyVisualAngle, addr 0x5bfb548, size 0x104, virtual false, abstract: false, final false
inline void ApplyVisualAngle(float_t  angle) ;

/// @brief Method Awake, addr 0x5bfae50, size 0x1cc, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ComputeAngleFromWorldPos, addr 0x5bfb41c, size 0x12c, virtual false, abstract: false, final false
inline float_t ComputeAngleFromWorldPos(::UnityEngine::Vector3  worldPos) ;

/// @brief Method DropItemCleanup, addr 0x5bfb914, size 0x48, virtual true, abstract: false, final false
inline void DropItemCleanup() ;

/// @brief Method LateUpdate, addr 0x5bfb01c, size 0x400, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::ArtilleryCrank* New_ctor() ;

/// @brief Method OnDrawGizmosSelected, addr 0x5bfba28, size 0x104, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

/// @brief Method OnGrab, addr 0x5bfb650, size 0x2c4, virtual true, abstract: false, final false
inline void OnGrab(::GlobalNamespace::InteractionPoint*  pointGrabbed, ::UnityEngine::GameObject*  grabbingHand) ;

/// @brief Method OnHover, addr 0x5bfb64c, size 0x4, virtual true, abstract: false, final false
inline void OnHover(::GlobalNamespace::InteractionPoint*  pointHovered, ::UnityEngine::GameObject*  hoveringHand) ;

/// @brief Method OnRelease, addr 0x5bfb95c, size 0xcc, virtual true, abstract: false, final false
inline bool OnRelease(::GlobalNamespace::DropZone*  zoneReleased, ::UnityEngine::GameObject*  releasingHand) ;

/// @brief Method SetVisualAngle, addr 0x5bf96f4, size 0x90, virtual false, abstract: false, final false
inline void SetVisualAngle(float_t  angle) ;

/// @brief Method UpdateFromRemoteHand, addr 0x5bf9568, size 0x18c, virtual false, abstract: false, final false
inline void UpdateFromRemoteHand(::GlobalNamespace::VRRig*  rig, bool  leftHand) ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_baseLocalAngle() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_baseLocalAngle() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_baseLocalAngleInverse() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_baseLocalAngleInverse() ;

constexpr ::UnityW<::GlobalNamespace::ArtilleryCannon> const& __cordl_internal_get_cannon() const;

constexpr ::UnityW<::GlobalNamespace::ArtilleryCannon>& __cordl_internal_get_cannon() ;

constexpr float_t const& __cordl_internal_get_crankAngleOffset() const;

constexpr float_t& __cordl_internal_get_crankAngleOffset() ;

constexpr float_t const& __cordl_internal_get_crankHandleMaxZ() const;

constexpr float_t& __cordl_internal_get_crankHandleMaxZ() ;

constexpr float_t const& __cordl_internal_get_crankHandleMinZ() const;

constexpr float_t& __cordl_internal_get_crankHandleMinZ() ;

constexpr float_t const& __cordl_internal_get_crankHandleX() const;

constexpr float_t& __cordl_internal_get_crankHandleX() ;

constexpr float_t const& __cordl_internal_get_crankHandleY() const;

constexpr float_t& __cordl_internal_get_crankHandleY() ;

constexpr float_t const& __cordl_internal_get_crankRadius() const;

constexpr float_t& __cordl_internal_get_crankRadius() ;

constexpr ::GlobalNamespace::ArtilleryCrankType const& __cordl_internal_get_crankType() const;

constexpr ::GlobalNamespace::ArtilleryCrankType& __cordl_internal_get_crankType() ;

constexpr float_t const& __cordl_internal_get_currentAngle() const;

constexpr float_t& __cordl_internal_get_currentAngle() ;

constexpr bool const& __cordl_internal_get_isHeld() const;

constexpr bool& __cordl_internal_get_isHeld() ;

constexpr bool const& __cordl_internal_get_isHeldLeftHand() const;

constexpr bool& __cordl_internal_get_isHeldLeftHand() ;

constexpr float_t const& __cordl_internal_get_lastAngle() const;

constexpr float_t& __cordl_internal_get_lastAngle() ;

constexpr float_t const& __cordl_internal_get_maxHandSnapDistance() const;

constexpr float_t& __cordl_internal_get_maxHandSnapDistance() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_rotatingPart() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_rotatingPart() ;

constexpr void __cordl_internal_set_baseLocalAngle(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_baseLocalAngleInverse(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_cannon(::UnityW<::GlobalNamespace::ArtilleryCannon>  value) ;

constexpr void __cordl_internal_set_crankAngleOffset(float_t  value) ;

constexpr void __cordl_internal_set_crankHandleMaxZ(float_t  value) ;

constexpr void __cordl_internal_set_crankHandleMinZ(float_t  value) ;

constexpr void __cordl_internal_set_crankHandleX(float_t  value) ;

constexpr void __cordl_internal_set_crankHandleY(float_t  value) ;

constexpr void __cordl_internal_set_crankRadius(float_t  value) ;

constexpr void __cordl_internal_set_crankType(::GlobalNamespace::ArtilleryCrankType  value) ;

constexpr void __cordl_internal_set_currentAngle(float_t  value) ;

constexpr void __cordl_internal_set_isHeld(bool  value) ;

constexpr void __cordl_internal_set_isHeldLeftHand(bool  value) ;

constexpr void __cordl_internal_set_lastAngle(float_t  value) ;

constexpr void __cordl_internal_set_maxHandSnapDistance(float_t  value) ;

constexpr void __cordl_internal_set_rotatingPart(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x5bfbb2c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CrankIndex, addr 0x5bfae40, size 0x10, virtual false, abstract: false, final false
inline int32_t get_CrankIndex() ;

/// @brief Method get_CurrentAngle, addr 0x5bfae38, size 0x8, virtual false, abstract: false, final false
inline float_t get_CurrentAngle() ;

/// @brief Method get_IsHeld, addr 0x5bfae28, size 0x8, virtual false, abstract: false, final false
inline bool get_IsHeld() ;

/// @brief Method get_IsHeldLeftHand, addr 0x5bfae30, size 0x8, virtual false, abstract: false, final false
inline bool get_IsHeldLeftHand() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ArtilleryCrank() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ArtilleryCrank", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ArtilleryCrank(ArtilleryCrank && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ArtilleryCrank", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ArtilleryCrank(ArtilleryCrank const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{403};

/// [SerializeField]
/// @brief Field cannon, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ArtilleryCannon>  ___cannon;

/// [SerializeField]
/// @brief Field crankType, offset: 0x28, size: 0x4, def value: None
 ::GlobalNamespace::ArtilleryCrankType  ___crankType;

/// [SerializeField]
/// @brief Field crankHandleX, offset: 0x2c, size: 0x4, def value: None
 float_t  ___crankHandleX;

/// [SerializeField]
/// @brief Field crankHandleY, offset: 0x30, size: 0x4, def value: None
 float_t  ___crankHandleY;

/// [SerializeField]
/// @brief Field crankHandleMinZ, offset: 0x34, size: 0x4, def value: None
 float_t  ___crankHandleMinZ;

/// [SerializeField]
/// @brief Field crankHandleMaxZ, offset: 0x38, size: 0x4, def value: None
 float_t  ___crankHandleMaxZ;

/// [SerializeField]
/// @brief Field maxHandSnapDistance, offset: 0x3c, size: 0x4, def value: None
 float_t  ___maxHandSnapDistance;

/// [SerializeField]
/// @brief Field rotatingPart, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___rotatingPart;

/// @brief Field crankAngleOffset, offset: 0x48, size: 0x4, def value: None
 float_t  ___crankAngleOffset;

/// @brief Field crankRadius, offset: 0x4c, size: 0x4, def value: None
 float_t  ___crankRadius;

/// @brief Field lastAngle, offset: 0x50, size: 0x4, def value: None
 float_t  ___lastAngle;

/// @brief Field currentAngle, offset: 0x54, size: 0x4, def value: None
 float_t  ___currentAngle;

/// @brief Field baseLocalAngle, offset: 0x58, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___baseLocalAngle;

/// @brief Field baseLocalAngleInverse, offset: 0x68, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___baseLocalAngleInverse;

/// @brief Field isHeld, offset: 0x78, size: 0x1, def value: None
 bool  ___isHeld;

/// @brief Field isHeldLeftHand, offset: 0x79, size: 0x1, def value: None
 bool  ___isHeldLeftHand;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ArtilleryCrank, ___cannon) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArtilleryCrank, ___crankType) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArtilleryCrank, ___crankHandleX) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArtilleryCrank, ___crankHandleY) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArtilleryCrank, ___crankHandleMinZ) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArtilleryCrank, ___crankHandleMaxZ) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArtilleryCrank, ___maxHandSnapDistance) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArtilleryCrank, ___rotatingPart) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArtilleryCrank, ___crankAngleOffset) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArtilleryCrank, ___crankRadius) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArtilleryCrank, ___lastAngle) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArtilleryCrank, ___currentAngle) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArtilleryCrank, ___baseLocalAngle) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArtilleryCrank, ___baseLocalAngleInverse) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArtilleryCrank, ___isHeld) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArtilleryCrank, ___isHeldLeftHand) == 0x79, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ArtilleryCrank) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
