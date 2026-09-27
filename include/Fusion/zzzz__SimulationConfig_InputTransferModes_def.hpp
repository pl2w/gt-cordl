#pragma once
// IWYU pragma private; include "Fusion/SimulationConfig_InputTransferModes.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SimulationConfig_InputTransferModes)
// Forward declare root types
namespace GlobalNamespace {
struct SimulationConfig_InputTransferModes;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SimulationConfig_InputTransferModes);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SimulationConfig_InputTransferModes, "Fusion", "SimulationConfig/InputTransferModes");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Fusion.SimulationConfig/InputTransferModes
struct CORDL_TYPE SimulationConfig_InputTransferModes {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SimulationConfig_InputTransferModes_Unwrapped
enum struct __SimulationConfig_InputTransferModes_Unwrapped : int32_t {
__E_Redundancy = static_cast<int32_t>(0x0),
__E_RedundancyUncompressed = static_cast<int32_t>(0x2),
__E_LatestState = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SimulationConfig_InputTransferModes_Unwrapped () const noexcept {
return static_cast<__SimulationConfig_InputTransferModes_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SimulationConfig_InputTransferModes() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SimulationConfig_InputTransferModes(int32_t  value__) noexcept;

/// @brief Field LatestState value: I32(1)
static ::GlobalNamespace::SimulationConfig_InputTransferModes const LatestState;

/// @brief Field Redundancy value: I32(0)
static ::GlobalNamespace::SimulationConfig_InputTransferModes const Redundancy;

/// @brief Field RedundancyUncompressed value: I32(2)
static ::GlobalNamespace::SimulationConfig_InputTransferModes const RedundancyUncompressed;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19330};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SimulationConfig_InputTransferModes, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SimulationConfig_InputTransferModes) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
