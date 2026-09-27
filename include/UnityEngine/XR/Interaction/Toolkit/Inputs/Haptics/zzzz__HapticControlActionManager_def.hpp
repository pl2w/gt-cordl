#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Inputs/Haptics/HapticControlActionManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(HapticControlActionManager)
namespace UnityEngine::InputSystem {
class InputAction;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::OpenXR {
class OpenXRHapticImpulseChannel;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics {
class HapticImpulseCommandChannelGroup;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics {
class HapticImpulseSingleChannelGroup;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics {
class IXRHapticImpulseChannelGroup;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics {
class HapticControlActionManager;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticControlActionManager*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticControlActionManager*, "UnityEngine.XR.Interaction.Toolkit.Inputs.Haptics", "HapticControlActionManager");
// Dependencies System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Inputs.Haptics.HapticControlActionManager
class CORDL_TYPE HapticControlActionManager : public ::System::Object {
public:
// Declarations
/// @brief Field m_DeviceChannelGroup, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_DeviceChannelGroup, put=__cordl_internal_set_m_DeviceChannelGroup)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseCommandChannelGroup*  m_DeviceChannelGroup;

/// @brief Field m_OpenXRChannel, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_OpenXRChannel, put=__cordl_internal_set_m_OpenXRChannel)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::OpenXR::OpenXRHapticImpulseChannel*  m_OpenXRChannel;

/// @brief Field m_OpenXRChannelGroup, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_OpenXRChannelGroup, put=__cordl_internal_set_m_OpenXRChannelGroup)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseSingleChannelGroup*  m_OpenXRChannelGroup;

/// @brief Method GetChannelGroup, addr 0xb4caf0c, size 0x138, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseChannelGroup* GetChannelGroup(::UnityEngine::InputSystem::InputAction*  action) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticControlActionManager* New_ctor() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseCommandChannelGroup* const& __cordl_internal_get_m_DeviceChannelGroup() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseCommandChannelGroup*& __cordl_internal_get_m_DeviceChannelGroup() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::OpenXR::OpenXRHapticImpulseChannel* const& __cordl_internal_get_m_OpenXRChannel() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::OpenXR::OpenXRHapticImpulseChannel*& __cordl_internal_get_m_OpenXRChannel() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseSingleChannelGroup* const& __cordl_internal_get_m_OpenXRChannelGroup() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseSingleChannelGroup*& __cordl_internal_get_m_OpenXRChannelGroup() ;

constexpr void __cordl_internal_set_m_DeviceChannelGroup(::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseCommandChannelGroup*  value) ;

constexpr void __cordl_internal_set_m_OpenXRChannel(::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::OpenXR::OpenXRHapticImpulseChannel*  value) ;

constexpr void __cordl_internal_set_m_OpenXRChannelGroup(::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseSingleChannelGroup*  value) ;

/// @brief Method .ctor, addr 0xb4cad54, size 0xf8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HapticControlActionManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HapticControlActionManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HapticControlActionManager(HapticControlActionManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HapticControlActionManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HapticControlActionManager(HapticControlActionManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11668};

/// @brief Field m_DeviceChannelGroup, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseCommandChannelGroup*  ___m_DeviceChannelGroup;

/// @brief Field m_OpenXRChannel, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::OpenXR::OpenXRHapticImpulseChannel*  ___m_OpenXRChannel;

/// @brief Field m_OpenXRChannelGroup, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseSingleChannelGroup*  ___m_OpenXRChannelGroup;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticControlActionManager, ___m_DeviceChannelGroup) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticControlActionManager, ___m_OpenXRChannel) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticControlActionManager, ___m_OpenXRChannelGroup) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticControlActionManager) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics
