#pragma once
// IWYU pragma private; include "MS/Internal/Xml/XPath/XPathScanner_LexKind.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XPathScanner_LexKind)
// Forward declare root types
namespace GlobalNamespace {
struct XPathScanner_LexKind;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::XPathScanner_LexKind);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::XPathScanner_LexKind, "MS.Internal.Xml.XPath", "XPathScanner/LexKind");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: MS.Internal.Xml.XPath.XPathScanner/LexKind
struct CORDL_TYPE XPathScanner_LexKind {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __XPathScanner_LexKind_Unwrapped
enum struct __XPathScanner_LexKind_Unwrapped : int32_t {
__E_Comma = static_cast<int32_t>(0x2c),
__E_Slash = static_cast<int32_t>(0x2f),
__E_At = static_cast<int32_t>(0x40),
__E_Dot = static_cast<int32_t>(0x2e),
__E_LParens = static_cast<int32_t>(0x28),
__E_RParens = static_cast<int32_t>(0x29),
__E_LBracket = static_cast<int32_t>(0x5b),
__E_RBracket = static_cast<int32_t>(0x5d),
__E_Star = static_cast<int32_t>(0x2a),
__E_Plus = static_cast<int32_t>(0x2b),
__E_Minus = static_cast<int32_t>(0x2d),
__E_Eq = static_cast<int32_t>(0x3d),
__E_Lt = static_cast<int32_t>(0x3c),
__E_Gt = static_cast<int32_t>(0x3e),
__E_Bang = static_cast<int32_t>(0x21),
__E_Dollar = static_cast<int32_t>(0x24),
__E_Apos = static_cast<int32_t>(0x27),
__E_Quote = static_cast<int32_t>(0x22),
__E_Union = static_cast<int32_t>(0x7c),
__E_Ne = static_cast<int32_t>(0x4e),
__E_Le = static_cast<int32_t>(0x4c),
__E_Ge = static_cast<int32_t>(0x47),
__E_And = static_cast<int32_t>(0x41),
__E_Or = static_cast<int32_t>(0x4f),
__E_DotDot = static_cast<int32_t>(0x44),
__E_SlashSlash = static_cast<int32_t>(0x53),
__E_Name = static_cast<int32_t>(0x6e),
__E_String = static_cast<int32_t>(0x73),
__E_Number = static_cast<int32_t>(0x64),
__E_Axe = static_cast<int32_t>(0x61),
__E_Eof = static_cast<int32_t>(0x45),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __XPathScanner_LexKind_Unwrapped () const noexcept {
return static_cast<__XPathScanner_LexKind_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr XPathScanner_LexKind() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr XPathScanner_LexKind(int32_t  value__) noexcept;

/// @brief Field And value: I32(65)
static ::GlobalNamespace::XPathScanner_LexKind const And;

/// @brief Field Apos value: I32(39)
static ::GlobalNamespace::XPathScanner_LexKind const Apos;

/// @brief Field At value: I32(64)
static ::GlobalNamespace::XPathScanner_LexKind const At;

/// @brief Field Axe value: I32(97)
static ::GlobalNamespace::XPathScanner_LexKind const Axe;

/// @brief Field Bang value: I32(33)
static ::GlobalNamespace::XPathScanner_LexKind const Bang;

/// @brief Field Comma value: I32(44)
static ::GlobalNamespace::XPathScanner_LexKind const Comma;

/// @brief Field Dollar value: I32(36)
static ::GlobalNamespace::XPathScanner_LexKind const Dollar;

/// @brief Field Dot value: I32(46)
static ::GlobalNamespace::XPathScanner_LexKind const Dot;

/// @brief Field DotDot value: I32(68)
static ::GlobalNamespace::XPathScanner_LexKind const DotDot;

/// @brief Field Eof value: I32(69)
static ::GlobalNamespace::XPathScanner_LexKind const Eof;

/// @brief Field Eq value: I32(61)
static ::GlobalNamespace::XPathScanner_LexKind const Eq;

/// @brief Field Ge value: I32(71)
static ::GlobalNamespace::XPathScanner_LexKind const Ge;

/// @brief Field Gt value: I32(62)
static ::GlobalNamespace::XPathScanner_LexKind const Gt;

/// @brief Field LBracket value: I32(91)
static ::GlobalNamespace::XPathScanner_LexKind const LBracket;

/// @brief Field LParens value: I32(40)
static ::GlobalNamespace::XPathScanner_LexKind const LParens;

/// @brief Field Le value: I32(76)
static ::GlobalNamespace::XPathScanner_LexKind const Le;

/// @brief Field Lt value: I32(60)
static ::GlobalNamespace::XPathScanner_LexKind const Lt;

/// @brief Field Minus value: I32(45)
static ::GlobalNamespace::XPathScanner_LexKind const Minus;

/// @brief Field Name value: I32(110)
static ::GlobalNamespace::XPathScanner_LexKind const Name;

/// @brief Field Ne value: I32(78)
static ::GlobalNamespace::XPathScanner_LexKind const Ne;

/// @brief Field Number value: I32(100)
static ::GlobalNamespace::XPathScanner_LexKind const Number;

/// @brief Field Or value: I32(79)
static ::GlobalNamespace::XPathScanner_LexKind const Or;

/// @brief Field Plus value: I32(43)
static ::GlobalNamespace::XPathScanner_LexKind const Plus;

/// @brief Field Quote value: I32(34)
static ::GlobalNamespace::XPathScanner_LexKind const Quote;

/// @brief Field RBracket value: I32(93)
static ::GlobalNamespace::XPathScanner_LexKind const RBracket;

/// @brief Field RParens value: I32(41)
static ::GlobalNamespace::XPathScanner_LexKind const RParens;

/// @brief Field Slash value: I32(47)
static ::GlobalNamespace::XPathScanner_LexKind const Slash;

/// @brief Field SlashSlash value: I32(83)
static ::GlobalNamespace::XPathScanner_LexKind const SlashSlash;

/// @brief Field Star value: I32(42)
static ::GlobalNamespace::XPathScanner_LexKind const Star;

/// @brief Field String value: I32(115)
static ::GlobalNamespace::XPathScanner_LexKind const String;

/// @brief Field Union value: I32(124)
static ::GlobalNamespace::XPathScanner_LexKind const Union;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14607};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::XPathScanner_LexKind, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::XPathScanner_LexKind) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
