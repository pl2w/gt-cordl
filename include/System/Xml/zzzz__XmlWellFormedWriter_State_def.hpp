#pragma once
// IWYU pragma private; include "System/Xml/XmlWellFormedWriter_State.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlWellFormedWriter_State)
// Forward declare root types
namespace GlobalNamespace {
struct XmlWellFormedWriter_State;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::XmlWellFormedWriter_State);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::XmlWellFormedWriter_State, "System.Xml", "XmlWellFormedWriter/State");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Xml.XmlWellFormedWriter/State
struct CORDL_TYPE XmlWellFormedWriter_State {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __XmlWellFormedWriter_State_Unwrapped
enum struct __XmlWellFormedWriter_State_Unwrapped : int32_t {
__E_Start = static_cast<int32_t>(0x0),
__E_TopLevel = static_cast<int32_t>(0x1),
__E_Document = static_cast<int32_t>(0x2),
__E_Element = static_cast<int32_t>(0x3),
__E_Content = static_cast<int32_t>(0x4),
__E_B64Content = static_cast<int32_t>(0x5),
__E_B64Attribute = static_cast<int32_t>(0x6),
__E_AfterRootEle = static_cast<int32_t>(0x7),
__E_Attribute = static_cast<int32_t>(0x8),
__E_SpecialAttr = static_cast<int32_t>(0x9),
__E_EndDocument = static_cast<int32_t>(0xa),
__E_RootLevelAttr = static_cast<int32_t>(0xb),
__E_RootLevelSpecAttr = static_cast<int32_t>(0xc),
__E_RootLevelB64Attr = static_cast<int32_t>(0xd),
__E_AfterRootLevelAttr = static_cast<int32_t>(0xe),
__E_Closed = static_cast<int32_t>(0xf),
__E_Error = static_cast<int32_t>(0x10),
__E_StartContent = static_cast<int32_t>(0x65),
__E_StartContentEle = static_cast<int32_t>(0x66),
__E_StartContentB64 = static_cast<int32_t>(0x67),
__E_StartDoc = static_cast<int32_t>(0x68),
__E_StartDocEle = static_cast<int32_t>(0x6a),
__E_EndAttrSEle = static_cast<int32_t>(0x6b),
__E_EndAttrEEle = static_cast<int32_t>(0x6c),
__E_EndAttrSCont = static_cast<int32_t>(0x6d),
__E_EndAttrSAttr = static_cast<int32_t>(0x6f),
__E_PostB64Cont = static_cast<int32_t>(0x70),
__E_PostB64Attr = static_cast<int32_t>(0x71),
__E_PostB64RootAttr = static_cast<int32_t>(0x72),
__E_StartFragEle = static_cast<int32_t>(0x73),
__E_StartFragCont = static_cast<int32_t>(0x74),
__E_StartFragB64 = static_cast<int32_t>(0x75),
__E_StartRootLevelAttr = static_cast<int32_t>(0x76),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __XmlWellFormedWriter_State_Unwrapped () const noexcept {
return static_cast<__XmlWellFormedWriter_State_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr XmlWellFormedWriter_State() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr XmlWellFormedWriter_State(int32_t  value__) noexcept;

/// @brief Field AfterRootEle value: I32(7)
static ::GlobalNamespace::XmlWellFormedWriter_State const AfterRootEle;

/// @brief Field AfterRootLevelAttr value: I32(14)
static ::GlobalNamespace::XmlWellFormedWriter_State const AfterRootLevelAttr;

/// @brief Field Attribute value: I32(8)
static ::GlobalNamespace::XmlWellFormedWriter_State const Attribute;

/// @brief Field B64Attribute value: I32(6)
static ::GlobalNamespace::XmlWellFormedWriter_State const B64Attribute;

/// @brief Field B64Content value: I32(5)
static ::GlobalNamespace::XmlWellFormedWriter_State const B64Content;

/// @brief Field Closed value: I32(15)
static ::GlobalNamespace::XmlWellFormedWriter_State const Closed;

/// @brief Field Content value: I32(4)
static ::GlobalNamespace::XmlWellFormedWriter_State const Content;

/// @brief Field Document value: I32(2)
static ::GlobalNamespace::XmlWellFormedWriter_State const Document;

/// @brief Field Element value: I32(3)
static ::GlobalNamespace::XmlWellFormedWriter_State const Element;

/// @brief Field EndAttrEEle value: I32(108)
static ::GlobalNamespace::XmlWellFormedWriter_State const EndAttrEEle;

/// @brief Field EndAttrSAttr value: I32(111)
static ::GlobalNamespace::XmlWellFormedWriter_State const EndAttrSAttr;

/// @brief Field EndAttrSCont value: I32(109)
static ::GlobalNamespace::XmlWellFormedWriter_State const EndAttrSCont;

/// @brief Field EndAttrSEle value: I32(107)
static ::GlobalNamespace::XmlWellFormedWriter_State const EndAttrSEle;

/// @brief Field EndDocument value: I32(10)
static ::GlobalNamespace::XmlWellFormedWriter_State const EndDocument;

/// @brief Field Error value: I32(16)
static ::GlobalNamespace::XmlWellFormedWriter_State const Error;

/// @brief Field PostB64Attr value: I32(113)
static ::GlobalNamespace::XmlWellFormedWriter_State const PostB64Attr;

/// @brief Field PostB64Cont value: I32(112)
static ::GlobalNamespace::XmlWellFormedWriter_State const PostB64Cont;

/// @brief Field PostB64RootAttr value: I32(114)
static ::GlobalNamespace::XmlWellFormedWriter_State const PostB64RootAttr;

/// @brief Field RootLevelAttr value: I32(11)
static ::GlobalNamespace::XmlWellFormedWriter_State const RootLevelAttr;

/// @brief Field RootLevelB64Attr value: I32(13)
static ::GlobalNamespace::XmlWellFormedWriter_State const RootLevelB64Attr;

/// @brief Field RootLevelSpecAttr value: I32(12)
static ::GlobalNamespace::XmlWellFormedWriter_State const RootLevelSpecAttr;

/// @brief Field SpecialAttr value: I32(9)
static ::GlobalNamespace::XmlWellFormedWriter_State const SpecialAttr;

/// @brief Field Start value: I32(0)
static ::GlobalNamespace::XmlWellFormedWriter_State const Start;

/// @brief Field StartContent value: I32(101)
static ::GlobalNamespace::XmlWellFormedWriter_State const StartContent;

/// @brief Field StartContentB64 value: I32(103)
static ::GlobalNamespace::XmlWellFormedWriter_State const StartContentB64;

/// @brief Field StartContentEle value: I32(102)
static ::GlobalNamespace::XmlWellFormedWriter_State const StartContentEle;

/// @brief Field StartDoc value: I32(104)
static ::GlobalNamespace::XmlWellFormedWriter_State const StartDoc;

/// @brief Field StartDocEle value: I32(106)
static ::GlobalNamespace::XmlWellFormedWriter_State const StartDocEle;

/// @brief Field StartFragB64 value: I32(117)
static ::GlobalNamespace::XmlWellFormedWriter_State const StartFragB64;

/// @brief Field StartFragCont value: I32(116)
static ::GlobalNamespace::XmlWellFormedWriter_State const StartFragCont;

/// @brief Field StartFragEle value: I32(115)
static ::GlobalNamespace::XmlWellFormedWriter_State const StartFragEle;

/// @brief Field StartRootLevelAttr value: I32(118)
static ::GlobalNamespace::XmlWellFormedWriter_State const StartRootLevelAttr;

/// @brief Field TopLevel value: I32(1)
static ::GlobalNamespace::XmlWellFormedWriter_State const TopLevel;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14080};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::XmlWellFormedWriter_State, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::XmlWellFormedWriter_State) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
