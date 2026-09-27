#pragma once
// IWYU pragma private; include "System/Xml/XmlTextWriter_NamespaceState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlTextWriter_NamespaceState)
// Forward declare root types
namespace GlobalNamespace {
struct XmlTextWriter_NamespaceState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::XmlTextWriter_NamespaceState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::XmlTextWriter_NamespaceState, "System.Xml", "XmlTextWriter/NamespaceState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Xml.XmlTextWriter/NamespaceState
struct CORDL_TYPE XmlTextWriter_NamespaceState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __XmlTextWriter_NamespaceState_Unwrapped
enum struct __XmlTextWriter_NamespaceState_Unwrapped : int32_t {
__E_Uninitialized = static_cast<int32_t>(0x0),
__E_NotDeclaredButInScope = static_cast<int32_t>(0x1),
__E_DeclaredButNotWrittenOut = static_cast<int32_t>(0x2),
__E_DeclaredAndWrittenOut = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __XmlTextWriter_NamespaceState_Unwrapped () const noexcept {
return static_cast<__XmlTextWriter_NamespaceState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr XmlTextWriter_NamespaceState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr XmlTextWriter_NamespaceState(int32_t  value__) noexcept;

/// @brief Field DeclaredAndWrittenOut value: I32(3)
static ::GlobalNamespace::XmlTextWriter_NamespaceState const DeclaredAndWrittenOut;

/// @brief Field DeclaredButNotWrittenOut value: I32(2)
static ::GlobalNamespace::XmlTextWriter_NamespaceState const DeclaredButNotWrittenOut;

/// @brief Field NotDeclaredButInScope value: I32(1)
static ::GlobalNamespace::XmlTextWriter_NamespaceState const NotDeclaredButInScope;

/// @brief Field Uninitialized value: I32(0)
static ::GlobalNamespace::XmlTextWriter_NamespaceState const Uninitialized;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14067};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::XmlTextWriter_NamespaceState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::XmlTextWriter_NamespaceState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
