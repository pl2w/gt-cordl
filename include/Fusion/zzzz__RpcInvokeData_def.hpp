#pragma once
// IWYU pragma private; include "Fusion/RpcInvokeData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RpcInvokeData)
namespace Fusion {
class RpcInvokeDelegate;
}
// Forward declare root types
namespace Fusion {
struct RpcInvokeData;
}
// Write type traits
MARK_VAL_T(::Fusion::RpcInvokeData);
DEFINE_IL2CPP_CLASS(::Fusion::RpcInvokeData, "Fusion", "RpcInvokeData");
// Dependencies 
namespace Fusion {
// Is value type: true
// CS Name: Fusion.RpcInvokeData
struct CORDL_TYPE RpcInvokeData {
public:
// Declarations
/// @brief Method ToString, addr 0x5fd10d4, size 0x1bc, virtual true, abstract: false, final false
inline ::StringW ToString() ;

// Ctor Parameters []
// @brief default ctor
constexpr RpcInvokeData() ;

// Ctor Parameters [CppParam { name: "Key", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Sources", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Targets", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Delegate", ty: "::Fusion::RpcInvokeDelegate*", modifiers: "", def_value: None, comment: None }]
constexpr RpcInvokeData(int32_t  Key, int32_t  Sources, int32_t  Targets, ::Fusion::RpcInvokeDelegate*  Delegate) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19187};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field Key, offset: 0x0, size: 0x4, def value: None
 int32_t  Key;

/// @brief Field Sources, offset: 0x4, size: 0x4, def value: None
 int32_t  Sources;

/// @brief Field Targets, offset: 0x8, size: 0x4, def value: None
 int32_t  Targets;

/// @brief Field Delegate, offset: 0x10, size: 0x8, def value: None
 ::Fusion::RpcInvokeDelegate*  Delegate;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::RpcInvokeData, Key) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Fusion::RpcInvokeData, Sources) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Fusion::RpcInvokeData, Targets) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Fusion::RpcInvokeData, Delegate) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Fusion::RpcInvokeData) == 0x18, "Size mismatch!");

} // namespace end def Fusion
