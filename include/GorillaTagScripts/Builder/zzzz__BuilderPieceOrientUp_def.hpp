#pragma once
// IWYU pragma private; include "GorillaTagScripts/Builder/BuilderPieceOrientUp.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BuilderPieceOrientUp)
namespace GlobalNamespace {
class IBuilderPieceComponent;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GorillaTagScripts::Builder {
class BuilderPieceOrientUp;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::Builder::BuilderPieceOrientUp*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::Builder::BuilderPieceOrientUp*, "GorillaTagScripts.Builder", "BuilderPieceOrientUp");
// Dependencies UnityEngine.MonoBehaviour
namespace GorillaTagScripts::Builder {
// Is value type: false
// CS Name: GorillaTagScripts.Builder.BuilderPieceOrientUp
class CORDL_TYPE BuilderPieceOrientUp : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field alwaysFaceUp, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_alwaysFaceUp, put=__cordl_internal_set_alwaysFaceUp)) ::UnityW<::UnityEngine::Transform>  alwaysFaceUp;

/// @brief Convert operator to "::GlobalNamespace::IBuilderPieceComponent"
constexpr operator  ::GlobalNamespace::IBuilderPieceComponent*() noexcept;

static inline ::GorillaTagScripts::Builder::BuilderPieceOrientUp* New_ctor() ;

/// @brief Method OnPieceActivate, addr 0x5c297ec, size 0x128, virtual true, abstract: false, final true
inline void OnPieceActivate() ;

/// @brief Method OnPieceCreate, addr 0x5c296bc, size 0x4, virtual true, abstract: false, final true
inline void OnPieceCreate(int32_t  pieceType, int32_t  pieceId) ;

/// @brief Method OnPieceDeactivate, addr 0x5c29914, size 0x4, virtual true, abstract: false, final true
inline void OnPieceDeactivate() ;

/// @brief Method OnPieceDestroy, addr 0x5c296c0, size 0x4, virtual true, abstract: false, final true
inline void OnPieceDestroy() ;

/// @brief Method OnPiecePlacementDeserialized, addr 0x5c296c4, size 0x128, virtual true, abstract: false, final true
inline void OnPiecePlacementDeserialized() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_alwaysFaceUp() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_alwaysFaceUp() ;

constexpr void __cordl_internal_set_alwaysFaceUp(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x5c29918, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::IBuilderPieceComponent"
constexpr ::GlobalNamespace::IBuilderPieceComponent* i___GlobalNamespace__IBuilderPieceComponent() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuilderPieceOrientUp() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderPieceOrientUp", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderPieceOrientUp(BuilderPieceOrientUp && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderPieceOrientUp", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderPieceOrientUp(BuilderPieceOrientUp const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4157};

/// [SerializeField]
/// @brief Field alwaysFaceUp, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___alwaysFaceUp;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceOrientUp, ___alwaysFaceUp) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::Builder::BuilderPieceOrientUp) == 0x28, "Size mismatch!");

} // namespace end def GorillaTagScripts::Builder
