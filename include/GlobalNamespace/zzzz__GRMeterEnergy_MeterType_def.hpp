#pragma once
// IWYU pragma private; include "GlobalNamespace/GRMeterEnergy_MeterType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GRMeterEnergy_MeterType)
// Forward declare root types
namespace GlobalNamespace {
struct GRMeterEnergy_MeterType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GRMeterEnergy_MeterType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRMeterEnergy_MeterType, "", "GRMeterEnergy/MeterType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GRMeterEnergy/MeterType
struct CORDL_TYPE GRMeterEnergy_MeterType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GRMeterEnergy_MeterType_Unwrapped
enum struct __GRMeterEnergy_MeterType_Unwrapped : int32_t {
__E_Linear = static_cast<int32_t>(0x0),
__E_Radial = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GRMeterEnergy_MeterType_Unwrapped () const noexcept {
return static_cast<__GRMeterEnergy_MeterType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GRMeterEnergy_MeterType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GRMeterEnergy_MeterType(int32_t  value__) noexcept;

/// @brief Field Linear value: I32(0)
static ::GlobalNamespace::GRMeterEnergy_MeterType const Linear;

/// @brief Field Radial value: I32(1)
static ::GlobalNamespace::GRMeterEnergy_MeterType const Radial;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1991};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRMeterEnergy_MeterType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRMeterEnergy_MeterType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
