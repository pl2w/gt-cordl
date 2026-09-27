#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineTriggerAction_ActionSettings_ActionModes.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CinemachineTriggerAction_ActionSettings_ActionModes)
// Forward declare root types
namespace GlobalNamespace {
struct ActionSettings_CinemachineTriggerAction_ActionModes;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ActionSettings_CinemachineTriggerAction_ActionModes);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ActionSettings_CinemachineTriggerAction_ActionModes, "Unity.Cinemachine", "CinemachineTriggerAction/ActionSettings/ActionModes");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Cinemachine.CinemachineTriggerAction/ActionSettings/ActionModes
struct CORDL_TYPE ActionSettings_CinemachineTriggerAction_ActionModes {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ActionSettings_CinemachineTriggerAction_ActionModes_Unwrapped
enum struct __ActionSettings_CinemachineTriggerAction_ActionModes_Unwrapped : int32_t {
__E_EventOnly = static_cast<int32_t>(0x0),
__E_PriorityBoost = static_cast<int32_t>(0x1),
__E_Activate = static_cast<int32_t>(0x2),
__E_Deactivate = static_cast<int32_t>(0x3),
__E_Enable = static_cast<int32_t>(0x4),
__E_Disable = static_cast<int32_t>(0x5),
__E_Play = static_cast<int32_t>(0x6),
__E_Stop = static_cast<int32_t>(0x7),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ActionSettings_CinemachineTriggerAction_ActionModes_Unwrapped () const noexcept {
return static_cast<__ActionSettings_CinemachineTriggerAction_ActionModes_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ActionSettings_CinemachineTriggerAction_ActionModes() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ActionSettings_CinemachineTriggerAction_ActionModes(int32_t  value__) noexcept;

/// @brief Field Activate value: I32(2)
static ::GlobalNamespace::ActionSettings_CinemachineTriggerAction_ActionModes const Activate;

/// @brief Field Deactivate value: I32(3)
static ::GlobalNamespace::ActionSettings_CinemachineTriggerAction_ActionModes const Deactivate;

/// @brief Field Disable value: I32(5)
static ::GlobalNamespace::ActionSettings_CinemachineTriggerAction_ActionModes const Disable;

/// @brief Field Enable value: I32(4)
static ::GlobalNamespace::ActionSettings_CinemachineTriggerAction_ActionModes const Enable;

/// @brief Field EventOnly value: I32(0)
static ::GlobalNamespace::ActionSettings_CinemachineTriggerAction_ActionModes const EventOnly;

/// @brief Field Play value: I32(6)
static ::GlobalNamespace::ActionSettings_CinemachineTriggerAction_ActionModes const Play;

/// @brief Field PriorityBoost value: I32(1)
static ::GlobalNamespace::ActionSettings_CinemachineTriggerAction_ActionModes const PriorityBoost;

/// @brief Field Stop value: I32(7)
static ::GlobalNamespace::ActionSettings_CinemachineTriggerAction_ActionModes const Stop;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22461};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ActionSettings_CinemachineTriggerAction_ActionModes, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ActionSettings_CinemachineTriggerAction_ActionModes) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
