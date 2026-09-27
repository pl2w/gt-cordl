#pragma once
// IWYU pragma private; include "Meta/Voice/TelemetryUtilities/TerminationReason.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TerminationReason)
// Forward declare root types
namespace Meta::Voice::TelemetryUtilities {
struct TerminationReason;
}
// Write type traits
MARK_VAL_T(::Meta::Voice::TelemetryUtilities::TerminationReason);
DEFINE_IL2CPP_CLASS(::Meta::Voice::TelemetryUtilities::TerminationReason, "Meta.Voice.TelemetryUtilities", "TerminationReason");
// Dependencies 
namespace Meta::Voice::TelemetryUtilities {
// Is value type: true
// CS Name: Meta.Voice.TelemetryUtilities.TerminationReason
struct CORDL_TYPE TerminationReason {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TerminationReason_Unwrapped
enum struct __TerminationReason_Unwrapped : int32_t {
__E_Undetermined = static_cast<int32_t>(0x0),
__E_Successful = static_cast<int32_t>(0x1),
__E_Failed = static_cast<int32_t>(0x2),
__E_Canceled = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TerminationReason_Unwrapped () const noexcept {
return static_cast<__TerminationReason_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TerminationReason() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr TerminationReason(int32_t  value__) noexcept;

/// @brief Field Canceled value: I32(3)
static ::Meta::Voice::TelemetryUtilities::TerminationReason const Canceled;

/// @brief Field Failed value: I32(2)
static ::Meta::Voice::TelemetryUtilities::TerminationReason const Failed;

/// @brief Field Successful value: I32(1)
static ::Meta::Voice::TelemetryUtilities::TerminationReason const Successful;

/// @brief Field Undetermined value: I32(0)
static ::Meta::Voice::TelemetryUtilities::TerminationReason const Undetermined;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{33058};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::Voice::TelemetryUtilities::TerminationReason, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Meta::Voice::TelemetryUtilities::TerminationReason) == 0x4, "Size mismatch!");

} // namespace end def Meta::Voice::TelemetryUtilities
