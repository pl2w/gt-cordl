#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_ProcessorPerformanceLevel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_ProcessorPerformanceLevel)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_ProcessorPerformanceLevel;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_ProcessorPerformanceLevel);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_ProcessorPerformanceLevel, "", "OVRPlugin/ProcessorPerformanceLevel");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/ProcessorPerformanceLevel
struct CORDL_TYPE OVRPlugin_ProcessorPerformanceLevel {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRPlugin_ProcessorPerformanceLevel_Unwrapped
enum struct __OVRPlugin_ProcessorPerformanceLevel_Unwrapped : int32_t {
__E_PowerSavings = static_cast<int32_t>(0x0),
__E_SustainedLow = static_cast<int32_t>(0x1),
__E_SustainedHigh = static_cast<int32_t>(0x2),
__E_Boost = static_cast<int32_t>(0x3),
__E_EnumSize = static_cast<int32_t>(0x7fffffff),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRPlugin_ProcessorPerformanceLevel_Unwrapped () const noexcept {
return static_cast<__OVRPlugin_ProcessorPerformanceLevel_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_ProcessorPerformanceLevel() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_ProcessorPerformanceLevel(int32_t  value__) noexcept;

/// @brief Field Boost value: I32(3)
static ::GlobalNamespace::OVRPlugin_ProcessorPerformanceLevel const Boost;

/// @brief Field EnumSize value: I32(2147483647)
static ::GlobalNamespace::OVRPlugin_ProcessorPerformanceLevel const EnumSize;

/// @brief Field PowerSavings value: I32(0)
static ::GlobalNamespace::OVRPlugin_ProcessorPerformanceLevel const PowerSavings;

/// @brief Field SustainedHigh value: I32(2)
static ::GlobalNamespace::OVRPlugin_ProcessorPerformanceLevel const SustainedHigh;

/// @brief Field SustainedLow value: I32(1)
static ::GlobalNamespace::OVRPlugin_ProcessorPerformanceLevel const SustainedLow;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12079};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_ProcessorPerformanceLevel, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_ProcessorPerformanceLevel) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
