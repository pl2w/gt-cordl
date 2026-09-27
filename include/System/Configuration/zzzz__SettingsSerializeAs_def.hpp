#pragma once
// IWYU pragma private; include "System/Configuration/SettingsSerializeAs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SettingsSerializeAs)
// Forward declare root types
namespace System::Configuration {
struct SettingsSerializeAs;
}
// Write type traits
MARK_VAL_T(::System::Configuration::SettingsSerializeAs);
DEFINE_IL2CPP_CLASS(::System::Configuration::SettingsSerializeAs, "System.Configuration", "SettingsSerializeAs");
// Dependencies 
namespace System::Configuration {
// Is value type: true
// CS Name: System.Configuration.SettingsSerializeAs
struct CORDL_TYPE SettingsSerializeAs {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SettingsSerializeAs_Unwrapped
enum struct __SettingsSerializeAs_Unwrapped : int32_t {
__E_Binary = static_cast<int32_t>(0x2),
__E_ProviderSpecific = static_cast<int32_t>(0x3),
__E_String = static_cast<int32_t>(0x0),
__E_Xml = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SettingsSerializeAs_Unwrapped () const noexcept {
return static_cast<__SettingsSerializeAs_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SettingsSerializeAs() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SettingsSerializeAs(int32_t  value__) noexcept;

/// @brief Field Binary value: I32(2)
static ::System::Configuration::SettingsSerializeAs const Binary;

/// @brief Field ProviderSpecific value: I32(3)
static ::System::Configuration::SettingsSerializeAs const ProviderSpecific;

/// @brief Field String value: I32(0)
static ::System::Configuration::SettingsSerializeAs const String;

/// @brief Field Xml value: I32(1)
static ::System::Configuration::SettingsSerializeAs const Xml;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10970};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Configuration::SettingsSerializeAs, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::System::Configuration::SettingsSerializeAs) == 0x4, "Size mismatch!");

} // namespace end def System::Configuration
