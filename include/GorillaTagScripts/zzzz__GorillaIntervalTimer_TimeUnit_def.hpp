#pragma once
// IWYU pragma private; include "GorillaTagScripts/GorillaIntervalTimer_TimeUnit.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GorillaIntervalTimer_TimeUnit)
// Forward declare root types
namespace GlobalNamespace {
struct GorillaIntervalTimer_TimeUnit;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GorillaIntervalTimer_TimeUnit);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaIntervalTimer_TimeUnit, "GorillaTagScripts", "GorillaIntervalTimer/TimeUnit");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTagScripts.GorillaIntervalTimer/TimeUnit
struct CORDL_TYPE GorillaIntervalTimer_TimeUnit {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GorillaIntervalTimer_TimeUnit_Unwrapped
enum struct __GorillaIntervalTimer_TimeUnit_Unwrapped : int32_t {
__E_Seconds = static_cast<int32_t>(0x0),
__E_Minutes = static_cast<int32_t>(0x1),
__E_Hours = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GorillaIntervalTimer_TimeUnit_Unwrapped () const noexcept {
return static_cast<__GorillaIntervalTimer_TimeUnit_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GorillaIntervalTimer_TimeUnit() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GorillaIntervalTimer_TimeUnit(int32_t  value__) noexcept;

/// @brief Field Hours value: I32(2)
static ::GlobalNamespace::GorillaIntervalTimer_TimeUnit const Hours;

/// @brief Field Minutes value: I32(1)
static ::GlobalNamespace::GorillaIntervalTimer_TimeUnit const Minutes;

/// @brief Field Seconds value: I32(0)
static ::GlobalNamespace::GorillaIntervalTimer_TimeUnit const Seconds;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3900};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaIntervalTimer_TimeUnit, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaIntervalTimer_TimeUnit) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
