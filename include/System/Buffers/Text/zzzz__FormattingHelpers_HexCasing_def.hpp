#pragma once
// IWYU pragma private; include "System/Buffers/Text/FormattingHelpers_HexCasing.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FormattingHelpers_HexCasing)
// Forward declare root types
namespace GlobalNamespace {
struct FormattingHelpers_HexCasing;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::FormattingHelpers_HexCasing);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FormattingHelpers_HexCasing, "System.Buffers.Text", "FormattingHelpers/HexCasing");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Buffers.Text.FormattingHelpers/HexCasing
struct CORDL_TYPE FormattingHelpers_HexCasing {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint32_t;

/// @brief Nested struct __FormattingHelpers_HexCasing_Unwrapped
enum struct __FormattingHelpers_HexCasing_Unwrapped : uint32_t {
__E_Uppercase = static_cast<uint32_t>(0x0u),
__E_Lowercase = static_cast<uint32_t>(0x2020u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __FormattingHelpers_HexCasing_Unwrapped () const noexcept {
return static_cast<__FormattingHelpers_HexCasing_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint32_t () const noexcept {
return static_cast<uint32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr FormattingHelpers_HexCasing() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr FormattingHelpers_HexCasing(uint32_t  value__) noexcept;

/// @brief Field Lowercase value: U32(8224)
static ::GlobalNamespace::FormattingHelpers_HexCasing const Lowercase;

/// @brief Field Uppercase value: U32(0)
static ::GlobalNamespace::FormattingHelpers_HexCasing const Uppercase;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6973};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 uint32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FormattingHelpers_HexCasing, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FormattingHelpers_HexCasing) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
