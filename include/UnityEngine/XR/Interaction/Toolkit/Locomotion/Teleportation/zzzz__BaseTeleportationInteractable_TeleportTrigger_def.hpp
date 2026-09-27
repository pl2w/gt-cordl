#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Teleportation/BaseTeleportationInteractable_TeleportTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BaseTeleportationInteractable_TeleportTrigger)
// Forward declare root types
namespace GlobalNamespace {
struct BaseTeleportationInteractable_TeleportTrigger;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BaseTeleportationInteractable_TeleportTrigger);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BaseTeleportationInteractable_TeleportTrigger, "UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation", "BaseTeleportationInteractable/TeleportTrigger");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.BaseTeleportationInteractable/TeleportTrigger
struct CORDL_TYPE BaseTeleportationInteractable_TeleportTrigger {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __BaseTeleportationInteractable_TeleportTrigger_Unwrapped
enum struct __BaseTeleportationInteractable_TeleportTrigger_Unwrapped : int32_t {
__E_OnSelectExited = static_cast<int32_t>(0x0),
__E_OnSelectEntered = static_cast<int32_t>(0x1),
__E_OnActivated = static_cast<int32_t>(0x2),
__E_OnDeactivated = static_cast<int32_t>(0x3),
__E_OnSelectExit = static_cast<int32_t>(0x0),
__E_OnSelectEnter = static_cast<int32_t>(0x1),
__E_OnActivate = static_cast<int32_t>(0x2),
__E_OnDeactivate = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BaseTeleportationInteractable_TeleportTrigger_Unwrapped () const noexcept {
return static_cast<__BaseTeleportationInteractable_TeleportTrigger_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr BaseTeleportationInteractable_TeleportTrigger() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr BaseTeleportationInteractable_TeleportTrigger(int32_t  value__) noexcept;

/// @brief Field OnActivate value: I32(2)
static ::GlobalNamespace::BaseTeleportationInteractable_TeleportTrigger const OnActivate;

/// @brief Field OnActivated value: I32(2)
static ::GlobalNamespace::BaseTeleportationInteractable_TeleportTrigger const OnActivated;

/// @brief Field OnDeactivate value: I32(3)
static ::GlobalNamespace::BaseTeleportationInteractable_TeleportTrigger const OnDeactivate;

/// @brief Field OnDeactivated value: I32(3)
static ::GlobalNamespace::BaseTeleportationInteractable_TeleportTrigger const OnDeactivated;

/// @brief Field OnSelectEnter value: I32(1)
static ::GlobalNamespace::BaseTeleportationInteractable_TeleportTrigger const OnSelectEnter;

/// @brief Field OnSelectEntered value: I32(1)
static ::GlobalNamespace::BaseTeleportationInteractable_TeleportTrigger const OnSelectEntered;

/// @brief Field OnSelectExit value: I32(0)
static ::GlobalNamespace::BaseTeleportationInteractable_TeleportTrigger const OnSelectExit;

/// @brief Field OnSelectExited value: I32(0)
static ::GlobalNamespace::BaseTeleportationInteractable_TeleportTrigger const OnSelectExited;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11354};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BaseTeleportationInteractable_TeleportTrigger, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BaseTeleportationInteractable_TeleportTrigger) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
