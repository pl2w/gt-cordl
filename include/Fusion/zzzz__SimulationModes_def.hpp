#pragma once
// IWYU pragma private; include "Fusion/SimulationModes.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SimulationModes)
// Forward declare root types
namespace Fusion {
struct SimulationModes;
}
// Write type traits
MARK_VAL_T(::Fusion::SimulationModes);
DEFINE_IL2CPP_CLASS(::Fusion::SimulationModes, "Fusion", "SimulationModes");
// [Flags]
// Dependencies 
namespace Fusion {
// Is value type: true
// CS Name: Fusion.SimulationModes
struct CORDL_TYPE SimulationModes {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SimulationModes_Unwrapped
enum struct __SimulationModes_Unwrapped : int32_t {
__E_Server = static_cast<int32_t>(0x1),
__E_Host = static_cast<int32_t>(0x2),
__E_Client = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SimulationModes_Unwrapped () const noexcept {
return static_cast<__SimulationModes_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SimulationModes() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SimulationModes(int32_t  value__) noexcept;

/// @brief Field Client value: I32(4)
static ::Fusion::SimulationModes const Client;

/// @brief Field Host value: I32(2)
static ::Fusion::SimulationModes const Host;

/// @brief Field Server value: I32(1)
static ::Fusion::SimulationModes const Server;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19354};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::SimulationModes, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Fusion::SimulationModes) == 0x4, "Size mismatch!");

} // namespace end def Fusion
