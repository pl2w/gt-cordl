#pragma once
// IWYU pragma private; include "Fusion/NetworkSpawnStatus.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkSpawnStatus)
// Forward declare root types
namespace Fusion {
struct NetworkSpawnStatus;
}
// Write type traits
MARK_VAL_T(::Fusion::NetworkSpawnStatus);
DEFINE_IL2CPP_CLASS(::Fusion::NetworkSpawnStatus, "Fusion", "NetworkSpawnStatus");
// Dependencies 
namespace Fusion {
// Is value type: true
// CS Name: Fusion.NetworkSpawnStatus
struct CORDL_TYPE NetworkSpawnStatus {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __NetworkSpawnStatus_Unwrapped
enum struct __NetworkSpawnStatus_Unwrapped : int32_t {
__E_Queued = static_cast<int32_t>(0x0),
__E_Spawned = static_cast<int32_t>(0x1),
__E_FailedToLoadPrefabSynchronously = static_cast<int32_t>(0x2),
__E_FailedToCreateInstance = static_cast<int32_t>(0x3),
__E_FailedClientCantSpawn = static_cast<int32_t>(0x4),
__E_FailedLocalPlayerNotYetSet = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NetworkSpawnStatus_Unwrapped () const noexcept {
return static_cast<__NetworkSpawnStatus_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr NetworkSpawnStatus() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr NetworkSpawnStatus(int32_t  value__) noexcept;

/// @brief Field FailedClientCantSpawn value: I32(4)
static ::Fusion::NetworkSpawnStatus const FailedClientCantSpawn;

/// @brief Field FailedLocalPlayerNotYetSet value: I32(5)
static ::Fusion::NetworkSpawnStatus const FailedLocalPlayerNotYetSet;

/// @brief Field FailedToCreateInstance value: I32(3)
static ::Fusion::NetworkSpawnStatus const FailedToCreateInstance;

/// @brief Field FailedToLoadPrefabSynchronously value: I32(2)
static ::Fusion::NetworkSpawnStatus const FailedToLoadPrefabSynchronously;

/// @brief Field Queued value: I32(0)
static ::Fusion::NetworkSpawnStatus const Queued;

/// @brief Field Spawned value: I32(1)
static ::Fusion::NetworkSpawnStatus const Spawned;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19252};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::NetworkSpawnStatus, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Fusion::NetworkSpawnStatus) == 0x4, "Size mismatch!");

} // namespace end def Fusion
