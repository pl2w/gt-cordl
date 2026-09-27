#pragma once
// IWYU pragma private; include "System/Xml/XmlEventCache_XmlEventType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlEventCache_XmlEventType)
// Forward declare root types
namespace GlobalNamespace {
struct XmlEventCache_XmlEventType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::XmlEventCache_XmlEventType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::XmlEventCache_XmlEventType, "System.Xml", "XmlEventCache/XmlEventType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Xml.XmlEventCache/XmlEventType
struct CORDL_TYPE XmlEventCache_XmlEventType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __XmlEventCache_XmlEventType_Unwrapped
enum struct __XmlEventCache_XmlEventType_Unwrapped : int32_t {
__E_Unknown = static_cast<int32_t>(0x0),
__E_DocType = static_cast<int32_t>(0x1),
__E_StartElem = static_cast<int32_t>(0x2),
__E_StartAttr = static_cast<int32_t>(0x3),
__E_EndAttr = static_cast<int32_t>(0x4),
__E_CData = static_cast<int32_t>(0x5),
__E_Comment = static_cast<int32_t>(0x6),
__E_PI = static_cast<int32_t>(0x7),
__E_Whitespace = static_cast<int32_t>(0x8),
__E_String = static_cast<int32_t>(0x9),
__E_Raw = static_cast<int32_t>(0xa),
__E_EntRef = static_cast<int32_t>(0xb),
__E_CharEnt = static_cast<int32_t>(0xc),
__E_SurrCharEnt = static_cast<int32_t>(0xd),
__E_Base64 = static_cast<int32_t>(0xe),
__E_BinHex = static_cast<int32_t>(0xf),
__E_XmlDecl1 = static_cast<int32_t>(0x10),
__E_XmlDecl2 = static_cast<int32_t>(0x11),
__E_StartContent = static_cast<int32_t>(0x12),
__E_EndElem = static_cast<int32_t>(0x13),
__E_FullEndElem = static_cast<int32_t>(0x14),
__E_Nmsp = static_cast<int32_t>(0x15),
__E_EndBase64 = static_cast<int32_t>(0x16),
__E_Close = static_cast<int32_t>(0x17),
__E_Flush = static_cast<int32_t>(0x18),
__E_Dispose = static_cast<int32_t>(0x19),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __XmlEventCache_XmlEventType_Unwrapped () const noexcept {
return static_cast<__XmlEventCache_XmlEventType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr XmlEventCache_XmlEventType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr XmlEventCache_XmlEventType(int32_t  value__) noexcept;

/// @brief Field Base64 value: I32(14)
static ::GlobalNamespace::XmlEventCache_XmlEventType const Base64;

/// @brief Field BinHex value: I32(15)
static ::GlobalNamespace::XmlEventCache_XmlEventType const BinHex;

/// @brief Field CData value: I32(5)
static ::GlobalNamespace::XmlEventCache_XmlEventType const CData;

/// @brief Field CharEnt value: I32(12)
static ::GlobalNamespace::XmlEventCache_XmlEventType const CharEnt;

/// @brief Field Close value: I32(23)
static ::GlobalNamespace::XmlEventCache_XmlEventType const Close;

/// @brief Field Comment value: I32(6)
static ::GlobalNamespace::XmlEventCache_XmlEventType const Comment;

/// @brief Field Dispose value: I32(25)
static ::GlobalNamespace::XmlEventCache_XmlEventType const Dispose;

/// @brief Field DocType value: I32(1)
static ::GlobalNamespace::XmlEventCache_XmlEventType const DocType;

/// @brief Field EndAttr value: I32(4)
static ::GlobalNamespace::XmlEventCache_XmlEventType const EndAttr;

/// @brief Field EndBase64 value: I32(22)
static ::GlobalNamespace::XmlEventCache_XmlEventType const EndBase64;

/// @brief Field EndElem value: I32(19)
static ::GlobalNamespace::XmlEventCache_XmlEventType const EndElem;

/// @brief Field EntRef value: I32(11)
static ::GlobalNamespace::XmlEventCache_XmlEventType const EntRef;

/// @brief Field Flush value: I32(24)
static ::GlobalNamespace::XmlEventCache_XmlEventType const Flush;

/// @brief Field FullEndElem value: I32(20)
static ::GlobalNamespace::XmlEventCache_XmlEventType const FullEndElem;

/// @brief Field Nmsp value: I32(21)
static ::GlobalNamespace::XmlEventCache_XmlEventType const Nmsp;

/// @brief Field PI value: I32(7)
static ::GlobalNamespace::XmlEventCache_XmlEventType const PI;

/// @brief Field Raw value: I32(10)
static ::GlobalNamespace::XmlEventCache_XmlEventType const Raw;

/// @brief Field StartAttr value: I32(3)
static ::GlobalNamespace::XmlEventCache_XmlEventType const StartAttr;

/// @brief Field StartContent value: I32(18)
static ::GlobalNamespace::XmlEventCache_XmlEventType const StartContent;

/// @brief Field StartElem value: I32(2)
static ::GlobalNamespace::XmlEventCache_XmlEventType const StartElem;

/// @brief Field String value: I32(9)
static ::GlobalNamespace::XmlEventCache_XmlEventType const String;

/// @brief Field SurrCharEnt value: I32(13)
static ::GlobalNamespace::XmlEventCache_XmlEventType const SurrCharEnt;

/// @brief Field Unknown value: I32(0)
static ::GlobalNamespace::XmlEventCache_XmlEventType const Unknown;

/// @brief Field Whitespace value: I32(8)
static ::GlobalNamespace::XmlEventCache_XmlEventType const Whitespace;

/// @brief Field XmlDecl1 value: I32(16)
static ::GlobalNamespace::XmlEventCache_XmlEventType const XmlDecl1;

/// @brief Field XmlDecl2 value: I32(17)
static ::GlobalNamespace::XmlEventCache_XmlEventType const XmlDecl2;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14041};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::XmlEventCache_XmlEventType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::XmlEventCache_XmlEventType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
