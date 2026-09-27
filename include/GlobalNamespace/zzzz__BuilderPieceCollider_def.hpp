#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderPieceCollider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(BuilderPieceCollider)
namespace GlobalNamespace {
class BuilderPiece;
}
// Forward declare root types
namespace GlobalNamespace {
class BuilderPieceCollider;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BuilderPieceCollider*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BuilderPieceCollider*, "", "BuilderPieceCollider");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: BuilderPieceCollider
class CORDL_TYPE BuilderPieceCollider : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field piece, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_piece, put=__cordl_internal_set_piece)) ::UnityW<::GlobalNamespace::BuilderPiece>  piece;

static inline ::GlobalNamespace::BuilderPieceCollider* New_ctor() ;

constexpr ::UnityW<::GlobalNamespace::BuilderPiece> const& __cordl_internal_get_piece() const;

constexpr ::UnityW<::GlobalNamespace::BuilderPiece>& __cordl_internal_get_piece() ;

constexpr void __cordl_internal_set_piece(::UnityW<::GlobalNamespace::BuilderPiece>  value) ;

/// @brief Method .ctor, addr 0x57c7718, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuilderPieceCollider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderPieceCollider", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderPieceCollider(BuilderPieceCollider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderPieceCollider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderPieceCollider(BuilderPieceCollider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1606};

/// @brief Field piece, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BuilderPiece>  ___piece;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BuilderPieceCollider, ___piece) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BuilderPieceCollider) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
