#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Inputs/Haptics/OpenXR/OpenXRHapticImpulseChannel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(OpenXRHapticImpulseChannel)
namespace UnityEngine::InputSystem {
class InputAction;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics {
class IXRHapticImpulseChannel;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::OpenXR {
class OpenXRHapticImpulseChannel;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::OpenXR::OpenXRHapticImpulseChannel*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::OpenXR::OpenXRHapticImpulseChannel*, "UnityEngine.XR.Interaction.Toolkit.Inputs.Haptics.OpenXR", "OpenXRHapticImpulseChannel");
// Dependencies System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::OpenXR {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Inputs.Haptics.OpenXR.OpenXRHapticImpulseChannel
class CORDL_TYPE OpenXRHapticImpulseChannel : public ::System::Object {
public:
// Declarations
/// @brief Field <device>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__device_k__BackingField, put=__cordl_internal_set__device_k__BackingField)) ::UnityEngine::InputSystem::InputDevice*  _device_k__BackingField;

/// @brief Field <hapticAction>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__hapticAction_k__BackingField, put=__cordl_internal_set__hapticAction_k__BackingField)) ::UnityEngine::InputSystem::InputAction*  _hapticAction_k__BackingField;

 __declspec(property(get=get_device, put=set_device)) ::UnityEngine::InputSystem::InputDevice*  device;

 __declspec(property(get=get_hapticAction, put=set_hapticAction)) ::UnityEngine::InputSystem::InputAction*  hapticAction;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseChannel"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseChannel*() noexcept;

static inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::OpenXR::OpenXRHapticImpulseChannel* New_ctor() ;

/// @brief Method SendHapticImpulse, addr 0xb4ccca8, size 0xc0, virtual true, abstract: false, final true
inline bool SendHapticImpulse(float_t  amplitude, float_t  duration, float_t  frequency) ;

constexpr ::UnityEngine::InputSystem::InputDevice* const& __cordl_internal_get__device_k__BackingField() const;

constexpr ::UnityEngine::InputSystem::InputDevice*& __cordl_internal_get__device_k__BackingField() ;

constexpr ::UnityEngine::InputSystem::InputAction* const& __cordl_internal_get__hapticAction_k__BackingField() const;

constexpr ::UnityEngine::InputSystem::InputAction*& __cordl_internal_get__hapticAction_k__BackingField() ;

constexpr void __cordl_internal_set__device_k__BackingField(::UnityEngine::InputSystem::InputDevice*  value) ;

constexpr void __cordl_internal_set__hapticAction_k__BackingField(::UnityEngine::InputSystem::InputAction*  value) ;

/// @brief Method .ctor, addr 0xb4caed4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_device, addr 0xb4ccc98, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputDevice* get_device() ;

/// [CompilerGenerated]
/// @brief Method get_hapticAction, addr 0xb4ccc88, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputAction* get_hapticAction() ;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseChannel"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseChannel* i___UnityEngine__XR__Interaction__Toolkit__Inputs__Haptics__IXRHapticImpulseChannel() noexcept;

/// [CompilerGenerated]
/// @brief Method set_device, addr 0xb4ccca0, size 0x8, virtual false, abstract: false, final false
inline void set_device(::UnityEngine::InputSystem::InputDevice*  value) ;

/// [CompilerGenerated]
/// @brief Method set_hapticAction, addr 0xb4ccc90, size 0x8, virtual false, abstract: false, final false
inline void set_hapticAction(::UnityEngine::InputSystem::InputAction*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OpenXRHapticImpulseChannel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OpenXRHapticImpulseChannel", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OpenXRHapticImpulseChannel(OpenXRHapticImpulseChannel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OpenXRHapticImpulseChannel", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OpenXRHapticImpulseChannel(OpenXRHapticImpulseChannel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11683};

/// [CompilerGenerated]
/// @brief Field <hapticAction>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::InputSystem::InputAction*  ____hapticAction_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <device>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::InputSystem::InputDevice*  ____device_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::OpenXR::OpenXRHapticImpulseChannel, ____hapticAction_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::OpenXR::OpenXRHapticImpulseChannel, ____device_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::OpenXR::OpenXRHapticImpulseChannel) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::OpenXR
