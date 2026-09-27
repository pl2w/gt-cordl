#pragma once
// IWYU pragma private; include "VYaml/Annotations/NamingConvention.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NamingConvention)
// Forward declare root types
namespace VYaml::Annotations {
struct NamingConvention;
}
// Write type traits
MARK_VAL_T(::VYaml::Annotations::NamingConvention);
DEFINE_IL2CPP_CLASS(::VYaml::Annotations::NamingConvention, "VYaml.Annotations", "NamingConvention");
// Dependencies 
namespace VYaml::Annotations {
// Is value type: true
// CS Name: VYaml.Annotations.NamingConvention
struct CORDL_TYPE NamingConvention {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __NamingConvention_Unwrapped
enum struct __NamingConvention_Unwrapped : int32_t {
__E_LowerCamelCase = static_cast<int32_t>(0x0),
__E_UpperCamelCase = static_cast<int32_t>(0x1),
__E_SnakeCase = static_cast<int32_t>(0x2),
__E_KebabCase = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NamingConvention_Unwrapped () const noexcept {
return static_cast<__NamingConvention_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr NamingConvention() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr NamingConvention(int32_t  value__) noexcept;

/// @brief Field KebabCase value: I32(3)
static ::VYaml::Annotations::NamingConvention const KebabCase;

/// @brief Field LowerCamelCase value: I32(0)
static ::VYaml::Annotations::NamingConvention const LowerCamelCase;

/// @brief Field SnakeCase value: I32(2)
static ::VYaml::Annotations::NamingConvention const SnakeCase;

/// @brief Field UpperCamelCase value: I32(1)
static ::VYaml::Annotations::NamingConvention const UpperCamelCase;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29047};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VYaml::Annotations::NamingConvention, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::VYaml::Annotations::NamingConvention) == 0x4, "Size mismatch!");

} // namespace end def VYaml::Annotations
