#pragma once
// IWYU pragma private; include "GlobalNamespace/FriendshipCharm.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__HoldableObject_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FriendshipCharm)
namespace GlobalNamespace {
class DropZone;
}
namespace GlobalNamespace {
class InteractionPoint;
}
namespace UnityEngine {
class Collision;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class FriendshipCharm;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::FriendshipCharm*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FriendshipCharm*, "", "FriendshipCharm");
// Dependencies HoldableObject, UnityEngine.LayerMask
namespace GlobalNamespace {
// Is value type: false
// CS Name: FriendshipCharm
class CORDL_TYPE FriendshipCharm : public ::GlobalNamespace::HoldableObject {
public:
// Declarations
/// @brief Field breakBraceletLength, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_breakBraceletLength, put=__cordl_internal_set_breakBraceletLength)) float_t  breakBraceletLength;

/// @brief Field breakItemLayerMask, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_breakItemLayerMask, put=__cordl_internal_set_breakItemLayerMask)) ::UnityEngine::LayerMask  breakItemLayerMask;

/// @brief Field interactionPoint, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_interactionPoint, put=__cordl_internal_set_interactionPoint)) ::UnityW<::GlobalNamespace::InteractionPoint>  interactionPoint;

/// @brief Field isBroken, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get_isBroken, put=__cordl_internal_set_isBroken)) bool  isBroken;

/// @brief Field leftHandHoldAnchor, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_leftHandHoldAnchor, put=__cordl_internal_set_leftHandHoldAnchor)) ::UnityW<::UnityEngine::Transform>  leftHandHoldAnchor;

/// @brief Field lineEnd, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_lineEnd, put=__cordl_internal_set_lineEnd)) ::UnityW<::UnityEngine::Transform>  lineEnd;

/// @brief Field lineStart, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_lineStart, put=__cordl_internal_set_lineStart)) ::UnityW<::UnityEngine::Transform>  lineStart;

/// @brief Field meshRenderer, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_meshRenderer, put=__cordl_internal_set_meshRenderer)) ::UnityW<::UnityEngine::MeshRenderer>  meshRenderer;

/// @brief Field parent, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_parent, put=__cordl_internal_set_parent)) ::UnityW<::UnityEngine::Transform>  parent;

/// @brief Field releasePosition, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_releasePosition, put=__cordl_internal_set_releasePosition)) ::UnityW<::UnityEngine::Transform>  releasePosition;

/// @brief Field rightHandHoldAnchor, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_rightHandHoldAnchor, put=__cordl_internal_set_rightHandHoldAnchor)) ::UnityW<::UnityEngine::Transform>  rightHandHoldAnchor;

/// @brief Method Awake, addr 0x574f170, size 0x34, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method DestroyBracelet, addr 0x574f32c, size 0x100, virtual false, abstract: false, final false
inline void DestroyBracelet() ;

/// @brief Method DropItemCleanup, addr 0x574fa10, size 0x4, virtual true, abstract: false, final false
inline void DropItemCleanup() ;

/// @brief Method LateUpdate, addr 0x574f1a4, size 0x188, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::FriendshipCharm* New_ctor() ;

/// @brief Method OnCollisionEnter, addr 0x574f960, size 0xac, virtual false, abstract: false, final false
inline void OnCollisionEnter(::UnityEngine::Collision*  other) ;

/// @brief Method OnEnable, addr 0x574f42c, size 0x44, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnGrab, addr 0x574f508, size 0x250, virtual true, abstract: false, final false
inline void OnGrab(::GlobalNamespace::InteractionPoint*  pointGrabbed, ::UnityEngine::GameObject*  grabbingHand) ;

/// @brief Method OnHover, addr 0x574fa0c, size 0x4, virtual true, abstract: false, final false
inline void OnHover(::GlobalNamespace::InteractionPoint*  pointHovered, ::UnityEngine::GameObject*  hoveringHand) ;

/// @brief Method OnRelease, addr 0x574f758, size 0xd8, virtual true, abstract: false, final false
inline bool OnRelease(::GlobalNamespace::DropZone*  zoneReleased, ::UnityEngine::GameObject*  releasingHand) ;

/// @brief Method UpdatePosition, addr 0x574f470, size 0x98, virtual false, abstract: false, final false
inline void UpdatePosition() ;

constexpr float_t const& __cordl_internal_get_breakBraceletLength() const;

constexpr float_t& __cordl_internal_get_breakBraceletLength() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_breakItemLayerMask() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_breakItemLayerMask() ;

constexpr ::UnityW<::GlobalNamespace::InteractionPoint> const& __cordl_internal_get_interactionPoint() const;

constexpr ::UnityW<::GlobalNamespace::InteractionPoint>& __cordl_internal_get_interactionPoint() ;

constexpr bool const& __cordl_internal_get_isBroken() const;

constexpr bool& __cordl_internal_get_isBroken() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_leftHandHoldAnchor() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_leftHandHoldAnchor() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_lineEnd() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_lineEnd() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_lineStart() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_lineStart() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_meshRenderer() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_meshRenderer() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_parent() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_parent() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_releasePosition() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_releasePosition() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_rightHandHoldAnchor() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_rightHandHoldAnchor() ;

constexpr void __cordl_internal_set_breakBraceletLength(float_t  value) ;

constexpr void __cordl_internal_set_breakItemLayerMask(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_interactionPoint(::UnityW<::GlobalNamespace::InteractionPoint>  value) ;

constexpr void __cordl_internal_set_isBroken(bool  value) ;

constexpr void __cordl_internal_set_leftHandHoldAnchor(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_lineEnd(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_lineStart(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_meshRenderer(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set_parent(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_releasePosition(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_rightHandHoldAnchor(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x574fa14, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FriendshipCharm() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FriendshipCharm", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FriendshipCharm(FriendshipCharm && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FriendshipCharm", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FriendshipCharm(FriendshipCharm const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1304};

/// [SerializeField]
/// @brief Field interactionPoint, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::InteractionPoint>  ___interactionPoint;

/// [SerializeField]
/// @brief Field rightHandHoldAnchor, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___rightHandHoldAnchor;

/// [SerializeField]
/// @brief Field leftHandHoldAnchor, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___leftHandHoldAnchor;

/// [SerializeField]
/// @brief Field meshRenderer, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ___meshRenderer;

/// [SerializeField]
/// @brief Field lineStart, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___lineStart;

/// [SerializeField]
/// @brief Field lineEnd, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___lineEnd;

/// [SerializeField]
/// @brief Field releasePosition, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___releasePosition;

/// [SerializeField]
/// @brief Field breakBraceletLength, offset: 0x58, size: 0x4, def value: None
 float_t  ___breakBraceletLength;

/// [SerializeField]
/// @brief Field breakItemLayerMask, offset: 0x5c, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___breakItemLayerMask;

/// @brief Field parent, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___parent;

/// @brief Field isBroken, offset: 0x68, size: 0x1, def value: None
 bool  ___isBroken;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FriendshipCharm, ___interactionPoint) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendshipCharm, ___rightHandHoldAnchor) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendshipCharm, ___leftHandHoldAnchor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendshipCharm, ___meshRenderer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendshipCharm, ___lineStart) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendshipCharm, ___lineEnd) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendshipCharm, ___releasePosition) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendshipCharm, ___breakBraceletLength) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendshipCharm, ___breakItemLayerMask) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendshipCharm, ___parent) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendshipCharm, ___isBroken) == 0x68, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FriendshipCharm) == 0x70, "Size mismatch!");

} // namespace end def GlobalNamespace
