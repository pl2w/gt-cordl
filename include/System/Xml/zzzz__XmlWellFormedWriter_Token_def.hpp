#pragma once
// IWYU pragma private; include "System/Xml/XmlWellFormedWriter_Token.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlWellFormedWriter_Token)
// Forward declare root types
namespace GlobalNamespace {
struct XmlWellFormedWriter_Token;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::XmlWellFormedWriter_Token);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::XmlWellFormedWriter_Token, "System.Xml", "XmlWellFormedWriter/Token");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Xml.XmlWellFormedWriter/Token
struct CORDL_TYPE XmlWellFormedWriter_Token {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __XmlWellFormedWriter_Token_Unwrapped
enum struct __XmlWellFormedWriter_Token_Unwrapped : int32_t {
__E_StartDocument = static_cast<int32_t>(0x0),
__E_EndDocument = static_cast<int32_t>(0x1),
__E_PI = static_cast<int32_t>(0x2),
__E_Comment = static_cast<int32_t>(0x3),
__E_Dtd = static_cast<int32_t>(0x4),
__E_StartElement = static_cast<int32_t>(0x5),
__E_EndElement = static_cast<int32_t>(0x6),
__E_StartAttribute = static_cast<int32_t>(0x7),
__E_EndAttribute = static_cast<int32_t>(0x8),
__E_Text = static_cast<int32_t>(0x9),
__E_CData = static_cast<int32_t>(0xa),
__E_AtomicValue = static_cast<int32_t>(0xb),
__E_Base64 = static_cast<int32_t>(0xc),
__E_RawData = static_cast<int32_t>(0xd),
__E_Whitespace = static_cast<int32_t>(0xe),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __XmlWellFormedWriter_Token_Unwrapped () const noexcept {
return static_cast<__XmlWellFormedWriter_Token_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr XmlWellFormedWriter_Token() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr XmlWellFormedWriter_Token(int32_t  value__) noexcept;

/// @brief Field AtomicValue value: I32(11)
static ::GlobalNamespace::XmlWellFormedWriter_Token const AtomicValue;

/// @brief Field Base64 value: I32(12)
static ::GlobalNamespace::XmlWellFormedWriter_Token const Base64;

/// @brief Field CData value: I32(10)
static ::GlobalNamespace::XmlWellFormedWriter_Token const CData;

/// @brief Field Comment value: I32(3)
static ::GlobalNamespace::XmlWellFormedWriter_Token const Comment;

/// @brief Field Dtd value: I32(4)
static ::GlobalNamespace::XmlWellFormedWriter_Token const Dtd;

/// @brief Field EndAttribute value: I32(8)
static ::GlobalNamespace::XmlWellFormedWriter_Token const EndAttribute;

/// @brief Field EndDocument value: I32(1)
static ::GlobalNamespace::XmlWellFormedWriter_Token const EndDocument;

/// @brief Field EndElement value: I32(6)
static ::GlobalNamespace::XmlWellFormedWriter_Token const EndElement;

/// @brief Field PI value: I32(2)
static ::GlobalNamespace::XmlWellFormedWriter_Token const PI;

/// @brief Field RawData value: I32(13)
static ::GlobalNamespace::XmlWellFormedWriter_Token const RawData;

/// @brief Field StartAttribute value: I32(7)
static ::GlobalNamespace::XmlWellFormedWriter_Token const StartAttribute;

/// @brief Field StartDocument value: I32(0)
static ::GlobalNamespace::XmlWellFormedWriter_Token const StartDocument;

/// @brief Field StartElement value: I32(5)
static ::GlobalNamespace::XmlWellFormedWriter_Token const StartElement;

/// @brief Field Text value: I32(9)
static ::GlobalNamespace::XmlWellFormedWriter_Token const Text;

/// @brief Field Whitespace value: I32(14)
static ::GlobalNamespace::XmlWellFormedWriter_Token const Whitespace;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14081};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::XmlWellFormedWriter_Token, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::XmlWellFormedWriter_Token) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
