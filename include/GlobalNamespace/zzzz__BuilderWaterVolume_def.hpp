#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderWaterVolume.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BuilderWaterVolume)
namespace GlobalNamespace {
class BuilderPiece;
}
namespace GlobalNamespace {
class IBuilderPieceComponent;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class BuilderWaterVolume;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BuilderWaterVolume*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BuilderWaterVolume*, "", "BuilderWaterVolume");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: BuilderWaterVolume
class CORDL_TYPE BuilderWaterVolume : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field floating, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_floating, put=__cordl_internal_set_floating)) ::UnityW<::UnityEngine::Transform>  floating;

/// @brief Field floatingObjects, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_floatingObjects, put=__cordl_internal_set_floatingObjects)) ::UnityW<::UnityEngine::Transform>  floatingObjects;

/// @brief Field piece, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_piece, put=__cordl_internal_set_piece)) ::UnityW<::GlobalNamespace::BuilderPiece>  piece;

/// @brief Field sunk, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_sunk, put=__cordl_internal_set_sunk)) ::UnityW<::UnityEngine::Transform>  sunk;

/// @brief Field waterMesh, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_waterMesh, put=__cordl_internal_set_waterMesh)) ::UnityW<::UnityEngine::GameObject>  waterMesh;

/// @brief Field waterVolume, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_waterVolume, put=__cordl_internal_set_waterVolume)) ::UnityW<::UnityEngine::GameObject>  waterVolume;

/// @brief Convert operator to "::GlobalNamespace::IBuilderPieceComponent"
constexpr operator  ::GlobalNamespace::IBuilderPieceComponent*() noexcept;

static inline ::GlobalNamespace::BuilderWaterVolume* New_ctor() ;

/// @brief Method OnPieceActivate, addr 0x57b4830, size 0x174, virtual true, abstract: false, final true
inline void OnPieceActivate() ;

/// @brief Method OnPieceCreate, addr 0x57b46b4, size 0x4, virtual true, abstract: false, final true
inline void OnPieceCreate(int32_t  pieceType, int32_t  pieceId) ;

/// @brief Method OnPieceDeactivate, addr 0x57b49a4, size 0xc0, virtual true, abstract: false, final true
inline void OnPieceDeactivate() ;

/// @brief Method OnPieceDestroy, addr 0x57b46b8, size 0x4, virtual true, abstract: false, final true
inline void OnPieceDestroy() ;

/// @brief Method OnPiecePlacementDeserialized, addr 0x57b46bc, size 0x174, virtual true, abstract: false, final true
inline void OnPiecePlacementDeserialized() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_floating() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_floating() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_floatingObjects() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_floatingObjects() ;

constexpr ::UnityW<::GlobalNamespace::BuilderPiece> const& __cordl_internal_get_piece() const;

constexpr ::UnityW<::GlobalNamespace::BuilderPiece>& __cordl_internal_get_piece() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_sunk() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_sunk() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_waterMesh() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_waterMesh() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_waterVolume() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_waterVolume() ;

constexpr void __cordl_internal_set_floating(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_floatingObjects(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_piece(::UnityW<::GlobalNamespace::BuilderPiece>  value) ;

constexpr void __cordl_internal_set_sunk(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_waterMesh(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_waterVolume(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x57b4a64, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::IBuilderPieceComponent"
constexpr ::GlobalNamespace::IBuilderPieceComponent* i___GlobalNamespace__IBuilderPieceComponent() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuilderWaterVolume() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderWaterVolume", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderWaterVolume(BuilderWaterVolume && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderWaterVolume", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderWaterVolume(BuilderWaterVolume const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1575};

/// [SerializeField]
/// @brief Field piece, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BuilderPiece>  ___piece;

/// [SerializeField]
/// @brief Field waterVolume, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___waterVolume;

/// [SerializeField]
/// @brief Field waterMesh, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___waterMesh;

/// [FormerlySerializedAs("lillyPads")]
/// [SerializeField]
/// @brief Field floatingObjects, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___floatingObjects;

/// [SerializeField]
/// @brief Field floating, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___floating;

/// [SerializeField]
/// @brief Field sunk, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___sunk;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BuilderWaterVolume, ___piece) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderWaterVolume, ___waterVolume) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderWaterVolume, ___waterMesh) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderWaterVolume, ___floatingObjects) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderWaterVolume, ___floating) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderWaterVolume, ___sunk) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BuilderWaterVolume) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
