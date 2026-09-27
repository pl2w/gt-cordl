#pragma once
// IWYU pragma private; include "GorillaTagScripts/Builder/SharedBlocksManager_StartingMapConfig.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SharedBlocksManager_StartingMapConfig)
// Forward declare root types
namespace GlobalNamespace {
struct SharedBlocksManager_StartingMapConfig;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SharedBlocksManager_StartingMapConfig);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SharedBlocksManager_StartingMapConfig, "GorillaTagScripts.Builder", "SharedBlocksManager/StartingMapConfig");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTagScripts.Builder.SharedBlocksManager/StartingMapConfig
struct CORDL_TYPE SharedBlocksManager_StartingMapConfig {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr SharedBlocksManager_StartingMapConfig() ;

// Ctor Parameters [CppParam { name: "pageNumber", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "pageSize", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "sortMethod", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "useMapID", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "mapID", ty: "::StringW", modifiers: "", def_value: None, comment: None }]
constexpr SharedBlocksManager_StartingMapConfig(int32_t  pageNumber, int32_t  pageSize, ::StringW  sortMethod, bool  useMapID, ::StringW  mapID) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4191};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field pageNumber, offset: 0x0, size: 0x4, def value: None
 int32_t  pageNumber;

/// @brief Field pageSize, offset: 0x4, size: 0x4, def value: None
 int32_t  pageSize;

/// @brief Field sortMethod, offset: 0x8, size: 0x8, def value: None
 ::StringW  sortMethod;

/// @brief Field useMapID, offset: 0x10, size: 0x1, def value: None
 bool  useMapID;

/// @brief Field mapID, offset: 0x18, size: 0x8, def value: None
 ::StringW  mapID;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SharedBlocksManager_StartingMapConfig, pageNumber) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SharedBlocksManager_StartingMapConfig, pageSize) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SharedBlocksManager_StartingMapConfig, sortMethod) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SharedBlocksManager_StartingMapConfig, useMapID) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SharedBlocksManager_StartingMapConfig, mapID) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SharedBlocksManager_StartingMapConfig) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
