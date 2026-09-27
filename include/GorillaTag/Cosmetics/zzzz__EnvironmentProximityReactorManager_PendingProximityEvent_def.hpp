#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/EnvironmentProximityReactorManager_PendingProximityEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PhotonMessageInfoWrapped_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EnvironmentProximityReactorManager_PendingProximityEvent)
// Forward declare root types
namespace GlobalNamespace {
struct EnvironmentProximityReactorManager_PendingProximityEvent;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::EnvironmentProximityReactorManager_PendingProximityEvent);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EnvironmentProximityReactorManager_PendingProximityEvent, "GorillaTag.Cosmetics", "EnvironmentProximityReactorManager/PendingProximityEvent");
// Dependencies PhotonMessageInfoWrapped
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTag.Cosmetics.EnvironmentProximityReactorManager/PendingProximityEvent
struct CORDL_TYPE EnvironmentProximityReactorManager_PendingProximityEvent {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr EnvironmentProximityReactorManager_PendingProximityEvent() ;

// Ctor Parameters [CppParam { name: "reactorId", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "blockIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "isBelow", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "info", ty: "::GlobalNamespace::PhotonMessageInfoWrapped", modifiers: "", def_value: None, comment: None }, CppParam { name: "receivedTime", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr EnvironmentProximityReactorManager_PendingProximityEvent(int32_t  reactorId, int32_t  blockIndex, bool  isBelow, ::GlobalNamespace::PhotonMessageInfoWrapped  info, float_t  receivedTime) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4920};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field reactorId, offset: 0x0, size: 0x4, def value: None
 int32_t  reactorId;

/// @brief Field blockIndex, offset: 0x4, size: 0x4, def value: None
 int32_t  blockIndex;

/// @brief Field isBelow, offset: 0x8, size: 0x1, def value: None
 bool  isBelow;

/// @brief Field info, offset: 0x10, size: 0x28, def value: None
 ::GlobalNamespace::PhotonMessageInfoWrapped  info;

/// @brief Field receivedTime, offset: 0x38, size: 0x4, def value: None
 float_t  receivedTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EnvironmentProximityReactorManager_PendingProximityEvent, reactorId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentProximityReactorManager_PendingProximityEvent, blockIndex) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentProximityReactorManager_PendingProximityEvent, isBelow) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentProximityReactorManager_PendingProximityEvent, info) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentProximityReactorManager_PendingProximityEvent, receivedTime) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EnvironmentProximityReactorManager_PendingProximityEvent) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
