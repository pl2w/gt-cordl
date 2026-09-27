#pragma once
// IWYU pragma private; include "VYaml/Emitter/SequenceStyle.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SequenceStyle)
// Forward declare root types
namespace VYaml::Emitter {
struct SequenceStyle;
}
// Write type traits
MARK_VAL_T(::VYaml::Emitter::SequenceStyle);
DEFINE_IL2CPP_CLASS(::VYaml::Emitter::SequenceStyle, "VYaml.Emitter", "SequenceStyle");
// Dependencies 
namespace VYaml::Emitter {
// Is value type: true
// CS Name: VYaml.Emitter.SequenceStyle
struct CORDL_TYPE SequenceStyle {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SequenceStyle_Unwrapped
enum struct __SequenceStyle_Unwrapped : int32_t {
__E_Block = static_cast<int32_t>(0x0),
__E_Flow = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SequenceStyle_Unwrapped () const noexcept {
return static_cast<__SequenceStyle_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SequenceStyle() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SequenceStyle(int32_t  value__) noexcept;

/// @brief Field Block value: I32(0)
static ::VYaml::Emitter::SequenceStyle const Block;

/// @brief Field Flow value: I32(1)
static ::VYaml::Emitter::SequenceStyle const Flow;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29044};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VYaml::Emitter::SequenceStyle, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::VYaml::Emitter::SequenceStyle) == 0x4, "Size mismatch!");

} // namespace end def VYaml::Emitter
