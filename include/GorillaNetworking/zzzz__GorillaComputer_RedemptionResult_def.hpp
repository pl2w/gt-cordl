#pragma once
// IWYU pragma private; include "GorillaNetworking/GorillaComputer_RedemptionResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GorillaComputer_RedemptionResult)
// Forward declare root types
namespace GlobalNamespace {
struct GorillaComputer_RedemptionResult;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GorillaComputer_RedemptionResult);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaComputer_RedemptionResult, "GorillaNetworking", "GorillaComputer/RedemptionResult");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaNetworking.GorillaComputer/RedemptionResult
struct CORDL_TYPE GorillaComputer_RedemptionResult {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GorillaComputer_RedemptionResult_Unwrapped
enum struct __GorillaComputer_RedemptionResult_Unwrapped : int32_t {
__E_Empty = static_cast<int32_t>(0x0),
__E_Invalid = static_cast<int32_t>(0x1),
__E_Checking = static_cast<int32_t>(0x2),
__E_AlreadyUsed = static_cast<int32_t>(0x3),
__E_TooEarly = static_cast<int32_t>(0x4),
__E_TooLate = static_cast<int32_t>(0x5),
__E_AlreadyGranted = static_cast<int32_t>(0x6),
__E_Success = static_cast<int32_t>(0x7),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GorillaComputer_RedemptionResult_Unwrapped () const noexcept {
return static_cast<__GorillaComputer_RedemptionResult_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GorillaComputer_RedemptionResult() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GorillaComputer_RedemptionResult(int32_t  value__) noexcept;

/// @brief Field AlreadyGranted value: I32(6)
static ::GlobalNamespace::GorillaComputer_RedemptionResult const AlreadyGranted;

/// @brief Field AlreadyUsed value: I32(3)
static ::GlobalNamespace::GorillaComputer_RedemptionResult const AlreadyUsed;

/// @brief Field Checking value: I32(2)
static ::GlobalNamespace::GorillaComputer_RedemptionResult const Checking;

/// @brief Field Empty value: I32(0)
static ::GlobalNamespace::GorillaComputer_RedemptionResult const Empty;

/// @brief Field Invalid value: I32(1)
static ::GlobalNamespace::GorillaComputer_RedemptionResult const Invalid;

/// @brief Field Success value: I32(7)
static ::GlobalNamespace::GorillaComputer_RedemptionResult const Success;

/// @brief Field TooEarly value: I32(4)
static ::GlobalNamespace::GorillaComputer_RedemptionResult const TooEarly;

/// @brief Field TooLate value: I32(5)
static ::GlobalNamespace::GorillaComputer_RedemptionResult const TooLate;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4323};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaComputer_RedemptionResult, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaComputer_RedemptionResult) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
