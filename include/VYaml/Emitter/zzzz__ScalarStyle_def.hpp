#pragma once
// IWYU pragma private; include "VYaml/Emitter/ScalarStyle.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ScalarStyle)
// Forward declare root types
namespace VYaml::Emitter {
struct ScalarStyle;
}
// Write type traits
MARK_VAL_T(::VYaml::Emitter::ScalarStyle);
DEFINE_IL2CPP_CLASS(::VYaml::Emitter::ScalarStyle, "VYaml.Emitter", "ScalarStyle");
// Dependencies 
namespace VYaml::Emitter {
// Is value type: true
// CS Name: VYaml.Emitter.ScalarStyle
struct CORDL_TYPE ScalarStyle {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ScalarStyle_Unwrapped
enum struct __ScalarStyle_Unwrapped : int32_t {
__E_Any = static_cast<int32_t>(0x0),
__E_Plain = static_cast<int32_t>(0x1),
__E_SingleQuoted = static_cast<int32_t>(0x2),
__E_DoubleQuoted = static_cast<int32_t>(0x3),
__E_Literal = static_cast<int32_t>(0x4),
__E_Folded = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ScalarStyle_Unwrapped () const noexcept {
return static_cast<__ScalarStyle_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ScalarStyle() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ScalarStyle(int32_t  value__) noexcept;

/// @brief Field Any value: I32(0)
static ::VYaml::Emitter::ScalarStyle const Any;

/// @brief Field DoubleQuoted value: I32(3)
static ::VYaml::Emitter::ScalarStyle const DoubleQuoted;

/// @brief Field Folded value: I32(5)
static ::VYaml::Emitter::ScalarStyle const Folded;

/// @brief Field Literal value: I32(4)
static ::VYaml::Emitter::ScalarStyle const Literal;

/// @brief Field Plain value: I32(1)
static ::VYaml::Emitter::ScalarStyle const Plain;

/// @brief Field SingleQuoted value: I32(2)
static ::VYaml::Emitter::ScalarStyle const SingleQuoted;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29043};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VYaml::Emitter::ScalarStyle, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::VYaml::Emitter::ScalarStyle) == 0x4, "Size mismatch!");

} // namespace end def VYaml::Emitter
