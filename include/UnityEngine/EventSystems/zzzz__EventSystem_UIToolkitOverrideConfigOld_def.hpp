#pragma once
// IWYU pragma private; include "UnityEngine/EventSystems/EventSystem_UIToolkitOverrideConfigOld.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(EventSystem_UIToolkitOverrideConfigOld)
namespace UnityEngine::EventSystems {
class EventSystem;
}
// Forward declare root types
namespace GlobalNamespace {
struct EventSystem_UIToolkitOverrideConfigOld;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::EventSystem_UIToolkitOverrideConfigOld);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EventSystem_UIToolkitOverrideConfigOld, "UnityEngine.EventSystems", "EventSystem/UIToolkitOverrideConfigOld");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfigOld
struct CORDL_TYPE EventSystem_UIToolkitOverrideConfigOld {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr EventSystem_UIToolkitOverrideConfigOld() ;

// Ctor Parameters [CppParam { name: "activeEventSystem", ty: "::UnityW<::UnityEngine::EventSystems::EventSystem>", modifiers: "", def_value: None, comment: None }, CppParam { name: "sendEvents", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "createPanelGameObjectsOnStart", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr EventSystem_UIToolkitOverrideConfigOld(::UnityW<::UnityEngine::EventSystems::EventSystem>  activeEventSystem, bool  sendEvents, bool  createPanelGameObjectsOnStart) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26170};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field activeEventSystem, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::EventSystems::EventSystem>  activeEventSystem;

/// @brief Field sendEvents, offset: 0x8, size: 0x1, def value: None
 bool  sendEvents;

/// @brief Field createPanelGameObjectsOnStart, offset: 0x9, size: 0x1, def value: None
 bool  createPanelGameObjectsOnStart;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EventSystem_UIToolkitOverrideConfigOld, activeEventSystem) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EventSystem_UIToolkitOverrideConfigOld, sendEvents) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EventSystem_UIToolkitOverrideConfigOld, createPanelGameObjectsOnStart) == 0x9, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EventSystem_UIToolkitOverrideConfigOld) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
