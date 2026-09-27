#pragma once
// IWYU pragma private; include "System/Xml/XmlTextWriter_SpecialAttr.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlTextWriter_SpecialAttr)
// Forward declare root types
namespace GlobalNamespace {
struct XmlTextWriter_SpecialAttr;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::XmlTextWriter_SpecialAttr);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::XmlTextWriter_SpecialAttr, "System.Xml", "XmlTextWriter/SpecialAttr");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Xml.XmlTextWriter/SpecialAttr
struct CORDL_TYPE XmlTextWriter_SpecialAttr {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __XmlTextWriter_SpecialAttr_Unwrapped
enum struct __XmlTextWriter_SpecialAttr_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_XmlSpace = static_cast<int32_t>(0x1),
__E_XmlLang = static_cast<int32_t>(0x2),
__E_XmlNs = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __XmlTextWriter_SpecialAttr_Unwrapped () const noexcept {
return static_cast<__XmlTextWriter_SpecialAttr_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr XmlTextWriter_SpecialAttr() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr XmlTextWriter_SpecialAttr(int32_t  value__) noexcept;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::XmlTextWriter_SpecialAttr const None;

/// @brief Field XmlLang value: I32(2)
static ::GlobalNamespace::XmlTextWriter_SpecialAttr const XmlLang;

/// @brief Field XmlNs value: I32(3)
static ::GlobalNamespace::XmlTextWriter_SpecialAttr const XmlNs;

/// @brief Field XmlSpace value: I32(1)
static ::GlobalNamespace::XmlTextWriter_SpecialAttr const XmlSpace;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14070};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::XmlTextWriter_SpecialAttr, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::XmlTextWriter_SpecialAttr) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
