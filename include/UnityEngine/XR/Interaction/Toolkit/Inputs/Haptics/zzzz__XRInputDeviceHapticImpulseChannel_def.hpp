#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Inputs/Haptics/XRInputDeviceHapticImpulseChannel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/XR/zzzz__InputDevice_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(XRInputDeviceHapticImpulseChannel)
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics {
class IXRHapticImpulseChannel;
}
namespace UnityEngine::XR {
struct InputDevice;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics {
class XRInputDeviceHapticImpulseChannel;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputDeviceHapticImpulseChannel*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputDeviceHapticImpulseChannel*, "UnityEngine.XR.Interaction.Toolkit.Inputs.Haptics", "XRInputDeviceHapticImpulseChannel");
// Dependencies System.Object, UnityEngine.XR.InputDevice
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Inputs.Haptics.XRInputDeviceHapticImpulseChannel
class CORDL_TYPE XRInputDeviceHapticImpulseChannel : public ::System::Object {
public:
// Declarations
/// @brief Field <device>k__BackingField, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get__device_k__BackingField, put=__cordl_internal_set__device_k__BackingField)) ::UnityEngine::XR::InputDevice  _device_k__BackingField;

/// @brief Field <motorChannel>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__motorChannel_k__BackingField, put=__cordl_internal_set__motorChannel_k__BackingField)) int32_t  _motorChannel_k__BackingField;

 __declspec(property(get=get_device, put=set_device)) ::UnityEngine::XR::InputDevice  device;

 __declspec(property(get=get_motorChannel, put=set_motorChannel)) int32_t  motorChannel;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseChannel"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseChannel*() noexcept;

static inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputDeviceHapticImpulseChannel* New_ctor() ;

/// @brief Method SendHapticImpulse, addr 0xb4cca28, size 0x34, virtual true, abstract: false, final true
inline bool SendHapticImpulse(float_t  amplitude, float_t  duration, float_t  frequency) ;

constexpr ::UnityEngine::XR::InputDevice const& __cordl_internal_get__device_k__BackingField() const;

constexpr ::UnityEngine::XR::InputDevice& __cordl_internal_get__device_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__motorChannel_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__motorChannel_k__BackingField() ;

constexpr void __cordl_internal_set__device_k__BackingField(::UnityEngine::XR::InputDevice  value) ;

constexpr void __cordl_internal_set__motorChannel_k__BackingField(int32_t  value) ;

/// @brief Method .ctor, addr 0xb4cca5c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_device, addr 0xb4cca14, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::XR::InputDevice get_device() ;

/// [CompilerGenerated]
/// @brief Method get_motorChannel, addr 0xb4cca04, size 0x8, virtual false, abstract: false, final false
inline int32_t get_motorChannel() ;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseChannel"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseChannel* i___UnityEngine__XR__Interaction__Toolkit__Inputs__Haptics__IXRHapticImpulseChannel() noexcept;

/// [CompilerGenerated]
/// @brief Method set_device, addr 0xb4cca20, size 0x8, virtual false, abstract: false, final false
inline void set_device(::UnityEngine::XR::InputDevice  value) ;

/// [CompilerGenerated]
/// @brief Method set_motorChannel, addr 0xb4cca0c, size 0x8, virtual false, abstract: false, final false
inline void set_motorChannel(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRInputDeviceHapticImpulseChannel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRInputDeviceHapticImpulseChannel", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRInputDeviceHapticImpulseChannel(XRInputDeviceHapticImpulseChannel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRInputDeviceHapticImpulseChannel", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRInputDeviceHapticImpulseChannel(XRInputDeviceHapticImpulseChannel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11678};

/// [CompilerGenerated]
/// @brief Field <motorChannel>k__BackingField, offset: 0x10, size: 0x4, def value: None
 int32_t  ____motorChannel_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <device>k__BackingField, offset: 0x18, size: 0x10, def value: None
 ::UnityEngine::XR::InputDevice  ____device_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputDeviceHapticImpulseChannel, ____motorChannel_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputDeviceHapticImpulseChannel, ____device_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputDeviceHapticImpulseChannel) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics
