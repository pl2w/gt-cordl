#pragma once
// IWYU pragma private; include "System/Xml/XmlSqlBinaryReader_ScanState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlSqlBinaryReader_ScanState)
// Forward declare root types
namespace GlobalNamespace {
struct XmlSqlBinaryReader_ScanState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::XmlSqlBinaryReader_ScanState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::XmlSqlBinaryReader_ScanState, "System.Xml", "XmlSqlBinaryReader/ScanState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Xml.XmlSqlBinaryReader/ScanState
struct CORDL_TYPE XmlSqlBinaryReader_ScanState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __XmlSqlBinaryReader_ScanState_Unwrapped
enum struct __XmlSqlBinaryReader_ScanState_Unwrapped : int32_t {
__E_Doc = static_cast<int32_t>(0x0),
__E_XmlText = static_cast<int32_t>(0x1),
__E_Attr = static_cast<int32_t>(0x2),
__E_AttrVal = static_cast<int32_t>(0x3),
__E_AttrValPseudoValue = static_cast<int32_t>(0x4),
__E_Init = static_cast<int32_t>(0x5),
__E_Error = static_cast<int32_t>(0x6),
__E_EOF = static_cast<int32_t>(0x7),
__E_Closed = static_cast<int32_t>(0x8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __XmlSqlBinaryReader_ScanState_Unwrapped () const noexcept {
return static_cast<__XmlSqlBinaryReader_ScanState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr XmlSqlBinaryReader_ScanState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr XmlSqlBinaryReader_ScanState(int32_t  value__) noexcept;

/// @brief Field Attr value: I32(2)
static ::GlobalNamespace::XmlSqlBinaryReader_ScanState const Attr;

/// @brief Field AttrVal value: I32(3)
static ::GlobalNamespace::XmlSqlBinaryReader_ScanState const AttrVal;

/// @brief Field AttrValPseudoValue value: I32(4)
static ::GlobalNamespace::XmlSqlBinaryReader_ScanState const AttrValPseudoValue;

/// @brief Field Closed value: I32(8)
static ::GlobalNamespace::XmlSqlBinaryReader_ScanState const Closed;

/// @brief Field Doc value: I32(0)
static ::GlobalNamespace::XmlSqlBinaryReader_ScanState const Doc;

/// @brief Field Error value: I32(6)
static ::GlobalNamespace::XmlSqlBinaryReader_ScanState const Error;

/// @brief Field Init value: I32(5)
static ::GlobalNamespace::XmlSqlBinaryReader_ScanState const Init;

/// @brief Field XmlText value: I32(1)
static ::GlobalNamespace::XmlSqlBinaryReader_ScanState const XmlText;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13982};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field EOF value: I32(7)
static ::GlobalNamespace::XmlSqlBinaryReader_ScanState const _cordl_EOF;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::XmlSqlBinaryReader_ScanState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::XmlSqlBinaryReader_ScanState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
