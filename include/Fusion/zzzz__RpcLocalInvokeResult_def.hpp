#pragma once
// IWYU pragma private; include "Fusion/RpcLocalInvokeResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RpcLocalInvokeResult)
// Forward declare root types
namespace Fusion {
struct RpcLocalInvokeResult;
}
// Write type traits
MARK_VAL_T(::Fusion::RpcLocalInvokeResult);
DEFINE_IL2CPP_CLASS(::Fusion::RpcLocalInvokeResult, "Fusion", "RpcLocalInvokeResult");
// Dependencies 
namespace Fusion {
// Is value type: true
// CS Name: Fusion.RpcLocalInvokeResult
struct CORDL_TYPE RpcLocalInvokeResult {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __RpcLocalInvokeResult_Unwrapped
enum struct __RpcLocalInvokeResult_Unwrapped : int32_t {
__E_Invoked = static_cast<int32_t>(0x0),
__E_NotInvokableLocally = static_cast<int32_t>(0x1),
__E_NotInvokableDuringResim = static_cast<int32_t>(0x2),
__E_InsufficientSourceAuthority = static_cast<int32_t>(0x3),
__E_InsufficientTargetAuthority = static_cast<int32_t>(0x4),
__E_TargetPlayerIsNotLocal = static_cast<int32_t>(0x5),
__E_PayloadSizeExceeded = static_cast<int32_t>(0x6),
__E_TagetPlayerIsNotLocal = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RpcLocalInvokeResult_Unwrapped () const noexcept {
return static_cast<__RpcLocalInvokeResult_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr RpcLocalInvokeResult() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr RpcLocalInvokeResult(int32_t  value__) noexcept;

/// @brief Field InsufficientSourceAuthority value: I32(3)
static ::Fusion::RpcLocalInvokeResult const InsufficientSourceAuthority;

/// @brief Field InsufficientTargetAuthority value: I32(4)
static ::Fusion::RpcLocalInvokeResult const InsufficientTargetAuthority;

/// @brief Field Invoked value: I32(0)
static ::Fusion::RpcLocalInvokeResult const Invoked;

/// @brief Field NotInvokableDuringResim value: I32(2)
static ::Fusion::RpcLocalInvokeResult const NotInvokableDuringResim;

/// @brief Field NotInvokableLocally value: I32(1)
static ::Fusion::RpcLocalInvokeResult const NotInvokableLocally;

/// @brief Field PayloadSizeExceeded value: I32(6)
static ::Fusion::RpcLocalInvokeResult const PayloadSizeExceeded;

/// @brief Field TagetPlayerIsNotLocal value: I32(5)
static ::Fusion::RpcLocalInvokeResult const TagetPlayerIsNotLocal;

/// @brief Field TargetPlayerIsNotLocal value: I32(5)
static ::Fusion::RpcLocalInvokeResult const TargetPlayerIsNotLocal;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19190};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::RpcLocalInvokeResult, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Fusion::RpcLocalInvokeResult) == 0x4, "Size mismatch!");

} // namespace end def Fusion
