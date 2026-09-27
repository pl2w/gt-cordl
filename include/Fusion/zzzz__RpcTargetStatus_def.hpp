#pragma once
// IWYU pragma private; include "Fusion/RpcTargetStatus.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RpcTargetStatus)
// Forward declare root types
namespace Fusion {
struct RpcTargetStatus;
}
// Write type traits
MARK_VAL_T(::Fusion::RpcTargetStatus);
DEFINE_IL2CPP_CLASS(::Fusion::RpcTargetStatus, "Fusion", "RpcTargetStatus");
// Dependencies 
namespace Fusion {
// Is value type: true
// CS Name: Fusion.RpcTargetStatus
struct CORDL_TYPE RpcTargetStatus {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __RpcTargetStatus_Unwrapped
enum struct __RpcTargetStatus_Unwrapped : int32_t {
__E_Unreachable = static_cast<int32_t>(0x0),
__E_Self = static_cast<int32_t>(0x1),
__E_Remote = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RpcTargetStatus_Unwrapped () const noexcept {
return static_cast<__RpcTargetStatus_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr RpcTargetStatus() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr RpcTargetStatus(int32_t  value__) noexcept;

/// @brief Field Remote value: I32(2)
static ::Fusion::RpcTargetStatus const Remote;

/// @brief Field Self value: I32(1)
static ::Fusion::RpcTargetStatus const Self;

/// @brief Field Unreachable value: I32(0)
static ::Fusion::RpcTargetStatus const Unreachable;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19197};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::RpcTargetStatus, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Fusion::RpcTargetStatus) == 0x4, "Size mismatch!");

} // namespace end def Fusion
