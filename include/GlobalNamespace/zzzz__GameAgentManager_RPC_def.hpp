#pragma once
// IWYU pragma private; include "GlobalNamespace/GameAgentManager_RPC.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GameAgentManager_RPC)
// Forward declare root types
namespace GlobalNamespace {
struct GameAgentManager_RPC;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GameAgentManager_RPC);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameAgentManager_RPC, "", "GameAgentManager/RPC");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GameAgentManager/RPC
struct CORDL_TYPE GameAgentManager_RPC {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GameAgentManager_RPC_Unwrapped
enum struct __GameAgentManager_RPC_Unwrapped : int32_t {
__E_ApplyDestination = static_cast<int32_t>(0x0),
__E_ApplyState = static_cast<int32_t>(0x1),
__E_ApplyBehaviour = static_cast<int32_t>(0x2),
__E_ApplyImpact = static_cast<int32_t>(0x3),
__E_ApplyTarget = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GameAgentManager_RPC_Unwrapped () const noexcept {
return static_cast<__GameAgentManager_RPC_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GameAgentManager_RPC() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GameAgentManager_RPC(int32_t  value__) noexcept;

/// @brief Field ApplyBehaviour value: I32(2)
static ::GlobalNamespace::GameAgentManager_RPC const ApplyBehaviour;

/// @brief Field ApplyDestination value: I32(0)
static ::GlobalNamespace::GameAgentManager_RPC const ApplyDestination;

/// @brief Field ApplyImpact value: I32(3)
static ::GlobalNamespace::GameAgentManager_RPC const ApplyImpact;

/// @brief Field ApplyState value: I32(1)
static ::GlobalNamespace::GameAgentManager_RPC const ApplyState;

/// @brief Field ApplyTarget value: I32(4)
static ::GlobalNamespace::GameAgentManager_RPC const ApplyTarget;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1720};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameAgentManager_RPC, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GameAgentManager_RPC) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
