#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Inputs/Haptics/HapticsUtility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/XR/zzzz__InputDevice_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HapticsUtility)
namespace GlobalNamespace {
struct HapticsUtility_Controller;
}
namespace UnityEngine::InputSystem {
class InputAction;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics {
class HapticControlActionManager;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics {
class HapticImpulseCommandChannelGroup;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics {
class XRInputDeviceHapticImpulseChannelGroup;
}
namespace UnityEngine::XR {
struct InputDeviceCharacteristics;
}
namespace UnityEngine::XR {
struct InputDevice;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics {
class HapticsUtility;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticsUtility*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticsUtility*, "UnityEngine.XR.Interaction.Toolkit.Inputs.Haptics", "HapticsUtility");
// Dependencies System.Object, UnityEngine.XR.InputDevice
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Inputs.Haptics.HapticsUtility
class CORDL_TYPE HapticsUtility : public ::System::Object {
public:
// Declarations
using Controller = ::GlobalNamespace::HapticsUtility_Controller;

/// @brief Field s_HapticControlManager, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_HapticControlManager, put=setStaticF_s_HapticControlManager)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticControlActionManager*  s_HapticControlManager;

/// @brief Field s_LeftChannelGroup, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_LeftChannelGroup, put=setStaticF_s_LeftChannelGroup)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseCommandChannelGroup*  s_LeftChannelGroup;

/// @brief Field s_LeftHapticAction, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_LeftHapticAction, put=setStaticF_s_LeftHapticAction)) ::UnityEngine::InputSystem::InputAction*  s_LeftHapticAction;

/// @brief Field s_LegacyLeftChannelGroup, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_LegacyLeftChannelGroup, put=setStaticF_s_LegacyLeftChannelGroup)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputDeviceHapticImpulseChannelGroup*  s_LegacyLeftChannelGroup;

/// @brief Field s_LegacyLeftDevice, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_s_LegacyLeftDevice, put=setStaticF_s_LegacyLeftDevice)) ::UnityEngine::XR::InputDevice  s_LegacyLeftDevice;

/// @brief Field s_LegacyRightChannelGroup, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_LegacyRightChannelGroup, put=setStaticF_s_LegacyRightChannelGroup)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputDeviceHapticImpulseChannelGroup*  s_LegacyRightChannelGroup;

/// @brief Field s_LegacyRightDevice, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_s_LegacyRightDevice, put=setStaticF_s_LegacyRightDevice)) ::UnityEngine::XR::InputDevice  s_LegacyRightDevice;

/// @brief Field s_RightChannelGroup, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_RightChannelGroup, put=setStaticF_s_RightChannelGroup)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseCommandChannelGroup*  s_RightChannelGroup;

/// @brief Field s_RightHapticAction, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_RightHapticAction, put=setStaticF_s_RightHapticAction)) ::UnityEngine::InputSystem::InputAction*  s_RightHapticAction;

/// @brief Method GetLeftHapticAction, addr 0xb4cbfc0, size 0xf0, virtual false, abstract: false, final false
static inline ::UnityEngine::InputSystem::InputAction* GetLeftHapticAction() ;

/// @brief Method GetRightHapticAction, addr 0xb4cc540, size 0xf0, virtual false, abstract: false, final false
static inline ::UnityEngine::InputSystem::InputAction* GetRightHapticAction() ;

/// @brief Method SendHapticImpulse, addr 0xb4cbdd4, size 0x1ec, virtual false, abstract: false, final false
static inline bool SendHapticImpulse(float_t  amplitude, float_t  duration, ::GlobalNamespace::HapticsUtility_Controller  controller, float_t  frequency, int32_t  channel) ;

/// @brief Method SendHapticImpulse, addr 0xb4cc27c, size 0x14c, virtual false, abstract: false, final false
static inline bool SendHapticImpulse(::by_ref<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseCommandChannelGroup*>  channelGroup, ::UnityEngine::InputSystem::InputDevice*  device, int32_t  channel, float_t  amplitude, float_t  duration, float_t  frequency) ;

/// @brief Method SendHapticImpulseLegacy, addr 0xb4cc3c8, size 0x178, virtual false, abstract: false, final false
static inline bool SendHapticImpulseLegacy(::by_ref<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputDeviceHapticImpulseChannelGroup*>  channelGroup, ::by_ref<::UnityEngine::XR::InputDevice>  device, ::UnityEngine::XR::InputDeviceCharacteristics  characteristics, int32_t  channel, float_t  amplitude, float_t  duration, float_t  frequency) ;

/// @brief Method SendHapticImpulseOpenXR, addr 0xb4cc0b0, size 0x1cc, virtual false, abstract: false, final false
static inline bool SendHapticImpulseOpenXR(::UnityEngine::InputSystem::InputAction*  hapticAction, float_t  amplitude, float_t  duration, float_t  frequency) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticControlActionManager* getStaticF_s_HapticControlManager() ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseCommandChannelGroup* getStaticF_s_LeftChannelGroup() ;

static inline ::UnityEngine::InputSystem::InputAction* getStaticF_s_LeftHapticAction() ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputDeviceHapticImpulseChannelGroup* getStaticF_s_LegacyLeftChannelGroup() ;

static inline ::UnityEngine::XR::InputDevice getStaticF_s_LegacyLeftDevice() ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputDeviceHapticImpulseChannelGroup* getStaticF_s_LegacyRightChannelGroup() ;

static inline ::UnityEngine::XR::InputDevice getStaticF_s_LegacyRightDevice() ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseCommandChannelGroup* getStaticF_s_RightChannelGroup() ;

static inline ::UnityEngine::InputSystem::InputAction* getStaticF_s_RightHapticAction() ;

static inline void setStaticF_s_HapticControlManager(::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticControlActionManager*  value) ;

static inline void setStaticF_s_LeftChannelGroup(::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseCommandChannelGroup*  value) ;

static inline void setStaticF_s_LeftHapticAction(::UnityEngine::InputSystem::InputAction*  value) ;

static inline void setStaticF_s_LegacyLeftChannelGroup(::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputDeviceHapticImpulseChannelGroup*  value) ;

static inline void setStaticF_s_LegacyLeftDevice(::UnityEngine::XR::InputDevice  value) ;

static inline void setStaticF_s_LegacyRightChannelGroup(::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputDeviceHapticImpulseChannelGroup*  value) ;

static inline void setStaticF_s_LegacyRightDevice(::UnityEngine::XR::InputDevice  value) ;

static inline void setStaticF_s_RightChannelGroup(::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseCommandChannelGroup*  value) ;

static inline void setStaticF_s_RightHapticAction(::UnityEngine::InputSystem::InputAction*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HapticsUtility() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HapticsUtility", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HapticsUtility(HapticsUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HapticsUtility", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HapticsUtility(HapticsUtility const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11674};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticsUtility) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics
