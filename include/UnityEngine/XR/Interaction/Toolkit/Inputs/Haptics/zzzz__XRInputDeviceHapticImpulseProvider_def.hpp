#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Inputs/Haptics/XRInputDeviceHapticImpulseProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/zzzz__InputDeviceCharacteristics_def.hpp"
#include "UnityEngine/XR/zzzz__InputDevice_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(XRInputDeviceHapticImpulseProvider)
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics {
class IXRHapticImpulseChannelGroup;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics {
class IXRHapticImpulseProvider;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics {
class XRInputDeviceHapticImpulseChannelGroup;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics {
class XRInputDeviceHapticImpulseProvider;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputDeviceHapticImpulseProvider*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputDeviceHapticImpulseProvider*, "UnityEngine.XR.Interaction.Toolkit.Inputs.Haptics", "XRInputDeviceHapticImpulseProvider");
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Inputs.Haptics.XRInputDeviceHapticImpulseProvider.html")]
// [CreateAssetMenu(fileName = "XRInputDeviceHapticImpulseProvider", menuName = "XR/Input Device Haptic Impulse Provider")]
// Dependencies UnityEngine.ScriptableObject, UnityEngine.XR.InputDevice, UnityEngine.XR.InputDeviceCharacteristics
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Inputs.Haptics.XRInputDeviceHapticImpulseProvider
class CORDL_TYPE XRInputDeviceHapticImpulseProvider : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field m_ChannelGroup, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ChannelGroup, put=__cordl_internal_set_m_ChannelGroup)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputDeviceHapticImpulseChannelGroup*  m_ChannelGroup;

/// @brief Field m_Characteristics, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Characteristics, put=__cordl_internal_set_m_Characteristics)) ::UnityEngine::XR::InputDeviceCharacteristics  m_Characteristics;

/// @brief Field m_InputDevice, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_InputDevice, put=__cordl_internal_set_m_InputDevice)) ::UnityEngine::XR::InputDevice  m_InputDevice;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseProvider"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseProvider*() noexcept;

/// @brief Method GetChannelGroup, addr 0xb4ccaac, size 0x8c, virtual true, abstract: false, final true
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseChannelGroup* GetChannelGroup() ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputDeviceHapticImpulseProvider* New_ctor() ;

/// @brief Method RefreshInputDeviceIfNeeded, addr 0xb4ccb38, size 0x34, virtual false, abstract: false, final false
inline void RefreshInputDeviceIfNeeded() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputDeviceHapticImpulseChannelGroup* const& __cordl_internal_get_m_ChannelGroup() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputDeviceHapticImpulseChannelGroup*& __cordl_internal_get_m_ChannelGroup() ;

constexpr ::UnityEngine::XR::InputDeviceCharacteristics const& __cordl_internal_get_m_Characteristics() const;

constexpr ::UnityEngine::XR::InputDeviceCharacteristics& __cordl_internal_get_m_Characteristics() ;

constexpr ::UnityEngine::XR::InputDevice const& __cordl_internal_get_m_InputDevice() const;

constexpr ::UnityEngine::XR::InputDevice& __cordl_internal_get_m_InputDevice() ;

constexpr void __cordl_internal_set_m_ChannelGroup(::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputDeviceHapticImpulseChannelGroup*  value) ;

constexpr void __cordl_internal_set_m_Characteristics(::UnityEngine::XR::InputDeviceCharacteristics  value) ;

constexpr void __cordl_internal_set_m_InputDevice(::UnityEngine::XR::InputDevice  value) ;

/// @brief Method .ctor, addr 0xb4ccb6c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseProvider"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseProvider* i___UnityEngine__XR__Interaction__Toolkit__Inputs__Haptics__IXRHapticImpulseProvider() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRInputDeviceHapticImpulseProvider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRInputDeviceHapticImpulseProvider", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRInputDeviceHapticImpulseProvider(XRInputDeviceHapticImpulseProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRInputDeviceHapticImpulseProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRInputDeviceHapticImpulseProvider(XRInputDeviceHapticImpulseProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11680};

/// [SerializeField]
/// @brief Field m_Characteristics, offset: 0x18, size: 0x4, def value: None
 ::UnityEngine::XR::InputDeviceCharacteristics  ___m_Characteristics;

/// @brief Field m_ChannelGroup, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputDeviceHapticImpulseChannelGroup*  ___m_ChannelGroup;

/// @brief Field m_InputDevice, offset: 0x28, size: 0x10, def value: None
 ::UnityEngine::XR::InputDevice  ___m_InputDevice;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputDeviceHapticImpulseProvider, ___m_Characteristics) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputDeviceHapticImpulseProvider, ___m_ChannelGroup) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputDeviceHapticImpulseProvider, ___m_InputDevice) == 0x28, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputDeviceHapticImpulseProvider) == 0x38, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics
