#pragma once
// IWYU pragma private; include "Fusion/RpcInvokeInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__RpcLocalInvokeResult_def.hpp"
#include "Fusion/zzzz__RpcSendCullResult_def.hpp"
#include "Fusion/zzzz__RpcSendResult_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(RpcInvokeInfo)
// Forward declare root types
namespace Fusion {
struct RpcInvokeInfo;
}
// Write type traits
MARK_VAL_T(::Fusion::RpcInvokeInfo);
DEFINE_IL2CPP_CLASS(::Fusion::RpcInvokeInfo, "Fusion", "RpcInvokeInfo");
// Dependencies Fusion.RpcLocalInvokeResult, Fusion.RpcSendCullResult, Fusion.RpcSendResult
namespace Fusion {
// Is value type: true
// CS Name: Fusion.RpcInvokeInfo
struct CORDL_TYPE RpcInvokeInfo {
public:
// Declarations
/// @brief Method ToString, addr 0x5fd13e4, size 0xf4, virtual true, abstract: false, final false
inline ::StringW ToString() ;

// Ctor Parameters []
// @brief default ctor
constexpr RpcInvokeInfo() ;

// Ctor Parameters [CppParam { name: "LocalInvokeResult", ty: "::Fusion::RpcLocalInvokeResult", modifiers: "", def_value: None, comment: None }, CppParam { name: "SendCullResult", ty: "::Fusion::RpcSendCullResult", modifiers: "", def_value: None, comment: None }, CppParam { name: "SendResult", ty: "::Fusion::RpcSendResult", modifiers: "", def_value: None, comment: None }]
constexpr RpcInvokeInfo(::Fusion::RpcLocalInvokeResult  LocalInvokeResult, ::Fusion::RpcSendCullResult  SendCullResult, ::Fusion::RpcSendResult  SendResult) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19189};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field LocalInvokeResult, offset: 0x0, size: 0x4, def value: None
 ::Fusion::RpcLocalInvokeResult  LocalInvokeResult;

/// @brief Field SendCullResult, offset: 0x4, size: 0x4, def value: None
 ::Fusion::RpcSendCullResult  SendCullResult;

/// @brief Field SendResult, offset: 0x8, size: 0x8, def value: None
 ::Fusion::RpcSendResult  SendResult;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::RpcInvokeInfo, LocalInvokeResult) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Fusion::RpcInvokeInfo, SendCullResult) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Fusion::RpcInvokeInfo, SendResult) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Fusion::RpcInvokeInfo) == 0x10, "Size mismatch!");

} // namespace end def Fusion
