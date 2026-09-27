#pragma once
// IWYU pragma private; include "System/Xml/XmlWellFormedWriter_SpecialAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlWellFormedWriter_SpecialAttribute)
// Forward declare root types
namespace GlobalNamespace {
struct XmlWellFormedWriter_SpecialAttribute;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::XmlWellFormedWriter_SpecialAttribute);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::XmlWellFormedWriter_SpecialAttribute, "System.Xml", "XmlWellFormedWriter/SpecialAttribute");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Xml.XmlWellFormedWriter/SpecialAttribute
struct CORDL_TYPE XmlWellFormedWriter_SpecialAttribute {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __XmlWellFormedWriter_SpecialAttribute_Unwrapped
enum struct __XmlWellFormedWriter_SpecialAttribute_Unwrapped : int32_t {
__E_No = static_cast<int32_t>(0x0),
__E_DefaultXmlns = static_cast<int32_t>(0x1),
__E_PrefixedXmlns = static_cast<int32_t>(0x2),
__E_XmlSpace = static_cast<int32_t>(0x3),
__E_XmlLang = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __XmlWellFormedWriter_SpecialAttribute_Unwrapped () const noexcept {
return static_cast<__XmlWellFormedWriter_SpecialAttribute_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr XmlWellFormedWriter_SpecialAttribute() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr XmlWellFormedWriter_SpecialAttribute(int32_t  value__) noexcept;

/// @brief Field DefaultXmlns value: I32(1)
static ::GlobalNamespace::XmlWellFormedWriter_SpecialAttribute const DefaultXmlns;

/// @brief Field No value: I32(0)
static ::GlobalNamespace::XmlWellFormedWriter_SpecialAttribute const No;

/// @brief Field PrefixedXmlns value: I32(2)
static ::GlobalNamespace::XmlWellFormedWriter_SpecialAttribute const PrefixedXmlns;

/// @brief Field XmlLang value: I32(4)
static ::GlobalNamespace::XmlWellFormedWriter_SpecialAttribute const XmlLang;

/// @brief Field XmlSpace value: I32(3)
static ::GlobalNamespace::XmlWellFormedWriter_SpecialAttribute const XmlSpace;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14087};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::XmlWellFormedWriter_SpecialAttribute, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::XmlWellFormedWriter_SpecialAttribute) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
