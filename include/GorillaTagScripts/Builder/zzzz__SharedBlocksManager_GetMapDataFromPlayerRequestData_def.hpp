#pragma once
// IWYU pragma private; include "GorillaTagScripts/Builder/SharedBlocksManager_GetMapDataFromPlayerRequestData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(SharedBlocksManager_GetMapDataFromPlayerRequestData)
namespace GorillaTagScripts::Builder {
class SharedBlocksManager_BlocksMapRequestCallback;
}
// Forward declare root types
namespace GlobalNamespace {
struct SharedBlocksManager_GetMapDataFromPlayerRequestData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SharedBlocksManager_GetMapDataFromPlayerRequestData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SharedBlocksManager_GetMapDataFromPlayerRequestData, "GorillaTagScripts.Builder", "SharedBlocksManager/GetMapDataFromPlayerRequestData");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTagScripts.Builder.SharedBlocksManager/GetMapDataFromPlayerRequestData
struct CORDL_TYPE SharedBlocksManager_GetMapDataFromPlayerRequestData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr SharedBlocksManager_GetMapDataFromPlayerRequestData() ;

// Ctor Parameters [CppParam { name: "CreatorID", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "MapScan", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Callback", ty: "::GorillaTagScripts::Builder::SharedBlocksManager_BlocksMapRequestCallback*", modifiers: "", def_value: None, comment: None }]
constexpr SharedBlocksManager_GetMapDataFromPlayerRequestData(::StringW  CreatorID, ::StringW  MapScan, ::GorillaTagScripts::Builder::SharedBlocksManager_BlocksMapRequestCallback*  Callback) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4197};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field CreatorID, offset: 0x0, size: 0x8, def value: None
 ::StringW  CreatorID;

/// @brief Field MapScan, offset: 0x8, size: 0x8, def value: None
 ::StringW  MapScan;

/// @brief Field Callback, offset: 0x10, size: 0x8, def value: None
 ::GorillaTagScripts::Builder::SharedBlocksManager_BlocksMapRequestCallback*  Callback;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SharedBlocksManager_GetMapDataFromPlayerRequestData, CreatorID) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SharedBlocksManager_GetMapDataFromPlayerRequestData, MapScan) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SharedBlocksManager_GetMapDataFromPlayerRequestData, Callback) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SharedBlocksManager_GetMapDataFromPlayerRequestData) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
