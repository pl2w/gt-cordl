#pragma once
// IWYU pragma private; include "System/Xml/DtdParser_ScanningFunction.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DtdParser_ScanningFunction)
// Forward declare root types
namespace GlobalNamespace {
struct DtdParser_ScanningFunction;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::DtdParser_ScanningFunction);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DtdParser_ScanningFunction, "System.Xml", "DtdParser/ScanningFunction");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Xml.DtdParser/ScanningFunction
struct CORDL_TYPE DtdParser_ScanningFunction {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __DtdParser_ScanningFunction_Unwrapped
enum struct __DtdParser_ScanningFunction_Unwrapped : int32_t {
__E_SubsetContent = static_cast<int32_t>(0x0),
__E_Name = static_cast<int32_t>(0x1),
__E_QName = static_cast<int32_t>(0x2),
__E_Nmtoken = static_cast<int32_t>(0x3),
__E_Doctype1 = static_cast<int32_t>(0x4),
__E_Doctype2 = static_cast<int32_t>(0x5),
__E_Element1 = static_cast<int32_t>(0x6),
__E_Element2 = static_cast<int32_t>(0x7),
__E_Element3 = static_cast<int32_t>(0x8),
__E_Element4 = static_cast<int32_t>(0x9),
__E_Element5 = static_cast<int32_t>(0xa),
__E_Element6 = static_cast<int32_t>(0xb),
__E_Element7 = static_cast<int32_t>(0xc),
__E_Attlist1 = static_cast<int32_t>(0xd),
__E_Attlist2 = static_cast<int32_t>(0xe),
__E_Attlist3 = static_cast<int32_t>(0xf),
__E_Attlist4 = static_cast<int32_t>(0x10),
__E_Attlist5 = static_cast<int32_t>(0x11),
__E_Attlist6 = static_cast<int32_t>(0x12),
__E_Attlist7 = static_cast<int32_t>(0x13),
__E_Entity1 = static_cast<int32_t>(0x14),
__E_Entity2 = static_cast<int32_t>(0x15),
__E_Entity3 = static_cast<int32_t>(0x16),
__E_Notation1 = static_cast<int32_t>(0x17),
__E_CondSection1 = static_cast<int32_t>(0x18),
__E_CondSection2 = static_cast<int32_t>(0x19),
__E_CondSection3 = static_cast<int32_t>(0x1a),
__E_Literal = static_cast<int32_t>(0x1b),
__E_SystemId = static_cast<int32_t>(0x1c),
__E_PublicId1 = static_cast<int32_t>(0x1d),
__E_PublicId2 = static_cast<int32_t>(0x1e),
__E_ClosingTag = static_cast<int32_t>(0x1f),
__E_ParamEntitySpace = static_cast<int32_t>(0x20),
__E_None = static_cast<int32_t>(0x21),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DtdParser_ScanningFunction_Unwrapped () const noexcept {
return static_cast<__DtdParser_ScanningFunction_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr DtdParser_ScanningFunction() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr DtdParser_ScanningFunction(int32_t  value__) noexcept;

/// @brief Field Attlist1 value: I32(13)
static ::GlobalNamespace::DtdParser_ScanningFunction const Attlist1;

/// @brief Field Attlist2 value: I32(14)
static ::GlobalNamespace::DtdParser_ScanningFunction const Attlist2;

/// @brief Field Attlist3 value: I32(15)
static ::GlobalNamespace::DtdParser_ScanningFunction const Attlist3;

/// @brief Field Attlist4 value: I32(16)
static ::GlobalNamespace::DtdParser_ScanningFunction const Attlist4;

/// @brief Field Attlist5 value: I32(17)
static ::GlobalNamespace::DtdParser_ScanningFunction const Attlist5;

/// @brief Field Attlist6 value: I32(18)
static ::GlobalNamespace::DtdParser_ScanningFunction const Attlist6;

/// @brief Field Attlist7 value: I32(19)
static ::GlobalNamespace::DtdParser_ScanningFunction const Attlist7;

/// @brief Field ClosingTag value: I32(31)
static ::GlobalNamespace::DtdParser_ScanningFunction const ClosingTag;

/// @brief Field CondSection1 value: I32(24)
static ::GlobalNamespace::DtdParser_ScanningFunction const CondSection1;

/// @brief Field CondSection2 value: I32(25)
static ::GlobalNamespace::DtdParser_ScanningFunction const CondSection2;

/// @brief Field CondSection3 value: I32(26)
static ::GlobalNamespace::DtdParser_ScanningFunction const CondSection3;

/// @brief Field Doctype1 value: I32(4)
static ::GlobalNamespace::DtdParser_ScanningFunction const Doctype1;

/// @brief Field Doctype2 value: I32(5)
static ::GlobalNamespace::DtdParser_ScanningFunction const Doctype2;

/// @brief Field Element1 value: I32(6)
static ::GlobalNamespace::DtdParser_ScanningFunction const Element1;

/// @brief Field Element2 value: I32(7)
static ::GlobalNamespace::DtdParser_ScanningFunction const Element2;

/// @brief Field Element3 value: I32(8)
static ::GlobalNamespace::DtdParser_ScanningFunction const Element3;

/// @brief Field Element4 value: I32(9)
static ::GlobalNamespace::DtdParser_ScanningFunction const Element4;

/// @brief Field Element5 value: I32(10)
static ::GlobalNamespace::DtdParser_ScanningFunction const Element5;

/// @brief Field Element6 value: I32(11)
static ::GlobalNamespace::DtdParser_ScanningFunction const Element6;

/// @brief Field Element7 value: I32(12)
static ::GlobalNamespace::DtdParser_ScanningFunction const Element7;

/// @brief Field Entity1 value: I32(20)
static ::GlobalNamespace::DtdParser_ScanningFunction const Entity1;

/// @brief Field Entity2 value: I32(21)
static ::GlobalNamespace::DtdParser_ScanningFunction const Entity2;

/// @brief Field Entity3 value: I32(22)
static ::GlobalNamespace::DtdParser_ScanningFunction const Entity3;

/// @brief Field Literal value: I32(27)
static ::GlobalNamespace::DtdParser_ScanningFunction const Literal;

/// @brief Field Name value: I32(1)
static ::GlobalNamespace::DtdParser_ScanningFunction const Name;

/// @brief Field Nmtoken value: I32(3)
static ::GlobalNamespace::DtdParser_ScanningFunction const Nmtoken;

/// @brief Field None value: I32(33)
static ::GlobalNamespace::DtdParser_ScanningFunction const None;

/// @brief Field Notation1 value: I32(23)
static ::GlobalNamespace::DtdParser_ScanningFunction const Notation1;

/// @brief Field ParamEntitySpace value: I32(32)
static ::GlobalNamespace::DtdParser_ScanningFunction const ParamEntitySpace;

/// @brief Field PublicId1 value: I32(29)
static ::GlobalNamespace::DtdParser_ScanningFunction const PublicId1;

/// @brief Field PublicId2 value: I32(30)
static ::GlobalNamespace::DtdParser_ScanningFunction const PublicId2;

/// @brief Field QName value: I32(2)
static ::GlobalNamespace::DtdParser_ScanningFunction const QName;

/// @brief Field SubsetContent value: I32(0)
static ::GlobalNamespace::DtdParser_ScanningFunction const SubsetContent;

/// @brief Field SystemId value: I32(28)
static ::GlobalNamespace::DtdParser_ScanningFunction const SystemId;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14154};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DtdParser_ScanningFunction, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DtdParser_ScanningFunction) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
