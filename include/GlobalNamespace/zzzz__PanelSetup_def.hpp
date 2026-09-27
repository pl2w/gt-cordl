#pragma once
// IWYU pragma private; include "GlobalNamespace/PanelSetup.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PanelSetup)
namespace Oculus::Interaction::Surfaces {
class BoundsClipper;
}
namespace Oculus::Interaction::Surfaces {
class UnionClippedPlaneSurface;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class PanelSetup;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PanelSetup*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PanelSetup*, "", "PanelSetup");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PanelSetup
class CORDL_TYPE PanelSetup : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field AddHorizontalRotation, offset 0x29, size 0x1 
 __declspec(property(get=__cordl_internal_get_AddHorizontalRotation, put=__cordl_internal_set_AddHorizontalRotation)) bool  AddHorizontalRotation;

/// @brief Field AddVerticalRotation, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_AddVerticalRotation, put=__cordl_internal_set_AddVerticalRotation)) bool  AddVerticalRotation;

/// @brief Field AnchorBottomLeft, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_AnchorBottomLeft, put=__cordl_internal_set_AnchorBottomLeft)) ::UnityW<::UnityEngine::Transform>  AnchorBottomLeft;

/// @brief Field AnchorBottomRight, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_AnchorBottomRight, put=__cordl_internal_set_AnchorBottomRight)) ::UnityW<::UnityEngine::Transform>  AnchorBottomRight;

/// @brief Field AnchorTopLeft, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_AnchorTopLeft, put=__cordl_internal_set_AnchorTopLeft)) ::UnityW<::UnityEngine::Transform>  AnchorTopLeft;

/// @brief Field AnchorTopRight, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_AnchorTopRight, put=__cordl_internal_set_AnchorTopRight)) ::UnityW<::UnityEngine::Transform>  AnchorTopRight;

/// @brief Field InteractableDepth, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_InteractableDepth, put=__cordl_internal_set_InteractableDepth)) float_t  InteractableDepth;

/// @brief Field InteractableLength, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_InteractableLength, put=__cordl_internal_set_InteractableLength)) float_t  InteractableLength;

/// @brief Field PanelInteractable, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_PanelInteractable, put=__cordl_internal_set_PanelInteractable)) ::UnityW<::UnityEngine::GameObject>  PanelInteractable;

/// @brief Field RotatorHorizontalLeft, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_RotatorHorizontalLeft, put=__cordl_internal_set_RotatorHorizontalLeft)) ::UnityW<::UnityEngine::GameObject>  RotatorHorizontalLeft;

/// @brief Field RotatorHorizontalRight, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_RotatorHorizontalRight, put=__cordl_internal_set_RotatorHorizontalRight)) ::UnityW<::UnityEngine::GameObject>  RotatorHorizontalRight;

/// @brief Field RotatorVerticalBottom, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_RotatorVerticalBottom, put=__cordl_internal_set_RotatorVerticalBottom)) ::UnityW<::UnityEngine::GameObject>  RotatorVerticalBottom;

/// @brief Field RotatorVerticalTop, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_RotatorVerticalTop, put=__cordl_internal_set_RotatorVerticalTop)) ::UnityW<::UnityEngine::GameObject>  RotatorVerticalTop;

/// @brief Field ScalerBottomLeft, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_ScalerBottomLeft, put=__cordl_internal_set_ScalerBottomLeft)) ::UnityW<::UnityEngine::GameObject>  ScalerBottomLeft;

/// @brief Field ScalerBottomRight, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_ScalerBottomRight, put=__cordl_internal_set_ScalerBottomRight)) ::UnityW<::UnityEngine::GameObject>  ScalerBottomRight;

/// @brief Field ScalerTopLeft, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_ScalerTopLeft, put=__cordl_internal_set_ScalerTopLeft)) ::UnityW<::UnityEngine::GameObject>  ScalerTopLeft;

/// @brief Field ScalerTopRight, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_ScalerTopRight, put=__cordl_internal_set_ScalerTopRight)) ::UnityW<::UnityEngine::GameObject>  ScalerTopRight;

/// @brief Field boundsClipper, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_boundsClipper, put=__cordl_internal_set_boundsClipper)) ::UnityW<::Oculus::Interaction::Surfaces::BoundsClipper>  boundsClipper;

/// @brief Field panelClippedPlaneSurface, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_panelClippedPlaneSurface, put=__cordl_internal_set_panelClippedPlaneSurface)) ::UnityW<::Oculus::Interaction::Surfaces::UnionClippedPlaneSurface>  panelClippedPlaneSurface;

/// @brief Field panelTransform, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_panelTransform, put=__cordl_internal_set_panelTransform)) ::UnityW<::UnityEngine::RectTransform>  panelTransform;

/// @brief Field topLeftCornerAnchor, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_topLeftCornerAnchor, put=__cordl_internal_set_topLeftCornerAnchor)) ::UnityW<::UnityEngine::Transform>  topLeftCornerAnchor;

/// @brief Method CreateCollider, addr 0xa429598, size 0x438, virtual false, abstract: false, final false
inline void CreateCollider(::StringW  name, ::UnityEngine::Vector2  rectSize, ::UnityEngine::Vector3  sidePosition, ::UnityEngine::Vector3  sideDirection, ::UnityEngine::Vector3  offsetDirection, bool  fullSize, int32_t  wideAxis, int32_t  normalAxis, ::UnityEngine::Transform*  anchorA, ::UnityEngine::Transform*  anchorB) ;

/// @brief Method GetRectCorners, addr 0xa429224, size 0xe4, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Vector3> GetRectCorners(::UnityEngine::Vector3  position, ::UnityEngine::Vector2  size) ;

/// @brief Method GetRectSides, addr 0xa4294a4, size 0xf4, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Vector3> GetRectSides(::UnityEngine::Vector3  position, ::UnityEngine::Vector2  size) ;

static inline ::GlobalNamespace::PanelSetup* New_ctor() ;

/// @brief Method SetColliderSize, addr 0xa429324, size 0x180, virtual false, abstract: false, final false
inline void SetColliderSize(::UnityEngine::GameObject*  colliderGO, ::UnityEngine::Vector3  size) ;

/// [ContextMenu("Update Panel")]
/// @brief Method UpdatePanelProperties, addr 0xa42829c, size 0xf88, virtual false, abstract: false, final false
inline void UpdatePanelProperties() ;

/// @brief Method Vec2Sign, addr 0xa429308, size 0x1c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 Vec2Sign(::UnityEngine::Vector2  value) ;

constexpr bool const& __cordl_internal_get_AddHorizontalRotation() const;

constexpr bool& __cordl_internal_get_AddHorizontalRotation() ;

constexpr bool const& __cordl_internal_get_AddVerticalRotation() const;

constexpr bool& __cordl_internal_get_AddVerticalRotation() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_AnchorBottomLeft() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_AnchorBottomLeft() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_AnchorBottomRight() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_AnchorBottomRight() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_AnchorTopLeft() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_AnchorTopLeft() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_AnchorTopRight() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_AnchorTopRight() ;

constexpr float_t const& __cordl_internal_get_InteractableDepth() const;

constexpr float_t& __cordl_internal_get_InteractableDepth() ;

constexpr float_t const& __cordl_internal_get_InteractableLength() const;

constexpr float_t& __cordl_internal_get_InteractableLength() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_PanelInteractable() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_PanelInteractable() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_RotatorHorizontalLeft() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_RotatorHorizontalLeft() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_RotatorHorizontalRight() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_RotatorHorizontalRight() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_RotatorVerticalBottom() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_RotatorVerticalBottom() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_RotatorVerticalTop() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_RotatorVerticalTop() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_ScalerBottomLeft() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_ScalerBottomLeft() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_ScalerBottomRight() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_ScalerBottomRight() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_ScalerTopLeft() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_ScalerTopLeft() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_ScalerTopRight() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_ScalerTopRight() ;

constexpr ::UnityW<::Oculus::Interaction::Surfaces::BoundsClipper> const& __cordl_internal_get_boundsClipper() const;

constexpr ::UnityW<::Oculus::Interaction::Surfaces::BoundsClipper>& __cordl_internal_get_boundsClipper() ;

constexpr ::UnityW<::Oculus::Interaction::Surfaces::UnionClippedPlaneSurface> const& __cordl_internal_get_panelClippedPlaneSurface() const;

constexpr ::UnityW<::Oculus::Interaction::Surfaces::UnionClippedPlaneSurface>& __cordl_internal_get_panelClippedPlaneSurface() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_panelTransform() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_panelTransform() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_topLeftCornerAnchor() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_topLeftCornerAnchor() ;

constexpr void __cordl_internal_set_AddHorizontalRotation(bool  value) ;

constexpr void __cordl_internal_set_AddVerticalRotation(bool  value) ;

constexpr void __cordl_internal_set_AnchorBottomLeft(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_AnchorBottomRight(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_AnchorTopLeft(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_AnchorTopRight(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_InteractableDepth(float_t  value) ;

constexpr void __cordl_internal_set_InteractableLength(float_t  value) ;

constexpr void __cordl_internal_set_PanelInteractable(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_RotatorHorizontalLeft(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_RotatorHorizontalRight(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_RotatorVerticalBottom(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_RotatorVerticalTop(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_ScalerBottomLeft(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_ScalerBottomRight(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_ScalerTopLeft(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_ScalerTopRight(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_boundsClipper(::UnityW<::Oculus::Interaction::Surfaces::BoundsClipper>  value) ;

constexpr void __cordl_internal_set_panelClippedPlaneSurface(::UnityW<::Oculus::Interaction::Surfaces::UnionClippedPlaneSurface>  value) ;

constexpr void __cordl_internal_set_panelTransform(::UnityW<::UnityEngine::RectTransform>  value) ;

constexpr void __cordl_internal_set_topLeftCornerAnchor(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0xa4299d0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PanelSetup() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PanelSetup", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PanelSetup(PanelSetup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PanelSetup", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PanelSetup(PanelSetup const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28245};

/// @brief Field InteractableLength, offset: 0x20, size: 0x4, def value: None
 float_t  ___InteractableLength;

/// @brief Field InteractableDepth, offset: 0x24, size: 0x4, def value: None
 float_t  ___InteractableDepth;

/// @brief Field AddVerticalRotation, offset: 0x28, size: 0x1, def value: None
 bool  ___AddVerticalRotation;

/// @brief Field AddHorizontalRotation, offset: 0x29, size: 0x1, def value: None
 bool  ___AddHorizontalRotation;

/// @brief Field panelTransform, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ___panelTransform;

/// @brief Field panelClippedPlaneSurface, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::Surfaces::UnionClippedPlaneSurface>  ___panelClippedPlaneSurface;

/// @brief Field boundsClipper, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::Surfaces::BoundsClipper>  ___boundsClipper;

/// @brief Field topLeftCornerAnchor, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___topLeftCornerAnchor;

/// [Header("Anchors")]
/// @brief Field AnchorTopLeft, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___AnchorTopLeft;

/// @brief Field AnchorTopRight, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___AnchorTopRight;

/// @brief Field AnchorBottomLeft, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___AnchorBottomLeft;

/// @brief Field AnchorBottomRight, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___AnchorBottomRight;

/// [Header("SideCollider")]
/// @brief Field PanelInteractable, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___PanelInteractable;

/// [Header("Scaler")]
/// @brief Field ScalerTopLeft, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___ScalerTopLeft;

/// @brief Field ScalerTopRight, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___ScalerTopRight;

/// @brief Field ScalerBottomLeft, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___ScalerBottomLeft;

/// @brief Field ScalerBottomRight, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___ScalerBottomRight;

/// [Header("Rotator")]
/// @brief Field RotatorVerticalTop, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___RotatorVerticalTop;

/// @brief Field RotatorVerticalBottom, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___RotatorVerticalBottom;

/// @brief Field RotatorHorizontalLeft, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___RotatorHorizontalLeft;

/// @brief Field RotatorHorizontalRight, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___RotatorHorizontalRight;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PanelSetup, ___InteractableLength) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PanelSetup, ___InteractableDepth) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PanelSetup, ___AddVerticalRotation) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PanelSetup, ___AddHorizontalRotation) == 0x29, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PanelSetup, ___panelTransform) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PanelSetup, ___panelClippedPlaneSurface) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PanelSetup, ___boundsClipper) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PanelSetup, ___topLeftCornerAnchor) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PanelSetup, ___AnchorTopLeft) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PanelSetup, ___AnchorTopRight) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PanelSetup, ___AnchorBottomLeft) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PanelSetup, ___AnchorBottomRight) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PanelSetup, ___PanelInteractable) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PanelSetup, ___ScalerTopLeft) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PanelSetup, ___ScalerTopRight) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PanelSetup, ___ScalerBottomLeft) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PanelSetup, ___ScalerBottomRight) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PanelSetup, ___RotatorVerticalTop) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PanelSetup, ___RotatorVerticalBottom) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PanelSetup, ___RotatorHorizontalLeft) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PanelSetup, ___RotatorHorizontalRight) == 0xb0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PanelSetup) == 0xb8, "Size mismatch!");

} // namespace end def GlobalNamespace
