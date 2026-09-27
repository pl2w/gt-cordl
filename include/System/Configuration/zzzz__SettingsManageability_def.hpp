#pragma once
// IWYU pragma private; include "System/Configuration/SettingsManageability.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SettingsManageability)
// Forward declare root types
namespace System::Configuration {
struct SettingsManageability;
}
// Write type traits
MARK_VAL_T(::System::Configuration::SettingsManageability);
DEFINE_IL2CPP_CLASS(::System::Configuration::SettingsManageability, "System.Configuration", "SettingsManageability");
// Dependencies 
namespace System::Configuration {
// Is value type: true
// CS Name: System.Configuration.SettingsManageability
struct CORDL_TYPE SettingsManageability {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SettingsManageability_Unwrapped
enum struct __SettingsManageability_Unwrapped : int32_t {
__E_Roaming = static_cast<int32_t>(0x0),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SettingsManageability_Unwrapped () const noexcept {
return static_cast<__SettingsManageability_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SettingsManageability() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SettingsManageability(int32_t  value__) noexcept;

/// @brief Field Roaming value: I32(0)
static ::System::Configuration::SettingsManageability const Roaming;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11046};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Configuration::SettingsManageability, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::System::Configuration::SettingsManageability) == 0x4, "Size mismatch!");

} // namespace end def System::Configuration
