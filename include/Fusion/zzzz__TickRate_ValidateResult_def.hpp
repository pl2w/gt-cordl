#pragma once
// IWYU pragma private; include "Fusion/TickRate_ValidateResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TickRate_ValidateResult)
// Forward declare root types
namespace GlobalNamespace {
struct TickRate_ValidateResult;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TickRate_ValidateResult);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TickRate_ValidateResult, "Fusion", "TickRate/ValidateResult");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Fusion.TickRate/ValidateResult
struct CORDL_TYPE TickRate_ValidateResult {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TickRate_ValidateResult_Unwrapped
enum struct __TickRate_ValidateResult_Unwrapped : int32_t {
__E_Ok = static_cast<int32_t>(0x0),
__E_Error = static_cast<int32_t>(0x1),
__E_NotFound = static_cast<int32_t>(0x2),
__E_InvalidTickRate = static_cast<int32_t>(0x3),
__E_ServerIndexOutOfRange = static_cast<int32_t>(0x4),
__E_ClientSendIndexOutOfRange = static_cast<int32_t>(0x5),
__E_ServerSendIndexOutOfRange = static_cast<int32_t>(0x6),
__E_ServerSendRateLargerThanTickRate = static_cast<int32_t>(0x7),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TickRate_ValidateResult_Unwrapped () const noexcept {
return static_cast<__TickRate_ValidateResult_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TickRate_ValidateResult() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr TickRate_ValidateResult(int32_t  value__) noexcept;

/// @brief Field ClientSendIndexOutOfRange value: I32(5)
static ::GlobalNamespace::TickRate_ValidateResult const ClientSendIndexOutOfRange;

/// @brief Field Error value: I32(1)
static ::GlobalNamespace::TickRate_ValidateResult const Error;

/// @brief Field InvalidTickRate value: I32(3)
static ::GlobalNamespace::TickRate_ValidateResult const InvalidTickRate;

/// @brief Field NotFound value: I32(2)
static ::GlobalNamespace::TickRate_ValidateResult const NotFound;

/// @brief Field Ok value: I32(0)
static ::GlobalNamespace::TickRate_ValidateResult const Ok;

/// @brief Field ServerIndexOutOfRange value: I32(4)
static ::GlobalNamespace::TickRate_ValidateResult const ServerIndexOutOfRange;

/// @brief Field ServerSendIndexOutOfRange value: I32(6)
static ::GlobalNamespace::TickRate_ValidateResult const ServerSendIndexOutOfRange;

/// @brief Field ServerSendRateLargerThanTickRate value: I32(7)
static ::GlobalNamespace::TickRate_ValidateResult const ServerSendRateLargerThanTickRate;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19106};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TickRate_ValidateResult, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TickRate_ValidateResult) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
