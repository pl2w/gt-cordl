#pragma once
// IWYU pragma private; include "Fusion/RpcSendResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__RpcSendMessageResult_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RpcSendResult)
// Forward declare root types
namespace Fusion {
struct RpcSendResult;
}
// Write type traits
MARK_VAL_T(::Fusion::RpcSendResult);
DEFINE_IL2CPP_CLASS(::Fusion::RpcSendResult, "Fusion", "RpcSendResult");
// Dependencies Fusion.RpcSendMessageResult
namespace Fusion {
// Is value type: true
// CS Name: Fusion.RpcSendResult
struct CORDL_TYPE RpcSendResult {
public:
// Declarations
/// @brief Method ToString, addr 0x5fd14d8, size 0x168, virtual true, abstract: false, final false
inline ::StringW ToString() ;

// Ctor Parameters []
// @brief default ctor
constexpr RpcSendResult() ;

// Ctor Parameters [CppParam { name: "Result", ty: "::Fusion::RpcSendMessageResult", modifiers: "", def_value: None, comment: None }, CppParam { name: "MessageSize", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr RpcSendResult(::Fusion::RpcSendMessageResult  Result, int32_t  MessageSize) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19192};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field Result, offset: 0x0, size: 0x4, def value: None
 ::Fusion::RpcSendMessageResult  Result;

/// @brief Field MessageSize, offset: 0x4, size: 0x4, def value: None
 int32_t  MessageSize;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::RpcSendResult, Result) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Fusion::RpcSendResult, MessageSize) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Fusion::RpcSendResult) == 0x8, "Size mismatch!");

} // namespace end def Fusion
