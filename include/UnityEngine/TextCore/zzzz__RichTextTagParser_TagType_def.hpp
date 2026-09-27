#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/RichTextTagParser_TagType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RichTextTagParser_TagType)
// Forward declare root types
namespace GlobalNamespace {
struct RichTextTagParser_TagType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::RichTextTagParser_TagType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RichTextTagParser_TagType, "UnityEngine.TextCore", "RichTextTagParser/TagType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.TextCore.RichTextTagParser/TagType
struct CORDL_TYPE RichTextTagParser_TagType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __RichTextTagParser_TagType_Unwrapped
enum struct __RichTextTagParser_TagType_Unwrapped : int32_t {
__E_Hyperlink = static_cast<int32_t>(0x0),
__E_Align = static_cast<int32_t>(0x1),
__E_AllCaps = static_cast<int32_t>(0x2),
__E_Alpha = static_cast<int32_t>(0x3),
__E_Bold = static_cast<int32_t>(0x4),
__E_Br = static_cast<int32_t>(0x5),
__E_Color = static_cast<int32_t>(0x6),
__E_CSpace = static_cast<int32_t>(0x7),
__E_Font = static_cast<int32_t>(0x8),
__E_FontWeight = static_cast<int32_t>(0x9),
__E_Italic = static_cast<int32_t>(0xa),
__E_Indent = static_cast<int32_t>(0xb),
__E_LineHeight = static_cast<int32_t>(0xc),
__E_LineIndent = static_cast<int32_t>(0xd),
__E_Link = static_cast<int32_t>(0xe),
__E_Lowercase = static_cast<int32_t>(0xf),
__E_Mark = static_cast<int32_t>(0x10),
__E_Mspace = static_cast<int32_t>(0x11),
__E_NoBr = static_cast<int32_t>(0x12),
__E_NoParse = static_cast<int32_t>(0x13),
__E_Strikethrough = static_cast<int32_t>(0x14),
__E_Size = static_cast<int32_t>(0x15),
__E_SmallCaps = static_cast<int32_t>(0x16),
__E_Space = static_cast<int32_t>(0x17),
__E_Sprite = static_cast<int32_t>(0x18),
__E_Style = static_cast<int32_t>(0x19),
__E_Subscript = static_cast<int32_t>(0x1a),
__E_Superscript = static_cast<int32_t>(0x1b),
__E_Underline = static_cast<int32_t>(0x1c),
__E_Uppercase = static_cast<int32_t>(0x1d),
__E_Unknown = static_cast<int32_t>(0x1e),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RichTextTagParser_TagType_Unwrapped () const noexcept {
return static_cast<__RichTextTagParser_TagType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr RichTextTagParser_TagType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr RichTextTagParser_TagType(int32_t  value__) noexcept;

/// @brief Field Align value: I32(1)
static ::GlobalNamespace::RichTextTagParser_TagType const Align;

/// @brief Field AllCaps value: I32(2)
static ::GlobalNamespace::RichTextTagParser_TagType const AllCaps;

/// @brief Field Alpha value: I32(3)
static ::GlobalNamespace::RichTextTagParser_TagType const Alpha;

/// @brief Field Bold value: I32(4)
static ::GlobalNamespace::RichTextTagParser_TagType const Bold;

/// @brief Field Br value: I32(5)
static ::GlobalNamespace::RichTextTagParser_TagType const Br;

/// @brief Field CSpace value: I32(7)
static ::GlobalNamespace::RichTextTagParser_TagType const CSpace;

/// @brief Field Color value: I32(6)
static ::GlobalNamespace::RichTextTagParser_TagType const Color;

/// @brief Field Font value: I32(8)
static ::GlobalNamespace::RichTextTagParser_TagType const Font;

/// @brief Field FontWeight value: I32(9)
static ::GlobalNamespace::RichTextTagParser_TagType const FontWeight;

/// @brief Field Hyperlink value: I32(0)
static ::GlobalNamespace::RichTextTagParser_TagType const Hyperlink;

/// @brief Field Indent value: I32(11)
static ::GlobalNamespace::RichTextTagParser_TagType const Indent;

/// @brief Field Italic value: I32(10)
static ::GlobalNamespace::RichTextTagParser_TagType const Italic;

/// @brief Field LineHeight value: I32(12)
static ::GlobalNamespace::RichTextTagParser_TagType const LineHeight;

/// @brief Field LineIndent value: I32(13)
static ::GlobalNamespace::RichTextTagParser_TagType const LineIndent;

/// @brief Field Link value: I32(14)
static ::GlobalNamespace::RichTextTagParser_TagType const Link;

/// @brief Field Lowercase value: I32(15)
static ::GlobalNamespace::RichTextTagParser_TagType const Lowercase;

/// @brief Field Mark value: I32(16)
static ::GlobalNamespace::RichTextTagParser_TagType const Mark;

/// @brief Field Mspace value: I32(17)
static ::GlobalNamespace::RichTextTagParser_TagType const Mspace;

/// @brief Field NoBr value: I32(18)
static ::GlobalNamespace::RichTextTagParser_TagType const NoBr;

/// @brief Field NoParse value: I32(19)
static ::GlobalNamespace::RichTextTagParser_TagType const NoParse;

/// @brief Field Size value: I32(21)
static ::GlobalNamespace::RichTextTagParser_TagType const Size;

/// @brief Field SmallCaps value: I32(22)
static ::GlobalNamespace::RichTextTagParser_TagType const SmallCaps;

/// @brief Field Space value: I32(23)
static ::GlobalNamespace::RichTextTagParser_TagType const Space;

/// @brief Field Sprite value: I32(24)
static ::GlobalNamespace::RichTextTagParser_TagType const Sprite;

/// @brief Field Strikethrough value: I32(20)
static ::GlobalNamespace::RichTextTagParser_TagType const Strikethrough;

/// @brief Field Style value: I32(25)
static ::GlobalNamespace::RichTextTagParser_TagType const Style;

/// @brief Field Subscript value: I32(26)
static ::GlobalNamespace::RichTextTagParser_TagType const Subscript;

/// @brief Field Superscript value: I32(27)
static ::GlobalNamespace::RichTextTagParser_TagType const Superscript;

/// @brief Field Underline value: I32(28)
static ::GlobalNamespace::RichTextTagParser_TagType const Underline;

/// @brief Field Unknown value: I32(30)
static ::GlobalNamespace::RichTextTagParser_TagType const Unknown;

/// @brief Field Uppercase value: I32(29)
static ::GlobalNamespace::RichTextTagParser_TagType const Uppercase;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26212};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RichTextTagParser_TagType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RichTextTagParser_TagType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
