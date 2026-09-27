#pragma once
// IWYU pragma private; include "GorillaTagScripts/Builder/SharedBlocksManager_LocalPublishInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SharedBlocksManager_LocalPublishInfo)
// Forward declare root types
namespace GlobalNamespace {
struct SharedBlocksManager_LocalPublishInfo;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SharedBlocksManager_LocalPublishInfo);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SharedBlocksManager_LocalPublishInfo, "GorillaTagScripts.Builder", "SharedBlocksManager/LocalPublishInfo");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTagScripts.Builder.SharedBlocksManager/LocalPublishInfo
struct CORDL_TYPE SharedBlocksManager_LocalPublishInfo {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr SharedBlocksManager_LocalPublishInfo() ;

// Ctor Parameters [CppParam { name: "mapID", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "publishTime", ty: "int64_t", modifiers: "", def_value: None, comment: None }]
constexpr SharedBlocksManager_LocalPublishInfo(::StringW  mapID, int64_t  publishTime) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4186};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field mapID, offset: 0x0, size: 0x8, def value: None
 ::StringW  mapID;

/// @brief Field publishTime, offset: 0x8, size: 0x8, def value: None
 int64_t  publishTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SharedBlocksManager_LocalPublishInfo, mapID) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SharedBlocksManager_LocalPublishInfo, publishTime) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SharedBlocksManager_LocalPublishInfo) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
