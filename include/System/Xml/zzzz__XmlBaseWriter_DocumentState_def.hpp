#pragma once
// IWYU pragma private; include "System/Xml/XmlBaseWriter_DocumentState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlBaseWriter_DocumentState)
// Forward declare root types
namespace GlobalNamespace {
struct XmlBaseWriter_DocumentState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::XmlBaseWriter_DocumentState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::XmlBaseWriter_DocumentState, "System.Xml", "XmlBaseWriter/DocumentState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Xml.XmlBaseWriter/DocumentState
struct CORDL_TYPE XmlBaseWriter_DocumentState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __XmlBaseWriter_DocumentState_Unwrapped
enum struct __XmlBaseWriter_DocumentState_Unwrapped : uint8_t {
__E_None = static_cast<uint8_t>(0x0u),
__E_Document = static_cast<uint8_t>(0x1u),
__E_Epilog = static_cast<uint8_t>(0x2u),
__E_End = static_cast<uint8_t>(0x3u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __XmlBaseWriter_DocumentState_Unwrapped () const noexcept {
return static_cast<__XmlBaseWriter_DocumentState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint8_t () const noexcept {
return static_cast<uint8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr XmlBaseWriter_DocumentState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None, comment: None }]
constexpr XmlBaseWriter_DocumentState(uint8_t  value__) noexcept;

/// @brief Field Document value: U8(1)
static ::GlobalNamespace::XmlBaseWriter_DocumentState const Document;

/// @brief Field End value: U8(3)
static ::GlobalNamespace::XmlBaseWriter_DocumentState const End;

/// @brief Field Epilog value: U8(2)
static ::GlobalNamespace::XmlBaseWriter_DocumentState const Epilog;

/// @brief Field None value: U8(0)
static ::GlobalNamespace::XmlBaseWriter_DocumentState const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24440};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field value__, offset: 0x0, size: 0x1, def value: None
 uint8_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::XmlBaseWriter_DocumentState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::XmlBaseWriter_DocumentState) == 0x1, "Size mismatch!");

} // namespace end def GlobalNamespace
