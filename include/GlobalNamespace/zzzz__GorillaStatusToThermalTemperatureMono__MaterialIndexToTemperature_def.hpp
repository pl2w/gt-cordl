#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaStatusToThermalTemperatureMono__MaterialIndexToTemperature.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GorillaStatusToThermalTemperatureMono__MaterialIndexToTemperature)
// Forward declare root types
namespace GlobalNamespace {
struct GorillaStatusToThermalTemperatureMono__MaterialIndexToTemperature;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GorillaStatusToThermalTemperatureMono__MaterialIndexToTemperature);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaStatusToThermalTemperatureMono__MaterialIndexToTemperature, "", "GorillaStatusToThermalTemperatureMono/_MaterialIndexToTemperature");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaStatusToThermalTemperatureMono/_MaterialIndexToTemperature
struct CORDL_TYPE GorillaStatusToThermalTemperatureMono__MaterialIndexToTemperature {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GorillaStatusToThermalTemperatureMono__MaterialIndexToTemperature() ;

// Ctor Parameters [CppParam { name: "matIndexes", ty: "::ArrayW<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "temperature", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr GorillaStatusToThermalTemperatureMono__MaterialIndexToTemperature(::ArrayW<int32_t>  matIndexes, float_t  temperature) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{837};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field matIndexes, offset: 0x0, size: 0x8, def value: None
 ::ArrayW<int32_t>  matIndexes;

/// @brief Field temperature, offset: 0x8, size: 0x4, def value: None
 float_t  temperature;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaStatusToThermalTemperatureMono__MaterialIndexToTemperature, matIndexes) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaStatusToThermalTemperatureMono__MaterialIndexToTemperature, temperature) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaStatusToThermalTemperatureMono__MaterialIndexToTemperature) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
