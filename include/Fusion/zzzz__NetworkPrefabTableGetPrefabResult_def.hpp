#pragma once
// IWYU pragma private; include "Fusion/NetworkPrefabTableGetPrefabResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkPrefabTableGetPrefabResult)
// Forward declare root types
namespace Fusion {
struct NetworkPrefabTableGetPrefabResult;
}
// Write type traits
MARK_VAL_T(::Fusion::NetworkPrefabTableGetPrefabResult);
DEFINE_IL2CPP_CLASS(::Fusion::NetworkPrefabTableGetPrefabResult, "Fusion", "NetworkPrefabTableGetPrefabResult");
// Dependencies 
namespace Fusion {
// Is value type: true
// CS Name: Fusion.NetworkPrefabTableGetPrefabResult
struct CORDL_TYPE NetworkPrefabTableGetPrefabResult {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __NetworkPrefabTableGetPrefabResult_Unwrapped
enum struct __NetworkPrefabTableGetPrefabResult_Unwrapped : int32_t {
__E_Success = static_cast<int32_t>(0x0),
__E_InProgress = static_cast<int32_t>(0x1),
__E_NotFound = static_cast<int32_t>(0x2),
__E_LoadError = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NetworkPrefabTableGetPrefabResult_Unwrapped () const noexcept {
return static_cast<__NetworkPrefabTableGetPrefabResult_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr NetworkPrefabTableGetPrefabResult() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr NetworkPrefabTableGetPrefabResult(int32_t  value__) noexcept;

/// @brief Field InProgress value: I32(1)
static ::Fusion::NetworkPrefabTableGetPrefabResult const InProgress;

/// @brief Field LoadError value: I32(3)
static ::Fusion::NetworkPrefabTableGetPrefabResult const LoadError;

/// @brief Field NotFound value: I32(2)
static ::Fusion::NetworkPrefabTableGetPrefabResult const NotFound;

/// @brief Field Success value: I32(0)
static ::Fusion::NetworkPrefabTableGetPrefabResult const Success;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19176};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::NetworkPrefabTableGetPrefabResult, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Fusion::NetworkPrefabTableGetPrefabResult) == 0x4, "Size mismatch!");

} // namespace end def Fusion
