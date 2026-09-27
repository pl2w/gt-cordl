#pragma once
// IWYU pragma private; include "GlobalNamespace/ProgressionManager_MothershipItemSummary.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ProgressionManager_MothershipItemSummary)
// Forward declare root types
namespace GlobalNamespace {
struct ProgressionManager_MothershipItemSummary;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ProgressionManager_MothershipItemSummary);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionManager_MothershipItemSummary, "", "ProgressionManager/MothershipItemSummary");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: ProgressionManager/MothershipItemSummary
struct CORDL_TYPE ProgressionManager_MothershipItemSummary {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr ProgressionManager_MothershipItemSummary() ;

// Ctor Parameters [CppParam { name: "Name", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "EntitlementId", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "InGameId", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Quantity", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ProgressionManager_MothershipItemSummary(::StringW  Name, ::StringW  EntitlementId, ::StringW  InGameId, int32_t  Quantity) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2401};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field Name, offset: 0x0, size: 0x8, def value: None
 ::StringW  Name;

/// @brief Field EntitlementId, offset: 0x8, size: 0x8, def value: None
 ::StringW  EntitlementId;

/// @brief Field InGameId, offset: 0x10, size: 0x8, def value: None
 ::StringW  InGameId;

/// @brief Field Quantity, offset: 0x18, size: 0x4, def value: None
 int32_t  Quantity;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProgressionManager_MothershipItemSummary, Name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager_MothershipItemSummary, EntitlementId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager_MothershipItemSummary, InGameId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionManager_MothershipItemSummary, Quantity) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProgressionManager_MothershipItemSummary) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
