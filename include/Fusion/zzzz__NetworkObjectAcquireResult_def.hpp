#pragma once
// IWYU pragma private; include "Fusion/NetworkObjectAcquireResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkObjectAcquireResult)
// Forward declare root types
namespace Fusion {
struct NetworkObjectAcquireResult;
}
// Write type traits
MARK_VAL_T(::Fusion::NetworkObjectAcquireResult);
DEFINE_IL2CPP_CLASS(::Fusion::NetworkObjectAcquireResult, "Fusion", "NetworkObjectAcquireResult");
// Dependencies 
namespace Fusion {
// Is value type: true
// CS Name: Fusion.NetworkObjectAcquireResult
struct CORDL_TYPE NetworkObjectAcquireResult {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __NetworkObjectAcquireResult_Unwrapped
enum struct __NetworkObjectAcquireResult_Unwrapped : int32_t {
__E_Success = static_cast<int32_t>(0x0),
__E_Failed = static_cast<int32_t>(0x1),
__E_Retry = static_cast<int32_t>(0x2),
__E_Ignore = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NetworkObjectAcquireResult_Unwrapped () const noexcept {
return static_cast<__NetworkObjectAcquireResult_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr NetworkObjectAcquireResult() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr NetworkObjectAcquireResult(int32_t  value__) noexcept;

/// @brief Field Failed value: I32(1)
static ::Fusion::NetworkObjectAcquireResult const Failed;

/// @brief Field Ignore value: I32(3)
static ::Fusion::NetworkObjectAcquireResult const Ignore;

/// @brief Field Retry value: I32(2)
static ::Fusion::NetworkObjectAcquireResult const Retry;

/// @brief Field Success value: I32(0)
static ::Fusion::NetworkObjectAcquireResult const Success;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19162};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::NetworkObjectAcquireResult, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Fusion::NetworkObjectAcquireResult) == 0x4, "Size mismatch!");

} // namespace end def Fusion
