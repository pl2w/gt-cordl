#pragma once
// IWYU pragma private; include "System/Configuration/ConfigurationElementCollectionType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ConfigurationElementCollectionType)
// Forward declare root types
namespace System::Configuration {
struct ConfigurationElementCollectionType;
}
// Write type traits
MARK_VAL_T(::System::Configuration::ConfigurationElementCollectionType);
DEFINE_IL2CPP_CLASS(::System::Configuration::ConfigurationElementCollectionType, "System.Configuration", "ConfigurationElementCollectionType");
// Dependencies 
namespace System::Configuration {
// Is value type: true
// CS Name: System.Configuration.ConfigurationElementCollectionType
struct CORDL_TYPE ConfigurationElementCollectionType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ConfigurationElementCollectionType_Unwrapped
enum struct __ConfigurationElementCollectionType_Unwrapped : int32_t {
__E_AddRemoveClearMap = static_cast<int32_t>(0x1),
__E_AddRemoveClearMapAlternate = static_cast<int32_t>(0x3),
__E_BasicMap = static_cast<int32_t>(0x0),
__E_BasicMapAlternate = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ConfigurationElementCollectionType_Unwrapped () const noexcept {
return static_cast<__ConfigurationElementCollectionType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ConfigurationElementCollectionType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ConfigurationElementCollectionType(int32_t  value__) noexcept;

/// @brief Field AddRemoveClearMap value: I32(1)
static ::System::Configuration::ConfigurationElementCollectionType const AddRemoveClearMap;

/// @brief Field AddRemoveClearMapAlternate value: I32(3)
static ::System::Configuration::ConfigurationElementCollectionType const AddRemoveClearMapAlternate;

/// @brief Field BasicMap value: I32(0)
static ::System::Configuration::ConfigurationElementCollectionType const BasicMap;

/// @brief Field BasicMapAlternate value: I32(2)
static ::System::Configuration::ConfigurationElementCollectionType const BasicMapAlternate;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{33067};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Configuration::ConfigurationElementCollectionType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::System::Configuration::ConfigurationElementCollectionType) == 0x4, "Size mismatch!");

} // namespace end def System::Configuration
