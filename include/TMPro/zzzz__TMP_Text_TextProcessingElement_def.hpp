#pragma once
// IWYU pragma private; include "TMPro/TMP_Text_TextProcessingElement.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "TMPro/zzzz__TextProcessingElementType_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TMP_Text_TextProcessingElement)
// Forward declare root types
namespace GlobalNamespace {
struct TMP_Text_TextProcessingElement;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TMP_Text_TextProcessingElement);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TMP_Text_TextProcessingElement, "TMPro", "TMP_Text/TextProcessingElement");
// [DebuggerDisplay("Unicode ({unicode})  \'{(char)unicode}\'")]
// Dependencies TMPro.TextProcessingElementType
namespace GlobalNamespace {
// Is value type: true
// CS Name: TMPro.TMP_Text/TextProcessingElement
struct CORDL_TYPE TMP_Text_TextProcessingElement {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr TMP_Text_TextProcessingElement() ;

// Ctor Parameters [CppParam { name: "elementType", ty: "::TMPro::TextProcessingElementType", modifiers: "", def_value: None, comment: None }, CppParam { name: "unicode", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "stringIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr TMP_Text_TextProcessingElement(::TMPro::TextProcessingElementType  elementType, uint32_t  unicode, int32_t  stringIndex, int32_t  length) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23032};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field elementType, offset: 0x0, size: 0x4, def value: None
 ::TMPro::TextProcessingElementType  elementType;

/// @brief Field unicode, offset: 0x4, size: 0x4, def value: None
 uint32_t  unicode;

/// @brief Field stringIndex, offset: 0x8, size: 0x4, def value: None
 int32_t  stringIndex;

/// @brief Field length, offset: 0xc, size: 0x4, def value: None
 int32_t  length;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TMP_Text_TextProcessingElement, elementType) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TMP_Text_TextProcessingElement, unicode) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TMP_Text_TextProcessingElement, stringIndex) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TMP_Text_TextProcessingElement, length) == 0xc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TMP_Text_TextProcessingElement) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
