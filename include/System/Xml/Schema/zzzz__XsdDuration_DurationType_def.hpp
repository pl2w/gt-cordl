#pragma once
// IWYU pragma private; include "System/Xml/Schema/XsdDuration_DurationType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XsdDuration_DurationType)
// Forward declare root types
namespace GlobalNamespace {
struct XsdDuration_DurationType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::XsdDuration_DurationType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::XsdDuration_DurationType, "System.Xml.Schema", "XsdDuration/DurationType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Xml.Schema.XsdDuration/DurationType
struct CORDL_TYPE XsdDuration_DurationType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __XsdDuration_DurationType_Unwrapped
enum struct __XsdDuration_DurationType_Unwrapped : int32_t {
__E_Duration = static_cast<int32_t>(0x0),
__E_YearMonthDuration = static_cast<int32_t>(0x1),
__E_DayTimeDuration = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __XsdDuration_DurationType_Unwrapped () const noexcept {
return static_cast<__XsdDuration_DurationType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr XsdDuration_DurationType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr XsdDuration_DurationType(int32_t  value__) noexcept;

/// @brief Field DayTimeDuration value: I32(2)
static ::GlobalNamespace::XsdDuration_DurationType const DayTimeDuration;

/// @brief Field Duration value: I32(0)
static ::GlobalNamespace::XsdDuration_DurationType const Duration;

/// @brief Field YearMonthDuration value: I32(1)
static ::GlobalNamespace::XsdDuration_DurationType const YearMonthDuration;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14589};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::XsdDuration_DurationType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::XsdDuration_DurationType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
