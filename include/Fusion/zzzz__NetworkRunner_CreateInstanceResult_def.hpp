#pragma once
// IWYU pragma private; include "Fusion/NetworkRunner_CreateInstanceResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkRunner_CreateInstanceResult)
// Forward declare root types
namespace GlobalNamespace {
struct NetworkRunner_CreateInstanceResult;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::NetworkRunner_CreateInstanceResult);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NetworkRunner_CreateInstanceResult, "Fusion", "NetworkRunner/CreateInstanceResult");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Fusion.NetworkRunner/CreateInstanceResult
struct CORDL_TYPE NetworkRunner_CreateInstanceResult {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __NetworkRunner_CreateInstanceResult_Unwrapped
enum struct __NetworkRunner_CreateInstanceResult_Unwrapped : int32_t {
__E_Success = static_cast<int32_t>(0x0),
__E_Failed = static_cast<int32_t>(0x1),
__E_InProgress = static_cast<int32_t>(0x2),
__E_Ignore = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NetworkRunner_CreateInstanceResult_Unwrapped () const noexcept {
return static_cast<__NetworkRunner_CreateInstanceResult_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr NetworkRunner_CreateInstanceResult() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr NetworkRunner_CreateInstanceResult(int32_t  value__) noexcept;

/// @brief Field Failed value: I32(1)
static ::GlobalNamespace::NetworkRunner_CreateInstanceResult const Failed;

/// @brief Field Ignore value: I32(3)
static ::GlobalNamespace::NetworkRunner_CreateInstanceResult const Ignore;

/// @brief Field InProgress value: I32(2)
static ::GlobalNamespace::NetworkRunner_CreateInstanceResult const InProgress;

/// @brief Field Success value: I32(0)
static ::GlobalNamespace::NetworkRunner_CreateInstanceResult const Success;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19207};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NetworkRunner_CreateInstanceResult, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NetworkRunner_CreateInstanceResult) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
