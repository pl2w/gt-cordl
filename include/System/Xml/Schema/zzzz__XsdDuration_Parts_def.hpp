#pragma once
// IWYU pragma private; include "System/Xml/Schema/XsdDuration_Parts.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XsdDuration_Parts)
// Forward declare root types
namespace GlobalNamespace {
struct XsdDuration_Parts;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::XsdDuration_Parts);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::XsdDuration_Parts, "System.Xml.Schema", "XsdDuration/Parts");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Xml.Schema.XsdDuration/Parts
struct CORDL_TYPE XsdDuration_Parts {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __XsdDuration_Parts_Unwrapped
enum struct __XsdDuration_Parts_Unwrapped : int32_t {
__E_HasNone = static_cast<int32_t>(0x0),
__E_HasYears = static_cast<int32_t>(0x1),
__E_HasMonths = static_cast<int32_t>(0x2),
__E_HasDays = static_cast<int32_t>(0x4),
__E_HasHours = static_cast<int32_t>(0x8),
__E_HasMinutes = static_cast<int32_t>(0x10),
__E_HasSeconds = static_cast<int32_t>(0x20),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __XsdDuration_Parts_Unwrapped () const noexcept {
return static_cast<__XsdDuration_Parts_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr XsdDuration_Parts() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr XsdDuration_Parts(int32_t  value__) noexcept;

/// @brief Field HasDays value: I32(4)
static ::GlobalNamespace::XsdDuration_Parts const HasDays;

/// @brief Field HasHours value: I32(8)
static ::GlobalNamespace::XsdDuration_Parts const HasHours;

/// @brief Field HasMinutes value: I32(16)
static ::GlobalNamespace::XsdDuration_Parts const HasMinutes;

/// @brief Field HasMonths value: I32(2)
static ::GlobalNamespace::XsdDuration_Parts const HasMonths;

/// @brief Field HasNone value: I32(0)
static ::GlobalNamespace::XsdDuration_Parts const HasNone;

/// @brief Field HasSeconds value: I32(32)
static ::GlobalNamespace::XsdDuration_Parts const HasSeconds;

/// @brief Field HasYears value: I32(1)
static ::GlobalNamespace::XsdDuration_Parts const HasYears;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14588};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::XsdDuration_Parts, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::XsdDuration_Parts) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
