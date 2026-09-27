#pragma once
// IWYU pragma private; include "System/Xml/Schema/XsdDateTime_XsdDateTimeKind.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XsdDateTime_XsdDateTimeKind)
// Forward declare root types
namespace GlobalNamespace {
struct XsdDateTime_XsdDateTimeKind;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::XsdDateTime_XsdDateTimeKind);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::XsdDateTime_XsdDateTimeKind, "System.Xml.Schema", "XsdDateTime/XsdDateTimeKind");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Xml.Schema.XsdDateTime/XsdDateTimeKind
struct CORDL_TYPE XsdDateTime_XsdDateTimeKind {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __XsdDateTime_XsdDateTimeKind_Unwrapped
enum struct __XsdDateTime_XsdDateTimeKind_Unwrapped : int32_t {
__E_Unspecified = static_cast<int32_t>(0x0),
__E_Zulu = static_cast<int32_t>(0x1),
__E_LocalWestOfZulu = static_cast<int32_t>(0x2),
__E_LocalEastOfZulu = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __XsdDateTime_XsdDateTimeKind_Unwrapped () const noexcept {
return static_cast<__XsdDateTime_XsdDateTimeKind_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr XsdDateTime_XsdDateTimeKind() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr XsdDateTime_XsdDateTimeKind(int32_t  value__) noexcept;

/// @brief Field LocalEastOfZulu value: I32(3)
static ::GlobalNamespace::XsdDateTime_XsdDateTimeKind const LocalEastOfZulu;

/// @brief Field LocalWestOfZulu value: I32(2)
static ::GlobalNamespace::XsdDateTime_XsdDateTimeKind const LocalWestOfZulu;

/// @brief Field Unspecified value: I32(0)
static ::GlobalNamespace::XsdDateTime_XsdDateTimeKind const Unspecified;

/// @brief Field Zulu value: I32(1)
static ::GlobalNamespace::XsdDateTime_XsdDateTimeKind const Zulu;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14585};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::XsdDateTime_XsdDateTimeKind, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::XsdDateTime_XsdDateTimeKind) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
