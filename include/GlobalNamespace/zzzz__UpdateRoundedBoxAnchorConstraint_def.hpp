#pragma once
// IWYU pragma private; include "GlobalNamespace/UpdateRoundedBoxAnchorConstraint.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(UpdateRoundedBoxAnchorConstraint)
namespace UnityEngine::Animations {
class PositionConstraint;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace GlobalNamespace {
class UpdateRoundedBoxAnchorConstraint;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::UpdateRoundedBoxAnchorConstraint*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UpdateRoundedBoxAnchorConstraint*, "", "UpdateRoundedBoxAnchorConstraint");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector2
namespace GlobalNamespace {
// Is value type: false
// CS Name: UpdateRoundedBoxAnchorConstraint
class CORDL_TYPE UpdateRoundedBoxAnchorConstraint : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _bottomLeft, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__bottomLeft, put=__cordl_internal_set__bottomLeft)) ::UnityW<::UnityEngine::Animations::PositionConstraint>  _bottomLeft;

/// @brief Field _bottomRight, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__bottomRight, put=__cordl_internal_set__bottomRight)) ::UnityW<::UnityEngine::Animations::PositionConstraint>  _bottomRight;

/// @brief Field _interactableLength, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__interactableLength, put=__cordl_internal_set__interactableLength)) float_t  _interactableLength;

/// @brief Field _offset, offset 0x44, size 0x8 
 __declspec(property(get=__cordl_internal_get__offset, put=__cordl_internal_set__offset)) ::UnityEngine::Vector2  _offset;

/// @brief Field _topLeft, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__topLeft, put=__cordl_internal_set__topLeft)) ::UnityW<::UnityEngine::Animations::PositionConstraint>  _topLeft;

/// @brief Field _topRight, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__topRight, put=__cordl_internal_set__topRight)) ::UnityW<::UnityEngine::Animations::PositionConstraint>  _topRight;

static inline ::GlobalNamespace::UpdateRoundedBoxAnchorConstraint* New_ctor() ;

/// @brief Method UpdateAnchors, addr 0xa42a9a0, size 0xa4, virtual false, abstract: false, final false
static inline void UpdateAnchors(::UnityEngine::Animations::PositionConstraint*  topLeft, ::UnityEngine::Animations::PositionConstraint*  topRight, ::UnityEngine::Animations::PositionConstraint*  bottomLeft, ::UnityEngine::Animations::PositionConstraint*  bottomRight, ::UnityEngine::Vector2  offset, float_t  interactableLength) ;

/// [ContextMenu("Update Anchors")]
/// @brief Method UpdateAnchorsMenu, addr 0xa42aa44, size 0x18, virtual false, abstract: false, final false
inline void UpdateAnchorsMenu() ;

/// @brief Method UpdateOffset, addr 0xa42a964, size 0x3c, virtual false, abstract: false, final false
static inline void UpdateOffset(::UnityEngine::Animations::PositionConstraint*  constraint, ::UnityEngine::Vector2  direction, ::UnityEngine::Vector2  offset, float_t  interactableLength) ;

constexpr ::UnityW<::UnityEngine::Animations::PositionConstraint> const& __cordl_internal_get__bottomLeft() const;

constexpr ::UnityW<::UnityEngine::Animations::PositionConstraint>& __cordl_internal_get__bottomLeft() ;

constexpr ::UnityW<::UnityEngine::Animations::PositionConstraint> const& __cordl_internal_get__bottomRight() const;

constexpr ::UnityW<::UnityEngine::Animations::PositionConstraint>& __cordl_internal_get__bottomRight() ;

constexpr float_t const& __cordl_internal_get__interactableLength() const;

constexpr float_t& __cordl_internal_get__interactableLength() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__offset() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get__offset() ;

constexpr ::UnityW<::UnityEngine::Animations::PositionConstraint> const& __cordl_internal_get__topLeft() const;

constexpr ::UnityW<::UnityEngine::Animations::PositionConstraint>& __cordl_internal_get__topLeft() ;

constexpr ::UnityW<::UnityEngine::Animations::PositionConstraint> const& __cordl_internal_get__topRight() const;

constexpr ::UnityW<::UnityEngine::Animations::PositionConstraint>& __cordl_internal_get__topRight() ;

constexpr void __cordl_internal_set__bottomLeft(::UnityW<::UnityEngine::Animations::PositionConstraint>  value) ;

constexpr void __cordl_internal_set__bottomRight(::UnityW<::UnityEngine::Animations::PositionConstraint>  value) ;

constexpr void __cordl_internal_set__interactableLength(float_t  value) ;

constexpr void __cordl_internal_set__offset(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set__topLeft(::UnityW<::UnityEngine::Animations::PositionConstraint>  value) ;

constexpr void __cordl_internal_set__topRight(::UnityW<::UnityEngine::Animations::PositionConstraint>  value) ;

/// @brief Method .ctor, addr 0xa42aa5c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UpdateRoundedBoxAnchorConstraint() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UpdateRoundedBoxAnchorConstraint", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UpdateRoundedBoxAnchorConstraint(UpdateRoundedBoxAnchorConstraint && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UpdateRoundedBoxAnchorConstraint", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UpdateRoundedBoxAnchorConstraint(UpdateRoundedBoxAnchorConstraint const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28247};

/// [SerializeField]
/// @brief Field _topLeft, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Animations::PositionConstraint>  ____topLeft;

/// [SerializeField]
/// @brief Field _topRight, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Animations::PositionConstraint>  ____topRight;

/// [SerializeField]
/// @brief Field _bottomLeft, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Animations::PositionConstraint>  ____bottomLeft;

/// [SerializeField]
/// @brief Field _bottomRight, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Animations::PositionConstraint>  ____bottomRight;

/// [SerializeField]
/// @brief Field _interactableLength, offset: 0x40, size: 0x4, def value: None
 float_t  ____interactableLength;

/// [SerializeField]
/// @brief Field _offset, offset: 0x44, size: 0x8, def value: None
 ::UnityEngine::Vector2  ____offset;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UpdateRoundedBoxAnchorConstraint, ____topLeft) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UpdateRoundedBoxAnchorConstraint, ____topRight) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UpdateRoundedBoxAnchorConstraint, ____bottomLeft) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UpdateRoundedBoxAnchorConstraint, ____bottomRight) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UpdateRoundedBoxAnchorConstraint, ____interactableLength) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UpdateRoundedBoxAnchorConstraint, ____offset) == 0x44, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UpdateRoundedBoxAnchorConstraint) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
