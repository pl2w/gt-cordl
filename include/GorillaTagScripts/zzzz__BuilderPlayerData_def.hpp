#pragma once
// IWYU pragma private; include "GorillaTagScripts/BuilderPlayerData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BuilderPlayerData)
// Forward declare root types
namespace GorillaTagScripts {
struct BuilderPlayerData;
}
// Write type traits
MARK_VAL_T(::GorillaTagScripts::BuilderPlayerData);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::BuilderPlayerData, "GorillaTagScripts", "BuilderPlayerData");
// Dependencies 
namespace GorillaTagScripts {
// Is value type: true
// CS Name: GorillaTagScripts.BuilderPlayerData
struct CORDL_TYPE BuilderPlayerData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr BuilderPlayerData() ;

// Ctor Parameters [CppParam { name: "playerActorNumber", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "scale", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr BuilderPlayerData(int32_t  playerActorNumber, float_t  scale) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3952};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field playerActorNumber, offset: 0x0, size: 0x4, def value: None
 int32_t  playerActorNumber;

/// @brief Field scale, offset: 0x4, size: 0x4, def value: None
 float_t  scale;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::BuilderPlayerData, playerActorNumber) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderPlayerData, scale) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::BuilderPlayerData) == 0x8, "Size mismatch!");

} // namespace end def GorillaTagScripts
