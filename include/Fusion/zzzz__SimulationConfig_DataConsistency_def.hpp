#pragma once
// IWYU pragma private; include "Fusion/SimulationConfig_DataConsistency.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SimulationConfig_DataConsistency)
// Forward declare root types
namespace GlobalNamespace {
struct SimulationConfig_DataConsistency;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SimulationConfig_DataConsistency);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SimulationConfig_DataConsistency, "Fusion", "SimulationConfig/DataConsistency");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Fusion.SimulationConfig/DataConsistency
struct CORDL_TYPE SimulationConfig_DataConsistency {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SimulationConfig_DataConsistency_Unwrapped
enum struct __SimulationConfig_DataConsistency_Unwrapped : int32_t {
__E_Full = static_cast<int32_t>(0x0),
__E_Eventual = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SimulationConfig_DataConsistency_Unwrapped () const noexcept {
return static_cast<__SimulationConfig_DataConsistency_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SimulationConfig_DataConsistency() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SimulationConfig_DataConsistency(int32_t  value__) noexcept;

/// @brief Field Eventual value: I32(1)
static ::GlobalNamespace::SimulationConfig_DataConsistency const Eventual;

/// @brief Field Full value: I32(0)
static ::GlobalNamespace::SimulationConfig_DataConsistency const Full;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19331};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SimulationConfig_DataConsistency, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SimulationConfig_DataConsistency) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
