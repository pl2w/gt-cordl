#pragma once
// IWYU pragma private; include "GlobalNamespace/GamePlayerLocal_SlotRecoveryData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GamePlayerLocal_SlotRecoveryData)
// Forward declare root types
namespace GlobalNamespace {
struct GamePlayerLocal_SlotRecoveryData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GamePlayerLocal_SlotRecoveryData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GamePlayerLocal_SlotRecoveryData, "", "GamePlayerLocal/SlotRecoveryData");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GamePlayerLocal/SlotRecoveryData
struct CORDL_TYPE GamePlayerLocal_SlotRecoveryData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GamePlayerLocal_SlotRecoveryData() ;

// Ctor Parameters [CppParam { name: "entityTypeId", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "createData", ty: "int64_t", modifiers: "", def_value: None, comment: None }]
constexpr GamePlayerLocal_SlotRecoveryData(int32_t  entityTypeId, int64_t  createData) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1788};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field entityTypeId, offset: 0x0, size: 0x4, def value: None
 int32_t  entityTypeId;

/// @brief Field createData, offset: 0x8, size: 0x8, def value: None
 int64_t  createData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GamePlayerLocal_SlotRecoveryData, entityTypeId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GamePlayerLocal_SlotRecoveryData, createData) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GamePlayerLocal_SlotRecoveryData) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
