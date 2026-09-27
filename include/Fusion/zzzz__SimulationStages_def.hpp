#pragma once
// IWYU pragma private; include "Fusion/SimulationStages.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SimulationStages)
// Forward declare root types
namespace Fusion {
struct SimulationStages;
}
// Write type traits
MARK_VAL_T(::Fusion::SimulationStages);
DEFINE_IL2CPP_CLASS(::Fusion::SimulationStages, "Fusion", "SimulationStages");
// [Flags]
// Dependencies 
namespace Fusion {
// Is value type: true
// CS Name: Fusion.SimulationStages
struct CORDL_TYPE SimulationStages {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SimulationStages_Unwrapped
enum struct __SimulationStages_Unwrapped : int32_t {
__E_Forward = static_cast<int32_t>(0x2),
__E_Resimulate = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SimulationStages_Unwrapped () const noexcept {
return static_cast<__SimulationStages_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SimulationStages() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SimulationStages(int32_t  value__) noexcept;

/// @brief Field Forward value: I32(2)
static ::Fusion::SimulationStages const Forward;

/// @brief Field Resimulate value: I32(4)
static ::Fusion::SimulationStages const Resimulate;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19359};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::SimulationStages, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Fusion::SimulationStages) == 0x4, "Size mismatch!");

} // namespace end def Fusion
