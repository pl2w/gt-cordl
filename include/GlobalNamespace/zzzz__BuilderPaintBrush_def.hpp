#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderPaintBrush.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BuilderPaintBrush_PaintBrushState_def.hpp"
#include "GlobalNamespace/zzzz__HoldableObject_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BuilderPaintBrush)
namespace GlobalNamespace {
class BuilderMaterialOptions;
}
namespace GlobalNamespace {
struct BuilderPaintBrush_PaintBrushState;
}
namespace GlobalNamespace {
class BuilderPiece;
}
namespace GlobalNamespace {
class DropZone;
}
namespace GlobalNamespace {
class InteractionPoint;
}
namespace GorillaLocomotion::Climbing {
class GorillaVelocityTracker;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
class Rigidbody;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class BuilderPaintBrush;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BuilderPaintBrush*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BuilderPaintBrush*, "", "BuilderPaintBrush");
// Dependencies BuilderPaintBrush::PaintBrushState, HoldableObject, UnityEngine.Collider, UnityEngine.LayerMask, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: BuilderPaintBrush
class CORDL_TYPE BuilderPaintBrush : public ::GlobalNamespace::HoldableObject {
public:
// Declarations
using PaintBrushState = ::GlobalNamespace::BuilderPaintBrush_PaintBrushState;

/// @brief Field audioSource, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field brushRenderer, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_brushRenderer, put=__cordl_internal_set_brushRenderer)) ::UnityW<::UnityEngine::MeshRenderer>  brushRenderer;

/// @brief Field brushState, offset 0xc4, size 0x4 
 __declspec(property(get=__cordl_internal_get_brushState, put=__cordl_internal_set_brushState)) ::GlobalNamespace::BuilderPaintBrush_PaintBrushState  brushState;

/// @brief Field brushStrokeSound, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_brushStrokeSound, put=__cordl_internal_set_brushStrokeSound)) ::UnityW<::UnityEngine::AudioClip>  brushStrokeSound;

/// @brief Field brushSurface, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_brushSurface, put=__cordl_internal_set_brushSurface)) ::UnityW<::UnityEngine::Transform>  brushSurface;

/// @brief Field handVelocity, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_handVelocity, put=__cordl_internal_set_handVelocity)) ::UnityW<::GorillaLocomotion::Climbing::GorillaVelocityTracker>  handVelocity;

/// @brief Field hitColliders, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_hitColliders, put=__cordl_internal_set_hitColliders)) ::ArrayW<::UnityW<::UnityEngine::Collider>>  hitColliders;

/// @brief Field holdingHand, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_holdingHand, put=__cordl_internal_set_holdingHand)) ::UnityW<::UnityEngine::GameObject>  holdingHand;

/// @brief Field hoveredPiece, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_hoveredPiece, put=__cordl_internal_set_hoveredPiece)) ::UnityW<::GlobalNamespace::BuilderPiece>  hoveredPiece;

/// @brief Field hoveredPieceCollider, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_hoveredPieceCollider, put=__cordl_internal_set_hoveredPieceCollider)) ::UnityW<::UnityEngine::Collider>  hoveredPieceCollider;

/// @brief Field inLeftHand, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get_inLeftHand, put=__cordl_internal_set_inLeftHand)) bool  inLeftHand;

/// @brief Field lastPosition, offset 0x94, size 0xc 
 __declspec(property(get=__cordl_internal_get_lastPosition, put=__cordl_internal_set_lastPosition)) ::UnityEngine::Vector3  lastPosition;

/// @brief Field materialType, offset 0xc0, size 0x4 
 __declspec(property(get=__cordl_internal_get_materialType, put=__cordl_internal_set_materialType)) int32_t  materialType;

/// @brief Field maxPaintVelocitySqrMag, offset 0xb0, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxPaintVelocitySqrMag, put=__cordl_internal_set_maxPaintVelocitySqrMag)) float_t  maxPaintVelocitySqrMag;

/// @brief Field maximumWiggleFrameDistance, offset 0xac, size 0x4 
 __declspec(property(get=__cordl_internal_get_maximumWiggleFrameDistance, put=__cordl_internal_set_maximumWiggleFrameDistance)) float_t  maximumWiggleFrameDistance;

/// @brief Field minimumWiggleFrameDistance, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get_minimumWiggleFrameDistance, put=__cordl_internal_set_minimumWiggleFrameDistance)) float_t  minimumWiggleFrameDistance;

/// @brief Field paintBrushMaterialOptions, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_paintBrushMaterialOptions, put=__cordl_internal_set_paintBrushMaterialOptions)) ::UnityW<::GlobalNamespace::BuilderMaterialOptions>  paintBrushMaterialOptions;

/// @brief Field paintDelay, offset 0xb4, size 0x4 
 __declspec(property(get=__cordl_internal_get_paintDelay, put=__cordl_internal_set_paintDelay)) float_t  paintDelay;

/// @brief Field paintDistance, offset 0xbc, size 0x4 
 __declspec(property(get=__cordl_internal_get_paintDistance, put=__cordl_internal_set_paintDistance)) float_t  paintDistance;

/// @brief Field paintSound, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_paintSound, put=__cordl_internal_set_paintSound)) ::UnityW<::UnityEngine::AudioClip>  paintSound;

/// @brief Field paintTimeElapsed, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get_paintTimeElapsed, put=__cordl_internal_set_paintTimeElapsed)) float_t  paintTimeElapsed;

/// @brief Field paintVolumeHalfExtents, offset 0x28, size 0xc 
 __declspec(property(get=__cordl_internal_get_paintVolumeHalfExtents, put=__cordl_internal_set_paintVolumeHalfExtents)) ::UnityEngine::Vector3  paintVolumeHalfExtents;

/// @brief Field pieceLayers, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_pieceLayers, put=__cordl_internal_set_pieceLayers)) ::UnityEngine::LayerMask  pieceLayers;

/// @brief Field positionDelta, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_positionDelta, put=__cordl_internal_set_positionDelta)) float_t  positionDelta;

/// @brief Field rb, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_rb, put=__cordl_internal_set_rb)) ::UnityW<::UnityEngine::Rigidbody>  rb;

/// @brief Field wiggleDistanceRequirement, offset 0xa4, size 0x4 
 __declspec(property(get=__cordl_internal_get_wiggleDistanceRequirement, put=__cordl_internal_set_wiggleDistanceRequirement)) float_t  wiggleDistanceRequirement;

/// @brief Method Awake, addr 0x57b1c54, size 0x164, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ClearHoveredPiece, addr 0x57b2370, size 0xf8, virtual false, abstract: false, final false
inline void ClearHoveredPiece() ;

/// @brief Method DropItemCleanup, addr 0x57b1db8, size 0x4, virtual true, abstract: false, final false
inline void DropItemCleanup() ;

/// @brief Method FindPieceToPaint, addr 0x57b24f8, size 0x89c, virtual false, abstract: false, final false
inline void FindPieceToPaint() ;

/// @brief Method LateUpdate, addr 0x57b2468, size 0x90, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::BuilderPaintBrush* New_ctor() ;

/// @brief Method OnGrab, addr 0x57b1dbc, size 0x3c8, virtual true, abstract: false, final false
inline void OnGrab(::GlobalNamespace::InteractionPoint*  pointGrabbed, ::UnityEngine::GameObject*  grabbingHand) ;

/// @brief Method OnHover, addr 0x57b2184, size 0x4, virtual true, abstract: false, final false
inline void OnHover(::GlobalNamespace::InteractionPoint*  pointHovered, ::UnityEngine::GameObject*  hoveringHand) ;

/// @brief Method OnRelease, addr 0x57b2188, size 0x1e8, virtual true, abstract: false, final false
inline bool OnRelease(::GlobalNamespace::DropZone*  zoneReleased, ::UnityEngine::GameObject*  releasingHand) ;

/// @brief Method PaintPiece, addr 0x57b2d94, size 0x1a8, virtual false, abstract: false, final false
inline void PaintPiece() ;

/// @brief Method SetBrushMaterial, addr 0x57b2f3c, size 0x2c4, virtual false, abstract: false, final false
inline void SetBrushMaterial(int32_t  inMaterialType) ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_brushRenderer() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_brushRenderer() ;

constexpr ::GlobalNamespace::BuilderPaintBrush_PaintBrushState const& __cordl_internal_get_brushState() const;

constexpr ::GlobalNamespace::BuilderPaintBrush_PaintBrushState& __cordl_internal_get_brushState() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_brushStrokeSound() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_brushStrokeSound() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_brushSurface() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_brushSurface() ;

constexpr ::UnityW<::GorillaLocomotion::Climbing::GorillaVelocityTracker> const& __cordl_internal_get_handVelocity() const;

constexpr ::UnityW<::GorillaLocomotion::Climbing::GorillaVelocityTracker>& __cordl_internal_get_handVelocity() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& __cordl_internal_get_hitColliders() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& __cordl_internal_get_hitColliders() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_holdingHand() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_holdingHand() ;

constexpr ::UnityW<::GlobalNamespace::BuilderPiece> const& __cordl_internal_get_hoveredPiece() const;

constexpr ::UnityW<::GlobalNamespace::BuilderPiece>& __cordl_internal_get_hoveredPiece() ;

constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get_hoveredPieceCollider() const;

constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get_hoveredPieceCollider() ;

constexpr bool const& __cordl_internal_get_inLeftHand() const;

constexpr bool& __cordl_internal_get_inLeftHand() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastPosition() ;

constexpr int32_t const& __cordl_internal_get_materialType() const;

constexpr int32_t& __cordl_internal_get_materialType() ;

constexpr float_t const& __cordl_internal_get_maxPaintVelocitySqrMag() const;

constexpr float_t& __cordl_internal_get_maxPaintVelocitySqrMag() ;

constexpr float_t const& __cordl_internal_get_maximumWiggleFrameDistance() const;

constexpr float_t& __cordl_internal_get_maximumWiggleFrameDistance() ;

constexpr float_t const& __cordl_internal_get_minimumWiggleFrameDistance() const;

constexpr float_t& __cordl_internal_get_minimumWiggleFrameDistance() ;

constexpr ::UnityW<::GlobalNamespace::BuilderMaterialOptions> const& __cordl_internal_get_paintBrushMaterialOptions() const;

constexpr ::UnityW<::GlobalNamespace::BuilderMaterialOptions>& __cordl_internal_get_paintBrushMaterialOptions() ;

constexpr float_t const& __cordl_internal_get_paintDelay() const;

constexpr float_t& __cordl_internal_get_paintDelay() ;

constexpr float_t const& __cordl_internal_get_paintDistance() const;

constexpr float_t& __cordl_internal_get_paintDistance() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_paintSound() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_paintSound() ;

constexpr float_t const& __cordl_internal_get_paintTimeElapsed() const;

constexpr float_t& __cordl_internal_get_paintTimeElapsed() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_paintVolumeHalfExtents() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_paintVolumeHalfExtents() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_pieceLayers() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_pieceLayers() ;

constexpr float_t const& __cordl_internal_get_positionDelta() const;

constexpr float_t& __cordl_internal_get_positionDelta() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_rb() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_rb() ;

constexpr float_t const& __cordl_internal_get_wiggleDistanceRequirement() const;

constexpr float_t& __cordl_internal_get_wiggleDistanceRequirement() ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_brushRenderer(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set_brushState(::GlobalNamespace::BuilderPaintBrush_PaintBrushState  value) ;

constexpr void __cordl_internal_set_brushStrokeSound(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_brushSurface(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_handVelocity(::UnityW<::GorillaLocomotion::Climbing::GorillaVelocityTracker>  value) ;

constexpr void __cordl_internal_set_hitColliders(::ArrayW<::UnityW<::UnityEngine::Collider>>  value) ;

constexpr void __cordl_internal_set_holdingHand(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_hoveredPiece(::UnityW<::GlobalNamespace::BuilderPiece>  value) ;

constexpr void __cordl_internal_set_hoveredPieceCollider(::UnityW<::UnityEngine::Collider>  value) ;

constexpr void __cordl_internal_set_inLeftHand(bool  value) ;

constexpr void __cordl_internal_set_lastPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_materialType(int32_t  value) ;

constexpr void __cordl_internal_set_maxPaintVelocitySqrMag(float_t  value) ;

constexpr void __cordl_internal_set_maximumWiggleFrameDistance(float_t  value) ;

constexpr void __cordl_internal_set_minimumWiggleFrameDistance(float_t  value) ;

constexpr void __cordl_internal_set_paintBrushMaterialOptions(::UnityW<::GlobalNamespace::BuilderMaterialOptions>  value) ;

constexpr void __cordl_internal_set_paintDelay(float_t  value) ;

constexpr void __cordl_internal_set_paintDistance(float_t  value) ;

constexpr void __cordl_internal_set_paintSound(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_paintTimeElapsed(float_t  value) ;

constexpr void __cordl_internal_set_paintVolumeHalfExtents(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_pieceLayers(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_positionDelta(float_t  value) ;

constexpr void __cordl_internal_set_rb(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set_wiggleDistanceRequirement(float_t  value) ;

/// @brief Method .ctor, addr 0x57b3200, size 0xd8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuilderPaintBrush() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderPaintBrush", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderPaintBrush(BuilderPaintBrush && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderPaintBrush", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderPaintBrush(BuilderPaintBrush const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1563};

/// [SerializeField]
/// @brief Field brushSurface, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___brushSurface;

/// [SerializeField]
/// @brief Field paintVolumeHalfExtents, offset: 0x28, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___paintVolumeHalfExtents;

/// [SerializeField]
/// @brief Field paintBrushMaterialOptions, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BuilderMaterialOptions>  ___paintBrushMaterialOptions;

/// [SerializeField]
/// @brief Field brushRenderer, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ___brushRenderer;

/// [SerializeField]
/// @brief Field audioSource, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// [SerializeField]
/// @brief Field paintSound, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___paintSound;

/// [SerializeField]
/// @brief Field brushStrokeSound, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___brushStrokeSound;

/// @brief Field holdingHand, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___holdingHand;

/// @brief Field inLeftHand, offset: 0x68, size: 0x1, def value: None
 bool  ___inLeftHand;

/// @brief Field handVelocity, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::GorillaLocomotion::Climbing::GorillaVelocityTracker>  ___handVelocity;

/// @brief Field hoveredPiece, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BuilderPiece>  ___hoveredPiece;

/// @brief Field hoveredPieceCollider, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  ___hoveredPieceCollider;

/// @brief Field hitColliders, offset: 0x88, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Collider>>  ___hitColliders;

/// @brief Field pieceLayers, offset: 0x90, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___pieceLayers;

/// @brief Field lastPosition, offset: 0x94, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___lastPosition;

/// @brief Field positionDelta, offset: 0xa0, size: 0x4, def value: None
 float_t  ___positionDelta;

/// @brief Field wiggleDistanceRequirement, offset: 0xa4, size: 0x4, def value: None
 float_t  ___wiggleDistanceRequirement;

/// @brief Field minimumWiggleFrameDistance, offset: 0xa8, size: 0x4, def value: None
 float_t  ___minimumWiggleFrameDistance;

/// @brief Field maximumWiggleFrameDistance, offset: 0xac, size: 0x4, def value: None
 float_t  ___maximumWiggleFrameDistance;

/// @brief Field maxPaintVelocitySqrMag, offset: 0xb0, size: 0x4, def value: None
 float_t  ___maxPaintVelocitySqrMag;

/// @brief Field paintDelay, offset: 0xb4, size: 0x4, def value: None
 float_t  ___paintDelay;

/// @brief Field paintTimeElapsed, offset: 0xb8, size: 0x4, def value: None
 float_t  ___paintTimeElapsed;

/// @brief Field paintDistance, offset: 0xbc, size: 0x4, def value: None
 float_t  ___paintDistance;

/// @brief Field materialType, offset: 0xc0, size: 0x4, def value: None
 int32_t  ___materialType;

/// @brief Field brushState, offset: 0xc4, size: 0x4, def value: None
 ::GlobalNamespace::BuilderPaintBrush_PaintBrushState  ___brushState;

/// @brief Field rb, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___rb;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BuilderPaintBrush, ___brushSurface) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPaintBrush, ___paintVolumeHalfExtents) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPaintBrush, ___paintBrushMaterialOptions) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPaintBrush, ___brushRenderer) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPaintBrush, ___audioSource) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPaintBrush, ___paintSound) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPaintBrush, ___brushStrokeSound) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPaintBrush, ___holdingHand) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPaintBrush, ___inLeftHand) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPaintBrush, ___handVelocity) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPaintBrush, ___hoveredPiece) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPaintBrush, ___hoveredPieceCollider) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPaintBrush, ___hitColliders) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPaintBrush, ___pieceLayers) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPaintBrush, ___lastPosition) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPaintBrush, ___positionDelta) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPaintBrush, ___wiggleDistanceRequirement) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPaintBrush, ___minimumWiggleFrameDistance) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPaintBrush, ___maximumWiggleFrameDistance) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPaintBrush, ___maxPaintVelocitySqrMag) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPaintBrush, ___paintDelay) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPaintBrush, ___paintTimeElapsed) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPaintBrush, ___paintDistance) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPaintBrush, ___materialType) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPaintBrush, ___brushState) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPaintBrush, ___rb) == 0xc8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BuilderPaintBrush) == 0xd0, "Size mismatch!");

} // namespace end def GlobalNamespace
