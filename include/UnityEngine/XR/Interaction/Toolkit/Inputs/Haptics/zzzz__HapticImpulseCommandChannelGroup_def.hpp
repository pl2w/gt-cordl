#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Inputs/Haptics/HapticImpulseCommandChannelGroup.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HapticImpulseCommandChannelGroup)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics {
class IXRHapticImpulseChannelGroup;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics {
class IXRHapticImpulseChannel;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics {
class HapticImpulseCommandChannelGroup;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseCommandChannelGroup*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseCommandChannelGroup*, "UnityEngine.XR.Interaction.Toolkit.Inputs.Haptics", "HapticImpulseCommandChannelGroup");
// Dependencies System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Inputs.Haptics.HapticImpulseCommandChannelGroup
class CORDL_TYPE HapticImpulseCommandChannelGroup : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_channelCount)) int32_t  channelCount;

/// @brief Field m_Channels, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Channels, put=__cordl_internal_set_m_Channels)) ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseChannel*>*  m_Channels;

/// @brief Field m_Device, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Device, put=__cordl_internal_set_m_Device)) ::UnityEngine::InputSystem::InputDevice*  m_Device;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseChannelGroup"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseChannelGroup*() noexcept;

/// @brief Method GetChannel, addr 0xb4cb424, size 0xc8, virtual true, abstract: false, final true
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseChannel* GetChannel(int32_t  channel) ;

/// @brief Method Initialize, addr 0xb4cb044, size 0x288, virtual false, abstract: false, final false
inline void Initialize(::UnityEngine::InputSystem::InputDevice*  device) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseCommandChannelGroup* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseChannel*>* const& __cordl_internal_get_m_Channels() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseChannel*>*& __cordl_internal_get_m_Channels() ;

constexpr ::UnityEngine::InputSystem::InputDevice* const& __cordl_internal_get_m_Device() const;

constexpr ::UnityEngine::InputSystem::InputDevice*& __cordl_internal_get_m_Device() ;

constexpr void __cordl_internal_set_m_Channels(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseChannel*>*  value) ;

constexpr void __cordl_internal_set_m_Device(::UnityEngine::InputSystem::InputDevice*  value) ;

/// @brief Method .ctor, addr 0xb4cae4c, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_channelCount, addr 0xb4cb3dc, size 0x48, virtual true, abstract: false, final true
inline int32_t get_channelCount() ;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseChannelGroup"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseChannelGroup* i___UnityEngine__XR__Interaction__Toolkit__Inputs__Haptics__IXRHapticImpulseChannelGroup() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HapticImpulseCommandChannelGroup() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HapticImpulseCommandChannelGroup", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HapticImpulseCommandChannelGroup(HapticImpulseCommandChannelGroup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HapticImpulseCommandChannelGroup", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HapticImpulseCommandChannelGroup(HapticImpulseCommandChannelGroup const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11670};

/// @brief Field m_Channels, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseChannel*>*  ___m_Channels;

/// @brief Field m_Device, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::InputSystem::InputDevice*  ___m_Device;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseCommandChannelGroup, ___m_Channels) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseCommandChannelGroup, ___m_Device) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseCommandChannelGroup) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics
