#pragma once
// IWYU pragma private; include "System/Xml/XmlTextReaderImpl_IncrementalReadState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlTextReaderImpl_IncrementalReadState)
// Forward declare root types
namespace GlobalNamespace {
struct XmlTextReaderImpl_IncrementalReadState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::XmlTextReaderImpl_IncrementalReadState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::XmlTextReaderImpl_IncrementalReadState, "System.Xml", "XmlTextReaderImpl/IncrementalReadState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Xml.XmlTextReaderImpl/IncrementalReadState
struct CORDL_TYPE XmlTextReaderImpl_IncrementalReadState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __XmlTextReaderImpl_IncrementalReadState_Unwrapped
enum struct __XmlTextReaderImpl_IncrementalReadState_Unwrapped : int32_t {
__E_Text = static_cast<int32_t>(0x0),
__E_StartTag = static_cast<int32_t>(0x1),
__E_PI = static_cast<int32_t>(0x2),
__E_CDATA = static_cast<int32_t>(0x3),
__E_Comment = static_cast<int32_t>(0x4),
__E_Attributes = static_cast<int32_t>(0x5),
__E_AttributeValue = static_cast<int32_t>(0x6),
__E_ReadData = static_cast<int32_t>(0x7),
__E_EndElement = static_cast<int32_t>(0x8),
__E_End = static_cast<int32_t>(0x9),
__E_ReadValueChunk_OnCachedValue = static_cast<int32_t>(0xa),
__E_ReadValueChunk_OnPartialValue = static_cast<int32_t>(0xb),
__E_ReadContentAsBinary_OnCachedValue = static_cast<int32_t>(0xc),
__E_ReadContentAsBinary_OnPartialValue = static_cast<int32_t>(0xd),
__E_ReadContentAsBinary_End = static_cast<int32_t>(0xe),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __XmlTextReaderImpl_IncrementalReadState_Unwrapped () const noexcept {
return static_cast<__XmlTextReaderImpl_IncrementalReadState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr XmlTextReaderImpl_IncrementalReadState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr XmlTextReaderImpl_IncrementalReadState(int32_t  value__) noexcept;

/// @brief Field AttributeValue value: I32(6)
static ::GlobalNamespace::XmlTextReaderImpl_IncrementalReadState const AttributeValue;

/// @brief Field Attributes value: I32(5)
static ::GlobalNamespace::XmlTextReaderImpl_IncrementalReadState const Attributes;

/// @brief Field CDATA value: I32(3)
static ::GlobalNamespace::XmlTextReaderImpl_IncrementalReadState const CDATA;

/// @brief Field Comment value: I32(4)
static ::GlobalNamespace::XmlTextReaderImpl_IncrementalReadState const Comment;

/// @brief Field End value: I32(9)
static ::GlobalNamespace::XmlTextReaderImpl_IncrementalReadState const End;

/// @brief Field EndElement value: I32(8)
static ::GlobalNamespace::XmlTextReaderImpl_IncrementalReadState const EndElement;

/// @brief Field PI value: I32(2)
static ::GlobalNamespace::XmlTextReaderImpl_IncrementalReadState const PI;

/// @brief Field ReadContentAsBinary_End value: I32(14)
static ::GlobalNamespace::XmlTextReaderImpl_IncrementalReadState const ReadContentAsBinary_End;

/// @brief Field ReadContentAsBinary_OnCachedValue value: I32(12)
static ::GlobalNamespace::XmlTextReaderImpl_IncrementalReadState const ReadContentAsBinary_OnCachedValue;

/// @brief Field ReadContentAsBinary_OnPartialValue value: I32(13)
static ::GlobalNamespace::XmlTextReaderImpl_IncrementalReadState const ReadContentAsBinary_OnPartialValue;

/// @brief Field ReadData value: I32(7)
static ::GlobalNamespace::XmlTextReaderImpl_IncrementalReadState const ReadData;

/// @brief Field ReadValueChunk_OnCachedValue value: I32(10)
static ::GlobalNamespace::XmlTextReaderImpl_IncrementalReadState const ReadValueChunk_OnCachedValue;

/// @brief Field ReadValueChunk_OnPartialValue value: I32(11)
static ::GlobalNamespace::XmlTextReaderImpl_IncrementalReadState const ReadValueChunk_OnPartialValue;

/// @brief Field StartTag value: I32(1)
static ::GlobalNamespace::XmlTextReaderImpl_IncrementalReadState const StartTag;

/// @brief Field Text value: I32(0)
static ::GlobalNamespace::XmlTextReaderImpl_IncrementalReadState const Text;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14055};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::XmlTextReaderImpl_IncrementalReadState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::XmlTextReaderImpl_IncrementalReadState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
