#pragma once
// IWYU pragma private; include "System/Xml/XmlValidatingReaderImpl_ParsingFunction.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlValidatingReaderImpl_ParsingFunction)
// Forward declare root types
namespace GlobalNamespace {
struct XmlValidatingReaderImpl_ParsingFunction;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::XmlValidatingReaderImpl_ParsingFunction);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::XmlValidatingReaderImpl_ParsingFunction, "System.Xml", "XmlValidatingReaderImpl/ParsingFunction");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Xml.XmlValidatingReaderImpl/ParsingFunction
struct CORDL_TYPE XmlValidatingReaderImpl_ParsingFunction {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __XmlValidatingReaderImpl_ParsingFunction_Unwrapped
enum struct __XmlValidatingReaderImpl_ParsingFunction_Unwrapped : int32_t {
__E_Read = static_cast<int32_t>(0x0),
__E_Init = static_cast<int32_t>(0x1),
__E_ParseDtdFromContext = static_cast<int32_t>(0x2),
__E_ResolveEntityInternally = static_cast<int32_t>(0x3),
__E_InReadBinaryContent = static_cast<int32_t>(0x4),
__E_ReaderClosed = static_cast<int32_t>(0x5),
__E_Error = static_cast<int32_t>(0x6),
__E_None = static_cast<int32_t>(0x7),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __XmlValidatingReaderImpl_ParsingFunction_Unwrapped () const noexcept {
return static_cast<__XmlValidatingReaderImpl_ParsingFunction_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr XmlValidatingReaderImpl_ParsingFunction() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr XmlValidatingReaderImpl_ParsingFunction(int32_t  value__) noexcept;

/// @brief Field Error value: I32(6)
static ::GlobalNamespace::XmlValidatingReaderImpl_ParsingFunction const Error;

/// @brief Field InReadBinaryContent value: I32(4)
static ::GlobalNamespace::XmlValidatingReaderImpl_ParsingFunction const InReadBinaryContent;

/// @brief Field Init value: I32(1)
static ::GlobalNamespace::XmlValidatingReaderImpl_ParsingFunction const Init;

/// @brief Field None value: I32(7)
static ::GlobalNamespace::XmlValidatingReaderImpl_ParsingFunction const None;

/// @brief Field ParseDtdFromContext value: I32(2)
static ::GlobalNamespace::XmlValidatingReaderImpl_ParsingFunction const ParseDtdFromContext;

/// @brief Field Read value: I32(0)
static ::GlobalNamespace::XmlValidatingReaderImpl_ParsingFunction const Read;

/// @brief Field ReaderClosed value: I32(5)
static ::GlobalNamespace::XmlValidatingReaderImpl_ParsingFunction const ReaderClosed;

/// @brief Field ResolveEntityInternally value: I32(3)
static ::GlobalNamespace::XmlValidatingReaderImpl_ParsingFunction const ResolveEntityInternally;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14077};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::XmlValidatingReaderImpl_ParsingFunction, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::XmlValidatingReaderImpl_ParsingFunction) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
