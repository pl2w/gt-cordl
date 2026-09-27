#pragma once
// IWYU pragma private; include "GlobalNamespace/IBuilderPieceComponent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IBuilderPieceComponent)
// Forward declare root types
namespace GlobalNamespace {
class IBuilderPieceComponent;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::IBuilderPieceComponent*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::IBuilderPieceComponent*, "", "IBuilderPieceComponent");
// Dependencies 
namespace GlobalNamespace {
// Is value type: false
// CS Name: IBuilderPieceComponent
class CORDL_TYPE IBuilderPieceComponent {
public:
// Declarations
/// @brief Method OnPieceActivate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnPieceActivate() ;

/// @brief Method OnPieceCreate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnPieceCreate(int32_t  pieceType, int32_t  pieceId) ;

/// @brief Method OnPieceDeactivate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnPieceDeactivate() ;

/// @brief Method OnPieceDestroy, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnPieceDestroy() ;

/// @brief Method OnPiecePlacementDeserialized, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnPiecePlacementDeserialized() ;

// Ctor Parameters [CppParam { name: "", ty: "IBuilderPieceComponent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IBuilderPieceComponent(IBuilderPieceComponent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1597};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
