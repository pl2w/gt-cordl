#pragma once
// IWYU pragma private; include "Fusion/Simulation_StateReplicator_WriteResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Simulation_StateReplicator_WriteResult)
// Forward declare root types
namespace GlobalNamespace {
struct StateReplicator_Simulation_WriteResult;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::StateReplicator_Simulation_WriteResult);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::StateReplicator_Simulation_WriteResult, "Fusion", "Simulation/StateReplicator/WriteResult");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Fusion.Simulation/StateReplicator/WriteResult
struct CORDL_TYPE StateReplicator_Simulation_WriteResult {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __StateReplicator_Simulation_WriteResult_Unwrapped
enum struct __StateReplicator_Simulation_WriteResult_Unwrapped : int32_t {
__E_Written = static_cast<int32_t>(0x0),
__E_NothingToSend = static_cast<int32_t>(0x1),
__E_PacketFull = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __StateReplicator_Simulation_WriteResult_Unwrapped () const noexcept {
return static_cast<__StateReplicator_Simulation_WriteResult_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr StateReplicator_Simulation_WriteResult() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr StateReplicator_Simulation_WriteResult(int32_t  value__) noexcept;

/// @brief Field NothingToSend value: I32(1)
static ::GlobalNamespace::StateReplicator_Simulation_WriteResult const NothingToSend;

/// @brief Field PacketFull value: I32(2)
static ::GlobalNamespace::StateReplicator_Simulation_WriteResult const PacketFull;

/// @brief Field Written value: I32(0)
static ::GlobalNamespace::StateReplicator_Simulation_WriteResult const Written;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19319};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StateReplicator_Simulation_WriteResult, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::StateReplicator_Simulation_WriteResult) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
