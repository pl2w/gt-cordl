#pragma once
// IWYU pragma private; include "System/Xml/Schema/XsdBuilder_State.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XsdBuilder_State)
// Forward declare root types
namespace GlobalNamespace {
struct XsdBuilder_State;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::XsdBuilder_State);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::XsdBuilder_State, "System.Xml.Schema", "XsdBuilder/State");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Xml.Schema.XsdBuilder/State
struct CORDL_TYPE XsdBuilder_State {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __XsdBuilder_State_Unwrapped
enum struct __XsdBuilder_State_Unwrapped : int32_t {
__E_Root = static_cast<int32_t>(0x0),
__E_Schema = static_cast<int32_t>(0x1),
__E_Annotation = static_cast<int32_t>(0x2),
__E_Include = static_cast<int32_t>(0x3),
__E_Import = static_cast<int32_t>(0x4),
__E_Element = static_cast<int32_t>(0x5),
__E_Attribute = static_cast<int32_t>(0x6),
__E_AttributeGroup = static_cast<int32_t>(0x7),
__E_AttributeGroupRef = static_cast<int32_t>(0x8),
__E_AnyAttribute = static_cast<int32_t>(0x9),
__E_Group = static_cast<int32_t>(0xa),
__E_GroupRef = static_cast<int32_t>(0xb),
__E_All = static_cast<int32_t>(0xc),
__E_Choice = static_cast<int32_t>(0xd),
__E_Sequence = static_cast<int32_t>(0xe),
__E_Any = static_cast<int32_t>(0xf),
__E_Notation = static_cast<int32_t>(0x10),
__E_SimpleType = static_cast<int32_t>(0x11),
__E_ComplexType = static_cast<int32_t>(0x12),
__E_ComplexContent = static_cast<int32_t>(0x13),
__E_ComplexContentRestriction = static_cast<int32_t>(0x14),
__E_ComplexContentExtension = static_cast<int32_t>(0x15),
__E_SimpleContent = static_cast<int32_t>(0x16),
__E_SimpleContentExtension = static_cast<int32_t>(0x17),
__E_SimpleContentRestriction = static_cast<int32_t>(0x18),
__E_SimpleTypeUnion = static_cast<int32_t>(0x19),
__E_SimpleTypeList = static_cast<int32_t>(0x1a),
__E_SimpleTypeRestriction = static_cast<int32_t>(0x1b),
__E_Unique = static_cast<int32_t>(0x1c),
__E_Key = static_cast<int32_t>(0x1d),
__E_KeyRef = static_cast<int32_t>(0x1e),
__E_Selector = static_cast<int32_t>(0x1f),
__E_Field = static_cast<int32_t>(0x20),
__E_MinExclusive = static_cast<int32_t>(0x21),
__E_MinInclusive = static_cast<int32_t>(0x22),
__E_MaxExclusive = static_cast<int32_t>(0x23),
__E_MaxInclusive = static_cast<int32_t>(0x24),
__E_TotalDigits = static_cast<int32_t>(0x25),
__E_FractionDigits = static_cast<int32_t>(0x26),
__E_Length = static_cast<int32_t>(0x27),
__E_MinLength = static_cast<int32_t>(0x28),
__E_MaxLength = static_cast<int32_t>(0x29),
__E_Enumeration = static_cast<int32_t>(0x2a),
__E_Pattern = static_cast<int32_t>(0x2b),
__E_WhiteSpace = static_cast<int32_t>(0x2c),
__E_AppInfo = static_cast<int32_t>(0x2d),
__E_Documentation = static_cast<int32_t>(0x2e),
__E_Redefine = static_cast<int32_t>(0x2f),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __XsdBuilder_State_Unwrapped () const noexcept {
return static_cast<__XsdBuilder_State_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr XsdBuilder_State() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr XsdBuilder_State(int32_t  value__) noexcept;

/// @brief Field All value: I32(12)
static ::GlobalNamespace::XsdBuilder_State const All;

/// @brief Field Annotation value: I32(2)
static ::GlobalNamespace::XsdBuilder_State const Annotation;

/// @brief Field Any value: I32(15)
static ::GlobalNamespace::XsdBuilder_State const Any;

/// @brief Field AnyAttribute value: I32(9)
static ::GlobalNamespace::XsdBuilder_State const AnyAttribute;

/// @brief Field AppInfo value: I32(45)
static ::GlobalNamespace::XsdBuilder_State const AppInfo;

/// @brief Field Attribute value: I32(6)
static ::GlobalNamespace::XsdBuilder_State const Attribute;

/// @brief Field AttributeGroup value: I32(7)
static ::GlobalNamespace::XsdBuilder_State const AttributeGroup;

/// @brief Field AttributeGroupRef value: I32(8)
static ::GlobalNamespace::XsdBuilder_State const AttributeGroupRef;

/// @brief Field Choice value: I32(13)
static ::GlobalNamespace::XsdBuilder_State const Choice;

/// @brief Field ComplexContent value: I32(19)
static ::GlobalNamespace::XsdBuilder_State const ComplexContent;

/// @brief Field ComplexContentExtension value: I32(21)
static ::GlobalNamespace::XsdBuilder_State const ComplexContentExtension;

/// @brief Field ComplexContentRestriction value: I32(20)
static ::GlobalNamespace::XsdBuilder_State const ComplexContentRestriction;

/// @brief Field ComplexType value: I32(18)
static ::GlobalNamespace::XsdBuilder_State const ComplexType;

/// @brief Field Documentation value: I32(46)
static ::GlobalNamespace::XsdBuilder_State const Documentation;

/// @brief Field Element value: I32(5)
static ::GlobalNamespace::XsdBuilder_State const Element;

/// @brief Field Enumeration value: I32(42)
static ::GlobalNamespace::XsdBuilder_State const Enumeration;

/// @brief Field Field value: I32(32)
static ::GlobalNamespace::XsdBuilder_State const Field;

/// @brief Field FractionDigits value: I32(38)
static ::GlobalNamespace::XsdBuilder_State const FractionDigits;

/// @brief Field Group value: I32(10)
static ::GlobalNamespace::XsdBuilder_State const Group;

/// @brief Field GroupRef value: I32(11)
static ::GlobalNamespace::XsdBuilder_State const GroupRef;

/// @brief Field Import value: I32(4)
static ::GlobalNamespace::XsdBuilder_State const Import;

/// @brief Field Include value: I32(3)
static ::GlobalNamespace::XsdBuilder_State const Include;

/// @brief Field Key value: I32(29)
static ::GlobalNamespace::XsdBuilder_State const Key;

/// @brief Field KeyRef value: I32(30)
static ::GlobalNamespace::XsdBuilder_State const KeyRef;

/// @brief Field Length value: I32(39)
static ::GlobalNamespace::XsdBuilder_State const Length;

/// @brief Field MaxExclusive value: I32(35)
static ::GlobalNamespace::XsdBuilder_State const MaxExclusive;

/// @brief Field MaxInclusive value: I32(36)
static ::GlobalNamespace::XsdBuilder_State const MaxInclusive;

/// @brief Field MaxLength value: I32(41)
static ::GlobalNamespace::XsdBuilder_State const MaxLength;

/// @brief Field MinExclusive value: I32(33)
static ::GlobalNamespace::XsdBuilder_State const MinExclusive;

/// @brief Field MinInclusive value: I32(34)
static ::GlobalNamespace::XsdBuilder_State const MinInclusive;

/// @brief Field MinLength value: I32(40)
static ::GlobalNamespace::XsdBuilder_State const MinLength;

/// @brief Field Notation value: I32(16)
static ::GlobalNamespace::XsdBuilder_State const Notation;

/// @brief Field Pattern value: I32(43)
static ::GlobalNamespace::XsdBuilder_State const Pattern;

/// @brief Field Redefine value: I32(47)
static ::GlobalNamespace::XsdBuilder_State const Redefine;

/// @brief Field Root value: I32(0)
static ::GlobalNamespace::XsdBuilder_State const Root;

/// @brief Field Schema value: I32(1)
static ::GlobalNamespace::XsdBuilder_State const Schema;

/// @brief Field Selector value: I32(31)
static ::GlobalNamespace::XsdBuilder_State const Selector;

/// @brief Field Sequence value: I32(14)
static ::GlobalNamespace::XsdBuilder_State const Sequence;

/// @brief Field SimpleContent value: I32(22)
static ::GlobalNamespace::XsdBuilder_State const SimpleContent;

/// @brief Field SimpleContentExtension value: I32(23)
static ::GlobalNamespace::XsdBuilder_State const SimpleContentExtension;

/// @brief Field SimpleContentRestriction value: I32(24)
static ::GlobalNamespace::XsdBuilder_State const SimpleContentRestriction;

/// @brief Field SimpleType value: I32(17)
static ::GlobalNamespace::XsdBuilder_State const SimpleType;

/// @brief Field SimpleTypeList value: I32(26)
static ::GlobalNamespace::XsdBuilder_State const SimpleTypeList;

/// @brief Field SimpleTypeRestriction value: I32(27)
static ::GlobalNamespace::XsdBuilder_State const SimpleTypeRestriction;

/// @brief Field SimpleTypeUnion value: I32(25)
static ::GlobalNamespace::XsdBuilder_State const SimpleTypeUnion;

/// @brief Field TotalDigits value: I32(37)
static ::GlobalNamespace::XsdBuilder_State const TotalDigits;

/// @brief Field Unique value: I32(28)
static ::GlobalNamespace::XsdBuilder_State const Unique;

/// @brief Field WhiteSpace value: I32(44)
static ::GlobalNamespace::XsdBuilder_State const WhiteSpace;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14575};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::XsdBuilder_State, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::XsdBuilder_State) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
