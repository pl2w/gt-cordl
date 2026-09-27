#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/RCCosmeticNetworkSync_SyncedState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RCCosmeticNetworkSync_SyncedState)
// Forward declare root types
namespace GlobalNamespace {
struct RCCosmeticNetworkSync_SyncedState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::RCCosmeticNetworkSync_SyncedState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RCCosmeticNetworkSync_SyncedState, "GorillaTag.Cosmetics", "RCCosmeticNetworkSync/SyncedState");
// Dependencies UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTag.Cosmetics.RCCosmeticNetworkSync/SyncedState
struct CORDL_TYPE RCCosmeticNetworkSync_SyncedState {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr RCCosmeticNetworkSync_SyncedState() ;

// Ctor Parameters [CppParam { name: "state", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "rotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None, comment: None }, CppParam { name: "dataA", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "dataB", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "dataC", ty: "uint8_t", modifiers: "", def_value: None, comment: None }]
constexpr RCCosmeticNetworkSync_SyncedState(uint8_t  state, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, uint8_t  dataA, uint8_t  dataB, uint8_t  dataC) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4833};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x24};

/// @brief Field state, offset: 0x0, size: 0x1, def value: None
 uint8_t  state;

/// @brief Field position, offset: 0x4, size: 0xc, def value: None
 ::UnityEngine::Vector3  position;

/// @brief Field rotation, offset: 0x10, size: 0x10, def value: None
 ::UnityEngine::Quaternion  rotation;

/// @brief Field dataA, offset: 0x20, size: 0x1, def value: None
 uint8_t  dataA;

/// @brief Field dataB, offset: 0x21, size: 0x1, def value: None
 uint8_t  dataB;

/// @brief Field dataC, offset: 0x22, size: 0x1, def value: None
 uint8_t  dataC;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RCCosmeticNetworkSync_SyncedState, state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RCCosmeticNetworkSync_SyncedState, position) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RCCosmeticNetworkSync_SyncedState, rotation) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RCCosmeticNetworkSync_SyncedState, dataA) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RCCosmeticNetworkSync_SyncedState, dataB) == 0x21, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RCCosmeticNetworkSync_SyncedState, dataC) == 0x22, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RCCosmeticNetworkSync_SyncedState) == 0x24, "Size mismatch!");

} // namespace end def GlobalNamespace
