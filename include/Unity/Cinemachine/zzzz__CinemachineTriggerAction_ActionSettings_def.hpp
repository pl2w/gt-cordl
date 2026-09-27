#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineTriggerAction_ActionSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Cinemachine/zzzz__CinemachineTriggerAction_ActionSettings_ActionModes_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineTriggerAction_ActionSettings_TimeModes_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CinemachineTriggerAction_ActionSettings)
namespace GlobalNamespace {
struct ActionSettings_CinemachineTriggerAction_ActionModes;
}
namespace GlobalNamespace {
struct ActionSettings_CinemachineTriggerAction_TimeModes;
}
namespace Unity::Cinemachine {
class ActionSettings_CinemachineTriggerAction_TriggerEvent;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct CinemachineTriggerAction_ActionSettings;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CinemachineTriggerAction_ActionSettings);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CinemachineTriggerAction_ActionSettings, "Unity.Cinemachine", "CinemachineTriggerAction/ActionSettings");
// Dependencies Unity.Cinemachine.CinemachineTriggerAction::ActionSettings::ActionModes, Unity.Cinemachine.CinemachineTriggerAction::ActionSettings::TimeModes
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Cinemachine.CinemachineTriggerAction/ActionSettings
struct CORDL_TYPE CinemachineTriggerAction_ActionSettings {
public:
// Declarations
using ActionModes = ::GlobalNamespace::ActionSettings_CinemachineTriggerAction_ActionModes;

using TimeModes = ::GlobalNamespace::ActionSettings_CinemachineTriggerAction_TimeModes;

using TriggerEvent = ::Unity::Cinemachine::ActionSettings_CinemachineTriggerAction_TriggerEvent;

/// @brief Method Invoke, addr 0xaee09e0, size 0x464, virtual false, abstract: false, final false
inline void Invoke() ;

/// @brief Method .ctor, addr 0xaee11a0, size 0x88, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::ActionSettings_CinemachineTriggerAction_ActionModes  action) ;

// Ctor Parameters []
// @brief default ctor
constexpr CinemachineTriggerAction_ActionSettings() ;

// Ctor Parameters [CppParam { name: "Action", ty: "::GlobalNamespace::ActionSettings_CinemachineTriggerAction_ActionModes", modifiers: "", def_value: None, comment: None }, CppParam { name: "Target", ty: "::UnityW<::UnityEngine::Object>", modifiers: "", def_value: None, comment: None }, CppParam { name: "BoostAmount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "StartTime", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Mode", ty: "::GlobalNamespace::ActionSettings_CinemachineTriggerAction_TimeModes", modifiers: "", def_value: None, comment: None }, CppParam { name: "Event", ty: "::Unity::Cinemachine::ActionSettings_CinemachineTriggerAction_TriggerEvent*", modifiers: "", def_value: None, comment: None }]
constexpr CinemachineTriggerAction_ActionSettings(::GlobalNamespace::ActionSettings_CinemachineTriggerAction_ActionModes  Action, ::UnityW<::UnityEngine::Object>  Target, int32_t  BoostAmount, float_t  StartTime, ::GlobalNamespace::ActionSettings_CinemachineTriggerAction_TimeModes  Mode, ::Unity::Cinemachine::ActionSettings_CinemachineTriggerAction_TriggerEvent*  Event) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22464};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// [Tooltip("What action to take")]
/// [FormerlySerializedAs("m_Action")]
/// @brief Field Action, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::ActionSettings_CinemachineTriggerAction_ActionModes  Action;

/// [Tooltip("The target object on which to operate.  If null, then the current behaviour/GameObject will be used")]
/// [FormerlySerializedAs("m_Target")]
/// @brief Field Target, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  Target;

/// [Tooltip("If PriorityBoost, this amount will be added to the virtual camera\'s priority")]
/// [FormerlySerializedAs("m_BoostAmount")]
/// @brief Field BoostAmount, offset: 0x10, size: 0x4, def value: None
 int32_t  BoostAmount;

/// [Tooltip("If playing a timeline, start at this time")]
/// [FormerlySerializedAs("m_StartTime")]
/// @brief Field StartTime, offset: 0x14, size: 0x4, def value: None
 float_t  StartTime;

/// [Tooltip("How to interpret the start time")]
/// [FormerlySerializedAs("m_Mode")]
/// @brief Field Mode, offset: 0x18, size: 0x4, def value: None
 ::GlobalNamespace::ActionSettings_CinemachineTriggerAction_TimeModes  Mode;

/// [Tooltip("This event will be invoked")]
/// [FormerlySerializedAs("m_Event")]
/// @brief Field Event, offset: 0x20, size: 0x8, def value: None
 ::Unity::Cinemachine::ActionSettings_CinemachineTriggerAction_TriggerEvent*  Event;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CinemachineTriggerAction_ActionSettings, Action) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CinemachineTriggerAction_ActionSettings, Target) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CinemachineTriggerAction_ActionSettings, BoostAmount) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CinemachineTriggerAction_ActionSettings, StartTime) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CinemachineTriggerAction_ActionSettings, Mode) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CinemachineTriggerAction_ActionSettings, Event) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CinemachineTriggerAction_ActionSettings) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
