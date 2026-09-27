#pragma once
// IWYU pragma private; include "System/Buffers/Text/Utf8Parser_ParseNumberOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Utf8Parser_ParseNumberOptions)
// Forward declare root types
namespace GlobalNamespace {
struct Utf8Parser_ParseNumberOptions;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Utf8Parser_ParseNumberOptions);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Utf8Parser_ParseNumberOptions, "System.Buffers.Text", "Utf8Parser/ParseNumberOptions");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Buffers.Text.Utf8Parser/ParseNumberOptions
struct CORDL_TYPE Utf8Parser_ParseNumberOptions {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Utf8Parser_ParseNumberOptions_Unwrapped
enum struct __Utf8Parser_ParseNumberOptions_Unwrapped : int32_t {
__E_AllowExponent = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Utf8Parser_ParseNumberOptions_Unwrapped () const noexcept {
return static_cast<__Utf8Parser_ParseNumberOptions_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Utf8Parser_ParseNumberOptions() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Utf8Parser_ParseNumberOptions(int32_t  value__) noexcept;

/// @brief Field AllowExponent value: I32(1)
static ::GlobalNamespace::Utf8Parser_ParseNumberOptions const AllowExponent;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6979};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Utf8Parser_ParseNumberOptions, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Utf8Parser_ParseNumberOptions) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
