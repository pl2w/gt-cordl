#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/InputUpdate_SerializedState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputUpdateType_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputUpdate_UpdateStepCount_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(InputUpdate_SerializedState)
// Forward declare root types
namespace GlobalNamespace {
struct InputUpdate_SerializedState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InputUpdate_SerializedState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InputUpdate_SerializedState, "UnityEngine.InputSystem.LowLevel", "InputUpdate/SerializedState");
// Dependencies UnityEngine.InputSystem.LowLevel.InputUpdate::UpdateStepCount, UnityEngine.InputSystem.LowLevel.InputUpdateType
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.LowLevel.InputUpdate/SerializedState
struct CORDL_TYPE InputUpdate_SerializedState {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr InputUpdate_SerializedState() ;

// Ctor Parameters [CppParam { name: "lastUpdateType", ty: "::UnityEngine::InputSystem::LowLevel::InputUpdateType", modifiers: "", def_value: None, comment: None }, CppParam { name: "playerUpdateStepCount", ty: "::GlobalNamespace::InputUpdate_UpdateStepCount", modifiers: "", def_value: None, comment: None }]
constexpr InputUpdate_SerializedState(::UnityEngine::InputSystem::LowLevel::InputUpdateType  lastUpdateType, ::GlobalNamespace::InputUpdate_UpdateStepCount  playerUpdateStepCount) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13779};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field lastUpdateType, offset: 0x0, size: 0x4, def value: None
 ::UnityEngine::InputSystem::LowLevel::InputUpdateType  lastUpdateType;

/// @brief Field playerUpdateStepCount, offset: 0x4, size: 0x8, def value: None
 ::GlobalNamespace::InputUpdate_UpdateStepCount  playerUpdateStepCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InputUpdate_SerializedState, lastUpdateType) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputUpdate_SerializedState, playerUpdateStepCount) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InputUpdate_SerializedState) == 0xc, "Size mismatch!");

} // namespace end def GlobalNamespace
