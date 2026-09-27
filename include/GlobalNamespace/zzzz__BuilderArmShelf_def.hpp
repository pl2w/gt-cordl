#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderArmShelf.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(BuilderArmShelf)
namespace GlobalNamespace {
class BuilderPiece;
}
namespace GlobalNamespace {
class VRRig;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class BuilderArmShelf;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BuilderArmShelf*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BuilderArmShelf*, "", "BuilderArmShelf");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: BuilderArmShelf
class CORDL_TYPE BuilderArmShelf : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field ownerRig, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_ownerRig, put=__cordl_internal_set_ownerRig)) ::UnityW<::GlobalNamespace::VRRig>  ownerRig;

/// @brief Field piece, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_piece, put=__cordl_internal_set_piece)) ::UnityW<::GlobalNamespace::BuilderPiece>  piece;

/// @brief Field pieceAnchor, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_pieceAnchor, put=__cordl_internal_set_pieceAnchor)) ::UnityW<::UnityEngine::Transform>  pieceAnchor;

/// @brief Method CanAttachToArmPiece, addr 0x57b5a00, size 0x90, virtual false, abstract: false, final false
inline bool CanAttachToArmPiece() ;

/// @brief Method DropAttachedPieces, addr 0x57b5a90, size 0x3b4, virtual false, abstract: false, final false
inline void DropAttachedPieces() ;

/// @brief Method IsOwnedLocally, addr 0x57b5978, size 0x88, virtual false, abstract: false, final false
inline bool IsOwnedLocally() ;

static inline ::GlobalNamespace::BuilderArmShelf* New_ctor() ;

/// @brief Method Start, addr 0x57b5920, size 0x58, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_ownerRig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_ownerRig() ;

constexpr ::UnityW<::GlobalNamespace::BuilderPiece> const& __cordl_internal_get_piece() const;

constexpr ::UnityW<::GlobalNamespace::BuilderPiece>& __cordl_internal_get_piece() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_pieceAnchor() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_pieceAnchor() ;

constexpr void __cordl_internal_set_ownerRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_piece(::UnityW<::GlobalNamespace::BuilderPiece>  value) ;

constexpr void __cordl_internal_set_pieceAnchor(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x57b5e44, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuilderArmShelf() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderArmShelf", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderArmShelf(BuilderArmShelf && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderArmShelf", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderArmShelf(BuilderArmShelf const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1580};

/// [HideInInspector]
/// @brief Field piece, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BuilderPiece>  ___piece;

/// @brief Field pieceAnchor, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___pieceAnchor;

/// @brief Field ownerRig, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___ownerRig;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BuilderArmShelf, ___piece) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderArmShelf, ___pieceAnchor) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderArmShelf, ___ownerRig) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BuilderArmShelf) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
