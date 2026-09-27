#pragma once
// IWYU pragma private; include "Pathfinding/Util/TileHandler_CuttingResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/zzzz__Int3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TileHandler_CuttingResult)
namespace Pathfinding {
struct Int3;
}
// Forward declare root types
namespace GlobalNamespace {
struct TileHandler_CuttingResult;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TileHandler_CuttingResult);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TileHandler_CuttingResult, "Pathfinding.Util", "TileHandler/CuttingResult");
// Dependencies Pathfinding.Int3
namespace GlobalNamespace {
// Is value type: true
// CS Name: Pathfinding.Util.TileHandler/CuttingResult
struct CORDL_TYPE TileHandler_CuttingResult {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr TileHandler_CuttingResult() ;

// Ctor Parameters [CppParam { name: "verts", ty: "::ArrayW<::Pathfinding::Int3>", modifiers: "", def_value: None, comment: None }, CppParam { name: "tris", ty: "::ArrayW<int32_t>", modifiers: "", def_value: None, comment: None }]
constexpr TileHandler_CuttingResult(::ArrayW<::Pathfinding::Int3>  verts, ::ArrayW<int32_t>  tris) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21478};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field verts, offset: 0x0, size: 0x8, def value: None
 ::ArrayW<::Pathfinding::Int3>  verts;

/// @brief Field tris, offset: 0x8, size: 0x8, def value: None
 ::ArrayW<int32_t>  tris;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TileHandler_CuttingResult, verts) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TileHandler_CuttingResult, tris) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TileHandler_CuttingResult) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
