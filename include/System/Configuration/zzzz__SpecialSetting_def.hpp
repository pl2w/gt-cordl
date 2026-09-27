#pragma once
// IWYU pragma private; include "System/Configuration/SpecialSetting.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SpecialSetting)
// Forward declare root types
namespace System::Configuration {
struct SpecialSetting;
}
// Write type traits
MARK_VAL_T(::System::Configuration::SpecialSetting);
DEFINE_IL2CPP_CLASS(::System::Configuration::SpecialSetting, "System.Configuration", "SpecialSetting");
// Dependencies 
namespace System::Configuration {
// Is value type: true
// CS Name: System.Configuration.SpecialSetting
struct CORDL_TYPE SpecialSetting {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SpecialSetting_Unwrapped
enum struct __SpecialSetting_Unwrapped : int32_t {
__E_ConnectionString = static_cast<int32_t>(0x0),
__E_WebServiceUrl = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SpecialSetting_Unwrapped () const noexcept {
return static_cast<__SpecialSetting_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SpecialSetting() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SpecialSetting(int32_t  value__) noexcept;

/// @brief Field ConnectionString value: I32(0)
static ::System::Configuration::SpecialSetting const ConnectionString;

/// @brief Field WebServiceUrl value: I32(1)
static ::System::Configuration::SpecialSetting const WebServiceUrl;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11054};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Configuration::SpecialSetting, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::System::Configuration::SpecialSetting) == 0x4, "Size mismatch!");

} // namespace end def System::Configuration
