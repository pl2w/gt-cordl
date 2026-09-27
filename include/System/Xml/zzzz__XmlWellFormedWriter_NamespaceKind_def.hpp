#pragma once
// IWYU pragma private; include "System/Xml/XmlWellFormedWriter_NamespaceKind.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlWellFormedWriter_NamespaceKind)
// Forward declare root types
namespace GlobalNamespace {
struct XmlWellFormedWriter_NamespaceKind;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::XmlWellFormedWriter_NamespaceKind);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::XmlWellFormedWriter_NamespaceKind, "System.Xml", "XmlWellFormedWriter/NamespaceKind");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Xml.XmlWellFormedWriter/NamespaceKind
struct CORDL_TYPE XmlWellFormedWriter_NamespaceKind {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __XmlWellFormedWriter_NamespaceKind_Unwrapped
enum struct __XmlWellFormedWriter_NamespaceKind_Unwrapped : int32_t {
__E_Written = static_cast<int32_t>(0x0),
__E_NeedToWrite = static_cast<int32_t>(0x1),
__E_Implied = static_cast<int32_t>(0x2),
__E_Special = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __XmlWellFormedWriter_NamespaceKind_Unwrapped () const noexcept {
return static_cast<__XmlWellFormedWriter_NamespaceKind_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr XmlWellFormedWriter_NamespaceKind() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr XmlWellFormedWriter_NamespaceKind(int32_t  value__) noexcept;

/// @brief Field Implied value: I32(2)
static ::GlobalNamespace::XmlWellFormedWriter_NamespaceKind const Implied;

/// @brief Field NeedToWrite value: I32(1)
static ::GlobalNamespace::XmlWellFormedWriter_NamespaceKind const NeedToWrite;

/// @brief Field Special value: I32(3)
static ::GlobalNamespace::XmlWellFormedWriter_NamespaceKind const Special;

/// @brief Field Written value: I32(0)
static ::GlobalNamespace::XmlWellFormedWriter_NamespaceKind const Written;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14084};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::XmlWellFormedWriter_NamespaceKind, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::XmlWellFormedWriter_NamespaceKind) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
