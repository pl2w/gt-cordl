#pragma once
// IWYU pragma private; include "UnityEngine/TextEditor_DblClickSnapping.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextEditor_DblClickSnapping)
// Forward declare root types
namespace GlobalNamespace {
struct TextEditor_DblClickSnapping;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TextEditor_DblClickSnapping);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TextEditor_DblClickSnapping, "UnityEngine", "TextEditor/DblClickSnapping");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.TextEditor/DblClickSnapping
struct CORDL_TYPE TextEditor_DblClickSnapping {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __TextEditor_DblClickSnapping_Unwrapped
enum struct __TextEditor_DblClickSnapping_Unwrapped : uint8_t {
__E_WORDS = static_cast<uint8_t>(0x0u),
__E_PARAGRAPHS = static_cast<uint8_t>(0x1u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TextEditor_DblClickSnapping_Unwrapped () const noexcept {
return static_cast<__TextEditor_DblClickSnapping_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint8_t () const noexcept {
return static_cast<uint8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TextEditor_DblClickSnapping() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None, comment: None }]
constexpr TextEditor_DblClickSnapping(uint8_t  value__) noexcept;

/// @brief Field PARAGRAPHS value: U8(1)
static ::GlobalNamespace::TextEditor_DblClickSnapping const PARAGRAPHS;

/// @brief Field WORDS value: U8(0)
static ::GlobalNamespace::TextEditor_DblClickSnapping const WORDS;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28851};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field value__, offset: 0x0, size: 0x1, def value: None
 uint8_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TextEditor_DblClickSnapping, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TextEditor_DblClickSnapping) == 0x1, "Size mismatch!");

} // namespace end def GlobalNamespace
