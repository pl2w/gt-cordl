#pragma once
// IWYU pragma private; include "System/Xml/XsdValidatingReader_ValidatingReaderState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XsdValidatingReader_ValidatingReaderState)
// Forward declare root types
namespace GlobalNamespace {
struct XsdValidatingReader_ValidatingReaderState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::XsdValidatingReader_ValidatingReaderState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::XsdValidatingReader_ValidatingReaderState, "System.Xml", "XsdValidatingReader/ValidatingReaderState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Xml.XsdValidatingReader/ValidatingReaderState
struct CORDL_TYPE XsdValidatingReader_ValidatingReaderState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __XsdValidatingReader_ValidatingReaderState_Unwrapped
enum struct __XsdValidatingReader_ValidatingReaderState_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Init = static_cast<int32_t>(0x1),
__E_Read = static_cast<int32_t>(0x2),
__E_OnDefaultAttribute = static_cast<int32_t>(0xffffffff),
__E_OnReadAttributeValue = static_cast<int32_t>(0xfffffffe),
__E_OnAttribute = static_cast<int32_t>(0x3),
__E_ClearAttributes = static_cast<int32_t>(0x4),
__E_ParseInlineSchema = static_cast<int32_t>(0x5),
__E_ReadAhead = static_cast<int32_t>(0x6),
__E_OnReadBinaryContent = static_cast<int32_t>(0x7),
__E_ReaderClosed = static_cast<int32_t>(0x8),
__E_EOF = static_cast<int32_t>(0x9),
__E_Error = static_cast<int32_t>(0xa),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __XsdValidatingReader_ValidatingReaderState_Unwrapped () const noexcept {
return static_cast<__XsdValidatingReader_ValidatingReaderState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr XsdValidatingReader_ValidatingReaderState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr XsdValidatingReader_ValidatingReaderState(int32_t  value__) noexcept;

/// @brief Field ClearAttributes value: I32(4)
static ::GlobalNamespace::XsdValidatingReader_ValidatingReaderState const ClearAttributes;

/// @brief Field Error value: I32(10)
static ::GlobalNamespace::XsdValidatingReader_ValidatingReaderState const Error;

/// @brief Field Init value: I32(1)
static ::GlobalNamespace::XsdValidatingReader_ValidatingReaderState const Init;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::XsdValidatingReader_ValidatingReaderState const None;

/// @brief Field OnAttribute value: I32(3)
static ::GlobalNamespace::XsdValidatingReader_ValidatingReaderState const OnAttribute;

/// @brief Field OnDefaultAttribute value: I32(-1)
static ::GlobalNamespace::XsdValidatingReader_ValidatingReaderState const OnDefaultAttribute;

/// @brief Field OnReadAttributeValue value: I32(-2)
static ::GlobalNamespace::XsdValidatingReader_ValidatingReaderState const OnReadAttributeValue;

/// @brief Field OnReadBinaryContent value: I32(7)
static ::GlobalNamespace::XsdValidatingReader_ValidatingReaderState const OnReadBinaryContent;

/// @brief Field ParseInlineSchema value: I32(5)
static ::GlobalNamespace::XsdValidatingReader_ValidatingReaderState const ParseInlineSchema;

/// @brief Field Read value: I32(2)
static ::GlobalNamespace::XsdValidatingReader_ValidatingReaderState const Read;

/// @brief Field ReadAhead value: I32(6)
static ::GlobalNamespace::XsdValidatingReader_ValidatingReaderState const ReadAhead;

/// @brief Field ReaderClosed value: I32(8)
static ::GlobalNamespace::XsdValidatingReader_ValidatingReaderState const ReaderClosed;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14103};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field EOF value: I32(9)
static ::GlobalNamespace::XsdValidatingReader_ValidatingReaderState const _cordl_EOF;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::XsdValidatingReader_ValidatingReaderState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::XsdValidatingReader_ValidatingReaderState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
