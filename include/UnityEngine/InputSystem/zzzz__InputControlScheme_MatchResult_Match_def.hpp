#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputControlScheme_MatchResult_Match.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__InputControlList_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlScheme_DeviceRequirement_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputControlScheme_MatchResult_Match)
namespace GlobalNamespace {
struct InputControlScheme_DeviceRequirement;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
// Forward declare root types
namespace GlobalNamespace {
struct MatchResult_InputControlScheme_Match;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MatchResult_InputControlScheme_Match);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MatchResult_InputControlScheme_Match, "UnityEngine.InputSystem", "InputControlScheme/MatchResult/Match");
// Dependencies UnityEngine.InputSystem.InputControlList`1<TControl>, UnityEngine.InputSystem.InputControlScheme::DeviceRequirement
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputControlScheme/MatchResult/Match
struct CORDL_TYPE MatchResult_InputControlScheme_Match {
public:
// Declarations
 __declspec(property(get=get_control)) ::UnityEngine::InputSystem::InputControl*  control;

 __declspec(property(get=get_device)) ::UnityEngine::InputSystem::InputDevice*  device;

 __declspec(property(get=get_isOptional)) bool  isOptional;

 __declspec(property(get=get_requirement)) ::GlobalNamespace::InputControlScheme_DeviceRequirement  requirement;

 __declspec(property(get=get_requirementIndex)) int32_t  requirementIndex;

/// @brief Method get_control, addr 0xaf4b524, size 0x4c, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputControl* get_control() ;

/// @brief Method get_device, addr 0xaf4b570, size 0x18, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputDevice* get_device() ;

/// @brief Method get_isOptional, addr 0xaf4b5c4, size 0x14, virtual false, abstract: false, final false
inline bool get_isOptional() ;

/// @brief Method get_requirement, addr 0xaf4b590, size 0x34, virtual false, abstract: false, final false
inline ::GlobalNamespace::InputControlScheme_DeviceRequirement get_requirement() ;

/// @brief Method get_requirementIndex, addr 0xaf4b588, size 0x8, virtual false, abstract: false, final false
inline int32_t get_requirementIndex() ;

// Ctor Parameters []
// @brief default ctor
constexpr MatchResult_InputControlScheme_Match() ;

// Ctor Parameters [CppParam { name: "m_RequirementIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Requirements", ty: "::ArrayW<::GlobalNamespace::InputControlScheme_DeviceRequirement>", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Controls", ty: "::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*>", modifiers: "", def_value: None, comment: None }]
constexpr MatchResult_InputControlScheme_Match(int32_t  m_RequirementIndex, ::ArrayW<::GlobalNamespace::InputControlScheme_DeviceRequirement>  m_Requirements, ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*>  m_Controls) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13407};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field m_RequirementIndex, offset: 0x0, size: 0x4, def value: None
 int32_t  m_RequirementIndex;

/// @brief Field m_Requirements, offset: 0x8, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::InputControlScheme_DeviceRequirement>  m_Requirements;

/// @brief Field m_Controls, offset: 0x10, size: 0x20, def value: None
 ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*>  m_Controls;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MatchResult_InputControlScheme_Match, m_RequirementIndex) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MatchResult_InputControlScheme_Match, m_Requirements) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MatchResult_InputControlScheme_Match, m_Controls) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MatchResult_InputControlScheme_Match) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
