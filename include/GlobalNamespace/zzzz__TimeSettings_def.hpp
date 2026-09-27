#pragma once
// IWYU pragma private; include "GlobalNamespace/TimeSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TimeSettings)
// Forward declare root types
namespace GlobalNamespace {
struct TimeSettings;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TimeSettings);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TimeSettings, "", "TimeSettings");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: TimeSettings
struct CORDL_TYPE TimeSettings {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TimeSettings_Unwrapped
enum struct __TimeSettings_Unwrapped : int32_t {
__E_Static = static_cast<int32_t>(0x0),
__E_Normal = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TimeSettings_Unwrapped () const noexcept {
return static_cast<__TimeSettings_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TimeSettings() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr TimeSettings(int32_t  value__) noexcept;

/// @brief Field Normal value: I32(1)
static ::GlobalNamespace::TimeSettings const Normal;

/// @brief Field Static value: I32(0)
static ::GlobalNamespace::TimeSettings const Static;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2587};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TimeSettings, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TimeSettings) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
