#pragma once
// IWYU pragma private; include "Fusion/Histogram_QuantileEstimator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Histogram_QuantileEstimator)
// Forward declare root types
namespace GlobalNamespace {
struct Histogram_QuantileEstimator;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Histogram_QuantileEstimator);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Histogram_QuantileEstimator, "Fusion", "Histogram/QuantileEstimator");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Fusion.Histogram/QuantileEstimator
struct CORDL_TYPE Histogram_QuantileEstimator {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Histogram_QuantileEstimator_Unwrapped
enum struct __Histogram_QuantileEstimator_Unwrapped : int32_t {
__E_HyndmanFanType1 = static_cast<int32_t>(0x0),
__E_HyndmanFanType2 = static_cast<int32_t>(0x1),
__E_HyndmanFanType3 = static_cast<int32_t>(0x2),
__E_HyndmanFanType4 = static_cast<int32_t>(0x3),
__E_HyndmanFanType5 = static_cast<int32_t>(0x4),
__E_HyndmanFanType6 = static_cast<int32_t>(0x5),
__E_HyndmanFanType7 = static_cast<int32_t>(0x6),
__E_HyndmanFanType8 = static_cast<int32_t>(0x7),
__E_HyndmanFanType9 = static_cast<int32_t>(0x8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Histogram_QuantileEstimator_Unwrapped () const noexcept {
return static_cast<__Histogram_QuantileEstimator_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Histogram_QuantileEstimator() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Histogram_QuantileEstimator(int32_t  value__) noexcept;

/// @brief Field HyndmanFanType1 value: I32(0)
static ::GlobalNamespace::Histogram_QuantileEstimator const HyndmanFanType1;

/// @brief Field HyndmanFanType2 value: I32(1)
static ::GlobalNamespace::Histogram_QuantileEstimator const HyndmanFanType2;

/// @brief Field HyndmanFanType3 value: I32(2)
static ::GlobalNamespace::Histogram_QuantileEstimator const HyndmanFanType3;

/// @brief Field HyndmanFanType4 value: I32(3)
static ::GlobalNamespace::Histogram_QuantileEstimator const HyndmanFanType4;

/// @brief Field HyndmanFanType5 value: I32(4)
static ::GlobalNamespace::Histogram_QuantileEstimator const HyndmanFanType5;

/// @brief Field HyndmanFanType6 value: I32(5)
static ::GlobalNamespace::Histogram_QuantileEstimator const HyndmanFanType6;

/// @brief Field HyndmanFanType7 value: I32(6)
static ::GlobalNamespace::Histogram_QuantileEstimator const HyndmanFanType7;

/// @brief Field HyndmanFanType8 value: I32(7)
static ::GlobalNamespace::Histogram_QuantileEstimator const HyndmanFanType8;

/// @brief Field HyndmanFanType9 value: I32(8)
static ::GlobalNamespace::Histogram_QuantileEstimator const HyndmanFanType9;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19045};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Histogram_QuantileEstimator, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Histogram_QuantileEstimator) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
