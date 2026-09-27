#pragma once
// IWYU pragma private; include "GlobalNamespace/NetworkingState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkingState)
// Forward declare root types
namespace GlobalNamespace {
struct NetworkingState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::NetworkingState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NetworkingState, "", "NetworkingState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: NetworkingState
struct CORDL_TYPE NetworkingState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __NetworkingState_Unwrapped
enum struct __NetworkingState_Unwrapped : int32_t {
__E_IsOwner = static_cast<int32_t>(0x0),
__E_IsBlindClient = static_cast<int32_t>(0x1),
__E_IsClient = static_cast<int32_t>(0x2),
__E_ForcefullyTakingOver = static_cast<int32_t>(0x3),
__E_RequestingOwnership = static_cast<int32_t>(0x4),
__E_RequestingOwnershipWaitingForSight = static_cast<int32_t>(0x5),
__E_ForcefullyTakingOverWaitingForSight = static_cast<int32_t>(0x6),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NetworkingState_Unwrapped () const noexcept {
return static_cast<__NetworkingState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr NetworkingState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr NetworkingState(int32_t  value__) noexcept;

/// @brief Field ForcefullyTakingOver value: I32(3)
static ::GlobalNamespace::NetworkingState const ForcefullyTakingOver;

/// @brief Field ForcefullyTakingOverWaitingForSight value: I32(6)
static ::GlobalNamespace::NetworkingState const ForcefullyTakingOverWaitingForSight;

/// @brief Field IsBlindClient value: I32(1)
static ::GlobalNamespace::NetworkingState const IsBlindClient;

/// @brief Field IsClient value: I32(2)
static ::GlobalNamespace::NetworkingState const IsClient;

/// @brief Field IsOwner value: I32(0)
static ::GlobalNamespace::NetworkingState const IsOwner;

/// @brief Field RequestingOwnership value: I32(4)
static ::GlobalNamespace::NetworkingState const RequestingOwnership;

/// @brief Field RequestingOwnershipWaitingForSight value: I32(5)
static ::GlobalNamespace::NetworkingState const RequestingOwnershipWaitingForSight;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{919};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NetworkingState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NetworkingState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
