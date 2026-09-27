#pragma once
// IWYU pragma private; include "System/Xml/XmlTextWriter_State.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlTextWriter_State)
// Forward declare root types
namespace GlobalNamespace {
struct XmlTextWriter_State;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::XmlTextWriter_State);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::XmlTextWriter_State, "System.Xml", "XmlTextWriter/State");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Xml.XmlTextWriter/State
struct CORDL_TYPE XmlTextWriter_State {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __XmlTextWriter_State_Unwrapped
enum struct __XmlTextWriter_State_Unwrapped : int32_t {
__E_Start = static_cast<int32_t>(0x0),
__E_Prolog = static_cast<int32_t>(0x1),
__E_PostDTD = static_cast<int32_t>(0x2),
__E_Element = static_cast<int32_t>(0x3),
__E_Attribute = static_cast<int32_t>(0x4),
__E_Content = static_cast<int32_t>(0x5),
__E_AttrOnly = static_cast<int32_t>(0x6),
__E_Epilog = static_cast<int32_t>(0x7),
__E_Error = static_cast<int32_t>(0x8),
__E_Closed = static_cast<int32_t>(0x9),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __XmlTextWriter_State_Unwrapped () const noexcept {
return static_cast<__XmlTextWriter_State_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr XmlTextWriter_State() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr XmlTextWriter_State(int32_t  value__) noexcept;

/// @brief Field AttrOnly value: I32(6)
static ::GlobalNamespace::XmlTextWriter_State const AttrOnly;

/// @brief Field Attribute value: I32(4)
static ::GlobalNamespace::XmlTextWriter_State const Attribute;

/// @brief Field Closed value: I32(9)
static ::GlobalNamespace::XmlTextWriter_State const Closed;

/// @brief Field Content value: I32(5)
static ::GlobalNamespace::XmlTextWriter_State const Content;

/// @brief Field Element value: I32(3)
static ::GlobalNamespace::XmlTextWriter_State const Element;

/// @brief Field Epilog value: I32(7)
static ::GlobalNamespace::XmlTextWriter_State const Epilog;

/// @brief Field Error value: I32(8)
static ::GlobalNamespace::XmlTextWriter_State const Error;

/// @brief Field PostDTD value: I32(2)
static ::GlobalNamespace::XmlTextWriter_State const PostDTD;

/// @brief Field Prolog value: I32(1)
static ::GlobalNamespace::XmlTextWriter_State const Prolog;

/// @brief Field Start value: I32(0)
static ::GlobalNamespace::XmlTextWriter_State const Start;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14071};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::XmlTextWriter_State, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::XmlTextWriter_State) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
