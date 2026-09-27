#pragma once
// IWYU pragma private; include "System/Xml/XmlTextReaderImpl_ParsingFunction.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlTextReaderImpl_ParsingFunction)
// Forward declare root types
namespace GlobalNamespace {
struct XmlTextReaderImpl_ParsingFunction;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::XmlTextReaderImpl_ParsingFunction);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::XmlTextReaderImpl_ParsingFunction, "System.Xml", "XmlTextReaderImpl/ParsingFunction");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Xml.XmlTextReaderImpl/ParsingFunction
struct CORDL_TYPE XmlTextReaderImpl_ParsingFunction {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __XmlTextReaderImpl_ParsingFunction_Unwrapped
enum struct __XmlTextReaderImpl_ParsingFunction_Unwrapped : int32_t {
__E_ElementContent = static_cast<int32_t>(0x0),
__E_NoData = static_cast<int32_t>(0x1),
__E_OpenUrl = static_cast<int32_t>(0x2),
__E_SwitchToInteractive = static_cast<int32_t>(0x3),
__E_SwitchToInteractiveXmlDecl = static_cast<int32_t>(0x4),
__E_DocumentContent = static_cast<int32_t>(0x5),
__E_MoveToElementContent = static_cast<int32_t>(0x6),
__E_PopElementContext = static_cast<int32_t>(0x7),
__E_PopEmptyElementContext = static_cast<int32_t>(0x8),
__E_ResetAttributesRootLevel = static_cast<int32_t>(0x9),
__E_Error = static_cast<int32_t>(0xa),
__E_Eof = static_cast<int32_t>(0xb),
__E_ReaderClosed = static_cast<int32_t>(0xc),
__E_EntityReference = static_cast<int32_t>(0xd),
__E_InIncrementalRead = static_cast<int32_t>(0xe),
__E_FragmentAttribute = static_cast<int32_t>(0xf),
__E_ReportEndEntity = static_cast<int32_t>(0x10),
__E_AfterResolveEntityInContent = static_cast<int32_t>(0x11),
__E_AfterResolveEmptyEntityInContent = static_cast<int32_t>(0x12),
__E_XmlDeclarationFragment = static_cast<int32_t>(0x13),
__E_GoToEof = static_cast<int32_t>(0x14),
__E_PartialTextValue = static_cast<int32_t>(0x15),
__E_InReadAttributeValue = static_cast<int32_t>(0x16),
__E_InReadValueChunk = static_cast<int32_t>(0x17),
__E_InReadContentAsBinary = static_cast<int32_t>(0x18),
__E_InReadElementContentAsBinary = static_cast<int32_t>(0x19),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __XmlTextReaderImpl_ParsingFunction_Unwrapped () const noexcept {
return static_cast<__XmlTextReaderImpl_ParsingFunction_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr XmlTextReaderImpl_ParsingFunction() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr XmlTextReaderImpl_ParsingFunction(int32_t  value__) noexcept;

/// @brief Field AfterResolveEmptyEntityInContent value: I32(18)
static ::GlobalNamespace::XmlTextReaderImpl_ParsingFunction const AfterResolveEmptyEntityInContent;

/// @brief Field AfterResolveEntityInContent value: I32(17)
static ::GlobalNamespace::XmlTextReaderImpl_ParsingFunction const AfterResolveEntityInContent;

/// @brief Field DocumentContent value: I32(5)
static ::GlobalNamespace::XmlTextReaderImpl_ParsingFunction const DocumentContent;

/// @brief Field ElementContent value: I32(0)
static ::GlobalNamespace::XmlTextReaderImpl_ParsingFunction const ElementContent;

/// @brief Field EntityReference value: I32(13)
static ::GlobalNamespace::XmlTextReaderImpl_ParsingFunction const EntityReference;

/// @brief Field Eof value: I32(11)
static ::GlobalNamespace::XmlTextReaderImpl_ParsingFunction const Eof;

/// @brief Field Error value: I32(10)
static ::GlobalNamespace::XmlTextReaderImpl_ParsingFunction const Error;

/// @brief Field FragmentAttribute value: I32(15)
static ::GlobalNamespace::XmlTextReaderImpl_ParsingFunction const FragmentAttribute;

/// @brief Field GoToEof value: I32(20)
static ::GlobalNamespace::XmlTextReaderImpl_ParsingFunction const GoToEof;

/// @brief Field InIncrementalRead value: I32(14)
static ::GlobalNamespace::XmlTextReaderImpl_ParsingFunction const InIncrementalRead;

/// @brief Field InReadAttributeValue value: I32(22)
static ::GlobalNamespace::XmlTextReaderImpl_ParsingFunction const InReadAttributeValue;

/// @brief Field InReadContentAsBinary value: I32(24)
static ::GlobalNamespace::XmlTextReaderImpl_ParsingFunction const InReadContentAsBinary;

/// @brief Field InReadElementContentAsBinary value: I32(25)
static ::GlobalNamespace::XmlTextReaderImpl_ParsingFunction const InReadElementContentAsBinary;

/// @brief Field InReadValueChunk value: I32(23)
static ::GlobalNamespace::XmlTextReaderImpl_ParsingFunction const InReadValueChunk;

/// @brief Field MoveToElementContent value: I32(6)
static ::GlobalNamespace::XmlTextReaderImpl_ParsingFunction const MoveToElementContent;

/// @brief Field NoData value: I32(1)
static ::GlobalNamespace::XmlTextReaderImpl_ParsingFunction const NoData;

/// @brief Field OpenUrl value: I32(2)
static ::GlobalNamespace::XmlTextReaderImpl_ParsingFunction const OpenUrl;

/// @brief Field PartialTextValue value: I32(21)
static ::GlobalNamespace::XmlTextReaderImpl_ParsingFunction const PartialTextValue;

/// @brief Field PopElementContext value: I32(7)
static ::GlobalNamespace::XmlTextReaderImpl_ParsingFunction const PopElementContext;

/// @brief Field PopEmptyElementContext value: I32(8)
static ::GlobalNamespace::XmlTextReaderImpl_ParsingFunction const PopEmptyElementContext;

/// @brief Field ReaderClosed value: I32(12)
static ::GlobalNamespace::XmlTextReaderImpl_ParsingFunction const ReaderClosed;

/// @brief Field ReportEndEntity value: I32(16)
static ::GlobalNamespace::XmlTextReaderImpl_ParsingFunction const ReportEndEntity;

/// @brief Field ResetAttributesRootLevel value: I32(9)
static ::GlobalNamespace::XmlTextReaderImpl_ParsingFunction const ResetAttributesRootLevel;

/// @brief Field SwitchToInteractive value: I32(3)
static ::GlobalNamespace::XmlTextReaderImpl_ParsingFunction const SwitchToInteractive;

/// @brief Field SwitchToInteractiveXmlDecl value: I32(4)
static ::GlobalNamespace::XmlTextReaderImpl_ParsingFunction const SwitchToInteractiveXmlDecl;

/// @brief Field XmlDeclarationFragment value: I32(19)
static ::GlobalNamespace::XmlTextReaderImpl_ParsingFunction const XmlDeclarationFragment;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14051};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::XmlTextReaderImpl_ParsingFunction, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::XmlTextReaderImpl_ParsingFunction) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
