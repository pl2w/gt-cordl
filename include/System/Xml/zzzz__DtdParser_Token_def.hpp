#pragma once
// IWYU pragma private; include "System/Xml/DtdParser_Token.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DtdParser_Token)
// Forward declare root types
namespace GlobalNamespace {
struct DtdParser_Token;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::DtdParser_Token);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DtdParser_Token, "System.Xml", "DtdParser/Token");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Xml.DtdParser/Token
struct CORDL_TYPE DtdParser_Token {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __DtdParser_Token_Unwrapped
enum struct __DtdParser_Token_Unwrapped : int32_t {
__E_CDATA = static_cast<int32_t>(0x0),
__E_ID = static_cast<int32_t>(0x1),
__E_IDREF = static_cast<int32_t>(0x2),
__E_IDREFS = static_cast<int32_t>(0x3),
__E_ENTITY = static_cast<int32_t>(0x4),
__E_ENTITIES = static_cast<int32_t>(0x5),
__E_NMTOKEN = static_cast<int32_t>(0x6),
__E_NMTOKENS = static_cast<int32_t>(0x7),
__E_NOTATION = static_cast<int32_t>(0x8),
__E_None = static_cast<int32_t>(0x9),
__E_PERef = static_cast<int32_t>(0xa),
__E_AttlistDecl = static_cast<int32_t>(0xb),
__E_ElementDecl = static_cast<int32_t>(0xc),
__E_EntityDecl = static_cast<int32_t>(0xd),
__E_NotationDecl = static_cast<int32_t>(0xe),
__E_Comment = static_cast<int32_t>(0xf),
__E_PI = static_cast<int32_t>(0x10),
__E_CondSectionStart = static_cast<int32_t>(0x11),
__E_CondSectionEnd = static_cast<int32_t>(0x12),
__E_Eof = static_cast<int32_t>(0x13),
__E_REQUIRED = static_cast<int32_t>(0x14),
__E_IMPLIED = static_cast<int32_t>(0x15),
__E_FIXED = static_cast<int32_t>(0x16),
__E_QName = static_cast<int32_t>(0x17),
__E_Name = static_cast<int32_t>(0x18),
__E_Nmtoken = static_cast<int32_t>(0x19),
__E_Quote = static_cast<int32_t>(0x1a),
__E_LeftParen = static_cast<int32_t>(0x1b),
__E_RightParen = static_cast<int32_t>(0x1c),
__E_GreaterThan = static_cast<int32_t>(0x1d),
__E_Or = static_cast<int32_t>(0x1e),
__E_LeftBracket = static_cast<int32_t>(0x1f),
__E_RightBracket = static_cast<int32_t>(0x20),
__E_PUBLIC = static_cast<int32_t>(0x21),
__E_SYSTEM = static_cast<int32_t>(0x22),
__E_Literal = static_cast<int32_t>(0x23),
__E_DOCTYPE = static_cast<int32_t>(0x24),
__E_NData = static_cast<int32_t>(0x25),
__E_Percent = static_cast<int32_t>(0x26),
__E_Star = static_cast<int32_t>(0x27),
__E_QMark = static_cast<int32_t>(0x28),
__E_Plus = static_cast<int32_t>(0x29),
__E_PCDATA = static_cast<int32_t>(0x2a),
__E_Comma = static_cast<int32_t>(0x2b),
__E_ANY = static_cast<int32_t>(0x2c),
__E_EMPTY = static_cast<int32_t>(0x2d),
__E_IGNORE = static_cast<int32_t>(0x2e),
__E_INCLUDE = static_cast<int32_t>(0x2f),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DtdParser_Token_Unwrapped () const noexcept {
return static_cast<__DtdParser_Token_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr DtdParser_Token() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr DtdParser_Token(int32_t  value__) noexcept;

/// @brief Field ANY value: I32(44)
static ::GlobalNamespace::DtdParser_Token const ANY;

/// @brief Field AttlistDecl value: I32(11)
static ::GlobalNamespace::DtdParser_Token const AttlistDecl;

/// @brief Field CDATA value: I32(0)
static ::GlobalNamespace::DtdParser_Token const CDATA;

/// @brief Field Comma value: I32(43)
static ::GlobalNamespace::DtdParser_Token const Comma;

/// @brief Field Comment value: I32(15)
static ::GlobalNamespace::DtdParser_Token const Comment;

/// @brief Field CondSectionEnd value: I32(18)
static ::GlobalNamespace::DtdParser_Token const CondSectionEnd;

/// @brief Field CondSectionStart value: I32(17)
static ::GlobalNamespace::DtdParser_Token const CondSectionStart;

/// @brief Field DOCTYPE value: I32(36)
static ::GlobalNamespace::DtdParser_Token const DOCTYPE;

/// @brief Field EMPTY value: I32(45)
static ::GlobalNamespace::DtdParser_Token const EMPTY;

/// @brief Field ENTITIES value: I32(5)
static ::GlobalNamespace::DtdParser_Token const ENTITIES;

/// @brief Field ENTITY value: I32(4)
static ::GlobalNamespace::DtdParser_Token const ENTITY;

/// @brief Field ElementDecl value: I32(12)
static ::GlobalNamespace::DtdParser_Token const ElementDecl;

/// @brief Field EntityDecl value: I32(13)
static ::GlobalNamespace::DtdParser_Token const EntityDecl;

/// @brief Field Eof value: I32(19)
static ::GlobalNamespace::DtdParser_Token const Eof;

/// @brief Field FIXED value: I32(22)
static ::GlobalNamespace::DtdParser_Token const FIXED;

/// @brief Field GreaterThan value: I32(29)
static ::GlobalNamespace::DtdParser_Token const GreaterThan;

/// @brief Field IDREF value: I32(2)
static ::GlobalNamespace::DtdParser_Token const IDREF;

/// @brief Field IDREFS value: I32(3)
static ::GlobalNamespace::DtdParser_Token const IDREFS;

/// @brief Field IGNORE value: I32(46)
static ::GlobalNamespace::DtdParser_Token const IGNORE;

/// @brief Field IMPLIED value: I32(21)
static ::GlobalNamespace::DtdParser_Token const IMPLIED;

/// @brief Field INCLUDE value: I32(47)
static ::GlobalNamespace::DtdParser_Token const INCLUDE;

/// @brief Field LeftBracket value: I32(31)
static ::GlobalNamespace::DtdParser_Token const LeftBracket;

/// @brief Field LeftParen value: I32(27)
static ::GlobalNamespace::DtdParser_Token const LeftParen;

/// @brief Field Literal value: I32(35)
static ::GlobalNamespace::DtdParser_Token const Literal;

/// @brief Field NData value: I32(37)
static ::GlobalNamespace::DtdParser_Token const NData;

/// @brief Field NMTOKEN value: I32(6)
static ::GlobalNamespace::DtdParser_Token const NMTOKEN;

/// @brief Field NMTOKENS value: I32(7)
static ::GlobalNamespace::DtdParser_Token const NMTOKENS;

/// @brief Field NOTATION value: I32(8)
static ::GlobalNamespace::DtdParser_Token const NOTATION;

/// @brief Field Name value: I32(24)
static ::GlobalNamespace::DtdParser_Token const Name;

/// @brief Field Nmtoken value: I32(25)
static ::GlobalNamespace::DtdParser_Token const Nmtoken;

/// @brief Field None value: I32(9)
static ::GlobalNamespace::DtdParser_Token const None;

/// @brief Field NotationDecl value: I32(14)
static ::GlobalNamespace::DtdParser_Token const NotationDecl;

/// @brief Field Or value: I32(30)
static ::GlobalNamespace::DtdParser_Token const Or;

/// @brief Field PCDATA value: I32(42)
static ::GlobalNamespace::DtdParser_Token const PCDATA;

/// @brief Field PERef value: I32(10)
static ::GlobalNamespace::DtdParser_Token const PERef;

/// @brief Field PI value: I32(16)
static ::GlobalNamespace::DtdParser_Token const PI;

/// @brief Field PUBLIC value: I32(33)
static ::GlobalNamespace::DtdParser_Token const PUBLIC;

/// @brief Field Percent value: I32(38)
static ::GlobalNamespace::DtdParser_Token const Percent;

/// @brief Field Plus value: I32(41)
static ::GlobalNamespace::DtdParser_Token const Plus;

/// @brief Field QMark value: I32(40)
static ::GlobalNamespace::DtdParser_Token const QMark;

/// @brief Field QName value: I32(23)
static ::GlobalNamespace::DtdParser_Token const QName;

/// @brief Field Quote value: I32(26)
static ::GlobalNamespace::DtdParser_Token const Quote;

/// @brief Field REQUIRED value: I32(20)
static ::GlobalNamespace::DtdParser_Token const REQUIRED;

/// @brief Field RightBracket value: I32(32)
static ::GlobalNamespace::DtdParser_Token const RightBracket;

/// @brief Field RightParen value: I32(28)
static ::GlobalNamespace::DtdParser_Token const RightParen;

/// @brief Field SYSTEM value: I32(34)
static ::GlobalNamespace::DtdParser_Token const SYSTEM;

/// @brief Field Star value: I32(39)
static ::GlobalNamespace::DtdParser_Token const Star;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14153};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field ID value: I32(1)
static ::GlobalNamespace::DtdParser_Token const _cordl_ID;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DtdParser_Token, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DtdParser_Token) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
