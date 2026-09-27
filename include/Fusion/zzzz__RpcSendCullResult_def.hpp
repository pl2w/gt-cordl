#pragma once
// IWYU pragma private; include "Fusion/RpcSendCullResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RpcSendCullResult)
// Forward declare root types
namespace Fusion {
struct RpcSendCullResult;
}
// Write type traits
MARK_VAL_T(::Fusion::RpcSendCullResult);
DEFINE_IL2CPP_CLASS(::Fusion::RpcSendCullResult, "Fusion", "RpcSendCullResult");
// Dependencies 
namespace Fusion {
// Is value type: true
// CS Name: Fusion.RpcSendCullResult
struct CORDL_TYPE RpcSendCullResult {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __RpcSendCullResult_Unwrapped
enum struct __RpcSendCullResult_Unwrapped : int32_t {
__E_NotCulled = static_cast<int32_t>(0x0),
__E_NotInvokableDuringResim = static_cast<int32_t>(0x1),
__E_InsufficientSourceAuthority = static_cast<int32_t>(0x2),
__E_NoActiveConnections = static_cast<int32_t>(0x3),
__E_TargetPlayerUnreachable = static_cast<int32_t>(0x4),
__E_TargetPlayerIsLocalButRpcIsNotInvokableLocally = static_cast<int32_t>(0x5),
__E_PayloadSizeExceeded = static_cast<int32_t>(0x6),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RpcSendCullResult_Unwrapped () const noexcept {
return static_cast<__RpcSendCullResult_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr RpcSendCullResult() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr RpcSendCullResult(int32_t  value__) noexcept;

/// @brief Field InsufficientSourceAuthority value: I32(2)
static ::Fusion::RpcSendCullResult const InsufficientSourceAuthority;

/// @brief Field NoActiveConnections value: I32(3)
static ::Fusion::RpcSendCullResult const NoActiveConnections;

/// @brief Field NotCulled value: I32(0)
static ::Fusion::RpcSendCullResult const NotCulled;

/// @brief Field NotInvokableDuringResim value: I32(1)
static ::Fusion::RpcSendCullResult const NotInvokableDuringResim;

/// @brief Field PayloadSizeExceeded value: I32(6)
static ::Fusion::RpcSendCullResult const PayloadSizeExceeded;

/// @brief Field TargetPlayerIsLocalButRpcIsNotInvokableLocally value: I32(5)
static ::Fusion::RpcSendCullResult const TargetPlayerIsLocalButRpcIsNotInvokableLocally;

/// @brief Field TargetPlayerUnreachable value: I32(4)
static ::Fusion::RpcSendCullResult const TargetPlayerUnreachable;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19191};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::RpcSendCullResult, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Fusion::RpcSendCullResult) == 0x4, "Size mismatch!");

} // namespace end def Fusion
