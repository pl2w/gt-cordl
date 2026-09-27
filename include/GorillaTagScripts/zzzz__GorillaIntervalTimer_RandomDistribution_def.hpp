#pragma once
// IWYU pragma private; include "GorillaTagScripts/GorillaIntervalTimer_RandomDistribution.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GorillaIntervalTimer_RandomDistribution)
// Forward declare root types
namespace GlobalNamespace {
struct GorillaIntervalTimer_RandomDistribution;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GorillaIntervalTimer_RandomDistribution);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaIntervalTimer_RandomDistribution, "GorillaTagScripts", "GorillaIntervalTimer/RandomDistribution");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTagScripts.GorillaIntervalTimer/RandomDistribution
struct CORDL_TYPE GorillaIntervalTimer_RandomDistribution {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GorillaIntervalTimer_RandomDistribution_Unwrapped
enum struct __GorillaIntervalTimer_RandomDistribution_Unwrapped : int32_t {
__E_Uniform = static_cast<int32_t>(0x0),
__E_Normal = static_cast<int32_t>(0x1),
__E_Exponential = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GorillaIntervalTimer_RandomDistribution_Unwrapped () const noexcept {
return static_cast<__GorillaIntervalTimer_RandomDistribution_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GorillaIntervalTimer_RandomDistribution() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GorillaIntervalTimer_RandomDistribution(int32_t  value__) noexcept;

/// @brief Field Exponential value: I32(2)
static ::GlobalNamespace::GorillaIntervalTimer_RandomDistribution const Exponential;

/// @brief Field Normal value: I32(1)
static ::GlobalNamespace::GorillaIntervalTimer_RandomDistribution const Normal;

/// @brief Field Uniform value: I32(0)
static ::GlobalNamespace::GorillaIntervalTimer_RandomDistribution const Uniform;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3901};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaIntervalTimer_RandomDistribution, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaIntervalTimer_RandomDistribution) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
