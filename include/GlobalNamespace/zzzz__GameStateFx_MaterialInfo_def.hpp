#pragma once
// IWYU pragma private; include "GlobalNamespace/GameStateFx_MaterialInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GameStateFx_MaterialInfo_Entry_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(GameStateFx_MaterialInfo)
namespace GlobalNamespace {
struct MaterialInfo_GameStateFx_Entry;
}
// Forward declare root types
namespace GlobalNamespace {
struct GameStateFx_MaterialInfo;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GameStateFx_MaterialInfo);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameStateFx_MaterialInfo, "", "GameStateFx/MaterialInfo");
// Dependencies GameStateFx::MaterialInfo::Entry
namespace GlobalNamespace {
// Is value type: true
// CS Name: GameStateFx/MaterialInfo
struct CORDL_TYPE GameStateFx_MaterialInfo {
public:
// Declarations
using Entry = ::GlobalNamespace::MaterialInfo_GameStateFx_Entry;

// Ctor Parameters []
// @brief default ctor
constexpr GameStateFx_MaterialInfo() ;

// Ctor Parameters [CppParam { name: "entries", ty: "::ArrayW<::GlobalNamespace::MaterialInfo_GameStateFx_Entry>", modifiers: "", def_value: None, comment: None }]
constexpr GameStateFx_MaterialInfo(::ArrayW<::GlobalNamespace::MaterialInfo_GameStateFx_Entry>  entries) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{668};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field entries, offset: 0x0, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::MaterialInfo_GameStateFx_Entry>  entries;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameStateFx_MaterialInfo, entries) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GameStateFx_MaterialInfo) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
